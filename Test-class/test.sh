start_time="$(date -u +%s.%N)"
sleep 5
end_time="$(date -u +%s.%N)"

elapsed="$(bc <<<"$end_time-$start_time")"
echo "Total of $elapsed seconds elapsed for process"
