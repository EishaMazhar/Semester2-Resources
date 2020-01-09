using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.SqlClient;
namespace University_Management_System
{
    public partial class Faculty : Form
    {
        public Faculty()
        {
            InitializeComponent();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
           




        }

        private void button1_Click(object sender, EventArgs e)
        {
             SqlConnection con = new SqlConnection(@"Data Source=.;Initial Catalog=UniverData;Integrated Security=True");

            con.Open();




            SqlCommand cmd = new SqlCommand("select em.EmpName,dp.DeptName,Desigination,em.Salary,s.SemesterName,b.Batch,c.CourseName from Employees em " +


          "inner join DeptFaculty dp on em.DeptId=dp.FacultyDeptId " +


"inner join Batch1 b on b.BatchId=b.DeptFaculty " +


"inner join  semester s on s.BatchId=s.semesterid " +

"inner join Course c on c.Semesterid=c.CourseId " +


"where em.EmployeeId='" + textBox1.Text + "'", con);



            SqlDataAdapter da = new SqlDataAdapter(cmd);
            DataTable dt = new DataTable();
            da.Fill(dt);
            if (dt.Rows.Count > 0)
            {
                dataGridView1.DataSource = dt;
            }
        

        }
    }
}
