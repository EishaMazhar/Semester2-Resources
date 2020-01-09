using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Data.SqlClient;
using System.Data;

namespace Uni
{
    class ClassUniversityManagementSysment
    {
    }


     public class connection_query
    {
        string connectionstring = @"Data Source=MX0104;Initial Catalog=practisedata;User ID=sa;Password=manager";
        SqlConnection con;
        public connection_query() {
            con = new SqlConnection(connectionstring);
 }
        public int ExecuteCommand(string execute) {
            con.Open();
            SqlCommand cmd = new SqlCommand(execute,con);
            return cmd.ExecuteNonQuery();
        
        }
        public DataTable RetrieveData(string sql) {
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

