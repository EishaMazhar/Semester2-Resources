using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.SqlClient;

using Uni;
namespace Uni
{
    public partial class PannelInfo : Form
    {
        connection_query dim = new connection_query();
        string sql = "";
        SqlCommand cmd = new SqlCommand();
        public PannelInfo()
        {
            InitializeComponent();
        }




        public void GetFacultyData()
        {

            DataTable dt = dim.RetrieveData("Select FacultyId,FacultyName From Faculty ");
            comboFaculty.DataSource = dt;
            comboFaculty.DisplayMember = "FacultyId";
            comboFaculty.ValueMember = "FacultyName";
            comboFaculty.SelectedItem = null;
            comboFaculty.Text = "---Select Faculty Name---";


        }







        public void DataInsertDepartments()
        {

            SqlConnection con = new SqlConnection();
            con.Open();
            sql = "Select  * from Department";
            SqlCommand cmdDepart = new SqlCommand(sql, con);
            DataTable dt = new DataTable();
            dt.Load(cmdDepart.ExecuteReader());
            DataRow[] dr = dt.Select("Cnic = '" + txtDepartment.Text + "'");
            if (dr.Length > 0)
            {
                MessageBox.Show("This CNIC Is Already Exists");
                return;
            }



            sql = "";
            SqlCommand cmd = new SqlCommand(sql, con);

            if (cmd.ExecuteNonQuery() > 0)
            {
                MessageBox.Show("Your Department Data Has Been Inserted!");
            }

            else
            {

                MessageBox.Show("Error Found In Department Form!");



            }
        }




        public void GetFacultyDataForBatches()
        {

            DataTable dt = dim.RetrieveData("Select FacultyId,FacultyName From Faculty ");
            combofacBatc.DataSource = dt;
            combofacBatc.DisplayMember = "FacultyId";
            combofacBatc.ValueMember = "FacultyName";
            combofacBatc.SelectedItem = null;
            combofacBatc.Text = "---Select Faculty Name---";


        }
        public void GetDataDepartmentBatch()
        {

            DataTable dt = dim.RetrieveData("Select DepartnmentId,DepartmentName From Department where FacultyId='" + combofacBatc.SelectedValue + "' ");
            comboDepartsBatch.DataSource = dt;
            comboDepartsBatch.DisplayMember = "FacultyId";
            comboDepartsBatch.ValueMember = "FacultyName";
            comboDepartsBatch.SelectedItem = null;
            comboDepartsBatch.Text = "---Select Department Name---";


        }



        public void InsertDataBatches()
        {

            SqlConnection con = new SqlConnection();
            con.Open();
            sql = "Select  * from Batches";
            SqlCommand cmdbatch = new SqlCommand(sql, con);
            DataTable dt = new DataTable();
            dt.Load(cmdbatch.ExecuteReader());
            DataRow[] dr = dt.Select("BatchName = '" + txtDepartment.Text + "'");
            if (dr.Length > 0)
            {
                MessageBox.Show("This Batch Name Is Already Exists");
                return;
            }




            sql = "";
            SqlCommand cmd = new SqlCommand(sql, con);

            if (cmd.ExecuteNonQuery() > 0)
            {
                MessageBox.Show("Your Batches Data Has Been Inserted!");
            }

            else
            {

                MessageBox.Show("Error Found In Department Form!");



            }


        }


        public void GetFacultyDataForSemister()
        {

            DataTable dt = dim.RetrieveData("Select FacultyId,FacultyName From Faculty ");
            comboFacultySem.DataSource = dt;
            comboFacultySem.DisplayMember = "FacultyId";
            comboFacultySem.ValueMember = "FacultyName";
            comboFacultySem.SelectedItem = null;
            comboFacultySem.Text = "---Select Faculty Name---";


        }
        public void GetDataDepartmentSemister()
        {

            DataTable dt = dim.RetrieveData("Select DepartmentId,DepartmentName From Department  where FacultyId='" + comboFacultySem.SelectedValue + "'");
            comboDepartSem.DataSource = dt;
            comboDepartSem.DisplayMember = "DepartmentId";
            comboDepartSem.ValueMember = "DepartmentName";
            comboDepartSem.SelectedItem = null;
            comboDepartSem.Text = "---Select Department Name---";


        }


        public void GetDataBtchesForSemister()
        {


            DataTable dt = dim.RetrieveData("Select SemisterId,SemisterName From Semister where DepartmentId='" + comboDepartSem.SelectedValue + "'  ");
            comboBacthesSem.DataSource = dt;
            comboBacthesSem.DisplayMember = "FacultyId";
            comboBacthesSem.ValueMember = "FacultyName";
            comboBacthesSem.SelectedItem = null;
            comboBacthesSem.Text = "---Select  Batches Name---";


        }






        public void InsertDataSemister()
        {

            SqlConnection con = new SqlConnection();
            con.Open();
            sql = "Select  * from Semister";
            SqlCommand cmdbatch = new SqlCommand(sql, con);
            DataTable dt = new DataTable();
            dt.Load(cmdbatch.ExecuteReader());
            DataRow[] dr = dt.Select("SemisterName = '" + txtDepartment.Text + "'");
            if (dr.Length > 0)
            {
                MessageBox.Show("This Semister Name Is Already Exists");
                return;
            }




            sql = "";
            SqlCommand cmd = new SqlCommand(sql, con);

            if (cmd.ExecuteNonQuery() > 0)
            {
                MessageBox.Show("Your Department Data Has Been Inserted!");
            }

            else
            {

                MessageBox.Show("Error Found In Department Form!");
            }
        }


        public void ComboFacultySubject()
        {


            DataTable dt = dim.RetrieveData("Select FacultyId,FacultyName From Faculty ");
            comboFacSub.DataSource = dt;
            comboFacSub.DisplayMember = "FacultyId";
            comboFacSub.ValueMember = "FacultyName";
            comboFacSub.SelectedItem = null;
            comboFacSub.Text = "---Select Faculty Name---";


        }




        public void GetDataDepartmentSubject()
        {

            DataTable dt = dim.RetrieveData("Select DepartmentId,DepartmentName From Faculty where FacultyId='" + comboFacSub.SelectedValue + "' ");
            combodepartSub.DataSource = dt;
            combodepartSub.DisplayMember = "FacultyId";
            combodepartSub.ValueMember = "FacultyName";
            combodepartSub.SelectedItem = null;
            combodepartSub.Text = "---Select Department Name---";


        }



        public void GetDataBtchesForSubject()
        {


            DataTable dt = dim.RetrieveData("Select BatchId,BatchName From Subject where DepartmentId='" + combodepartSub.SelectedValue + "' ");
            comboBatSub.DataSource = dt;
            comboBatSub.DisplayMember = "BatchId";
            comboBatSub.ValueMember = "BatchName";
            comboBatSub.SelectedItem = null;
            comboBatSub.Text = "---Select  Batches Name---";


        }




        public void GetDataSemistertSubject()
        {

            DataTable dt = dim.RetrieveData("Select SemisterId,SemisterName From Semister where BatchId='" + comboBatSub.SelectedValue + "' ");
            comboSemisterSub.DataSource = dt;
            comboSemisterSub.DisplayMember = "SemisterId";
            comboSemisterSub.ValueMember = "SemisterName";
            comboSemisterSub.SelectedItem = null;
            comboSemisterSub.Text = "---Select Semister Name---";


        }



        public void InsertDataSubject()
        {
            SqlConnection con = new SqlConnection();
            con.Open();
            sql = "Select  * from Subjects";
            SqlCommand cmdbatch = new SqlCommand(sql, con);
            DataTable dt = new DataTable();
            dt.Load(cmdbatch.ExecuteReader());
            DataRow[] dr = dt.Select("SubjectName = '" + txtDepartment.Text + "'");
            if (dr.Length > 0)
            {
                MessageBox.Show("This SubjectName Is Already Exists");
                return;
            }




            sql = "Insert Into Subjects() values";

            sql += "()";
            SqlCommand cmd = new SqlCommand(sql, con);

            if (cmd.ExecuteNonQuery() > 0)
            {
                MessageBox.Show("Your Department Data Has Been Inserted!");
            }

            else
            {

                MessageBox.Show("Error Found In Department Form!");
            }
        }






        private void PannelInfo_Load(object sender, EventArgs e)
        {
            GetFacultyData();

            GetFacultyDataForBatches();

            GetFacultyDataForSemister();
            ComboFacultySubject();
        }
        private void comboBacthesSem_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
