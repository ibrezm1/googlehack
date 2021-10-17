#bash
fullfile=$1
if [ "$#" -eq 2 ]
then
inputfile=$2
fi

echo "Getting input : ${fullfile}"

filename=$(basename -- "$fullfile")
extension="${filename##*.}"
filename="${filename%.*}"

echo Beginning compilation..
g++ ./${filename}.cpp -o ${filename}.out 

if [[ $? == 0 ]]; then
    echo Compilation Completed
    echo Execution started
    start_time="$(date -u +%s.%N)"
    if [ -n "$inputfile" ]; then
    ./${filename}.out < ${inputfile}
    else
    ./${filename}.out
    fi
    end_time="$(date -u +%s.%N)"
    elapsed="$(bc <<<"$end_time-$start_time")"
    echo "";echo "Execution completed in $elapsed seconds"
else
    echo "";echo Compilation Failed
fi