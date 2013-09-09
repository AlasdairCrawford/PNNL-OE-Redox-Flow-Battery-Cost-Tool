#pragma once
#define NOMINMAX
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include "exprtk.hpp"

using namespace std;
namespace BatGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public: static List<DataGridView^>^ ProcessList = gcnew List<DataGridView^>();
	public: static List<DataGridView^>^ VariableList = gcnew List<DataGridView^>();
	public: static List<TextBox^>^ UnitsList = gcnew List<TextBox^>();
	private: System::Windows::Forms::OpenFileDialog^  openProcess;
	public: 
	private: System::Windows::Forms::SaveFileDialog^  saveProcess;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::TextBox^  globalInputs11;

	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  globalInputs10;

	private: System::Windows::Forms::TextBox^  globalInputs9;

	private: System::Windows::Forms::TextBox^  globalInputs8;

	private: System::Windows::Forms::TextBox^  globalInputs7;

	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::TextBox^  globalInputs6;
	private: System::Windows::Forms::TextBox^  globalInputs5;
	private: System::Windows::Forms::TextBox^  globalInputs4;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  globalInputs3;
	private: System::Windows::Forms::TextBox^  globalInputs2;
	private: System::Windows::Forms::TextBox^  globalInputs1;
	private: System::Windows::Forms::TextBox^  globalInputs0;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::TextBox^  globalInputs15;

	private: System::Windows::Forms::TextBox^  globalInputs14;

	private: System::Windows::Forms::TextBox^  globalInputs13;

	private: System::Windows::Forms::TextBox^  globalInputs12;

	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::TextBox^  globalInputs20;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::TextBox^  globalInputs19;
	private: System::Windows::Forms::TextBox^  globalInputs18;
	private: System::Windows::Forms::TextBox^  globalInputs17;
	private: System::Windows::Forms::TextBox^  globalInputs16;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Panel^  panel13;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::TextBox^  globalInputs37;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::TextBox^  globalInputs36;
	private: System::Windows::Forms::TextBox^  globalInputs35;
	private: System::Windows::Forms::TextBox^  globalInputs34;
	private: System::Windows::Forms::TextBox^  globalInputs33;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::TextBox^  globalInputs32;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::TextBox^  globalInputs31;
	private: System::Windows::Forms::TextBox^  globalInputs30;
	private: System::Windows::Forms::TextBox^  globalInputs29;
	private: System::Windows::Forms::TextBox^  globalInputs28;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::TextBox^  globalInputs27;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::TextBox^  globalInputs26;
	private: System::Windows::Forms::TextBox^  globalInputs25;
	private: System::Windows::Forms::TextBox^  globalInputs24;
	private: System::Windows::Forms::TextBox^  globalInputs23;
	private: System::Windows::Forms::Label^  label56;






private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::TextBox^  stackBox;
private: System::Windows::Forms::TextBox^  cellBox;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Panel^  panel17;
private: System::Windows::Forms::TextBox^  PrcsDescBox;

private: System::Windows::Forms::Label^  label83;

private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::TextBox^  Proc6;

private: System::Windows::Forms::TextBox^  Proc5;


private: System::Windows::Forms::Panel^  panel15;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::TextBox^  Proc10;

private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::TextBox^  Proc9;

private: System::Windows::Forms::TextBox^  Proc8;

private: System::Windows::Forms::TextBox^  Proc7;

private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::Panel^  panel14;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::TextBox^  Proc3;

private: System::Windows::Forms::TextBox^  Proc2;

private: System::Windows::Forms::TextBox^  Proc1;


private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::DataGridView^  consumableGrid;



private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::TextBox^  Proc4;

private: System::Windows::Forms::TabPage^  tabPage6;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::ListBox^  processLibrary;
private: System::Windows::Forms::Panel^  panel18;
private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Panel^  panel19;
private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::TextBox^  manuSweepHigh;

private: System::Windows::Forms::TextBox^  manuSweepLow;

private: System::Windows::Forms::TextBox^  manuSweepPoints;

private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::TextBox^  aspectRatioBox;
private: System::Windows::Forms::Label^  label89;
private: System::Windows::Forms::TextBox^  channelSepBox;
private: System::Windows::Forms::CheckBox^  interdigBox;
private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Digits;
private: System::Windows::Forms::DataGridView^  iterationData;

private: System::Windows::Forms::DataGridViewTextBoxColumn^  Iteration;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column31;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column28;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column29;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column30;
private: System::Windows::Forms::Label^  label90;
private: System::Windows::Forms::TextBox^  flowCapBox;
private: System::Windows::Forms::TabPage^  tabPage7;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  manuChart;
private: System::Windows::Forms::DataGridView^  manuOutputTable;




private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Panel^  panel12;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::ListBox^  moduleLibraryBox;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Units;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cost;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column33;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column34;
private: System::Windows::Forms::TextBox^  LiVoltageBox;
private: System::Windows::Forms::Panel^  panel16;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column32;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column27;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column35;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  manuChart2;
private: System::Windows::Forms::Button^  ProcessRename;
private: System::Windows::Forms::Button^  ProcDel;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::TextBox^  electronBox;

private: System::Windows::Forms::Label^  label51;




	public: static int c = 0;
	public:
		Form1(void)
		{
			InitializeComponent();
			InitializeCostParameters();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  calculate;


	private: System::Windows::Forms::ProgressBar^  progressBar;
	private: System::Windows::Forms::NumericUpDown^  jLowBox;
	private: System::Windows::Forms::NumericUpDown^  jHighBox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  DODBox;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::RadioButton^  VVGen2;
	private: System::Windows::Forms::RadioButton^  VVGen1;
	private: System::Windows::Forms::RadioButton^  FeV;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::TextBox^  powerBox;
	private: System::Windows::Forms::TextBox^  epBox;
	private: System::Windows::Forms::TextBox^  energyBox;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;

	private: System::Data::DataSet^  dataSet1;
	private: System::Windows::Forms::DataGridView^  dataOutput;













	private: System::Windows::Forms::RadioButton^  constcurrent;
	private: System::Windows::Forms::RadioButton^  constpower;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  costChart;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
	private: System::Windows::Forms::DataGridView^  bestTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column21;



	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::RadioButton^  SplineButton;
	private: System::Windows::Forms::RadioButton^  ECModelButton;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel6;


private: System::Windows::Forms::TextBox^  flowBox;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::TabPage^  tabPage5;




private: System::Data::DataTable^  dataTable1;

private: System::Data::DataSet^  dataSet2;
private: System::Data::DataTable^  dataTable2;
private: System::Data::DataColumn^  dataColumn1;
private: System::Data::DataColumn^  dataColumn2;
private: System::Data::DataColumn^  dataColumn3;
private: System::Windows::Forms::BindingSource^  bindingSource1;
private: System::Windows::Forms::DataGridView^  CostParameters;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column22;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column26;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::CheckBox^  ManuModelBox;
private: System::Windows::Forms::TabPage^  tabPage4;










































































































private: System::Windows::Forms::RadioButton^  LiOrgButton;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::TextBox^  KBox;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TextBox^  ThicknessBox;
private: System::Windows::Forms::Label^  textasf;
private: System::Windows::Forms::TextBox^  CondBox;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TextBox^  PBox;
private: System::Windows::Forms::TextBox^  ThRedBox;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  FOHBox;

private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::TextBox^  MOBox;

private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TextBox^  FOWBox;
private: System::Windows::Forms::Button^  ProcessSave;

private: System::Windows::Forms::Button^  ProcessLoad;

private: System::Windows::Forms::TextBox^  ProcessName;



private: System::Windows::Forms::Button^  ProcessDelete;

private: System::Windows::Forms::Button^  ProcessAdd;
private: System::Windows::Forms::TabControl^  ProcessTabs;















































































	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^  title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^  title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^  title6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->jLowBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->jHighBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DODBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->LiOrgButton = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->VVGen2 = (gcnew System::Windows::Forms::RadioButton());
			this->VVGen1 = (gcnew System::Windows::Forms::RadioButton());
			this->FeV = (gcnew System::Windows::Forms::RadioButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->powerBox = (gcnew System::Windows::Forms::TextBox());
			this->epBox = (gcnew System::Windows::Forms::TextBox());
			this->energyBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->stackBox = (gcnew System::Windows::Forms::TextBox());
			this->cellBox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->electronBox = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->LiVoltageBox = (gcnew System::Windows::Forms::TextBox());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->flowCapBox = (gcnew System::Windows::Forms::TextBox());
			this->iterationData = (gcnew System::Windows::Forms::DataGridView());
			this->Iteration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->channelSepBox = (gcnew System::Windows::Forms::TextBox());
			this->interdigBox = (gcnew System::Windows::Forms::CheckBox());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->aspectRatioBox = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->FOWBox = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->FOHBox = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->MOBox = (gcnew System::Windows::Forms::TextBox());
			this->ThRedBox = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->PBox = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->KBox = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->ThicknessBox = (gcnew System::Windows::Forms::TextBox());
			this->textasf = (gcnew System::Windows::Forms::Label());
			this->CondBox = (gcnew System::Windows::Forms::TextBox());
			this->ManuModelBox = (gcnew System::Windows::Forms::CheckBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->flowBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->SplineButton = (gcnew System::Windows::Forms::RadioButton());
			this->ECModelButton = (gcnew System::Windows::Forms::RadioButton());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->constcurrent = (gcnew System::Windows::Forms::RadioButton());
			this->constpower = (gcnew System::Windows::Forms::RadioButton());
			this->bestTable = (gcnew System::Windows::Forms::DataGridView());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataOutput = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Digits = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->costChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->CostParameters = (gcnew System::Windows::Forms::DataGridView());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->manuSweepHigh = (gcnew System::Windows::Forms::TextBox());
			this->manuSweepLow = (gcnew System::Windows::Forms::TextBox());
			this->manuSweepPoints = (gcnew System::Windows::Forms::TextBox());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->globalInputs3 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs2 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs1 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs0 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->globalInputs20 = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->globalInputs19 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs18 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs17 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs16 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->globalInputs11 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->globalInputs10 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs9 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs8 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs7 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->globalInputs15 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs14 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs13 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs12 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->globalInputs6 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs5 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs4 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->globalInputs37 = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->globalInputs36 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs35 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs34 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs33 = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->globalInputs32 = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->globalInputs31 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs30 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs29 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs28 = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->globalInputs27 = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->globalInputs26 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs25 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs24 = (gcnew System::Windows::Forms::TextBox());
			this->globalInputs23 = (gcnew System::Windows::Forms::TextBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->ProcDel = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->consumableGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Column32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->moduleLibraryBox = (gcnew System::Windows::Forms::ListBox());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->processLibrary = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->PrcsDescBox = (gcnew System::Windows::Forms::TextBox());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->Proc10 = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->Proc9 = (gcnew System::Windows::Forms::TextBox());
			this->Proc8 = (gcnew System::Windows::Forms::TextBox());
			this->Proc7 = (gcnew System::Windows::Forms::TextBox());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->Proc6 = (gcnew System::Windows::Forms::TextBox());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->Proc4 = (gcnew System::Windows::Forms::TextBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->Proc5 = (gcnew System::Windows::Forms::TextBox());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->Proc3 = (gcnew System::Windows::Forms::TextBox());
			this->Proc2 = (gcnew System::Windows::Forms::TextBox());
			this->Proc1 = (gcnew System::Windows::Forms::TextBox());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->ProcessSave = (gcnew System::Windows::Forms::Button());
			this->ProcessLoad = (gcnew System::Windows::Forms::Button());
			this->ProcessName = (gcnew System::Windows::Forms::TextBox());
			this->ProcessRename = (gcnew System::Windows::Forms::Button());
			this->ProcessDelete = (gcnew System::Windows::Forms::Button());
			this->ProcessAdd = (gcnew System::Windows::Forms::Button());
			this->ProcessTabs = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->manuChart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->manuChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->manuOutputTable = (gcnew System::Windows::Forms::DataGridView());
			this->Units = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataSet2 = (gcnew System::Data::DataSet());
			this->dataTable2 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openProcess = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveProcess = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jLowBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jHighBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->DODBox))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->iterationData))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bestTable))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataOutput))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->costChart))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->CostParameters))->BeginInit();
			this->tabPage6->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel13->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->panel16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->consumableGrid))->BeginInit();
			this->panel12->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel14->SuspendLayout();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->manuChart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->manuChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->manuOutputTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataTable2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataTable1))->BeginInit();
			this->SuspendLayout();
			// 
			// calculate
			// 
			this->calculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->calculate->Location = System::Drawing::Point(753, 236);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(125, 30);
			this->calculate->TabIndex = 0;
			this->calculate->Text = L"Calculate!";
			this->calculate->UseVisualStyleBackColor = true;
			this->calculate->Click += gcnew System::EventHandler(this, &Form1::calculate_Click);
			// 
			// progressBar
			// 
			this->progressBar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->progressBar->Location = System::Drawing::Point(753, 201);
			this->progressBar->Name = L"progressBar";
			this->progressBar->Size = System::Drawing::Size(125, 28);
			this->progressBar->TabIndex = 3;
			this->progressBar->Click += gcnew System::EventHandler(this, &Form1::progressBar_Click);
			// 
			// jLowBox
			// 
			this->jLowBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->jLowBox->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->jLowBox->Location = System::Drawing::Point(164, 54);
			this->jLowBox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {300, 0, 0, 0});
			this->jLowBox->Name = L"jLowBox";
			this->jLowBox->Size = System::Drawing::Size(45, 23);
			this->jLowBox->TabIndex = 4;
			this->jLowBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {100, 0, 0, 0});
			// 
			// jHighBox
			// 
			this->jHighBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->jHighBox->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->jHighBox->Location = System::Drawing::Point(164, 28);
			this->jHighBox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {300, 0, 0, 0});
			this->jHighBox->Name = L"jHighBox";
			this->jHighBox->Size = System::Drawing::Size(45, 23);
			this->jHighBox->TabIndex = 5;
			this->jHighBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {300, 0, 0, 0});
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Max current at low SOC";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Min current at low SOC";
			// 
			// DODBox
			// 
			this->DODBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DODBox->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->DODBox->Location = System::Drawing::Point(164, 2);
			this->DODBox->Name = L"DODBox";
			this->DODBox->Size = System::Drawing::Size(45, 23);
			this->DODBox->TabIndex = 8;
			this->DODBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {70, 0, 0, 0});
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 4);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Depth of Discharge";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->LiOrgButton);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->VVGen2);
			this->panel1->Controls->Add(this->VVGen1);
			this->panel1->Controls->Add(this->FeV);
			this->panel1->Location = System::Drawing::Point(3, 6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(108, 104);
			this->panel1->TabIndex = 10;
			// 
			// LiOrgButton
			// 
			this->LiOrgButton->AutoSize = true;
			this->LiOrgButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LiOrgButton->Location = System::Drawing::Point(3, 82);
			this->LiOrgButton->Name = L"LiOrgButton";
			this->LiOrgButton->Size = System::Drawing::Size(99, 21);
			this->LiOrgButton->TabIndex = 12;
			this->LiOrgButton->Text = L"Li+ Organic";
			this->LiOrgButton->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Chemistry";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// VVGen2
			// 
			this->VVGen2->AutoSize = true;
			this->VVGen2->Checked = true;
			this->VVGen2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->VVGen2->Location = System::Drawing::Point(3, 62);
			this->VVGen2->Name = L"VVGen2";
			this->VVGen2->Size = System::Drawing::Size(90, 21);
			this->VVGen2->TabIndex = 2;
			this->VVGen2->TabStop = true;
			this->VVGen2->Text = L"V-V Gen II";
			this->VVGen2->UseVisualStyleBackColor = true;
			// 
			// VVGen1
			// 
			this->VVGen1->AutoSize = true;
			this->VVGen1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->VVGen1->Location = System::Drawing::Point(3, 39);
			this->VVGen1->Name = L"VVGen1";
			this->VVGen1->Size = System::Drawing::Size(87, 21);
			this->VVGen1->TabIndex = 1;
			this->VVGen1->Text = L"V-V Gen I";
			this->VVGen1->UseVisualStyleBackColor = true;
			// 
			// FeV
			// 
			this->FeV->AutoSize = true;
			this->FeV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FeV->Location = System::Drawing::Point(3, 16);
			this->FeV->Name = L"FeV";
			this->FeV->Size = System::Drawing::Size(56, 21);
			this->FeV->TabIndex = 0;
			this->FeV->Text = L"Fe-V";
			this->FeV->UseVisualStyleBackColor = true;
			this->FeV->CheckedChanged += gcnew System::EventHandler(this, &Form1::FeV_CheckedChanged);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->DODBox);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->jHighBox);
			this->panel2->Controls->Add(this->jLowBox);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(3, 148);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(310, 81);
			this->panel2->TabIndex = 11;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(217, 56);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(58, 17);
			this->label14->TabIndex = 26;
			this->label14->Text = L"mA/cm2";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(217, 30);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(58, 17);
			this->label13->TabIndex = 25;
			this->label13->Text = L"mA/cm2";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(217, 4);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 17);
			this->label12->TabIndex = 24;
			this->label12->Text = L"%";
			// 
			// powerBox
			// 
			this->powerBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->powerBox->Location = System::Drawing::Point(83, 9);
			this->powerBox->Name = L"powerBox";
			this->powerBox->Size = System::Drawing::Size(65, 23);
			this->powerBox->TabIndex = 12;
			this->powerBox->Text = L"1000";
			// 
			// epBox
			// 
			this->epBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->epBox->Location = System::Drawing::Point(83, 32);
			this->epBox->Name = L"epBox";
			this->epBox->Size = System::Drawing::Size(65, 23);
			this->epBox->TabIndex = 13;
			this->epBox->Text = L"4";
			this->epBox->TextChanged += gcnew System::EventHandler(this, &Form1::epBox_TextChanged);
			// 
			// energyBox
			// 
			this->energyBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->energyBox->Location = System::Drawing::Point(83, 57);
			this->energyBox->Name = L"energyBox";
			this->energyBox->Size = System::Drawing::Size(65, 23);
			this->energyBox->TabIndex = 14;
			this->energyBox->Text = L"4000";
			this->energyBox->TextChanged += gcnew System::EventHandler(this, &Form1::energyBox_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Power";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(47, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"E/P";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(30, 58);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Energy";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label68);
			this->panel3->Controls->Add(this->label67);
			this->panel3->Controls->Add(this->stackBox);
			this->panel3->Controls->Add(this->cellBox);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->energyBox);
			this->panel3->Controls->Add(this->epBox);
			this->panel3->Controls->Add(this->powerBox);
			this->panel3->Location = System::Drawing::Point(117, 6);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(196, 136);
			this->panel3->TabIndex = 17;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(27, 106);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(50, 17);
			this->label68->TabIndex = 23;
			this->label68->Text = L"Stacks";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(2, 84);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(77, 17);
			this->label67->TabIndex = 22;
			this->label67->Text = L"Cells/Stack";
			// 
			// stackBox
			// 
			this->stackBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->stackBox->Location = System::Drawing::Point(83, 106);
			this->stackBox->Name = L"stackBox";
			this->stackBox->Size = System::Drawing::Size(65, 23);
			this->stackBox->TabIndex = 21;
			this->stackBox->Text = L"36";
			// 
			// cellBox
			// 
			this->cellBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cellBox->Location = System::Drawing::Point(83, 82);
			this->cellBox->Name = L"cellBox";
			this->cellBox->Size = System::Drawing::Size(65, 23);
			this->cellBox->TabIndex = 20;
			this->cellBox->Text = L"60";
			this->cellBox->TextChanged += gcnew System::EventHandler(this, &Form1::cellBox_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(154, 38);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 17);
			this->label11->TabIndex = 19;
			this->label11->Text = L"hr";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(154, 60);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 17);
			this->label10->TabIndex = 18;
			this->label10->Text = L"kWh";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(154, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 17);
			this->label8->TabIndex = 17;
			this->label8->Text = L"kW";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->RightToLeftLayout = true;
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(894, 772);
			this->tabControl1->TabIndex = 18;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label81);
			this->tabPage1->Controls->Add(this->electronBox);
			this->tabPage1->Controls->Add(this->label51);
			this->tabPage1->Controls->Add(this->LiVoltageBox);
			this->tabPage1->Controls->Add(this->label90);
			this->tabPage1->Controls->Add(this->flowCapBox);
			this->tabPage1->Controls->Add(this->iterationData);
			this->tabPage1->Controls->Add(this->label89);
			this->tabPage1->Controls->Add(this->channelSepBox);
			this->tabPage1->Controls->Add(this->interdigBox);
			this->tabPage1->Controls->Add(this->label84);
			this->tabPage1->Controls->Add(this->aspectRatioBox);
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Controls->Add(this->FOWBox);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->FOHBox);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->MOBox);
			this->tabPage1->Controls->Add(this->ThRedBox);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->PBox);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->KBox);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->ThicknessBox);
			this->tabPage1->Controls->Add(this->textasf);
			this->tabPage1->Controls->Add(this->CondBox);
			this->tabPage1->Controls->Add(this->ManuModelBox);
			this->tabPage1->Controls->Add(this->panel6);
			this->tabPage1->Controls->Add(this->panel5);
			this->tabPage1->Controls->Add(this->panel4);
			this->tabPage1->Controls->Add(this->bestTable);
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Controls->Add(this->progressBar);
			this->tabPage1->Controls->Add(this->calculate);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(886, 746);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Main";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label81->Location = System::Drawing::Point(118, 460);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(67, 17);
			this->label81->TabIndex = 51;
			this->label81->Text = L"Electrons";
			// 
			// electronBox
			// 
			this->electronBox->Location = System::Drawing::Point(191, 460);
			this->electronBox->Name = L"electronBox";
			this->electronBox->Size = System::Drawing::Size(50, 20);
			this->electronBox->TabIndex = 50;
			this->electronBox->Text = L"1";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(-2, 435);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(189, 17);
			this->label51->TabIndex = 49;
			this->label51->Text = L"Li+ Organic OCV (50% SOC)";
			// 
			// LiVoltageBox
			// 
			this->LiVoltageBox->Location = System::Drawing::Point(193, 434);
			this->LiVoltageBox->Name = L"LiVoltageBox";
			this->LiVoltageBox->Size = System::Drawing::Size(50, 20);
			this->LiVoltageBox->TabIndex = 48;
			this->LiVoltageBox->Text = L"3.8";
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label90->Location = System::Drawing::Point(4, 409);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(183, 17);
			this->label90->TabIndex = 47;
			this->label90->Text = L"Flow Rate Cap (ml/min/m^2)";
			// 
			// flowCapBox
			// 
			this->flowCapBox->Location = System::Drawing::Point(193, 408);
			this->flowCapBox->Name = L"flowCapBox";
			this->flowCapBox->Size = System::Drawing::Size(50, 20);
			this->flowCapBox->TabIndex = 46;
			this->flowCapBox->Text = L"999999999999";
			// 
			// iterationData
			// 
			this->iterationData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->iterationData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Iteration, 
				this->Column31, this->Column28, this->Column29, this->Column30});
			this->iterationData->Location = System::Drawing::Point(329, 540);
			this->iterationData->Name = L"iterationData";
			this->iterationData->Size = System::Drawing::Size(552, 200);
			this->iterationData->TabIndex = 45;
			// 
			// Iteration
			// 
			this->Iteration->HeaderText = L"Iteration";
			this->Iteration->Name = L"Iteration";
			// 
			// Column31
			// 
			this->Column31->HeaderText = L"Cost";
			this->Column31->Name = L"Column31";
			// 
			// Column28
			// 
			this->Column28->HeaderText = L"Current";
			this->Column28->Name = L"Column28";
			// 
			// Column29
			// 
			this->Column29->HeaderText = L"Flow Rate";
			this->Column29->Name = L"Column29";
			// 
			// Column30
			// 
			this->Column30->HeaderText = L"Area";
			this->Column30->Name = L"Column30";
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label89->Location = System::Drawing::Point(6, 371);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(89, 17);
			this->label89->TabIndex = 44;
			this->label89->Text = L"Channel Sep";
			// 
			// channelSepBox
			// 
			this->channelSepBox->Location = System::Drawing::Point(100, 370);
			this->channelSepBox->Name = L"channelSepBox";
			this->channelSepBox->Size = System::Drawing::Size(50, 20);
			this->channelSepBox->TabIndex = 43;
			this->channelSepBox->Text = L"0.1";
			// 
			// interdigBox
			// 
			this->interdigBox->AutoSize = true;
			this->interdigBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->interdigBox->Location = System::Drawing::Point(8, 347);
			this->interdigBox->Name = L"interdigBox";
			this->interdigBox->Size = System::Drawing::Size(109, 21);
			this->interdigBox->TabIndex = 42;
			this->interdigBox->Text = L"Interdigitated";
			this->interdigBox->UseVisualStyleBackColor = true;
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label84->Location = System::Drawing::Point(6, 322);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(88, 17);
			this->label84->TabIndex = 41;
			this->label84->Text = L"Aspect Ratio";
			// 
			// aspectRatioBox
			// 
			this->aspectRatioBox->Location = System::Drawing::Point(100, 321);
			this->aspectRatioBox->Name = L"aspectRatioBox";
			this->aspectRatioBox->Size = System::Drawing::Size(50, 20);
			this->aspectRatioBox->TabIndex = 40;
			this->aspectRatioBox->Text = L"1";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(350, 438);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(90, 13);
			this->label21->TabIndex = 39;
			this->label21->Text = L"Frame Overlap W";
			// 
			// FOWBox
			// 
			this->FOWBox->Location = System::Drawing::Point(442, 435);
			this->FOWBox->Name = L"FOWBox";
			this->FOWBox->Size = System::Drawing::Size(65, 20);
			this->FOWBox->TabIndex = 38;
			this->FOWBox->Text = L"0.05";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(350, 413);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(87, 13);
			this->label19->TabIndex = 37;
			this->label19->Text = L"Frame Overlap H";
			// 
			// FOHBox
			// 
			this->FOHBox->Location = System::Drawing::Point(442, 410);
			this->FOHBox->Name = L"FOHBox";
			this->FOHBox->Size = System::Drawing::Size(65, 20);
			this->FOHBox->TabIndex = 36;
			this->FOHBox->Text = L"0.14";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(339, 387);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(97, 13);
			this->label20->TabIndex = 35;
			this->label20->Text = L"Membrane Overlap";
			// 
			// MOBox
			// 
			this->MOBox->Location = System::Drawing::Point(442, 384);
			this->MOBox->Name = L"MOBox";
			this->MOBox->Size = System::Drawing::Size(65, 20);
			this->MOBox->TabIndex = 34;
			this->MOBox->Text = L"0.038";
			// 
			// ThRedBox
			// 
			this->ThRedBox->Location = System::Drawing::Point(663, 361);
			this->ThRedBox->Name = L"ThRedBox";
			this->ThRedBox->Size = System::Drawing::Size(31, 20);
			this->ThRedBox->TabIndex = 33;
			this->ThRedBox->Text = L"1";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(512, 416);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(67, 13);
			this->label18->TabIndex = 32;
			this->label18->Text = L"Scale PDrop";
			// 
			// PBox
			// 
			this->PBox->Location = System::Drawing::Point(592, 413);
			this->PBox->Name = L"PBox";
			this->PBox->Size = System::Drawing::Size(65, 20);
			this->PBox->TabIndex = 31;
			this->PBox->Text = L"1";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(512, 390);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(74, 13);
			this->label17->TabIndex = 30;
			this->label17->Text = L"Scale Kinetics";
			// 
			// KBox
			// 
			this->KBox->Location = System::Drawing::Point(592, 387);
			this->KBox->Name = L"KBox";
			this->KBox->Size = System::Drawing::Size(65, 20);
			this->KBox->TabIndex = 29;
			this->KBox->Text = L"1";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(500, 364);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(86, 13);
			this->label16->TabIndex = 28;
			this->label16->Text = L"Scale Thickness";
			// 
			// ThicknessBox
			// 
			this->ThicknessBox->Location = System::Drawing::Point(592, 361);
			this->ThicknessBox->Name = L"ThicknessBox";
			this->ThicknessBox->Size = System::Drawing::Size(65, 20);
			this->ThicknessBox->TabIndex = 27;
			this->ThicknessBox->Text = L"1";
			// 
			// textasf
			// 
			this->textasf->AutoSize = true;
			this->textasf->Location = System::Drawing::Point(514, 338);
			this->textasf->Name = L"textasf";
			this->textasf->Size = System::Drawing::Size(72, 13);
			this->textasf->TabIndex = 26;
			this->textasf->Text = L"Scale E Cond";
			// 
			// CondBox
			// 
			this->CondBox->Location = System::Drawing::Point(592, 335);
			this->CondBox->Name = L"CondBox";
			this->CondBox->Size = System::Drawing::Size(65, 20);
			this->CondBox->TabIndex = 25;
			this->CondBox->Text = L"1";
			// 
			// ManuModelBox
			// 
			this->ManuModelBox->AutoSize = true;
			this->ManuModelBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ManuModelBox->Location = System::Drawing::Point(8, 295);
			this->ManuModelBox->Name = L"ManuModelBox";
			this->ManuModelBox->Size = System::Drawing::Size(159, 21);
			this->ManuModelBox->TabIndex = 24;
			this->ManuModelBox->Text = L"Manufacturing Model";
			this->ManuModelBox->UseVisualStyleBackColor = true;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label15);
			this->panel6->Controls->Add(this->flowBox);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Location = System::Drawing::Point(213, 236);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(278, 49);
			this->panel6->TabIndex = 23;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(192, 10);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 17);
			this->label15->TabIndex = 27;
			this->label15->Text = L"ml/min/A";
			// 
			// flowBox
			// 
			this->flowBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->flowBox->Location = System::Drawing::Point(155, 7);
			this->flowBox->Name = L"flowBox";
			this->flowBox->Size = System::Drawing::Size(31, 23);
			this->flowBox->TabIndex = 26;
			this->flowBox->Text = L"5";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(7, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(203, 17);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Flow rate used for interpolation";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->SplineButton);
			this->panel5->Controls->Add(this->ECModelButton);
			this->panel5->Location = System::Drawing::Point(329, 92);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(107, 50);
			this->panel5->TabIndex = 22;
			// 
			// SplineButton
			// 
			this->SplineButton->AutoSize = true;
			this->SplineButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SplineButton->Location = System::Drawing::Point(4, 23);
			this->SplineButton->Name = L"SplineButton";
			this->SplineButton->Size = System::Drawing::Size(104, 21);
			this->SplineButton->TabIndex = 19;
			this->SplineButton->Text = L"Interpolation";
			this->SplineButton->UseVisualStyleBackColor = true;
			this->SplineButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::SplineButton_CheckedChanged);
			// 
			// ECModelButton
			// 
			this->ECModelButton->AutoSize = true;
			this->ECModelButton->Checked = true;
			this->ECModelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ECModelButton->Location = System::Drawing::Point(4, 0);
			this->ECModelButton->Name = L"ECModelButton";
			this->ECModelButton->Size = System::Drawing::Size(86, 21);
			this->ECModelButton->TabIndex = 18;
			this->ECModelButton->TabStop = true;
			this->ECModelButton->Text = L"EC Model";
			this->ECModelButton->UseVisualStyleBackColor = true;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->constcurrent);
			this->panel4->Controls->Add(this->constpower);
			this->panel4->Location = System::Drawing::Point(3, 235);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(139, 50);
			this->panel4->TabIndex = 21;
			// 
			// constcurrent
			// 
			this->constcurrent->AutoSize = true;
			this->constcurrent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->constcurrent->Location = System::Drawing::Point(4, 23);
			this->constcurrent->Name = L"constcurrent";
			this->constcurrent->Size = System::Drawing::Size(133, 21);
			this->constcurrent->TabIndex = 19;
			this->constcurrent->Text = L"Constant Current";
			this->constcurrent->UseVisualStyleBackColor = true;
			// 
			// constpower
			// 
			this->constpower->AutoSize = true;
			this->constpower->Checked = true;
			this->constpower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->constpower->Location = System::Drawing::Point(4, 0);
			this->constpower->Name = L"constpower";
			this->constpower->Size = System::Drawing::Size(125, 21);
			this->constpower->TabIndex = 18;
			this->constpower->TabStop = true;
			this->constpower->Text = L"Constant Power";
			this->constpower->UseVisualStyleBackColor = true;
			// 
			// bestTable
			// 
			this->bestTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->bestTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Column19, this->Column17, 
				this->Column18, this->Column20});
			this->bestTable->Location = System::Drawing::Point(466, 6);
			this->bestTable->Name = L"bestTable";
			this->bestTable->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bestTable->Size = System::Drawing::Size(414, 193);
			this->bestTable->TabIndex = 20;
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"Quantity";
			this->Column19->Name = L"Column19";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Present";
			this->Column17->Name = L"Column17";
			this->Column17->Width = 60;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Near Term";
			this->Column18->Name = L"Column18";
			this->Column18->Width = 60;
			// 
			// Column20
			// 
			this->Column20->HeaderText = L"Optimistic";
			this->Column20->Name = L"Column20";
			this->Column20->Width = 60;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataOutput);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(886, 746);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Raw Data";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataOutput
			// 
			this->dataOutput->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataOutput->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(19) {this->Column1, this->Column2, 
				this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10, this->Column11, 
				this->Column12, this->Column13, this->dataGridViewTextBoxColumn1, this->Column15, this->Column16, this->Column14, this->Column21, 
				this->Digits});
			this->dataOutput->Location = System::Drawing::Point(6, 6);
			this->dataOutput->Name = L"dataOutput";
			this->dataOutput->Size = System::Drawing::Size(877, 343);
			this->dataOutput->TabIndex = 0;
			this->dataOutput->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataOutput_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"j Low";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Present Total $/kWh";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Near-Term Total $/kWh";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 50;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Optimistic Total $/kWh";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 50;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Average Effective Voltage";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 50;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Cell Area (m^2)";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 50;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Efficiency (1way)";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 60;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Present $/kWh";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 50;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Near-Term $/kWh";
			this->Column9->Name = L"Column9";
			this->Column9->Width = 50;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Optimistic $/kWh";
			this->Column10->Name = L"Column10";
			this->Column10->Width = 50;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Present $/kW";
			this->Column11->Name = L"Column11";
			this->Column11->Width = 50;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Near-Term $/kW";
			this->Column12->Name = L"Column12";
			this->Column12->Width = 50;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Optimistic $/kW";
			this->Column13->Name = L"Column13";
			this->Column13->Width = 50;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"EC eff";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Pump Eff";
			this->Column15->Name = L"Column15";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Shunt Eff";
			this->Column16->Name = L"Column16";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Area";
			this->Column14->Name = L"Column14";
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"Avg Flow";
			this->Column21->Name = L"Column21";
			// 
			// Digits
			// 
			this->Digits->HeaderText = L"Column28";
			this->Digits->Name = L"Digits";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->costChart);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(886, 746);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Current vs Cost";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// costChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->costChart->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->costChart->Legends->Add(legend1);
			this->costChart->Location = System::Drawing::Point(0, 0);
			this->costChart->Name = L"costChart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->IsXValueIndexed = true;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->costChart->Series->Add(series1);
			this->costChart->Size = System::Drawing::Size(883, 437);
			this->costChart->TabIndex = 0;
			this->costChart->Text = L"costChart";
			title1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			title1->Name = L"Title1";
			title1->Text = L"$/kWh";
			title2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			title2->Name = L"Title2";
			title2->Text = L"Current Density (mA/cm^2)";
			this->costChart->Titles->Add(title1);
			this->costChart->Titles->Add(title2);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->CostParameters);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(886, 746);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Cost Parameters";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// CostParameters
			// 
			this->CostParameters->AllowUserToAddRows = false;
			this->CostParameters->AllowUserToDeleteRows = false;
			this->CostParameters->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->CostParameters->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->CostParameters->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CostParameters->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Column22, 
				this->Column23, this->Column24, this->Column25, this->Column26});
			this->CostParameters->Location = System::Drawing::Point(6, 0);
			this->CostParameters->Name = L"CostParameters";
			this->CostParameters->Size = System::Drawing::Size(768, 450);
			this->CostParameters->TabIndex = 0;
			this->CostParameters->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::CostParameters_CellContentClick);
			// 
			// Column22
			// 
			this->Column22->HeaderText = L"Component";
			this->Column22->Name = L"Column22";
			this->Column22->Width = 86;
			// 
			// Column23
			// 
			this->Column23->HeaderText = L"Value (Present)";
			this->Column23->Name = L"Column23";
			this->Column23->Width = 96;
			// 
			// Column24
			// 
			this->Column24->HeaderText = L"Value (Near Term)";
			this->Column24->Name = L"Column24";
			this->Column24->Width = 108;
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"Value (Optimistic)";
			this->Column25->Name = L"Column25";
			this->Column25->Width = 104;
			// 
			// Column26
			// 
			this->Column26->HeaderText = L"Unit";
			this->Column26->Name = L"Column26";
			this->Column26->Width = 51;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->panel19);
			this->tabPage6->Controls->Add(this->button3);
			this->tabPage6->Controls->Add(this->button2);
			this->tabPage6->Controls->Add(this->panel7);
			this->tabPage6->Controls->Add(this->panel11);
			this->tabPage6->Controls->Add(this->panel9);
			this->tabPage6->Controls->Add(this->panel10);
			this->tabPage6->Controls->Add(this->panel8);
			this->tabPage6->Controls->Add(this->panel13);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(886, 746);
			this->tabPage6->TabIndex = 6;
			this->tabPage6->Text = L"Manufacturing Parameters";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// panel19
			// 
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Controls->Add(this->label85);
			this->panel19->Controls->Add(this->label86);
			this->panel19->Controls->Add(this->label87);
			this->panel19->Controls->Add(this->manuSweepHigh);
			this->panel19->Controls->Add(this->manuSweepLow);
			this->panel19->Controls->Add(this->manuSweepPoints);
			this->panel19->Controls->Add(this->label88);
			this->panel19->Location = System::Drawing::Point(6, 330);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(247, 99);
			this->panel19->TabIndex = 17;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(65, 74);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(130, 13);
			this->label85->TabIndex = 7;
			this->label85->Text = L"Upper bound denominator";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(68, 48);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(130, 13);
			this->label86->TabIndex = 6;
			this->label86->Text = L"Lower bound denominator";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Location = System::Drawing::Point(68, 23);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(143, 13);
			this->label87->TabIndex = 5;
			this->label87->Text = L"# of Output Rates Evaluated";
			// 
			// manuSweepHigh
			// 
			this->manuSweepHigh->Location = System::Drawing::Point(6, 71);
			this->manuSweepHigh->Name = L"manuSweepHigh";
			this->manuSweepHigh->Size = System::Drawing::Size(56, 20);
			this->manuSweepHigh->TabIndex = 3;
			this->manuSweepHigh->Text = L"10";
			// 
			// manuSweepLow
			// 
			this->manuSweepLow->Location = System::Drawing::Point(6, 45);
			this->manuSweepLow->Name = L"manuSweepLow";
			this->manuSweepLow->Size = System::Drawing::Size(56, 20);
			this->manuSweepLow->TabIndex = 2;
			this->manuSweepLow->Text = L"10";
			// 
			// manuSweepPoints
			// 
			this->manuSweepPoints->Location = System::Drawing::Point(6, 16);
			this->manuSweepPoints->Name = L"manuSweepPoints";
			this->manuSweepPoints->Size = System::Drawing::Size(56, 20);
			this->manuSweepPoints->TabIndex = 1;
			this->manuSweepPoints->Text = L"10";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label88->Location = System::Drawing::Point(3, 0);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(106, 13);
			this->label88->TabIndex = 0;
			this->label88->Text = L"Parameter Sweep";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(140, 269);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 55);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Load Parameters";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(6, 270);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 55);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Save Parameters";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label26);
			this->panel7->Controls->Add(this->label25);
			this->panel7->Controls->Add(this->label24);
			this->panel7->Controls->Add(this->label23);
			this->panel7->Controls->Add(this->globalInputs3);
			this->panel7->Controls->Add(this->globalInputs2);
			this->panel7->Controls->Add(this->globalInputs1);
			this->panel7->Controls->Add(this->globalInputs0);
			this->panel7->Controls->Add(this->label22);
			this->panel7->Location = System::Drawing::Point(6, 6);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(247, 126);
			this->panel7->TabIndex = 8;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(65, 90);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(78, 13);
			this->label26->TabIndex = 8;
			this->label26->Text = L"Cells per Stack";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(65, 70);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(128, 13);
			this->label25->TabIndex = 7;
			this->label25->Text = L"Stacks per battery system";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(65, 46);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(129, 13);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Battery System Size (MW)";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(65, 21);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(136, 13);
			this->label23->TabIndex = 5;
			this->label23->Text = L"Annual Production (MW/yr)";
			// 
			// globalInputs3
			// 
			this->globalInputs3->Location = System::Drawing::Point(6, 87);
			this->globalInputs3->Name = L"globalInputs3";
			this->globalInputs3->Size = System::Drawing::Size(56, 20);
			this->globalInputs3->TabIndex = 4;
			this->globalInputs3->Text = L"60";
			// 
			// globalInputs2
			// 
			this->globalInputs2->Location = System::Drawing::Point(6, 62);
			this->globalInputs2->Name = L"globalInputs2";
			this->globalInputs2->Size = System::Drawing::Size(56, 20);
			this->globalInputs2->TabIndex = 3;
			this->globalInputs2->Text = L"36";
			// 
			// globalInputs1
			// 
			this->globalInputs1->Location = System::Drawing::Point(6, 39);
			this->globalInputs1->Name = L"globalInputs1";
			this->globalInputs1->Size = System::Drawing::Size(56, 20);
			this->globalInputs1->TabIndex = 2;
			this->globalInputs1->Text = L"1";
			// 
			// globalInputs0
			// 
			this->globalInputs0->Location = System::Drawing::Point(6, 17);
			this->globalInputs0->Name = L"globalInputs0";
			this->globalInputs0->Size = System::Drawing::Size(56, 20);
			this->globalInputs0->TabIndex = 1;
			this->globalInputs0->Text = L"1000";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(3, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(113, 13);
			this->label22->TabIndex = 0;
			this->label22->Text = L"Production Volume";
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Controls->Add(this->label42);
			this->panel11->Controls->Add(this->globalInputs20);
			this->panel11->Controls->Add(this->label43);
			this->panel11->Controls->Add(this->label44);
			this->panel11->Controls->Add(this->label45);
			this->panel11->Controls->Add(this->label46);
			this->panel11->Controls->Add(this->globalInputs19);
			this->panel11->Controls->Add(this->globalInputs18);
			this->panel11->Controls->Add(this->globalInputs17);
			this->panel11->Controls->Add(this->globalInputs16);
			this->panel11->Controls->Add(this->label47);
			this->panel11->Location = System::Drawing::Point(259, 265);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(247, 164);
			this->panel11->TabIndex = 12;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(68, 121);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(103, 13);
			this->label42->TabIndex = 10;
			this->label42->Text = L"Natural gas ($/BTU)";
			// 
			// globalInputs20
			// 
			this->globalInputs20->Location = System::Drawing::Point(6, 118);
			this->globalInputs20->Name = L"globalInputs20";
			this->globalInputs20->Size = System::Drawing::Size(56, 20);
			this->globalInputs20->TabIndex = 9;
			this->globalInputs20->Text = L"0.00002";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(68, 97);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(95, 13);
			this->label43->TabIndex = 8;
			this->label43->Text = L"Electricity ($/kWh)";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(68, 74);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(101, 13);
			this->label44->TabIndex = 7;
			this->label44->Text = L"Waste water ($/gal)";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(68, 47);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(70, 13);
			this->label45->TabIndex = 6;
			this->label45->Text = L"Water ($/gal)";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(68, 24);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(81, 13);
			this->label46->TabIndex = 5;
			this->label46->Text = L"DI water ($/gal)";
			// 
			// globalInputs19
			// 
			this->globalInputs19->Location = System::Drawing::Point(6, 92);
			this->globalInputs19->Name = L"globalInputs19";
			this->globalInputs19->Size = System::Drawing::Size(56, 20);
			this->globalInputs19->TabIndex = 4;
			this->globalInputs19->Text = L"0.0644";
			// 
			// globalInputs18
			// 
			this->globalInputs18->Location = System::Drawing::Point(6, 68);
			this->globalInputs18->Name = L"globalInputs18";
			this->globalInputs18->Size = System::Drawing::Size(56, 20);
			this->globalInputs18->TabIndex = 3;
			this->globalInputs18->Text = L"0.009";
			// 
			// globalInputs17
			// 
			this->globalInputs17->Location = System::Drawing::Point(6, 44);
			this->globalInputs17->Name = L"globalInputs17";
			this->globalInputs17->Size = System::Drawing::Size(56, 20);
			this->globalInputs17->TabIndex = 2;
			this->globalInputs17->Text = L"0.002";
			// 
			// globalInputs16
			// 
			this->globalInputs16->Location = System::Drawing::Point(6, 21);
			this->globalInputs16->Name = L"globalInputs16";
			this->globalInputs16->Size = System::Drawing::Size(56, 20);
			this->globalInputs16->TabIndex = 1;
			this->globalInputs16->Text = L"0.004";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(3, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(49, 13);
			this->label47->TabIndex = 0;
			this->label47->Text = L"Utilities";
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label36);
			this->panel9->Controls->Add(this->globalInputs11);
			this->panel9->Controls->Add(this->label27);
			this->panel9->Controls->Add(this->label32);
			this->panel9->Controls->Add(this->label33);
			this->panel9->Controls->Add(this->label34);
			this->panel9->Controls->Add(this->globalInputs10);
			this->panel9->Controls->Add(this->globalInputs9);
			this->panel9->Controls->Add(this->globalInputs8);
			this->panel9->Controls->Add(this->globalInputs7);
			this->panel9->Controls->Add(this->label35);
			this->panel9->Location = System::Drawing::Point(259, 108);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(247, 153);
			this->panel9->TabIndex = 10;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(68, 123);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(166, 13);
			this->label36->TabIndex = 10;
			this->label36->Text = L"Construction/equipment cost ratio";
			// 
			// globalInputs11
			// 
			this->globalInputs11->Location = System::Drawing::Point(6, 120);
			this->globalInputs11->Name = L"globalInputs11";
			this->globalInputs11->Size = System::Drawing::Size(56, 20);
			this->globalInputs11->TabIndex = 9;
			this->globalInputs11->Text = L"2";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(68, 96);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(127, 13);
			this->label27->TabIndex = 8;
			this->label27->Text = L"Operating capacity (hr/yr)";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(68, 71);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(155, 13);
			this->label32->TabIndex = 7;
			this->label32->Text = L"Building maintenance factor (%)";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(68, 46);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(170, 13);
			this->label33->TabIndex = 6;
			this->label33->Text = L"Manufacturing space cost ($/m^2)";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(68, 23);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(162, 13);
			this->label34->TabIndex = 5;
			this->label34->Text = L"Manufacturing/Tooling area ratio";
			// 
			// globalInputs10
			// 
			this->globalInputs10->Location = System::Drawing::Point(6, 94);
			this->globalInputs10->Name = L"globalInputs10";
			this->globalInputs10->Size = System::Drawing::Size(56, 20);
			this->globalInputs10->TabIndex = 4;
			this->globalInputs10->Text = L"7440";
			// 
			// globalInputs9
			// 
			this->globalInputs9->Location = System::Drawing::Point(6, 68);
			this->globalInputs9->Name = L"globalInputs9";
			this->globalInputs9->Size = System::Drawing::Size(56, 20);
			this->globalInputs9->TabIndex = 3;
			this->globalInputs9->Text = L"4";
			// 
			// globalInputs8
			// 
			this->globalInputs8->Location = System::Drawing::Point(6, 44);
			this->globalInputs8->Name = L"globalInputs8";
			this->globalInputs8->Size = System::Drawing::Size(56, 20);
			this->globalInputs8->TabIndex = 2;
			this->globalInputs8->Text = L"1000";
			// 
			// globalInputs7
			// 
			this->globalInputs7->Location = System::Drawing::Point(6, 19);
			this->globalInputs7->Name = L"globalInputs7";
			this->globalInputs7->Size = System::Drawing::Size(56, 20);
			this->globalInputs7->TabIndex = 1;
			this->globalInputs7->Text = L"2";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(3, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(229, 13);
			this->label35->TabIndex = 0;
			this->label35->Text = L"Building Construction and Maintenance";
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->label37);
			this->panel10->Controls->Add(this->label38);
			this->panel10->Controls->Add(this->label39);
			this->panel10->Controls->Add(this->label40);
			this->panel10->Controls->Add(this->globalInputs15);
			this->panel10->Controls->Add(this->globalInputs14);
			this->panel10->Controls->Add(this->globalInputs13);
			this->panel10->Controls->Add(this->globalInputs12);
			this->panel10->Controls->Add(this->label41);
			this->panel10->Location = System::Drawing::Point(6, 138);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(247, 126);
			this->panel10->TabIndex = 11;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(65, 90);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(119, 13);
			this->label37->TabIndex = 8;
			this->label37->Text = L"Worker training ratio (%)";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(65, 67);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(111, 13);
			this->label38->TabIndex = 7;
			this->label38->Text = L"Labor loading ratio (%)";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(65, 45);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(141, 13);
			this->label39->TabIndex = 6;
			this->label39->Text = L"Hours/year/employee (hr/yr)";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(65, 23);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(160, 13);
			this->label40->TabIndex = 5;
			this->label40->Text = L"Burdened hourly labor rate ($/hr)";
			// 
			// globalInputs15
			// 
			this->globalInputs15->Location = System::Drawing::Point(3, 86);
			this->globalInputs15->Name = L"globalInputs15";
			this->globalInputs15->Size = System::Drawing::Size(56, 20);
			this->globalInputs15->TabIndex = 4;
			this->globalInputs15->Text = L"2";
			// 
			// globalInputs14
			// 
			this->globalInputs14->Location = System::Drawing::Point(3, 61);
			this->globalInputs14->Name = L"globalInputs14";
			this->globalInputs14->Size = System::Drawing::Size(56, 20);
			this->globalInputs14->TabIndex = 3;
			this->globalInputs14->Text = L"150";
			// 
			// globalInputs13
			// 
			this->globalInputs13->Location = System::Drawing::Point(3, 38);
			this->globalInputs13->Name = L"globalInputs13";
			this->globalInputs13->Size = System::Drawing::Size(56, 20);
			this->globalInputs13->TabIndex = 2;
			this->globalInputs13->Text = L"1832";
			// 
			// globalInputs12
			// 
			this->globalInputs12->Location = System::Drawing::Point(3, 16);
			this->globalInputs12->Name = L"globalInputs12";
			this->globalInputs12->Size = System::Drawing::Size(56, 20);
			this->globalInputs12->TabIndex = 1;
			this->globalInputs12->Text = L"30";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(3, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(39, 13);
			this->label41->TabIndex = 0;
			this->label41->Text = L"Labor";
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->label28);
			this->panel8->Controls->Add(this->label29);
			this->panel8->Controls->Add(this->label30);
			this->panel8->Controls->Add(this->globalInputs6);
			this->panel8->Controls->Add(this->globalInputs5);
			this->panel8->Controls->Add(this->globalInputs4);
			this->panel8->Controls->Add(this->label31);
			this->panel8->Location = System::Drawing::Point(259, 7);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(247, 95);
			this->panel8->TabIndex = 9;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(68, 69);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(62, 13);
			this->label28->TabIndex = 7;
			this->label28->Text = L"Delivery (%)";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(68, 46);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(86, 13);
			this->label29->TabIndex = 6;
			this->label29->Text = L"Maintenance (%)";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(68, 23);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(74, 13);
			this->label30->TabIndex = 5;
			this->label30->Text = L"Installation (%)";
			// 
			// globalInputs6
			// 
			this->globalInputs6->Location = System::Drawing::Point(6, 68);
			this->globalInputs6->Name = L"globalInputs6";
			this->globalInputs6->Size = System::Drawing::Size(56, 20);
			this->globalInputs6->TabIndex = 3;
			this->globalInputs6->Text = L"10";
			// 
			// globalInputs5
			// 
			this->globalInputs5->Location = System::Drawing::Point(6, 43);
			this->globalInputs5->Name = L"globalInputs5";
			this->globalInputs5->Size = System::Drawing::Size(56, 20);
			this->globalInputs5->TabIndex = 2;
			this->globalInputs5->Text = L"4";
			// 
			// globalInputs4
			// 
			this->globalInputs4->Location = System::Drawing::Point(6, 17);
			this->globalInputs4->Name = L"globalInputs4";
			this->globalInputs4->Size = System::Drawing::Size(56, 20);
			this->globalInputs4->TabIndex = 1;
			this->globalInputs4->Text = L"165";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(3, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(216, 13);
			this->label31->TabIndex = 0;
			this->label31->Text = L"Equipment (As factor of Capital Cost)";
			// 
			// panel13
			// 
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->label62);
			this->panel13->Controls->Add(this->globalInputs37);
			this->panel13->Controls->Add(this->label63);
			this->panel13->Controls->Add(this->label64);
			this->panel13->Controls->Add(this->label65);
			this->panel13->Controls->Add(this->label66);
			this->panel13->Controls->Add(this->globalInputs36);
			this->panel13->Controls->Add(this->globalInputs35);
			this->panel13->Controls->Add(this->globalInputs34);
			this->panel13->Controls->Add(this->globalInputs33);
			this->panel13->Controls->Add(this->label57);
			this->panel13->Controls->Add(this->globalInputs32);
			this->panel13->Controls->Add(this->label58);
			this->panel13->Controls->Add(this->label59);
			this->panel13->Controls->Add(this->label60);
			this->panel13->Controls->Add(this->label61);
			this->panel13->Controls->Add(this->globalInputs31);
			this->panel13->Controls->Add(this->globalInputs30);
			this->panel13->Controls->Add(this->globalInputs29);
			this->panel13->Controls->Add(this->globalInputs28);
			this->panel13->Controls->Add(this->label48);
			this->panel13->Controls->Add(this->globalInputs27);
			this->panel13->Controls->Add(this->label52);
			this->panel13->Controls->Add(this->label53);
			this->panel13->Controls->Add(this->label54);
			this->panel13->Controls->Add(this->label55);
			this->panel13->Controls->Add(this->globalInputs26);
			this->panel13->Controls->Add(this->globalInputs25);
			this->panel13->Controls->Add(this->globalInputs24);
			this->panel13->Controls->Add(this->globalInputs23);
			this->panel13->Controls->Add(this->label56);
			this->panel13->Location = System::Drawing::Point(512, 8);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(366, 421);
			this->panel13->TabIndex = 14;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(68, 382);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(95, 13);
			this->label62->TabIndex = 30;
			this->label62->Text = L"Retail sales tax (%)";
			// 
			// globalInputs37
			// 
			this->globalInputs37->Location = System::Drawing::Point(6, 380);
			this->globalInputs37->Name = L"globalInputs37";
			this->globalInputs37->Size = System::Drawing::Size(56, 20);
			this->globalInputs37->TabIndex = 29;
			this->globalInputs37->Text = L"6";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(68, 357);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(76, 13);
			this->label63->TabIndex = 28;
			this->label63->Text = L"Federal tax (%)";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(68, 332);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(60, 13);
			this->label64->TabIndex = 27;
			this->label64->Text = L"Markup (%)";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(68, 305);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(157, 13);
			this->label65->TabIndex = 26;
			this->label65->Text = L"Research and Development (%)";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(68, 276);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(113, 13);
			this->label66->TabIndex = 25;
			this->label66->Text = L"General and admin (%)";
			// 
			// globalInputs36
			// 
			this->globalInputs36->Location = System::Drawing::Point(6, 354);
			this->globalInputs36->Name = L"globalInputs36";
			this->globalInputs36->Size = System::Drawing::Size(56, 20);
			this->globalInputs36->TabIndex = 24;
			this->globalInputs36->Text = L"35";
			// 
			// globalInputs35
			// 
			this->globalInputs35->Location = System::Drawing::Point(6, 328);
			this->globalInputs35->Name = L"globalInputs35";
			this->globalInputs35->Size = System::Drawing::Size(56, 20);
			this->globalInputs35->TabIndex = 23;
			this->globalInputs35->Text = L"30";
			// 
			// globalInputs34
			// 
			this->globalInputs34->Location = System::Drawing::Point(6, 302);
			this->globalInputs34->Name = L"globalInputs34";
			this->globalInputs34->Size = System::Drawing::Size(56, 20);
			this->globalInputs34->TabIndex = 22;
			this->globalInputs34->Text = L"3";
			// 
			// globalInputs33
			// 
			this->globalInputs33->Location = System::Drawing::Point(6, 276);
			this->globalInputs33->Name = L"globalInputs33";
			this->globalInputs33->Size = System::Drawing::Size(56, 20);
			this->globalInputs33->TabIndex = 21;
			this->globalInputs33->Text = L"10";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(68, 253);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(71, 13);
			this->label57->TabIndex = 20;
			this->label57->Text = L"Insurance (%)";
			// 
			// globalInputs32
			// 
			this->globalInputs32->Location = System::Drawing::Point(6, 250);
			this->globalInputs32->Name = L"globalInputs32";
			this->globalInputs32->Size = System::Drawing::Size(56, 20);
			this->globalInputs32->TabIndex = 19;
			this->globalInputs32->Text = L"1";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(68, 227);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(80, 13);
			this->label58->TabIndex = 18;
			this->label58->Text = L"Property tax (%)";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(68, 200);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(83, 13);
			this->label59->TabIndex = 17;
			this->label59->Text = L"Effective tax (%)";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(71, 174);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(127, 13);
			this->label60->TabIndex = 16;
			this->label60->Text = L"Construction sales tax (%)";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(68, 151);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(67, 13);
			this->label61->TabIndex = 15;
			this->label61->Text = L"Sales tax (%)";
			// 
			// globalInputs31
			// 
			this->globalInputs31->Location = System::Drawing::Point(6, 223);
			this->globalInputs31->Name = L"globalInputs31";
			this->globalInputs31->Size = System::Drawing::Size(56, 20);
			this->globalInputs31->TabIndex = 14;
			this->globalInputs31->Text = L"00.75";
			// 
			// globalInputs30
			// 
			this->globalInputs30->Location = System::Drawing::Point(6, 197);
			this->globalInputs30->Name = L"globalInputs30";
			this->globalInputs30->Size = System::Drawing::Size(56, 20);
			this->globalInputs30->TabIndex = 13;
			this->globalInputs30->Text = L"38.9";
			// 
			// globalInputs29
			// 
			this->globalInputs29->Location = System::Drawing::Point(6, 171);
			this->globalInputs29->Name = L"globalInputs29";
			this->globalInputs29->Size = System::Drawing::Size(56, 20);
			this->globalInputs29->TabIndex = 12;
			this->globalInputs29->Text = L"6";
			// 
			// globalInputs28
			// 
			this->globalInputs28->Location = System::Drawing::Point(6, 145);
			this->globalInputs28->Name = L"globalInputs28";
			this->globalInputs28->Size = System::Drawing::Size(56, 20);
			this->globalInputs28->TabIndex = 11;
			this->globalInputs28->Text = L"6";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(68, 123);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(126, 13);
			this->label48->TabIndex = 10;
			this->label48->Text = L"After tax rate of return (%)";
			// 
			// globalInputs27
			// 
			this->globalInputs27->Location = System::Drawing::Point(6, 119);
			this->globalInputs27->Name = L"globalInputs27";
			this->globalInputs27->Size = System::Drawing::Size(56, 20);
			this->globalInputs27->TabIndex = 9;
			this->globalInputs27->Text = L"10";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(68, 96);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(133, 13);
			this->label52->TabIndex = 8;
			this->label52->Text = L"Battery System Lifetime (yr)";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(68, 70);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(113, 13);
			this->label53->TabIndex = 7;
			this->label53->Text = L"Equipment Lifetime (yr)";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(68, 44);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(161, 13);
			this->label54->TabIndex = 6;
			this->label54->Text = L"Building depreciation Lifetime (yr)";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(68, 22);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(100, 13);
			this->label55->TabIndex = 5;
			this->label55->Text = L"Building Lifetime (yr)";
			// 
			// globalInputs26
			// 
			this->globalInputs26->Location = System::Drawing::Point(6, 93);
			this->globalInputs26->Name = L"globalInputs26";
			this->globalInputs26->Size = System::Drawing::Size(56, 20);
			this->globalInputs26->TabIndex = 4;
			this->globalInputs26->Text = L"20";
			// 
			// globalInputs25
			// 
			this->globalInputs25->Location = System::Drawing::Point(6, 67);
			this->globalInputs25->Name = L"globalInputs25";
			this->globalInputs25->Size = System::Drawing::Size(56, 20);
			this->globalInputs25->TabIndex = 3;
			this->globalInputs25->Text = L"7";
			// 
			// globalInputs24
			// 
			this->globalInputs24->Location = System::Drawing::Point(6, 42);
			this->globalInputs24->Name = L"globalInputs24";
			this->globalInputs24->Size = System::Drawing::Size(56, 20);
			this->globalInputs24->TabIndex = 2;
			this->globalInputs24->Text = L"20";
			// 
			// globalInputs23
			// 
			this->globalInputs23->Location = System::Drawing::Point(6, 16);
			this->globalInputs23->Name = L"globalInputs23";
			this->globalInputs23->Size = System::Drawing::Size(56, 20);
			this->globalInputs23->TabIndex = 1;
			this->globalInputs23->Text = L"30";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(3, 0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(136, 13);
			this->label56->TabIndex = 0;
			this->label56->Text = L"Economic Assumptions";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->ProcDel);
			this->tabPage4->Controls->Add(this->panel16);
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Controls->Add(this->panel12);
			this->tabPage4->Controls->Add(this->panel18);
			this->tabPage4->Controls->Add(this->button1);
			this->tabPage4->Controls->Add(this->panel17);
			this->tabPage4->Controls->Add(this->panel15);
			this->tabPage4->Controls->Add(this->panel14);
			this->tabPage4->Controls->Add(this->ProcessSave);
			this->tabPage4->Controls->Add(this->ProcessLoad);
			this->tabPage4->Controls->Add(this->ProcessName);
			this->tabPage4->Controls->Add(this->ProcessRename);
			this->tabPage4->Controls->Add(this->ProcessDelete);
			this->tabPage4->Controls->Add(this->ProcessAdd);
			this->tabPage4->Controls->Add(this->ProcessTabs);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(886, 746);
			this->tabPage4->TabIndex = 5;
			this->tabPage4->Text = L"Manufacturing Processes";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &Form1::tabPage4_Click);
			// 
			// ProcDel
			// 
			this->ProcDel->Location = System::Drawing::Point(747, 320);
			this->ProcDel->Name = L"ProcDel";
			this->ProcDel->Size = System::Drawing::Size(136, 22);
			this->ProcDel->TabIndex = 26;
			this->ProcDel->Text = L"Delete Selected Process";
			this->ProcDel->UseVisualStyleBackColor = true;
			this->ProcDel->Click += gcnew System::EventHandler(this, &Form1::ProcDel_Click);
			// 
			// panel16
			// 
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel16->Controls->Add(this->label50);
			this->panel16->Controls->Add(this->consumableGrid);
			this->panel16->Location = System::Drawing::Point(0, 101);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(322, 159);
			this->panel16->TabIndex = 25;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(3, 0);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(81, 13);
			this->label50->TabIndex = 0;
			this->label50->Text = L"Consumables";
			// 
			// consumableGrid
			// 
			this->consumableGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->consumableGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Column32, 
				this->Column27, this->Column35});
			this->consumableGrid->Location = System::Drawing::Point(6, 16);
			this->consumableGrid->Name = L"consumableGrid";
			this->consumableGrid->Size = System::Drawing::Size(315, 138);
			this->consumableGrid->TabIndex = 20;
			this->consumableGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick_2);
			// 
			// Column32
			// 
			this->Column32->HeaderText = L"Consumable Name";
			this->Column32->Name = L"Column32";
			this->Column32->Width = 90;
			// 
			// Column27
			// 
			this->Column27->HeaderText = L"Consumable Cost ($/quantity)";
			this->Column27->Name = L"Column27";
			this->Column27->Width = 90;
			// 
			// Column35
			// 
			this->Column35->HeaderText = L"Consumable Usage (quantity/cycle)";
			this->Column35->Name = L"Column35";
			this->Column35->Width = 90;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(221, 266);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 40);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Save Process to Library";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// panel12
			// 
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel12->Controls->Add(this->button5);
			this->panel12->Controls->Add(this->label49);
			this->panel12->Controls->Add(this->moduleLibraryBox);
			this->panel12->Location = System::Drawing::Point(581, 160);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(299, 148);
			this->panel12->TabIndex = 23;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(8, 97);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(286, 40);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Add Selected Module";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(5, 2);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(116, 17);
			this->label49->TabIndex = 22;
			this->label49->Text = L"Module Library";
			// 
			// moduleLibraryBox
			// 
			this->moduleLibraryBox->FormattingEnabled = true;
			this->moduleLibraryBox->Location = System::Drawing::Point(8, 22);
			this->moduleLibraryBox->Name = L"moduleLibraryBox";
			this->moduleLibraryBox->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->moduleLibraryBox->Size = System::Drawing::Size(286, 69);
			this->moduleLibraryBox->TabIndex = 21;
			// 
			// panel18
			// 
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel18->Controls->Add(this->button7);
			this->panel18->Controls->Add(this->button4);
			this->panel18->Controls->Add(this->label82);
			this->panel18->Controls->Add(this->processLibrary);
			this->panel18->Location = System::Drawing::Point(581, 6);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(299, 148);
			this->panel18->TabIndex = 22;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(165, 97);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(129, 40);
			this->button7->TabIndex = 24;
			this->button7->Text = L"Delete Selected Process from Library";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(8, 97);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(151, 40);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Add Selected Process to Selected Module";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label82->Location = System::Drawing::Point(5, 2);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(122, 17);
			this->label82->TabIndex = 22;
			this->label82->Text = L"Process Library";
			// 
			// processLibrary
			// 
			this->processLibrary->FormattingEnabled = true;
			this->processLibrary->Location = System::Drawing::Point(8, 22);
			this->processLibrary->Name = L"processLibrary";
			this->processLibrary->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->processLibrary->Size = System::Drawing::Size(286, 69);
			this->processLibrary->TabIndex = 21;
			this->processLibrary->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::processLibrary_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 40);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Add Process to Selected Module";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel17
			// 
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel17->Controls->Add(this->PrcsDescBox);
			this->panel17->Controls->Add(this->label83);
			this->panel17->Location = System::Drawing::Point(0, 10);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(322, 87);
			this->panel17->TabIndex = 18;
			// 
			// PrcsDescBox
			// 
			this->PrcsDescBox->Location = System::Drawing::Point(3, 17);
			this->PrcsDescBox->Multiline = true;
			this->PrcsDescBox->Name = L"PrcsDescBox";
			this->PrcsDescBox->Size = System::Drawing::Size(314, 65);
			this->PrcsDescBox->TabIndex = 1;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label83->Location = System::Drawing::Point(3, 0);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(120, 13);
			this->label83->TabIndex = 0;
			this->label83->Text = L"Process Description";
			// 
			// panel15
			// 
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Controls->Add(this->label77);
			this->panel15->Controls->Add(this->Proc10);
			this->panel15->Controls->Add(this->label69);
			this->panel15->Controls->Add(this->label74);
			this->panel15->Controls->Add(this->label75);
			this->panel15->Controls->Add(this->Proc9);
			this->panel15->Controls->Add(this->Proc8);
			this->panel15->Controls->Add(this->Proc7);
			this->panel15->Controls->Add(this->label76);
			this->panel15->Location = System::Drawing::Point(328, 186);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(247, 120);
			this->panel15->TabIndex = 16;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(64, 97);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(120, 13);
			this->label77->TabIndex = 9;
			this->label77->Text = L"Natural Gas (BTU/Tool)";
			// 
			// Proc10
			// 
			this->Proc10->Location = System::Drawing::Point(6, 94);
			this->Proc10->Name = L"Proc10";
			this->Proc10->Size = System::Drawing::Size(56, 20);
			this->Proc10->TabIndex = 8;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(63, 71);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(100, 13);
			this->label69->TabIndex = 7;
			this->label69->Text = L"Electricity (kW/tool)";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(63, 45);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(93, 13);
			this->label74->TabIndex = 6;
			this->label74->Text = L"Water (gal/tool-hr)";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(64, 19);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(107, 13);
			this->label75->TabIndex = 5;
			this->label75->Text = L"DI Water (gal/tool-hr)";
			// 
			// Proc9
			// 
			this->Proc9->Location = System::Drawing::Point(6, 68);
			this->Proc9->Name = L"Proc9";
			this->Proc9->Size = System::Drawing::Size(56, 20);
			this->Proc9->TabIndex = 3;
			// 
			// Proc8
			// 
			this->Proc8->Location = System::Drawing::Point(6, 42);
			this->Proc8->Name = L"Proc8";
			this->Proc8->Size = System::Drawing::Size(56, 20);
			this->Proc8->TabIndex = 2;
			// 
			// Proc7
			// 
			this->Proc7->Location = System::Drawing::Point(6, 16);
			this->Proc7->Name = L"Proc7";
			this->Proc7->Size = System::Drawing::Size(56, 20);
			this->Proc7->TabIndex = 1;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(3, 0);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(115, 13);
			this->label76->TabIndex = 0;
			this->label76->Text = L"Utility Consumption";
			// 
			// panel14
			// 
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Controls->Add(this->label79);
			this->panel14->Controls->Add(this->label78);
			this->panel14->Controls->Add(this->Proc6);
			this->panel14->Controls->Add(this->label71);
			this->panel14->Controls->Add(this->label80);
			this->panel14->Controls->Add(this->Proc4);
			this->panel14->Controls->Add(this->label70);
			this->panel14->Controls->Add(this->Proc5);
			this->panel14->Controls->Add(this->label72);
			this->panel14->Controls->Add(this->Proc3);
			this->panel14->Controls->Add(this->Proc2);
			this->panel14->Controls->Add(this->Proc1);
			this->panel14->Controls->Add(this->label73);
			this->panel14->Location = System::Drawing::Point(328, 8);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(247, 172);
			this->panel14->TabIndex = 15;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(63, 140);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(88, 13);
			this->label79->TabIndex = 6;
			this->label79->Text = L"Process Yield (%)";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(63, 92);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(93, 13);
			this->label78->TabIndex = 9;
			this->label78->Text = L"Tool Utilization (%)";
			// 
			// Proc6
			// 
			this->Proc6->Location = System::Drawing::Point(6, 137);
			this->Proc6->Name = L"Proc6";
			this->Proc6->Size = System::Drawing::Size(56, 20);
			this->Proc6->TabIndex = 2;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(63, 45);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(140, 13);
			this->label71->TabIndex = 6;
			this->label71->Text = L"Tool Capacity (cycle/tool-hr)";
			this->label71->Click += gcnew System::EventHandler(this, &Form1::label71_Click);
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(63, 114);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(108, 13);
			this->label80->TabIndex = 5;
			this->label80->Text = L"Staff required (#/tool)";
			// 
			// Proc4
			// 
			this->Proc4->Location = System::Drawing::Point(6, 88);
			this->Proc4->Name = L"Proc4";
			this->Proc4->Size = System::Drawing::Size(56, 20);
			this->Proc4->TabIndex = 8;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(63, 67);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(104, 13);
			this->label70->TabIndex = 7;
			this->label70->Text = L"Capital Cost ($/Tool)";
			// 
			// Proc5
			// 
			this->Proc5->Location = System::Drawing::Point(6, 111);
			this->Proc5->Name = L"Proc5";
			this->Proc5->Size = System::Drawing::Size(56, 20);
			this->Proc5->TabIndex = 1;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(63, 22);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(123, 13);
			this->label72->TabIndex = 5;
			this->label72->Text = L"Tool Footprint (m^2/tool)";
			// 
			// Proc3
			// 
			this->Proc3->Location = System::Drawing::Point(6, 64);
			this->Proc3->Name = L"Proc3";
			this->Proc3->Size = System::Drawing::Size(56, 20);
			this->Proc3->TabIndex = 3;
			// 
			// Proc2
			// 
			this->Proc2->Location = System::Drawing::Point(6, 42);
			this->Proc2->Name = L"Proc2";
			this->Proc2->Size = System::Drawing::Size(56, 20);
			this->Proc2->TabIndex = 2;
			// 
			// Proc1
			// 
			this->Proc1->Location = System::Drawing::Point(6, 19);
			this->Proc1->Name = L"Proc1";
			this->Proc1->Size = System::Drawing::Size(56, 20);
			this->Proc1->TabIndex = 1;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(3, 0);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(49, 13);
			this->label73->TabIndex = 0;
			this->label73->Text = L"Tooling";
			// 
			// ProcessSave
			// 
			this->ProcessSave->Location = System::Drawing::Point(617, 321);
			this->ProcessSave->Name = L"ProcessSave";
			this->ProcessSave->Size = System::Drawing::Size(124, 20);
			this->ProcessSave->TabIndex = 7;
			this->ProcessSave->Text = L"Save Selected Module";
			this->ProcessSave->UseVisualStyleBackColor = true;
			this->ProcessSave->Click += gcnew System::EventHandler(this, &Form1::ProcessSave_Click);
			// 
			// ProcessLoad
			// 
			this->ProcessLoad->Location = System::Drawing::Point(529, 321);
			this->ProcessLoad->Name = L"ProcessLoad";
			this->ProcessLoad->Size = System::Drawing::Size(82, 20);
			this->ProcessLoad->TabIndex = 6;
			this->ProcessLoad->Text = L"Load Module";
			this->ProcessLoad->UseVisualStyleBackColor = true;
			this->ProcessLoad->Click += gcnew System::EventHandler(this, &Form1::ProcessLoad_Click);
			// 
			// ProcessName
			// 
			this->ProcessName->Location = System::Drawing::Point(402, 323);
			this->ProcessName->Name = L"ProcessName";
			this->ProcessName->Size = System::Drawing::Size(121, 20);
			this->ProcessName->TabIndex = 5;
			this->ProcessName->Text = L"<Insert Module Name>";
			// 
			// ProcessRename
			// 
			this->ProcessRename->Location = System::Drawing::Point(245, 321);
			this->ProcessRename->Name = L"ProcessRename";
			this->ProcessRename->Size = System::Drawing::Size(151, 22);
			this->ProcessRename->TabIndex = 4;
			this->ProcessRename->Text = L"Rename Selected Module";
			this->ProcessRename->UseVisualStyleBackColor = true;
			this->ProcessRename->Click += gcnew System::EventHandler(this, &Form1::ProcessRename_Click);
			// 
			// ProcessDelete
			// 
			this->ProcessDelete->Location = System::Drawing::Point(107, 321);
			this->ProcessDelete->Name = L"ProcessDelete";
			this->ProcessDelete->Size = System::Drawing::Size(132, 22);
			this->ProcessDelete->TabIndex = 3;
			this->ProcessDelete->Text = L"Delete Selected Module";
			this->ProcessDelete->UseVisualStyleBackColor = true;
			this->ProcessDelete->Click += gcnew System::EventHandler(this, &Form1::ProcessDelete_Click);
			// 
			// ProcessAdd
			// 
			this->ProcessAdd->Location = System::Drawing::Point(3, 321);
			this->ProcessAdd->Name = L"ProcessAdd";
			this->ProcessAdd->Size = System::Drawing::Size(98, 22);
			this->ProcessAdd->TabIndex = 2;
			this->ProcessAdd->Text = L"Add Module";
			this->ProcessAdd->UseVisualStyleBackColor = true;
			this->ProcessAdd->Click += gcnew System::EventHandler(this, &Form1::ProcessAdd_Click);
			// 
			// ProcessTabs
			// 
			this->ProcessTabs->Location = System::Drawing::Point(0, 349);
			this->ProcessTabs->Name = L"ProcessTabs";
			this->ProcessTabs->SelectedIndex = 0;
			this->ProcessTabs->Size = System::Drawing::Size(883, 389);
			this->ProcessTabs->TabIndex = 1;
			this->ProcessTabs->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::ProcessTabs_SelectedIndexChanged);
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->manuChart2);
			this->tabPage7->Controls->Add(this->manuChart);
			this->tabPage7->Controls->Add(this->manuOutputTable);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(886, 746);
			this->tabPage7->TabIndex = 7;
			this->tabPage7->Text = L"Manufacturing Graph";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// manuChart2
			// 
			chartArea2->AxisX->LabelStyle->Format = L"{0}";
			chartArea2->Name = L"ChartArea1";
			this->manuChart2->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->manuChart2->Legends->Add(legend2);
			this->manuChart2->Location = System::Drawing::Point(449, 6);
			this->manuChart2->Name = L"manuChart2";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->IsXValueIndexed = true;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"Series2";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"Series3";
			this->manuChart2->Series->Add(series2);
			this->manuChart2->Series->Add(series3);
			this->manuChart2->Series->Add(series4);
			this->manuChart2->Size = System::Drawing::Size(434, 434);
			this->manuChart2->TabIndex = 2;
			this->manuChart2->Text = L"chart1";
			title3->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
			title3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			title3->Name = L"Title1";
			title3->Text = L"$/kW";
			title4->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			title4->Name = L"Title2";
			title4->Text = L"MW/yr";
			this->manuChart2->Titles->Add(title3);
			this->manuChart2->Titles->Add(title4);
			// 
			// manuChart
			// 
			chartArea3->AxisX->LabelStyle->Format = L"{0}";
			chartArea3->Name = L"ChartArea1";
			this->manuChart->ChartAreas->Add(chartArea3);
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->manuChart->Legends->Add(legend3);
			this->manuChart->Location = System::Drawing::Point(0, 6);
			this->manuChart->Name = L"manuChart";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->IsXValueIndexed = true;
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Legend = L"Legend1";
			series6->Name = L"Series2";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Legend = L"Legend1";
			series7->Name = L"Series3";
			this->manuChart->Series->Add(series5);
			this->manuChart->Series->Add(series6);
			this->manuChart->Series->Add(series7);
			this->manuChart->Size = System::Drawing::Size(443, 434);
			this->manuChart->TabIndex = 1;
			this->manuChart->Text = L"chart1";
			title5->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
			title5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			title5->Name = L"Title1";
			title5->Text = L"$/kWh";
			title6->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			title6->Name = L"Title2";
			title6->Text = L"MW/yr";
			this->manuChart->Titles->Add(title5);
			this->manuChart->Titles->Add(title6);
			// 
			// manuOutputTable
			// 
			this->manuOutputTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->manuOutputTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Units, 
				this->Cost, this->Column33, this->Column34});
			this->manuOutputTable->Location = System::Drawing::Point(0, 446);
			this->manuOutputTable->Name = L"manuOutputTable";
			this->manuOutputTable->Size = System::Drawing::Size(443, 260);
			this->manuOutputTable->TabIndex = 0;
			// 
			// Units
			// 
			this->Units->HeaderText = L"Units";
			this->Units->Name = L"Units";
			// 
			// Cost
			// 
			this->Cost->HeaderText = L"Present Cost ($/kWh)";
			this->Cost->Name = L"Cost";
			// 
			// Column33
			// 
			this->Column33->HeaderText = L"Nearterm Cost ($/kWh)";
			this->Column33->Name = L"Column33";
			// 
			// Column34
			// 
			this->Column34->HeaderText = L"Optimistic Cost ($/kWh)";
			this->Column34->Name = L"Column34";
			// 
			// dataSet2
			// 
			this->dataSet2->DataSetName = L"NewDataSet";
			this->dataSet2->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->dataTable2});
			// 
			// dataTable2
			// 
			this->dataTable2->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(3) {this->dataColumn1, this->dataColumn2, 
				this->dataColumn3});
			cli::array< System::String^ >^ __mcTemp__1 = gcnew cli::array< System::String^  >(1) {L"Component"};
			this->dataTable2->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__1, true))});
			this->dataTable2->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) {this->dataColumn1};
			this->dataTable2->TableName = L"Table1";
			// 
			// dataColumn1
			// 
			this->dataColumn1->AllowDBNull = false;
			this->dataColumn1->ColumnName = L"Component";
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"Value";
			this->dataColumn2->DataType = System::Double::typeid;
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"Unit";
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) {this->dataTable1});
			// 
			// dataTable1
			// 
			this->dataTable1->TableName = L"Table1";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"CSV Files|*.csv";
			this->openFileDialog1->InitialDirectory = L"\\";
			// 
			// openProcess
			// 
			this->openProcess->Filter = L"DAT Files|*.dat";
			// 
			// saveProcess
			// 
			this->saveProcess->Filter = L"DAT Files|*.dat";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(909, 791);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Flow Battery Calculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jLowBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->jHighBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->DODBox))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->iterationData))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bestTable))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataOutput))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->costChart))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->CostParameters))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->consumableGrid))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->manuChart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->manuChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->manuOutputTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataTable2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataTable1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		public: void InitializeCostParameters()
				{
								CostParameters->Rows->Add("Nafion Membrane","500","350","200","$/m^2");//0
								CostParameters->Rows->Add("Daramic Membrane","10","10","10","$/m^2");//1
								CostParameters->Rows->Add("Carbon Felt","70","45","20","$/m^2");//2
								CostParameters->Rows->Add("PVC Frame","16.84","10.05","3.26","$/m^2");//3
								CostParameters->Rows->Add("Bipolar Plate","55","35","25","$/m^2");//4
								CostParameters->Rows->Add("HEX",".084",".056",".037","$/W");//5
								CostParameters->Rows->Add("PCS","0.18375","0.18375","0.18375","$/W");//6
								CostParameters->Rows->Add("Pump Base Cost","8343.10","8343.10","8343.10","$/unit");//7
								CostParameters->Rows->Add("Pump Cost per GPM","18","18","18","$/GPM");//8
								CostParameters->Rows->Add("Al Endplate","193","175","86","$/Unit");//9
								CostParameters->Rows->Add("Vanadium Pentoxide","24","16","8","$/kg");//10
								CostParameters->Rows->Add("Ferric Chloride","0.35","0.30","0.25","$/kg");//11
								CostParameters->Rows->Add("Chemical Sythesis","0.8","0.8","0.8","$/kg");//12
								CostParameters->Rows->Add("Tank","0.4061","0.3502","0.2943","$/gall");//13
								CostParameters->Rows->Add("Sulfuric Acid","85","70","50","$/ton");//14
								vector<vector<string>> library = fileRead2("Library.dat");
								int i = 0;
								System::String^ line;
								while (i<library.size())
								{
									line = gcnew String(library[i][0].c_str());
									processLibrary->Items->Add(line);
									i++;
								}
								vector<vector<string>> modlibrary = fileRead2("ModLibrary.dat");
								//int i = 0;
								//System::String^ line;
								i=0;
								while (i<modlibrary.size())
								{
									line = gcnew String(modlibrary[i][0].c_str());
									moduleLibraryBox->Items->Add(line);
									i++;
								}

				}
	
		public: std::vector<vector<double > > AddStep(vector<vector<double > >& Matrix,double ToolFootprint, double ToolCap, double CapCost, double DIWater, double Water, double Electricity, double NatGas, double Staff, double Yield, double ToolUtil,double ExWeldPrimer, double ExWeldSolvent, double MiscCons)
{
	vector<double> Step;
	Step.push_back(ToolFootprint);//(m^2/tool)
	Step.push_back(ToolCap);//(cell/tool-hr)
	Step.push_back(CapCost);//($/tool)
	Step.push_back(DIWater);//(gal/tool-hr)
	Step.push_back(Water);//(gal/tool-hr)
	Step.push_back(Electricity);//(kW/tool)
	Step.push_back(NatGas);//(kW/tool)
	Step.push_back(Staff);//(#/tool)
	Step.push_back(Yield);//(%)
	Step.push_back(ToolUtil);//(%)
	Step.push_back(ExWeldPrimer);//(quantity/cell)
	Step.push_back(ExWeldSolvent);//(quantity/cell)
	Step.push_back(MiscCons);//($/cell)
	Matrix.push_back(Step);
	return Matrix;
}
		public: double evaluateStep(vector<double>& Step,vector<double>& globalInputs,double units) //returns unit cost of a step
{
	if(units==0)
	{
		return 0;
	}
	double Cost=0;
	double ToolCount=1;
	if(Step[2]!=0)
	{
		ToolCount=ceil(units/(globalInputs[10]*Step[2]*Step[9]*Step[10]*0.01*0.01));
	}
	double EquipmentCost=ToolCount*Step[3]*(1+globalInputs[4]+globalInputs[6]+globalInputs[28]);

	double ConstructionCost=EquipmentCost*globalInputs[11]+ToolCount*Step[1]*globalInputs[7]*globalInputs[8];
	double BuildingCost=ConstructionCost*(1+globalInputs[29]);//Sales Tax
	BuildingCost*=0.163;//Fixed Charge Capital Recover Factor
	double LabourCost=globalInputs[12]*globalInputs[13]*globalInputs[14]*(1+globalInputs[15])*ToolCount*Step[8];
	double MaintenanceCost=ToolCount*(Step[3]*globalInputs[5]);//Tool Maintenance
	MaintenanceCost+=ConstructionCost*globalInputs[9];//Building Maintenance
	double DIWater=0;
	double Water=0;
	double Electricity=0;
	double NatGas=0;
	if (Step[1]!=0)
	{
	DIWater=0.01*Step[9]*Step[4]/Step[2];
	Water=0.01*Step[9]*Step[5]/Step[2];
	Electricity=0.01*Step[9]*Step[6]/Step[2];
	NatGas=0.01*Step[9]*Step[7]/Step[2];
	}
	double WasteWater=DIWater+Water;
	double UtilityCost=DIWater*globalInputs[16]+Water*globalInputs[17]+WasteWater*globalInputs[18]+Electricity*globalInputs[19]+NatGas*globalInputs[20];
	int consumables = (Step.size()-11)/3;
	double ConsumableCost=0/*Step[11]*globalInputs[21]+Step[12]*globalInputs[22]+Step[13]*/;
	int j = 0;
	while(j<consumables)
	{
		ConsumableCost+=Step[12+3*j]*Step[13+3*j];
		j++;
	}
	EquipmentCost*=0.262;//Fixed Charge Capital Recover Factor
	Cost= EquipmentCost+BuildingCost+LabourCost+MaintenanceCost+UtilityCost+ConsumableCost;
	return Cost/units;
}

				public: std::vector<double> evaluateStepV(vector<double>& Step,vector<double>& globalInputs,double units) //returns unit cost of a step
{
	vector<double> results(6,0);
	if(units==0)
	{
		return results;
	}
	double Cost=0;
	double ToolCount=1;
	if(Step[2]!=0)
	{
		ToolCount=ceil(units/(globalInputs[10]*Step[2]*Step[9]*Step[10]*0.01*0.01));
	}
	double EquipmentCost=ToolCount*Step[3]*(1+globalInputs[4]+globalInputs[6]+globalInputs[28]);

	double ConstructionCost=EquipmentCost*globalInputs[11]+ToolCount*Step[1]*globalInputs[7]*globalInputs[8];
	double BuildingCost=ConstructionCost*(1+globalInputs[29]);//Sales Tax
	BuildingCost*=0.163;//Fixed Charge Capital Recover Factor
	double LabourCost=globalInputs[12]*globalInputs[13]*globalInputs[14]*(1+globalInputs[15])*ToolCount*Step[8];
	double MaintenanceCost=ToolCount*(Step[3]*globalInputs[5]);//Tool Maintenance
	MaintenanceCost+=ConstructionCost*globalInputs[9];//Building Maintenance
	double DIWater=0;
	double Water=0;
	double Electricity=0;
	double NatGas=0;
	if (Step[1]!=0)
	{
	DIWater=0.01*Step[9]*Step[4]/Step[2];
	Water=0.01*Step[9]*Step[5]/Step[2];
	Electricity=0.01*Step[9]*Step[6]/Step[2];
	NatGas=0.01*Step[9]*Step[7]/Step[2];
	}
	double WasteWater=DIWater+Water;
	double UtilityCost=DIWater*globalInputs[16]+Water*globalInputs[17]+WasteWater*globalInputs[18]+Electricity*globalInputs[19]+NatGas*globalInputs[20];
	int consumables = (Step.size()-11)/3;
	double ConsumableCost=0/*Step[11]*globalInputs[21]+Step[12]*globalInputs[22]+Step[13]*/;
	int j = 0;
	while(j<consumables)
	{
		ConsumableCost+=Step[12+3*j]*Step[13+3*j];
		j++;
	}
	EquipmentCost*=0.262;//Fixed Charge Capital Recover Factor
	Cost= EquipmentCost+BuildingCost+LabourCost+MaintenanceCost+UtilityCost+ConsumableCost;
	results[0]=EquipmentCost/units;
	results[1]=BuildingCost/units;
	results[2]=LabourCost/units;
	results[3]=MaintenanceCost/units;
	results[4]=UtilityCost;
	results[5]=ConsumableCost/units;
	return results;
}
		public: double evaluateProcess(vector<vector<double> >& Matrix,vector<double>& globalInputs,double units)//returns unit cost of a series of steps
{
	int i=0;
	double Cost=0;
	
	while(i<Matrix.size())
	{
		units/=0.01*Matrix[i][9];
		i++;
	}
	i=0;
	while(i<Matrix.size())
	{
		Cost+=evaluateStep(Matrix[i],globalInputs,units);
		i++;
	}
	return Cost;
}
	public: std::vector<double> evaluateProcessV(vector<vector<double> >& Matrix,vector<double>& globalInputs,double units)//returns unit cost of a series of steps
{
	int i=0;
	int j=0;
	double Cost=0;
	vector<double> results(6,0);
	vector<double> step;
	while(i<Matrix.size())
	{
		units/=0.01*Matrix[i][9];
		i++;
	}
	i=0;
	while(i<Matrix.size())
	{
		step=evaluateStepV(Matrix[i],globalInputs,units);
		while(j<=5)
		{
		results[j]+=step[j];
		j++;
		}
		i++;
	}
	return results;
}
		public: std::vector<vector<double> > populateSpline2V(vector<double>& X,vector<double>& Y)
{
	

	vector<double> A;
	vector<double> C;
	vector<double> B;
	vector<double> D;
	const int m=(int) X.size();
	int n=m-1;
	int i=0;
	vector<vector<double> > splineMatrix;
	if(m==2)
	{

		B.push_back((Y[1]-Y[0])/(X[1]-X[0]));
		B.push_back(0);;
		while(i<=1)
		{
		C.push_back(0);
		D.push_back(0);
		i++;
		}
		splineMatrix.push_back(X);
		splineMatrix.push_back(Y);
		splineMatrix.push_back(B);
		splineMatrix.push_back(C);
		splineMatrix.push_back(D);
	}
	else
	{
	i=1;
	C.resize(n+1,0);
	D.resize(n+1,0);
	B.resize(n+1,0);
	C[0]=0;
	while(i<n)
	{
		B[i]=2/((X[i+1]-X[i])/(Y[i+1]-Y[i])+(X[i]-X[i-1])/(Y[i]-Y[i-1]));
		i++;
	}
	B[0]=1.5*(Y[1]-Y[0])/(X[1]-X[0])-B[1]/2;
	B[n]=1.5*(Y[n]-Y[n-1])/(X[n]-X[n-1])-B[n-1]/2;
	D[0]=(B[1]-B[0]-2*C[0]*(X[1]-X[0]))/(3*pow(X[1]-X[0],2));
	i=1;
	while(i<n)
	{
		double delX=X[i+1]-X[i];
		double e = Y[i+1]-Y[i]-B[i]*delX;
		double f = B[i+1]-B[i];
		double a = delX*delX;
		double b = delX*delX*delX;
		double c = 2*delX;
		double d = 3*delX*delX;
		C[i]=(e*d-b*f)/(a*d-b*c);
		D[i]=(a*f-e*c)/(a*d-b*c);
		i++;
	}
	i=0;
	splineMatrix.push_back(X);
	splineMatrix.push_back(Y);
	splineMatrix.push_back(B);
	splineMatrix.push_back(C);
	splineMatrix.push_back(D);
	}
	return splineMatrix;
}
		public: double interpolateSplineV(double x,vector<vector<double> > matrix)
{
	int i = 0;
	double y=0;
	double delx;
	int size = matrix[0].size();
	while (i<size)
	{
		if(x>=matrix[0][i])
		{
			
			delx = x-matrix[0][i];
			y=matrix[1][i]+matrix[2][i]*delx+matrix[3][i]*delx*delx+matrix[4][i]*delx*delx*delx;
		}
		else if(x<matrix[0][i])
		{
			break;
			
		}
		i++;
	}
	return y;
}
		public: double interpolate2dSpline(vector<vector<vector<double> > > SuperMatrix, vector<double> j,double x,double y)
{
	vector<double> X1;
	int i = 0;
	int size=SuperMatrix.size();
	while (i<size)
	{
		X1.push_back(interpolateSplineV(x,SuperMatrix[i]));
		i++;
	}
	vector<vector<double > > Matrix=populateSpline2V(j,X1);
	return interpolateSplineV(y,Matrix);
}
		public: std::vector<vector<double > > fileRead(string file)
{
	ifstream datafile;
	datafile.open(file);
	string line;
	vector<vector<double > > datamatrix;
	int i = 0;
	int j = 0;
	datamatrix.resize(1);
	while(datafile.good())
	{
	getline(datafile,line,',');
	if(line=="n")
	{
		j=0;
		i++;
		datamatrix.resize(datamatrix.size()+1);
		
		getline(datafile,line);
	
		getline(datafile,line,',');
	}
	
	datamatrix[i].push_back(atof(line.c_str()));
	
	j++;
	}
	datamatrix.resize(datamatrix.size()-1);
	datafile.close();
	return datamatrix;
}

		public: std::vector<vector<string > > fileRead2(string file)
{
	ifstream datafile;
	datafile.open(file);
	string line;
	vector<vector<string > > datamatrix;
	int i = 0;
	int j = 0;
	datamatrix.resize(1);
	while(datafile.good())
	{
	getline(datafile,line,'~');
	if(line=="n")
	{
		j=0;
		i++;
		datamatrix.resize(datamatrix.size()+1);
		
		getline(datafile,line);
	
		getline(datafile,line,'~');
	}
	
	datamatrix[i].push_back(line);
	
	j++;
	}
	datamatrix.resize(datamatrix.size()-1);
	datafile.close();
	return datamatrix;
}

	public: double asinh(double x)
{
    if(x>0)
        return log(x+sqrt(x*x+1));
    else
        return -log(x+sqrt(x*x+1));
}
	public: double voltage(double SOC, double area, double flow, double j,double aspectratio,int system, int membrane,vector<vector<vector<double> > >& SuperMatrix,vector<double>& J)
{
	
	int i = system; //0 for Fe-V, 1 for V-V
    const double F = 96485;// C/mol
    const double R = 8.314; // J/mol K
    double V;
    double width = sqrt(area/aspectratio); //cell width m
    double height = width*aspectratio;
	double V2[2] = {0.77,1.004}; //V
//	V2[1]+=2;
	double V1[2]={-0.085,-.41}; //V
    double Q = flow/(60*1000*1000); // m^3/s
	double TCent[2]={45,45};

	if (SplineButton->Checked)
	{
		return interpolate2dSpline(SuperMatrix,J,SOC,j);
	}
	if(VVGen1->Checked)
	{
		TCent[1]=35;
	}
    double T = TCent[i]+273.15; // K
    double Ci1 = 1750; // initial concentration of chemical 1, mol/m^3
	if(VVGen1->Checked)
	{
		Ci1=1500;
	}
	if(FeV->Checked)
	{
		Ci1=1750;
	}
	if(VVGen2->Checked)
	{
		Ci1=2000;
	}
	if(LiOrgButton->Checked)
	{
		Ci1=2000;
	}
	double Ci2 = Ci1; // initial concentration of chemical 2, mol/m^3
	double tScaleFactor = Convert::ToDouble(ThicknessBox->Text);
    double t=0.004*tScaleFactor; //cell thickness m
    double I=j*width*height*100*100/1000; //current A
	double A[2] = {2,4};
	A[i]*= Convert::ToDouble(ThRedBox->Text);
	double chi[2] = {4,0};
	double n = Convert::ToDouble(electronBox->Text);
    double delSOC=I*A[i]/(n*2*Q*Ci1*F);
    double SOCrxn=SOC-delSOC;
    double Inew=j*(1+chi[i]*delSOC*2)*100*100/1000;
    double eps=0.94; //porosity
    double a = 39000*eps/4;//CHECK THIS
    double Km=0.00016*pow(Q/(eps*width*t),0.4);
    double Conc1neg=Ci1*SOCrxn-Inew/(t*F*a*Km/eps); // V 2+
    double Conc1pos=Ci1-Conc1neg; //V 3+
    double Conc2pos=Ci2*SOCrxn-Inew/(t*F*a*Km/eps); // V 5+
    double Conc2neg=Ci2-Conc2pos; //V 4+
	double kScaleFactor = Convert::ToDouble(KBox->Text);
    double k1=8.7/1000000*exp((F*0.255/R)*(T-298)/(298*T));
	double k2[2]={1.6/100000*exp((F*0.77/R)*(T-298)/(298*T)),0.00000068*exp((F*V2[i]/R)*(T-298)/(298*T))};
    double etaneg=-2*R*T/F*asinh(Inew/(2*t*a*F*k1*kScaleFactor*sqrt(Conc1neg*Conc1pos)));
    double etapos=2*R*T/F*asinh(Inew/(2*t*a*F*k2[i]*kScaleFactor*sqrt(Conc2neg*Conc2pos)));
	double mt[2]={450e-6,175e-6}; //membrane thickness m
	double condM[2]={53.65395346,(0.5139*9-.326)*exp(1268*(T-303)/(T*303))};
	//cout << "Membrane conductivity: " << condM[membrane] << endl;
	//condM[1]=0.1;
    double IRM = (j*100*100/1000)*(mt[membrane])/(condM[membrane]);
//	cout << "I R drop membrane: " << IRM << endl;
	double iconcH[2]={5300,1000};
	double concH[2]={iconcH[0],iconcH[1]+Ci1*SOCrxn-Inew/(t*F*a*Km)};
	double concCl[2]={1500,0};
	double concH2SO4[2]={3800,5000};
    int ZV2=2;
    int ZV3=3;
    int ZFe2=2;
    int ZFe3=3;
	int ZV4=2;
	int ZV5=1;
    int ZH=1;
    int ZCl=-1;
    int ZH2SO4=-1;
	double bruggman[2]={1.5,0};
	double reduction[2]={2.75/pow(eps,bruggman[i]),0.73/pow(eps,bruggman[i])};
	if(VVGen1->Checked)
	{
		reduction[1]=0.833/pow(eps,bruggman[i]);
	}
	double DV2=(2.4E-10)/reduction[system];
    double DV3=(2.4E-10)/reduction[system];
	double DV4=(3.9E-10)/reduction[system];
	double DV5=(3.9E-10)/reduction[system];
    double DFe2=(2.5E-10)/reduction[system];
    double DFe3=(2.5E-10)/reduction[system];
	double DH=(9.31E-09)/reduction[system];
    double DCl=(2.032E-09)/reduction[system];
    double DH2SO4=(1.33E-09)/reduction[system];
	double condScaleFactor = Convert::ToDouble(CondBox->Text);
	double pa=(F*F/(T*R))*(ZV2*ZV2*DV2*Conc1neg+ZV3*ZV3*DV3*Conc1pos+ZH*ZH*DH*concH[i]+ZH2SO4*ZH2SO4*DH2SO4*concH2SO4[i]+ZCl*ZCl*DCl*concCl[i]);
    double pat=pa*(1+1.711464*(T-273-23)/100)*condScaleFactor;
	double pc[2]={(F*F/(T*R))*(ZFe2*ZFe2*DFe2*Conc2neg+ZFe3*ZFe3*DFe3*Conc2pos+ZH*ZH*DH*concH[i]+ZH2SO4*ZH2SO4*DH2SO4*concH2SO4[i]+ZCl*ZCl*DCl*concCl[i]),(F*F/(T*R))*(ZV4*ZV4*DV4*Conc2neg+ZV5*ZV5*DV5*Conc2pos+ZH*ZH*DH*concH[i]+ZH2SO4*ZH2SO4*DH2SO4*concH2SO4[i]+ZCl*ZCl*DCl*concCl[i])};
    double pct=pc[i]*(1+1.711464*(T-273-23)/100)*condScaleFactor;
	//pat=0.6;//temp
	//pct=pat;//temp
	//cout << "Anolyte conductivity: " << pat << endl;
	//cout << "Catholyte conductivity: " << pct<< endl;
    double Irea=t*Inew/pat;
	//cout << "I R drop anolyte: " << Irea << endl;
    double Irec=t*Inew/pct;
//	cout << "I R drop catholyte: " << Irec << endl;
    if(Conc1neg*Conc2pos/(Conc1pos*Conc2neg)>0)
    {
    V = V2[i]-V1[i]+(R*T/F)*(log(Conc1neg*Conc2pos/(Conc1pos*Conc2neg))+log(concH[i]/iconcH[i]))+etaneg-etapos-Irea-Irec-IRM;
    }
    else
    {
    V=0;
    }
	if(LiOrgButton->Checked)
	{
		double VLiA[] = {3.193552576,3.298606737,3.422420435,3.516218117,3.602508955,3.662540986,3.670044043,3.673797466,3.700060059,3.73382571,3.752585246,3.767595148,3.790104319,3.812617278,3.835126449,3.898911903,3.932295015,3.977286844,4.12524213,4.152428876};
		std::vector<double> VLi (&VLiA[0], &VLiA[0]+20);
		double SOCLiA[] = {0.009631481,0.015312908,0.026677674,0.039934338,0.05697862,0.085387667,0.115688613,0.168717178,0.195232417,0.252048601,0.316440021,0.388408589,0.469844291,0.538025241,0.600522852,0.674383318,0.721711346,0.797815335,0.972556012,1};
		std::vector<double> SOCLi (&SOCLiA[0], &SOCLiA[0]+20);
		std::vector<vector<double> > LiMatrix= populateSpline2V(SOCLi,VLi);
		double OCVLi = interpolateSplineV(SOC,LiMatrix)-3.8+Convert::ToDouble(LiVoltageBox->Text);
		
		//etaneg = 0;
		//etapos = 0;
		pat = A[1]*condScaleFactor/(10); //S/m
		pct = pat; //temp
		condM[membrane]=2.5/(10); //S/m
		//t=0.5/1000;
		Irea = t*Inew/pat;
		Irec = t*Inew/pct;
		mt[membrane]=7*(25e-6); // m
		IRM = 0.1*(j*100*100/1000)*(mt[membrane])/(condM[membrane]);
		V = OCVLi + etaneg-etapos-Irea-Irec-IRM;

	}
	if(Conc1neg<=0 || Conc2neg<=0 || Conc1pos<=0 || Conc2pos<=0)
	{
		V=0;
	}
	double scaleV=1/*1.138*/;
    return V*scaleV;
}
	public: double CostTab(int column,int row,double units)
			{
				String^ function = (this->CostParameters->Rows[row]->Cells[column]->Value->ToString());
				return unitFunction<double>(function,units);
			}
	public: template<typename T>
			double unitFunction(String^ function, double units)
			{
				std::string expression_string = msclr::interop::marshal_as< std::string >( function);
				T  tUnits = T(0.0);
				exprtk::symbol_table<T> symbol_table;
				symbol_table.add_variable("units",tUnits);
				tUnits=units;
				exprtk::expression<T> expression;
				expression.register_symbol_table(symbol_table);

				exprtk::parser<T> parser;
			   parser.compile(expression_string,expression);
			  return expression.value();
			}
	public: double *powerCost(double area,double flow,double cells,double aspectratio,double power,double stacks,int system,int membrane,double units)
{
	double *powerCost=new double[3];
	int i = system;
    double cellheight = sqrt(aspectratio*area);
    double cellwidth = cellheight/aspectratio;
    double Moverlap=Convert::ToDouble(MOBox->Text);
    double membranearea=(cellheight+Moverlap)*(cellwidth+Moverlap)*cells*stacks;
	double membranecost[3][3]={{CostTab(3,1,units),CostTab(2,1,units),CostTab(1,1,units)},{CostTab(3,0,units),CostTab(2,0,units),CostTab(1,0,units)},{43.06,75.35,107.64}}; //$/m^2
    double feltarea=area*cells*2*stacks;
	double feltcost[3]={CostTab(3,2,units),CostTab(2,2,units),CostTab(1,2,units)}; // $/m^2
    double framearea=(cellheight+Convert::ToDouble(FOHBox->Text))*(cellwidth+Convert::ToDouble(FOWBox->Text))*2*cells*stacks;
	double framecost[3]={CostTab(3,3,units),CostTab(2,3,units),CostTab(1,3,units)}; //$/m^2
    double bipolararea=framearea/2; // should be "area"
	double bipolarcost[3]={CostTab(3,4,units),CostTab(2,4,units),CostTab(1,4,units)};
	double HEX[3]={CostTab(3,5,units),CostTab(2,5,units),CostTab(1,5,units)}; //$/W
    double pcs[3]={CostTab(3,6,units),CostTab(2,6,units),CostTab(1,6,units)}; // $/W
    double GPM=flow*cells*stacks/(1000*3.78);
	double pumpBaseCost[3]={CostTab(3,7,units),CostTab(2,7,units),CostTab(1,7,units)};
	double pumpGPMCost[3]={CostTab(3,8,units),CostTab(2,8,units),CostTab(1,8,units)};
    double AIplates=cells*stacks/stacks*2;
	double AIplatecost[3]={CostTab(3,9,units),CostTab(2,9,units),CostTab(1,9,units)};
	int j = 0;
	while (j<3)
	{

    double totcost=AIplates*AIplatecost[j]+pcs[j]*power+(feltcost[j]*feltarea)+(membranearea*membranecost[membrane][j])+2*(pumpBaseCost[i]+pumpGPMCost[i]*GPM)+framearea*framecost[j]+bipolararea*bipolarcost[j];
	if(VVGen1->Checked)
	{
	totcost+=HEX[j]*power;
	}
	double other=1/0.982; //bolts, pvc, other minor costs
	//cout << endl << "Pumps: " << 2*pumpCost*other << endl;
	//cout << "PCS: " << pcs*power*other<< endl;
	//cout << "Membrane: " << membranearea*membranecost[system]*other<< endl;
    totcost*=other;
	powerCost[j]=totcost;
	j++;
	}
    return powerCost;
}
	public: double *energyCost(double Veff,double DOD,double molarity,int system)
{
	double n = Convert::ToDouble(electronBox->Text);
    const double F = 96485;
	double units;
	double chemcost[2][3]={{CostTab(3,10,units),CostTab(2,10,units),CostTab(1,10,units)},{CostTab(3,11,units),CostTab(2,11,units),CostTab(1,11,units)}}; //$/kg
    double chemMW[2]={181.88,162.2}; // g/mol
    double chemmult[2]={2,1};// mol e/mol
    double sythesis=0.98;
	double sythcost[3]={CostTab(3,12,units),CostTab(2,12,units),CostTab(1,12,units)}; //$/kg;
	double labourcost[3]={1,1,1};
	double chemtotal;
	double TEF = 1.25;
    double gallons=TEF*2*3600/(Veff*F*DOD*(molarity/1000)*3.78);
	double costpergallon[3]={CostTab(3,13,units),CostTab(2,13,units),CostTab(1,13,units)};
    double molH2SO4=3.8;
	double H2SO4cost[3]={CostTab(3,14,units)/(1000000),CostTab(2,14,units)/(1000000),CostTab(1,14,units)/(1000000)}; //$/g
	double H2SO4total[3];
	int i = 0;
	while (i<3)
	{
		H2SO4total[i]=98*H2SO4cost[i]*molH2SO4*2*3600/(Veff*F*DOD*(molarity/1000));
		i++;
	}
	double *energyCost=new double[3];
	i = 0;
	while (i<3)
	{
		if(system==0)
		{
			chemtotal=(2*chemMW[0]*(chemcost[0][i]+sythcost[i])*3600)/(Veff*F*chemmult[0]*DOD*sythesis)+2*chemMW[1]*chemcost[1][2]*3600/(Veff*F*chemmult[1]*DOD*sythesis);
		}
		if(system==1)
		{
			chemtotal=(2*chemMW[0]*(chemcost[0][i]+sythcost[i])*3600)/(Veff*F*chemmult[0]*DOD*sythesis);
		}
		energyCost[i]=chemtotal/n+costpergallon[i]*gallons+labourcost[i]+H2SO4total[i];
		i++;
	}
    return energyCost;
}
	public: double shuntLoss(double Vd,double area,double cwidth,double cdepth,double aspectratio,int channels,int cells)
{
	double resistivity=0.05;//ohm m
	double length=sqrt(area/aspectratio);
	double carea=cdepth*cwidth*channels;
	double Rs=resistivity*length/carea;
	double Rm=resistivity*0.009/(0.0254*0.0254*3.14);
	double Ik=Vd/Rm;
	double r = sqrt(Rs/Rm);
	double powerLoss=0;
	double im;
	double is;
	for (double j = (-(cells-2)/2);j<=((cells-2)/2);j++)
	{
		im=Ik*(1-(cosh(j/r)/cosh(0.5*cells/r)));
		is=(Ik/r)*(sinh(j/r)/cosh(0.5*cells/r));
		powerLoss+=4*Rm*im*im+4*Rs*is*is;
	}
	return powerLoss;
}
	public: double pLoss(double area, double flow,double aspectratio, double cwidth, double cdepth,int channels)
{
    double width = sqrt(area/aspectratio); //cell width m
    double height = width*aspectratio;
	double Dh=2*cdepth*cwidth/(cdepth+cwidth);
	double carea=cdepth*cwidth;
    double Q = flow/(60*1000*1000); // m^3/s
    double K = 1.09438E-10; // m^2
	double visc = 6.60E-03;
	double tScaleFactor = Convert::ToDouble(ThicknessBox->Text);
	double t = 0.004*tScaleFactor;
	double Pdrop=0;
	if(interdigBox->Checked)
	{
		Pdrop=(Q/(t*width))*visc*width/K+32*width*Q*visc/(carea*Dh*Dh*channels);
	}
	else
	{
		Pdrop=(Q/(t*width))*visc*width/K+2*32*width*Q*visc/(carea*Dh*Dh*channels);
	}
  
	
    double PEff=0.67; // pump efficiency
    double powerLoss=Pdrop*Q/PEff;
    return powerLoss;
}
	public: double darcysLaw(double area, double flow, double aspectratio)
{
    double width = sqrt(area/aspectratio); //cell width m
    double height = width*aspectratio;
    double Q = flow/(60*1000*1000); // m^3/s
    double K = 1.09438E-10; // m^2
	double visc = 6.60E-03;
	double tScaleFactor = Convert::ToDouble(ThicknessBox->Text);
	double t = 0.004*tScaleFactor;
	double Pdrop=(Q/(t*width))*visc*width/K;
    double PEff=0.67; // pump efficiency
    double powerLoss=Pdrop*Q/PEff;
    return powerLoss;
}
	public: double HPLaw(double flow, double cwidth, double cdepth, double clength)
{
	double Dh=2*cdepth*cwidth/(cdepth+cwidth);
	double carea=cdepth*cwidth;
    double Q = flow/(60*1000*1000); // m^3/s
	double visc = 6.60E-03;
	double Pdrop=32*clength*Q*visc/(carea*Dh*Dh);
    double PEff=0.67; // pump efficiency
    double powerLoss=Pdrop*Q/PEff;
    return powerLoss;
}
			public: void MarshalString ( String ^ s, string& os ) {
   using namespace Runtime::InteropServices;
   const char* chars = 
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}

		public: void MarshalString ( String ^ s, wstring& os ) {
   using namespace Runtime::InteropServices;
   const wchar_t* chars = 
      (const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}
		public: static void ConvertManagedStringToStdString(std::string &outStr, String ^str)
{
IntPtr ansiStr = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str);
outStr = (const char*)ansiStr.ToPointer(); System::Runtime::InteropServices::Marshal::FreeHGlobal(ansiStr);
}
			public: double function(string eq,vector<string> variables, vector<string> values)
					{

						return 0;
					}
	public: static double slope(double y2,double y1,double x2, double x1)
			{
				return (y2-y1)/(x2-x1);
			}
 	private: System::Void calculate_Click(System::Object^  sender, System::EventArgs^  e) {
	vector<double> globalInputs;

	dataOutput->Rows->Clear();
	bestTable->Rows->Clear();
	manuOutputTable->Rows->Clear();
	costChart->Series[0]->Points->Clear();
	int system; // 0 for Fe-V, 1 for V-V
	int membrane; // 0 for Daramic, 1 for Nafion, 2 for IEX
	if(FeV->Checked)
	{
		system=0;
		membrane=0;
	}
	if(VVGen1->Checked || VVGen2->Checked)
	{
		system=1;
		membrane=1;
	}
	if(LiOrgButton->Checked)
	{
		system=1;
		membrane=1;
	}

	double SOCLow=(100-(double)DODBox->Value)/200;
	double battime=Convert::ToDouble(epBox->Text);
	double SOC=SOCLow;
	double SOCHigh=1.0001-SOCLow;
	double jres=0.1;
	double j=jres;
	double areares=0.01;
	double SOCres=0.1;
	double highflow=0;
	double flow=0;
	double optFlow=0;
	double flowres=0;
	double flowdensres=0.1;
	double area=areares;
	double V=0;
	double VEff=0;
	double optV=0;
	double power=Convert::ToDouble(powerBox->Text)*1000;;
	double cells=Convert::ToDouble(cellBox->Text);	
	double stacks=Convert::ToDouble(stackBox->Text);
	double jLow=(double)jLowBox->Value;
	double jHigh=(double)jHighBox->Value;
	double jLowRes=5;
	progressBar->Value=0;
	progressBar->Maximum=((jHigh-jLow)/jLowRes);
	double cellPower=power/(cells*stacks);
	double aspectratio=Convert::ToDouble(aspectRatioBox->Text);
	double digitSep = Convert::ToDouble(channelSepBox->Text);
	int digits=1;
	double powerloss=0;
	double powerproduced=0;
	double prevPower=0;
	bool optflow;
	double Vavg;
	double pcost[3];
	double ecost[3];
	double totcost[3];
	int i=0;
	int k=0;
	int h=0;
	int z=0;
	double units=0;
	vector<double> Step;
	
	typedef exprtk::expression<double>     expression_t;
	//vector<vector<double> > CellProcess;
	vector<vector<double> > Process;
	vector<vector<vector<double> > > Processes;

		globalInputs.push_back(Convert::ToDouble(globalInputs0->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs1->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs2->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs3->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs4->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs5->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs6->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs7->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs8->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs9->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs10->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs11->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs12->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs13->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs14->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs15->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs16->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs17->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs18->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs19->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs20->Text));
globalInputs.push_back(0);
globalInputs.push_back(0);
globalInputs.push_back(Convert::ToDouble(globalInputs23->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs24->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs25->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs26->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs27->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs28->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs29->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs30->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs31->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs32->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs33->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs34->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs35->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs36->Text));
globalInputs.push_back(0.01*Convert::ToDouble(globalInputs37->Text));

		vector<std::string> variables;
		vector<double> variableValues;
		String^ dataCell;
		i=0;
		while(i<(ProcessList->Count))
		{
			Step.resize(ProcessList[i]->ColumnCount,0);
			z=0;
			variables.clear();
			variableValues.clear();
		/*	while(z<VariableList[i]->RowCount)
			{
				dataCell = VariableList[i]->Rows[z]->Cells[0]->Value->ToString();
				variables.push_back(msclr::interop::marshal_as< std::string >( dataCell));
				variableValues.push_back(Convert::ToDouble(VariableList[i]->Rows[z]->Cells[1]));
				z++;
			}*/
			z=0;
		while((z+1)<(ProcessList[i]->RowCount))
		{
			k=1;
			
			while(k<(ProcessList[i]->ColumnCount))
			{
				Step[k]=Convert::ToDouble(this->ProcessList[i]->Rows[z]->Cells[k]->Value);
				k++;
			}
			Process.push_back(Step);
			z++;
		}
		Processes.push_back(Process);
		i++;
		}
		/*
		Step.resize(StackProcessGrid->ColumnCount,0);
		while((i+1)<(StackProcessGrid->RowCount))
		{
			j=0;
			while(j<(StackProcessGrid->ColumnCount))
			{
				Step[j]=Convert::ToDouble(this->StackProcessGrid->Rows[i]->Cells[j]->Value);
				j++;
			}
			StackProcess.push_back(Step);
			i++;
		}

		i=0;
		Step.resize(CellProcessGrid->ColumnCount,0);
		while((i+1)<(CellProcessGrid->RowCount))
		{
			j=0;
			while(j<(CellProcessGrid->ColumnCount))
			{
				Step[j]=Convert::ToDouble(this->CellProcessGrid->Rows[i]->Cells[j]->Value);
				j++;
			}
			CellProcess.push_back(Step);
			i++;
		}*/
	
	//double units=globalInputs[0]/globalInputs[1]*cells*stacks;
	double denom = Convert::ToDouble(manuSweepLow->Text);
	double mult = Convert::ToDouble(manuSweepHigh->Text);
	int manustep = Convert::ToDouble(manuSweepPoints->Text);
	double kstep = exp(log(denom*mult)/(manustep-1));
	vector<double> manuSeriesX(manustep,0);
	vector<double> manuSeriesY(manustep,0);
	vector<vector<double> > manuResults;
	vector<double> manuStep;
	double manucost=0;
	double bestpcost[3]={0,0,0};
	double bestecost[3]={0,0,0};
	double besttcost[3]={0,0,0};
	double bestj[3]={0,0,0};
	double lastj=0;
	double flowavg=0;
	double CE[3]={0.90,0.98,0.95};
	bool powerAttained=false;
	double cdepth=0.002;//0.002//m
	double cwidth=0.005;//m
	double pumpEff;
	double shuntEff;
	double electrochemEff;
	double pumpEffAvg;
	double shuntEffAvg;
	double electrochemEffAvg;
	double Kred=2.4886;//2.4886
	double jCap[3]={300,180,100};
	double pDropFactor =  Convert::ToDouble(PBox->Text);
	int channels=10;
	vector<vector<double> > dataMatrix;
	vector<vector<vector<double> > > SuperMatrix;
	vector<double> J;
	double iflow=Convert::ToDouble(flowBox->Text);
	if(SplineButton->Checked)
	{
	i=0;
	k=0;
	vector<double> X1;
	string file;
	if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{	
	String^ filename=openFileDialog1->FileName;
	MarshalString(filename,file);
	}
	else
	{
		return;
	}

	vector<vector<double> > dataMatrix=fileRead(file);
	vector<vector<double> > YMatrix;
	i=1;
	while(i<dataMatrix[0].size())
	{
		X1.push_back(dataMatrix[0][i]);
		i++;
	}
	i=1;
	while(i<dataMatrix.size())
	{
		k=1;
		J.push_back(dataMatrix[i][0]);
		YMatrix.resize(YMatrix.size()+1);
		while(k<dataMatrix[0].size())
		{
			YMatrix[i-1].push_back(dataMatrix[i][k]);
			k++;
		}
		i++;
	}
	vector<vector<double> > VMatrix;
	
	i=0;
	while(i<YMatrix.size())
	{
		VMatrix=populateSpline2V(X1,YMatrix[i]);
		SuperMatrix.push_back(VMatrix);
		i++;
	}
	}
	double prevpowerloss;
	double powerslope;
	double cellheight;
	double cellwidth;
	double flowcap = Convert::ToDouble(flowCapBox->Text);
	while(jLow<=jHigh)
	{
	i=0;
	Vavg=0;
	SOC=SOCLow;
	flowavg=0;
	pumpEffAvg=0;
	shuntEffAvg=0;
	electrochemEffAvg=0;
	while (SOC<=SOCHigh)
	{
		if(SOC==SOCLow)
		{
			j=jLow;
			V=voltage(SOC,1,10e9,j,aspectratio,system,membrane,SuperMatrix,J);
			area=cellPower/(10*j*V);
			if (area<=0)
			{
				MessageBox::Show("Current Too High!");
				return;
			}
			
		}
		prevPower=0;
		powerAttained=false;
		while(!powerAttained)
		{
			flowres=area*100*100*flowdensres;
			//flow=flowres;
			optflow=false;
			optV=0;
			flow=flowres;
			powerproduced=0;
			prevpowerloss=0;
			if(interdigBox->Checked)
			{
			cellwidth = sqrt(area/aspectratio);
			cellheight = sqrt(area*aspectratio);
			digits = cellheight/digitSep;
			if(digits%2==0)
			{
				digits--;
			}
			//channels=(digits+1)/2;
			channels=1;
			}
			while(!optflow)
			{
				if(SplineButton->Checked)
				{
					flow=iflow*area*100*100*j/1000;
					optflow=true;
				}
				V=voltage(SOC,area,flow,j,aspectratio,system,membrane,SuperMatrix,J);
				powerloss=pLoss(area,flow,aspectratio,cwidth,cdepth,channels);
				if(interdigBox->Checked)
				{
					V=voltage(SOC,area/digits,flow/digits,j,1/(aspectratio*digits),system,membrane,SuperMatrix,J);
					//powerloss*=1/(aspectratio*digits*digits);
					powerloss = digits*pLoss(area/digits,flow/digits,1/(aspectratio*digits),cwidth,cdepth,channels);
					if ((flow/area)>=flowcap)
					{
						optflow=true;
					}
				}
				powerslope=slope(V*10*j*area,powerproduced,powerloss,prevpowerloss);

				if((powerslope<1)&&(V>0)&&(VEff=0))
				{

					MessageBox::Show("Can't support this current!");
					return;
				}
				powerproduced=V*j*10*area;
			
				if((powerproduced-powerloss)>0)
				{
					VEff=V*(powerproduced-powerloss)/powerproduced;
				}
				else
				{
					VEff=0;
				}
				if(VEff>=optV)
				{
					optV=VEff;
					flow+=flowres;
					
				}
				else
				{
					
					optflow=true;
				}
				prevpowerloss=powerloss;
			}
			if(interdigBox->Checked)
			{
			powerloss*=1/(aspectratio*digits*digits);
			}
			powerloss/=pDropFactor;
			pumpEff=powerloss/powerproduced;
			shuntEff=shuntLoss(V,area,cwidth,cdepth,aspectratio,channels,cells)/(cells*powerproduced);
			electrochemEff=1-(V/voltage(SOC,area,flow,0,aspectratio,system,membrane,SuperMatrix,J));

			powerloss+=(shuntLoss(V,area,cwidth,cdepth,aspectratio,channels,cells)/(cells));
			VEff=V*(powerproduced*sqrt(CE[membrane])-powerloss)/powerproduced;
			if(SOC==SOCLow)
			{
				//cout << area << endl;
				/*if(prevPower>j*VEff*area*10 && (VEff != 0))
				{
					decreasing=true;
					cout << jLow << "mA/cm^2 is impossible!" << endl;
				}
				else
				{*/	
				
				if(j*VEff*area*10>=cellPower)
				{
					powerAttained=true;
					highflow=flow;
				}
				else
				{

					/*if((j*VEff*area*10<prevPower)&&(cellPower>prevPower))
					{
						MessageBox::Show("Can't attain required power with this current!");
						return;
					
					}
					else
					{*/
						prevPower=j*VEff*area*10;
						areares=0.0005;
						//if(abs(area-area*cellPower/prevPower)>areares)
						//{
						if(abs(cellPower-prevPower)>(cellPower*0.5))
						{
						area*=cellPower/prevPower;
						}
						else
						{
							if(prevPower>cellPower)
							{
								area-=areares;
							}
							else
							{
								area+=areares;
							}
						}

					//}

				
				}
				//}
			}
			else
			{
				if(constpower->Checked)
				{
				if(j*VEff*area*10<=cellPower)
				{
					powerAttained=true;
				//	cout << "Flow: " << flow;
					
				}
				else
				{
					j-=jres;
				}
				}
				else
				{
					powerAttained=true;
				}
			}
			

		}

		pumpEffAvg+=pumpEff;
		shuntEffAvg+=shuntEff;
		electrochemEffAvg+=electrochemEff;
		
		Vavg+=VEff;
		i++;
		//cout << SOC << "\t" << flow << "\t" << j << "\t" << j*VEff*area*10*cells*stacks << "\t" << VEff << endl;
		SOC+=SOCres;;
			/*if (jLow==80)
		{
			dataGridView1->Rows->Add((flow/100/100/area).ToString());
		}*/
		flowavg+=flow;
	}
	
	flowavg/=i;
	Vavg/=i;
	pumpEffAvg/=i;
	shuntEffAvg/=i;
	electrochemEffAvg/=i;
	k = 0;
	while (k<3)
	{
	pcost[k]=powerCost(area,highflow,cells,aspectratio,power,stacks,system,membrane,globalInputs[0]/globalInputs[1])[k]*1000/power;
	
	if(ManuModelBox->Checked)
	{
		h=0;
		manuResults.clear();
		while(h<ProcessList->Count)
		{
		if(Double::TryParse(UnitsList[h]->Text,units))
			{
						units*=stacks;
			}
		pcost[k]+= evaluateProcess(Processes[h],globalInputs,globalInputs[0]/globalInputs[1]*units)*units*1000/power;
		manuStep=evaluateProcessV(Processes[h],globalInputs,globalInputs[0]/globalInputs[1]*units);
		manuStep[0]*=units*1000/power;
		manuStep[1]*=units*1000/power;
		manuStep[2]*=units*1000/power;
		manuStep[3]*=units*1000/power;
		manuStep[4]*=units*1000/power;
		manuStep[5]*=units*1000/power;
		manuResults.push_back(manuStep);
		h++;
		}
	}
	ecost[k]=energyCost(Vavg,SOCHigh-SOCLow,1500,system)[k];
	totcost[k]=pcost[k]/battime+ecost[k];
	k++;
	}
	
	k=0;
	while(k<3)
	{

		if(((jLow<=jCap[k]) && (totcost[k] < besttcost[k])) || besttcost[k]==0)
		{
			bestj[k]=jLow;

			besttcost[k]=totcost[k];
			bestecost[k]=ecost[k];
			bestpcost[k]=pcost[k];

			

		}
		k++;
	}
	k=0;
	if(((jLow<=jCap[2]) && (totcost[2] <= besttcost[2])) || besttcost[2]==0)
	{
		while(k<manustep)
		{
			manuSeriesX[k]=globalInputs[0]/globalInputs[1]*pow(kstep,k)/denom;
			manuSeriesY[k]=powerCost(area,highflow,cells,aspectratio,power,stacks,system,membrane,manuSeriesX[k])[2]*1000/(power*battime);
			manuSeriesY[k]+=ecost[2];
			k++;
		}

	}
	costChart->Series[0]->Points->AddXY(jLow,totcost[2]);
	progressBar->Increment(1);
	double onewayEff=1-pumpEffAvg-shuntEffAvg-electrochemEffAvg;
	dataOutput->Rows->Add(jLow,totcost[2].ToString("C"),totcost[1].ToString("C"),totcost[0].ToString("C"),Vavg.ToString("F3"),area.ToString("F4"),onewayEff.ToString("F3"),ecost[2].ToString("C"),ecost[1].ToString("C"),ecost[0].ToString("C"),pcost[2].ToString("C"),pcost[1].ToString("C"),pcost[0].ToString("C"),electrochemEffAvg,pumpEffAvg,shuntEffAvg,area,flowavg,digits);
	//cout << jLow << "mA/cm^2\tArea:" << area << "m^2\tPower Cost:" << pcost[1] << "$/kW\tEnergy Cost:" << ecost[1] << "$/kWh\tTotal Cost:" << totcost[1] << "$/kWh\tAverage VEff:" << Vavg << "V " << highflow << " " << electrochemEffAvg << " " << pumpEffAvg << " " << shuntEffAvg << endl;
	//datafile << jLow << "," << area << "," << pcost[2] << "," << ecost[2] << "," << totcost[2] << "," << Vavg << "," << endl;
	jLow+=jLowRes;
	}
	ofstream datafile;
	datafile.open("data.csv");
	i=0;
	k=0;
	datafile << "Equipment, Construction, Labour, Maintenance, Utilities, Consumables/Components"<<endl;
	while(i<manuResults.size())
	{
		k=0;
		while(k<manuResults[i].size())
		{
			datafile << manuResults[i][k]<<",";
			k++;
		}
		datafile <<endl;
		i++;
	}
	bestTable->Rows->Add("High current density",bestj[2],bestj[1],bestj[0]);
	bestTable->Rows->Add("Total $/kWh",besttcost[2].ToString("C"),besttcost[1].ToString("C"),besttcost[0].ToString("C"));
	bestTable->Rows->Add("Energy $/kWh",bestecost[2].ToString("C"),bestecost[1].ToString("C"),bestecost[0].ToString("C"));
	bestTable->Rows->Add("Power $/kW",bestpcost[2].ToString("C"),bestpcost[1].ToString("C"),bestpcost[0].ToString("C"));

	k=0;
	//units*=1/denom;
	manuChart->Series[0]->Points->Clear();
	manuChart2->Series[0]->Points->Clear();
	if(ManuModelBox->Checked)
	{
	while(k<manustep)
	{

		h=0;
		manucost=0;
		while(h<ProcessList->Count)
		{
		if(Double::TryParse(UnitsList[h]->Text,units))
			{
						units*=(cells*stacks);
			}
		manucost+= evaluateProcess(Processes[h],globalInputs,globalInputs[0]/globalInputs[1]*units*pow(kstep,k)/denom)*units*1000/power;
		h++;
		}
		manuOutputTable->Rows->Add((globalInputs[0]/globalInputs[1]*pow(kstep,k)/denom).ToString("F0"),(manuSeriesY[k]+manucost).ToString("C"),(besttcost[1]+manucost).ToString("C"),(besttcost[0]+manucost).ToString("C"));
		manuChart->Series[0]->Points->AddXY((globalInputs[0]*pow(kstep,k)/denom),(manuSeriesY[k]+manucost));
		manuChart2->Series[0]->Points->AddXY((globalInputs[0]*pow(kstep,k)/denom),((manuSeriesY[k]+manucost)/battime));
		//manuChart->Series[1]->Points->AddXY((globalInputs[0]/globalInputs[1]*pow(kstep,k)/denom),(besttcost[1]+manucost));
		//manuChart->Series[2]->Points->AddXY((globalInputs[0]/globalInputs[1]*pow(kstep,k)/denom),(besttcost[0]+manucost));
		units*=kstep;
		k++;
	}
	}
	//tabControl1->SelectedIndex=1;
	//cout << "Best scenario: " << bestj << "mA/cm^2, " << endl;
	//cout << "\tLow\tTyp\tHigh" << endl;
	//cout << "$/kW: " << bestpcost[0] << "\t" << bestpcost[1] << "\t"  << bestpcost[2] << endl;
	//cout << "$/kWh: " << bestecost[0] << "\t" << bestecost[1] << "\t"  << bestecost[2] << endl;
	//cout << "tot$/kWh: " << besttcost[0] << "\t" << besttcost[1] << "\t"  << besttcost[2] << endl;
	//datafile.close();
//	cin >> i;
				 
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void FeV_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void epBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 double power = Convert::ToDouble(powerBox->Text);
			 double ep = Convert::ToDouble(epBox->Text);
			 energyBox->Text=(power*ep).ToString();
		 }
private: System::Void energyBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 double power = Convert::ToDouble(powerBox->Text);
			 double energy = Convert::ToDouble(energyBox->Text);
			 epBox->Text=(energy/power).ToString();
		 }
private: System::Void progressBar_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void dataOutput_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void SplineButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			// intrplFile->ReadOnly(true);
		 }
private: System::Void dataGridView1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void CostParameters_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void ProcessAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ title = String::Concat("Module ",c.ToString());
				TabPage^ myTabPage = gcnew TabPage(title);
				ProcessTabs->TabPages->Add(myTabPage);
				ProcessList->Add(gcnew System::Windows::Forms::DataGridView()); 
				myTabPage->Controls->Add(this->ProcessList[c]);
				this->ProcessList[c]->Location=System::Drawing::Point(8,44);
				this->ProcessList[c]->Size = System::Drawing::Size(850, 130);
				this->ProcessList[c]->TabIndex=ProcessTabs->TabCount;
				this->ProcessList[c]->ColumnHeadersHeight=40;
				ProcessList[c]->Columns->Add("0","Process Description");
				ProcessList[c]->Columns->Add("1","Tool Footprint (m^2/tool)");
				ProcessList[c]->Columns->Add("2","Tool Capacity (cycle/tool-hr)");
				myTabPage->TabIndex=c;
				ProcessList[c]->Columns->Add("3","Capital Cost ($/tool)");
				ProcessList[c]->Columns->Add("4","DI Water Usage (gal/tool-hr)");
				ProcessList[c]->Columns->Add("5","Water Usage (gal/tool-hr)");
				ProcessList[c]->Columns->Add("6","Electricity (kW/tool)");
				ProcessList[c]->Columns->Add("7","Natural Gas (BTU/tool)");
				ProcessList[c]->Columns->Add("8","Staff required (#/tool)");
				ProcessList[c]->Columns->Add("9","Process Yield (%)");
				ProcessList[c]->Columns->Add("10","Tool Utilization (%)");
				ProcessList[c]->Columns->Add("11","Consumable 1 Title");
				ProcessList[c]->Columns->Add("12","Consumable 1 Cost ($/quantity)");
				ProcessList[c]->Columns->Add("13","Consumable 1 Cost (quantity/cycle)");
				//ProcessList[c]->Columns->Add("13","Other consumable (unit)");
				UnitsList->Add(gcnew System::Windows::Forms::TextBox()); 
				myTabPage->Controls->Add(this->UnitsList[c]);
				this->UnitsList[c]->Location=System::Drawing::Point(8,14);
				this->UnitsList[c]->Size = System::Drawing::Size(47, 20);
				this->UnitsList[c]->TabIndex=tabControl1->TabCount;
				Label^ newLabel = gcnew System::Windows::Forms::Label();
				myTabPage->Controls->Add(newLabel);
				newLabel->Text="# occurances of module per stack";
				newLabel->Location=System::Drawing::Point(70,16);
				newLabel->AutoSize=true;
				VariableList->Add(gcnew System::Windows::Forms::DataGridView()); 
				myTabPage->Controls->Add(this->VariableList[c]);
				this->VariableList[c]->Location=System::Drawing::Point(8,200);
				this->VariableList[c]->Size = System::Drawing::Size(400,200);
				this->VariableList[c]->TabIndex=ProcessTabs->TabCount;
				VariableList[c]->Columns->Add("0","Variable name");
				VariableList[c]->Columns->Add("1","Variable Units");
				VariableList[c]->Columns->Add("2","Variable Description");
				c++;

		 }
private: System::Void ProcessRename_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(ProcessTabs->TabCount > 0)
			 {
			 (ProcessTabs->SelectedTab)->Text=(ProcessName->Text);
			 }
		 }
private: System::Void ProcessSave_Click(System::Object^  sender, System::EventArgs^  e) {

	//save module
	string file;
	if(saveProcess->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{	
	String^ filename=saveProcess->FileName;
	MarshalString(filename,file);

	String^ title = String::Concat(filename);
	String^ Name = (ProcessTabs->SelectedTab)->Text;
	string name;
	MarshalString(Name,name);
	int k = ProcessTabs->SelectedTab->TabIndex;
	int i = 0;
	int j = 0;
	string x;
	ofstream datafile;
	datafile.open(file);
	while (i<(ProcessList[k]->RowCount-1))
	{
		j=0;
		while(j<(ProcessList[k]->ColumnCount))
		{
			MarshalString(Convert::ToString(this->ProcessList[k]->Rows[i]->Cells[j]->Value),x);
			datafile << x << "~";
			j++;
		}
		datafile << "n~0"<<endl;
		i++;
	}
	datafile.close();
	datafile.open("ModLibrary.dat",std::ios_base::app);
	datafile << endl << name << "~" << file << "~n~0";
	moduleLibraryBox->Items->Add(Name);
	}

			 
		 }


private: System::Void ProcessLoad_Click(System::Object^  sender, System::EventArgs^  e) {
			 
	string file;
	if(openProcess->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{	
	String^ filename=openProcess->FileName;
	MarshalString(filename,file);

	String^ title = String::Concat(filename);
				TabPage^ myTabPage = gcnew TabPage(title);
				ProcessTabs->TabPages->Add(myTabPage);
				ProcessList->Add(gcnew System::Windows::Forms::DataGridView()); 
				myTabPage->Controls->Add(this->ProcessList[c]);
				//myTabPage->TabIndex=c;
				this->ProcessList[c]->Location=System::Drawing::Point(8,64);
				this->ProcessList[c]->Size = System::Drawing::Size(800, 300);
				this->ProcessList[c]->TabIndex=ProcessTabs->TabCount;
				myTabPage->TabIndex=c;
				ProcessList[c]->Columns->Add("0","Process Description");
				ProcessList[c]->Columns->Add("1","Tool Footprint (m^2/tool)");
				ProcessList[c]->Columns->Add("2","Tool Capacity (cycle/tool-hr)");
				ProcessList[c]->Columns->Add("3","Capital Cost ($/tool)");
				ProcessList[c]->Columns->Add("4","DI Water Usage (gal/tool-hr)");
				ProcessList[c]->Columns->Add("5","Water Usage (gal/tool-hr)");
				ProcessList[c]->Columns->Add("6","Electricity (kW/tool)");
				ProcessList[c]->Columns->Add("7","Natural Gas (BTU/tool)");
				ProcessList[c]->Columns->Add("8","Staff required (#/tool)");
				ProcessList[c]->Columns->Add("9","Process Yield (%)");
				ProcessList[c]->Columns->Add("10","Tool Utilization (%)");
				ProcessList[c]->Columns->Add("11","Consumable 1 Title");
				ProcessList[c]->Columns->Add("12","Consumable 1 Cost ($/quantity)");
				ProcessList[c]->Columns->Add("13","Consumable 1 Cost (quantity/cycle)");
				//ProcessList[c]->Columns->Add("13","Other consumable (unit)");
				UnitsList->Add(gcnew System::Windows::Forms::TextBox()); 
				myTabPage->Controls->Add(this->UnitsList[c]);
				this->UnitsList[c]->Location=System::Drawing::Point(8,14);
				this->UnitsList[c]->Size = System::Drawing::Size(47, 20);
				this->UnitsList[c]->TabIndex=tabControl1->TabCount;
				Label^ newLabel = gcnew System::Windows::Forms::Label();
				myTabPage->Controls->Add(newLabel);
				newLabel->Text="# occurances of module per stack";
				newLabel->Location=System::Drawing::Point(70,16);
				newLabel->AutoSize=true;
				
				vector<vector<string > > dataMatrix=fileRead2(file);
				int i = 0;
				int j = 0;
				int consumables=1;
				System::String^ line;
				while (i<dataMatrix.size())
				{
					ProcessList[c]->Rows->Add();
					j=1;
					consumables=(dataMatrix[i].size()-11)/3;
					while(j<=consumables)
					{
						if(j>((ProcessList[c]->ColumnCount)-11)/3)
						{
							
							ProcessList[c]->Columns->Add((ProcessList[c]->ColumnCount).ToString(),"Consumable " + j +  " Title");
							ProcessList[c]->Columns->Add((ProcessList[c]->ColumnCount).ToString(),"Consumable " + j +  " Cost ($/quantity)");
							ProcessList[c]->Columns->Add((ProcessList[c]->ColumnCount).ToString(),"Consumable " + j +  " Cost (quantity/cycle)");

						}
						j++;
					}
					j=0;
					while (j<dataMatrix[i].size())
					{
						
						line = gcnew String(dataMatrix[i][j].c_str());
						ProcessList[c]->Rows[i]->Cells[j]->Value=line;
						
						j++;
					}
					i++;
				}
				VariableList->Add(gcnew System::Windows::Forms::DataGridView()); 
				myTabPage->Controls->Add(this->VariableList[c]);
				this->VariableList[c]->Location=System::Drawing::Point(8,364);
				this->VariableList[c]->Size = System::Drawing::Size(200,300);
				this->VariableList[c]->TabIndex=ProcessTabs->TabCount;
				VariableList[c]->Columns->Add("0","Variable name");
				VariableList[c]->Columns->Add("1","Variable Value");
				VariableList[c]->Columns->Add("2","Variable Units and Description");
				c++;

	}
	else
	{
		return;
	}
		 }
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void cellBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 //add process to module
			 if(c>0)
			 {
			 	int k = ProcessTabs->SelectedTab->TabIndex;
				ProcessList[k]->Rows->Add(PrcsDescBox->Text,Proc1->Text,Proc2->Text,Proc3->Text,Proc7->Text,Proc8->Text,Proc9->Text,Proc10->Text,Proc5->Text,Proc6->Text,Proc4->Text);
				int j = ProcessList[k]->RowCount-1;
				int consumables = consumableGrid->RowCount-1;
				int i = ((ProcessList[k]->ColumnCount)-11)/3;
				while (i < consumables)
				{
					i++;
							ProcessList[k]->Columns->Add((ProcessList[k]->ColumnCount).ToString(),"Consumable " + i.ToString() +  " Title");
							ProcessList[k]->Columns->Add((ProcessList[k]->ColumnCount).ToString(),"Consumable " + i.ToString() +  " Cost ($/quantity)");
							ProcessList[k]->Columns->Add((ProcessList[k]->ColumnCount).ToString(),"Consumable " + i.ToString() +  " Cost (quantity/cycle)");
				}
				i=0;
				while(i<consumables)
				{
					ProcessList[k]->Rows[j-1]->Cells[11+i*3]->Value=(consumableGrid->Rows[i]->Cells[0]->Value);
					ProcessList[k]->Rows[j-1]->Cells[12+i*3]->Value=(consumableGrid->Rows[i]->Cells[1]->Value);
					ProcessList[k]->Rows[j-1]->Cells[13+i*3]->Value=(consumableGrid->Rows[i]->Cells[2]->Value);
					i++;
				}
			 }
				//ProcessList[k]->Rows[j-1]->Cells[0]->Value="Hello";

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	string file;
	if(saveProcess->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{	
	String^ filename=saveProcess->FileName;
	MarshalString(filename,file);

	String^ title = String::Concat(filename);
	string x;
	ofstream datafile;
	datafile.open(file);
	vector<double> globalInputs;
	globalInputs.push_back(Convert::ToDouble(globalInputs0->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs1->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs2->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs3->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs4->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs5->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs6->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs7->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs8->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs9->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs10->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs11->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs12->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs13->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs14->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs15->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs16->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs17->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs18->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs19->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs20->Text));
globalInputs.push_back(0);
globalInputs.push_back(0);
globalInputs.push_back(Convert::ToDouble(globalInputs23->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs24->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs25->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs26->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs27->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs28->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs29->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs30->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs31->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs32->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs33->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs34->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs35->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs36->Text));
globalInputs.push_back(Convert::ToDouble(globalInputs37->Text));
int j=0;
		while(j<globalInputs.size())
		{
			//MarshalString(Convert::ToString(this->ProcessList[k]->Rows[i]->Cells[j]->Value),x);
			datafile << globalInputs[j] << "~n~0" << endl;
			j++;
		}
	datafile.close();
	}
	else
	{
		return;
	}

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 string file;
	if(openProcess->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{	
	String^ filename=openProcess->FileName;
	MarshalString(filename,file);

	String^ title = String::Concat(filename);
				
	ifstream datafile;
	datafile.open(file);
	string line;
				int i = 0;

				vector<string> globalInputs;
				while(datafile.good())
	{
		getline(datafile,line,'~');
		globalInputs.push_back(line);
		getline(datafile,line);
		i++;
	}


				globalInputs0->Text=gcnew String(globalInputs[0].c_str());
globalInputs1->Text=gcnew String(globalInputs[1].c_str() );
globalInputs2->Text=gcnew String(globalInputs[2].c_str());
globalInputs3->Text=gcnew String(globalInputs[3].c_str());
globalInputs4->Text=gcnew String(globalInputs[4].c_str());
globalInputs5->Text=gcnew String(globalInputs[5].c_str());
globalInputs6->Text=gcnew String(globalInputs[6].c_str());
globalInputs7->Text=gcnew String(globalInputs[7].c_str());
globalInputs8->Text=gcnew String(globalInputs[8].c_str());
globalInputs9->Text=gcnew String(globalInputs[9].c_str());
globalInputs10->Text=gcnew String(globalInputs[10].c_str());
globalInputs11->Text=gcnew String(globalInputs[11].c_str());
globalInputs12->Text=gcnew String(globalInputs[12].c_str());
globalInputs13->Text=gcnew String(globalInputs[13].c_str());
globalInputs14->Text=gcnew String(globalInputs[14].c_str());
globalInputs15->Text=gcnew String(globalInputs[15].c_str());
globalInputs16->Text=gcnew String(globalInputs[16].c_str());
globalInputs17->Text=gcnew String(globalInputs[17].c_str());
globalInputs18->Text=gcnew String(globalInputs[18].c_str());
globalInputs19->Text=gcnew String(globalInputs[19].c_str());
globalInputs20->Text=gcnew String(globalInputs[20].c_str());
//globalInputs21->Text=gcnew String(globalInputs[21].c_str());
//globalInputs22->Text=gcnew String(globalInputs[22].c_str());
globalInputs23->Text=gcnew String(globalInputs[23].c_str());
globalInputs24->Text=gcnew String(globalInputs[24].c_str());
globalInputs25->Text=gcnew String(globalInputs[25].c_str());
globalInputs26->Text=gcnew String(globalInputs[26].c_str());
globalInputs27->Text=gcnew String(globalInputs[27].c_str());
globalInputs28->Text=gcnew String(globalInputs[28].c_str());
globalInputs29->Text=gcnew String(globalInputs[29].c_str());
globalInputs30->Text=gcnew String(globalInputs[30].c_str());
globalInputs31->Text=gcnew String(globalInputs[31].c_str());
globalInputs32->Text=gcnew String(globalInputs[32].c_str());
globalInputs33->Text=gcnew String(globalInputs[33].c_str());
globalInputs34->Text=gcnew String(globalInputs[34].c_str());
globalInputs35->Text=gcnew String(globalInputs[35].c_str());
globalInputs36->Text=gcnew String(globalInputs[36].c_str());
globalInputs37->Text=gcnew String(globalInputs[37].c_str());


	}
	else
	{
		return;
	}
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 //add process from library
			 if(((processLibrary->SelectedIndices->Count)>0)&&((ProcessTabs->TabCount)>0))
			 {
			 int k = ProcessTabs->SelectedTab->TabIndex;
			 int j = 0 ;
			 j = processLibrary->SelectedIndices[0];
			 vector<vector<string>> library = fileRead2("Library.dat");
			 System::Collections::Generic::List<String^> process;
			 int i = 0;
			 int l = 0;
			
			 while(l<processLibrary->SelectedIndices->Count)
			 {
			 j = processLibrary->SelectedIndices[l];
			 process.Clear();
			 process.Add(gcnew String(library[j][0].c_str()));
			 i=ProcessList[k]->ColumnCount+1;
			 while(i<library[j].size())
			 {
				ProcessList[k]->Columns->Add((ProcessList[k]->ColumnCount).ToString(),"Consumable " + ((i-8)/3).ToString() +  " Title");
				ProcessList[k]->Columns->Add((ProcessList[k]->ColumnCount).ToString(),"Consumable " + ((i-8)/3).ToString() +  " Cost ($/quantity)");
				ProcessList[k]->Columns->Add((ProcessList[k]->ColumnCount).ToString(),"Consumable " + ((i-8)/3).ToString() +  " Cost (quantity/cycle)");
				i+=3;
			 }
			 i=1;
			 ProcessList[k]->Rows->Add();
			 while(i<library[j].size())
			 {
				 process.Add(gcnew String(library[j][i].c_str()));
				 ProcessList[k]->Rows[ProcessList[k]->RowCount-2]->Cells[i-1]->Value=process[i];
				 i++;
			 }
			 //ProcessList[k]->Rows->Add(process[1],process[2],process[3],process[4],process[5],process[6],process[7],process[8],process[9],process[10],process[11],process[12],process[13],process[14]);
			 l++;
			 }

			 }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			ofstream datafile;
			datafile.open("Library.dat",std::ios_base::app);
			
			String^ line = (PrcsDescBox->Text)+"~" + (PrcsDescBox->Text)+"~"+(Proc1->Text)+"~"+(Proc2->Text)+"~"+Proc3->Text+"~"+Proc7->Text+"~"+Proc8->Text+"~"+Proc9->Text+"~"+Proc10->Text+"~"+Proc5->Text+"~"+Proc6->Text+"~"+Proc4->Text;
			int i = 0;
			int consumables = consumableGrid->RowCount-1;
				while(i<consumables)
				{
					line+= "~" + (consumableGrid->Rows[i]->Cells[0]->Value);
					line+= "~" + (consumableGrid->Rows[i]->Cells[1]->Value);
					line+= "~" + (consumableGrid->Rows[i]->Cells[2]->Value);
					i++;
				}
			string x;
			MarshalString(line,x);
			datafile << endl <<x<<"~n~0";
			datafile.close();
			processLibrary->Items->Add((PrcsDescBox->Text));
			i++;
			 //save process to library

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 //add module from library
			 if(moduleLibraryBox->SelectedIndices->Count>0)
			 {

				vector<vector<string>> library = fileRead2("ModLibrary.dat");
				
				string file = library[moduleLibraryBox->SelectedIndices[0]][1];
				String^ title = gcnew String(library[moduleLibraryBox->SelectedIndices[0]][0].c_str());
				TabPage^ myTabPage = gcnew TabPage(title);
				ProcessTabs->TabPages->Add(myTabPage);
				ProcessList->Add(gcnew System::Windows::Forms::DataGridView()); 
				myTabPage->Controls->Add(this->ProcessList[c]);
				this->ProcessList[c]->Location=System::Drawing::Point(8,64);
				this->ProcessList[c]->Size = System::Drawing::Size(800, 300);
				this->ProcessList[c]->TabIndex=ProcessTabs->TabCount;
				myTabPage->TabIndex=c;
				ProcessList[c]->Columns->Add("0","Process Description");
				ProcessList[c]->Columns->Add("1","Tool Footprint (m^2/tool)");
				ProcessList[c]->Columns->Add("2","Tool Capacity (cycle/tool-hr)");
				ProcessList[c]->Columns->Add("3","Capital Cost ($/tool)");
				ProcessList[c]->Columns->Add("4","DI Water Usage (gal/tool-hr)");
				ProcessList[c]->Columns->Add("5","Water Usage (gal/tool-hr)");
				ProcessList[c]->Columns->Add("6","Electricity (kW/tool)");
				ProcessList[c]->Columns->Add("7","Natural Gas (BTU/tool)");
				ProcessList[c]->Columns->Add("8","Staff required (#/tool)");
				ProcessList[c]->Columns->Add("9","Process Yield (%)");
				ProcessList[c]->Columns->Add("10","Tool Utilization (%)");
				ProcessList[c]->Columns->Add("11","Consumable 1 Title");
				ProcessList[c]->Columns->Add("12","Consumable 1 Cost ($/quantity)");
				ProcessList[c]->Columns->Add("13","Consumable 1 Cost (quantity/cycle)");
				//ProcessList[c]->Columns->Add("13","Other consumable (unit)");
				UnitsList->Add(gcnew System::Windows::Forms::TextBox()); 
				myTabPage->Controls->Add(this->UnitsList[c]);
				this->UnitsList[c]->Location=System::Drawing::Point(8,14);
				this->UnitsList[c]->Size = System::Drawing::Size(47, 20);
				this->UnitsList[c]->TabIndex=tabControl1->TabCount;
				Label^ newLabel = gcnew System::Windows::Forms::Label();
				myTabPage->Controls->Add(newLabel);
				newLabel->Text="# occurances of module per stack";
				newLabel->Location=System::Drawing::Point(70,16);
				newLabel->AutoSize=true;
				
				vector<vector<string > > dataMatrix=fileRead2(file);
				int i = 0;
				int j = 0;
				int consumables=1;
				System::String^ line;
				while (i<dataMatrix.size())
				{
					ProcessList[c]->Rows->Add();
					j=1;
					consumables=(dataMatrix[i].size()-11)/3;
					while(j<=consumables)
					{
						if(j>((ProcessList[c]->ColumnCount)-11)/3)
						{
							
							ProcessList[c]->Columns->Add((ProcessList[c]->ColumnCount).ToString(),"Consumable " + j +  " Title");
							ProcessList[c]->Columns->Add((ProcessList[c]->ColumnCount).ToString(),"Consumable " + j +  " Cost ($/quantity)");
							ProcessList[c]->Columns->Add((ProcessList[c]->ColumnCount).ToString(),"Consumable " + j +  " Cost (quantity/cycle)");

						}
						j++;
					}
					j=0;
					while (j<dataMatrix[i].size())
					{
						
						line = gcnew String(dataMatrix[i][j].c_str());
						ProcessList[c]->Rows[i]->Cells[j]->Value=line;
						
						j++;
					}
					i++;
				}
				VariableList->Add(gcnew System::Windows::Forms::DataGridView()); 
				myTabPage->Controls->Add(this->VariableList[c]);
				this->VariableList[c]->Location=System::Drawing::Point(8,364);
				this->VariableList[c]->Size = System::Drawing::Size(200,300);
				this->VariableList[c]->TabIndex=ProcessTabs->TabCount;
				VariableList[c]->Columns->Add("0","Variable name");
				VariableList[c]->Columns->Add("1","Variable Value");
				VariableList[c]->Columns->Add("2","Variable Units and Description");
				c++;
			 }
		 }
private: System::Void dataGridView1_CellContentClick_2(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void label71_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ProcessTabs_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 if(ProcessTabs->TabCount > 0)
				 {ProcessRename->Text=("Rename " + (ProcessTabs->SelectedTab)->Text);
			 }
		 }
private: System::Void ProcDel_Click(System::Object^  sender, System::EventArgs^  e) {
			 int k = ProcessTabs->SelectedTab->TabIndex;
			 if( (ProcessList[k]->RowCount)>1)
			 {
			
			 int cellindex =  ProcessList[k]->SelectedCells[0]->RowIndex;
			 ProcessList[k]->Rows->RemoveAt(cellindex);
			 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(processLibrary->SelectedIndices->Count>0)
			 {
			 vector<vector<string>> library = fileRead2("Library.dat");
			 library.erase(library.begin()+processLibrary->SelectedIndices[0]);
             processLibrary->Items->RemoveAt(processLibrary->SelectedIndices[0]);
			 ofstream datafile;
			 datafile.open("Library.dat");
			 int i = 0;
			 int j = 0;
			 while(i<library.size())
			 {
				 j=0;
				 while(j<library[i].size())
				 {
					 datafile << library[i][j];
					 j++;
				 }
				 datafile << "~n~0" << endl;
				 i++;
			 }
			 datafile.close();
			 }
			
		 }
private: System::Void ProcessDelete_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(ProcessTabs->TabCount>0)
			 {
			 int k = ProcessTabs->SelectedTab->TabIndex;
			 ProcessList[k]->RowCount=1;
			 ProcessList[k]->Rows->Clear();
			 ProcessTabs->TabPages->Remove(ProcessTabs->SelectedTab);
			 }

		 }
private: System::Void processLibrary_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(processLibrary->SelectedIndices->Count==1)
			 {
				 vector<vector<string>> library = fileRead2("Library.dat");
				 String^ line = gcnew String(library[processLibrary->SelectedIndices[0]][0].c_str());
				 PrcsDescBox->Text=(line);
				 Proc1->Text=gcnew String(library[processLibrary->SelectedIndices[0]][2].c_str());
				 Proc2->Text=gcnew String(library[processLibrary->SelectedIndices[0]][3].c_str());
				 Proc3->Text=gcnew String(library[processLibrary->SelectedIndices[0]][4].c_str());
				 Proc7->Text=gcnew String(library[processLibrary->SelectedIndices[0]][5].c_str());
				 Proc8->Text=gcnew String(library[processLibrary->SelectedIndices[0]][6].c_str());
				 Proc9->Text=gcnew String(library[processLibrary->SelectedIndices[0]][7].c_str());
				 Proc10->Text=gcnew String(library[processLibrary->SelectedIndices[0]][8].c_str());
				 Proc5->Text=gcnew String(library[processLibrary->SelectedIndices[0]][9].c_str());
				 Proc6->Text=gcnew String(library[processLibrary->SelectedIndices[0]][10].c_str());
				 Proc4->Text=gcnew String(library[processLibrary->SelectedIndices[0]][11].c_str());
			 }


		 }
};
}

