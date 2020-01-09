using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Data.SqlClient;
using System.Data;

namespace University_Management_System
{
    class ClassUniversityManagement
    {
    }

    public class connection_query
    {
        string connectionstring = @"Data Source=HAFIZ-PC\SQLEXPRESS;Initial Catalog=UniversityData;Integrated Security=True";
        SqlConnection con;
        public connection_query()
        {
            con = new SqlConnection(connectionstring);
        }
        public int ExecuteCommand(string execute)
        {
            con.Open();
            SqlCommand cmd = new SqlCommand(execute, con);
            return cmd.ExecuteNonQuery();

        }
        public DataTable RetrieveData(string sql)
        {
            SqlCommand cmd = new SqlCommand();
            cmd.CommandText = sql;
            cmd.Connection = con;
            SqlDataAdapter sda = new SqlDataAdapter(cmd);
            DataTable dt = new DataTable();
            sda.Fill(dt);
            return dt;

        }
    }
}
