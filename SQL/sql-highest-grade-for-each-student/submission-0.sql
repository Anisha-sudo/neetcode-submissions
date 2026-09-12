-- Write your query below
select distinct on (student_id)
  student_id,
  exam_id,
  score
  From exam_results
  order by student_id,score DESC,exam_id;
  