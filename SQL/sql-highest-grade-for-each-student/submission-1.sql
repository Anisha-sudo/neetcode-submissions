-- Write your query below
select student_id,exam_id,score from
(
    select *,
            ROW_NUMBER() over(
             partition by student_id order by score desc, exam_id asc
            ) as rn from exam_results

)t
where rn=1;
