#pragma once

namespace Project9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EyeTrackingGUI
	/// </summary>
	public ref class EyeTrackingGUI : public System::Windows::Forms::Form
	{
	public:
		EyeTrackingGUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EyeTrackingGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button28;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(559, 221);
			this->panel1->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(63, 123);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 65);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Violet";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(366, 123);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 65);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Blue";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(366, 21);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 65);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Orange";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(63, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 65);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Green";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->button5);
			this->panel2->Location = System::Drawing::Point(577, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(552, 221);
			this->panel2->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(219, 69);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(126, 66);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button5_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->button21);
			this->panel3->Controls->Add(this->button20);
			this->panel3->Controls->Add(this->button19);
			this->panel3->Controls->Add(this->button18);
			this->panel3->Controls->Add(this->button17);
			this->panel3->Controls->Add(this->button16);
			this->panel3->Controls->Add(this->button15);
			this->panel3->Controls->Add(this->button14);
			this->panel3->Controls->Add(this->button13);
			this->panel3->Controls->Add(this->button12);
			this->panel3->Controls->Add(this->button11);
			this->panel3->Controls->Add(this->button10);
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(12, 239);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(559, 369);
			this->panel3->TabIndex = 2;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(445, 287);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(107, 75);
			this->button21->TabIndex = 16;
			this->button21->Text = L"=";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button21_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(445, 211);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(107, 75);
			this->button20->TabIndex = 15;
			this->button20->Text = L"-\r\n";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button20_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(445, 136);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(107, 75);
			this->button19->TabIndex = 14;
			this->button19->Text = L"+";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button19_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(445, 61);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(107, 75);
			this->button18->TabIndex = 13;
			this->button18->Text = L"x";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button18_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(334, 262);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(110, 100);
			this->button17->TabIndex = 12;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button17_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(334, 161);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(110, 100);
			this->button16->TabIndex = 11;
			this->button16->Text = L"C";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button16_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(334, 61);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(110, 100);
			this->button15->TabIndex = 10;
			this->button15->Text = L"9";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button15_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(223, 262);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(110, 100);
			this->button14->TabIndex = 9;
			this->button14->Text = L"8";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button14_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(223, 162);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(110, 100);
			this->button13->TabIndex = 8;
			this->button13->Text = L"7\r\n";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button13_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(223, 61);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(110, 100);
			this->button12->TabIndex = 7;
			this->button12->Text = L"6";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button12_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(110, 262);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(110, 100);
			this->button11->TabIndex = 6;
			this->button11->Text = L"5\r\n";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button11_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(110, 162);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(110, 100);
			this->button10->TabIndex = 5;
			this->button10->Text = L"4\r\n";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button10_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(110, 61);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(110, 100);
			this->button9->TabIndex = 4;
			this->button9->Text = L"3\r\n";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(-2, 262);
			this->button8->Name = L"button8";
			this->button8->Padding = System::Windows::Forms::Padding(4, 12, 4, 0);
			this->button8->Size = System::Drawing::Size(110, 100);
			this->button8->TabIndex = 3;
			this->button8->Text = L"2\r\n\r\n";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(-2, 161);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(110, 100);
			this->button7->TabIndex = 2;
			this->button7->Text = L"1\r\n";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button7_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(-2, 60);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(110, 100);
			this->button6->TabIndex = 1;
			this->button6->Text = L"0\r\n";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(3, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(549, 50);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->button29);
			this->panel4->Controls->Add(this->button28);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->button27);
			this->panel4->Controls->Add(this->button26);
			this->panel4->Controls->Add(this->button25);
			this->panel4->Controls->Add(this->button24);
			this->panel4->Controls->Add(this->button23);
			this->panel4->Controls->Add(this->button22);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Location = System::Drawing::Point(577, 239);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(538, 369);
			this->panel4->TabIndex = 3;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(411, 269);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(120, 80);
			this->button29->TabIndex = 10;
			this->button29->Text = L"Fact 8";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button29_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(408, 183);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(120, 80);
			this->button28->TabIndex = 9;
			this->button28->Text = L"Fact 4";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button28_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Caladea", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(30, 56);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(487, 121);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(282, 269);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(120, 80);
			this->button27->TabIndex = 7;
			this->button27->Text = L"Fact 7";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button27_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(156, 269);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(120, 80);
			this->button26->TabIndex = 6;
			this->button26->Text = L"Fact 6";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button26_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(30, 269);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(120, 80);
			this->button25->TabIndex = 5;
			this->button25->Text = L"Fact 5";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button25_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(282, 183);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(120, 80);
			this->button24->TabIndex = 4;
			this->button24->Text = L"Fact 3";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button24_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(156, 183);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(120, 80);
			this->button23->TabIndex = 3;
			this->button23->Text = L"Fact 2";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button23_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(30, 183);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(120, 80);
			this->button22->TabIndex = 2;
			this->button22->Text = L"Fact 1";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::button22_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ink Free", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(202, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Facts";
			this->label1->Click += gcnew System::EventHandler(this, &EyeTrackingGUI::label1_Click);
			// 
			// EyeTrackingGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1141, 610);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"EyeTrackingGUI";
			this->Text = L"EyeTrackingGUI";
			this->Load += gcnew System::EventHandler(this, &EyeTrackingGUI::EyeTrackingGUI_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		double firstnum;
		double secondnum;
		double result;
		Char operation;

	private: System::Void EyeTrackingGUI_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panel1->BackColor = System::Drawing::Color::Green;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panel1->BackColor = System::Drawing::Color::Violet;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panel1->BackColor = System::Drawing::Color::Orange;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panel1->BackColor = System::Drawing::Color::Blue;
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0")
		{
			textBox1->Text = "0";
		}
		else
		{
			textBox1->Text = (textBox1->Text) + "0";
		}

	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0")
		{
			textBox1->Text = "7";
		}
		else
		{
			textBox1->Text = textBox1->Text + "7";
		}

	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0")
		{
			textBox1->Text = "9";
		}
		else
		{
			textBox1->Text = textBox1->Text + "9";
		}

	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0")
		{
			textBox1->Text = "3";
		}
		else
		{
			textBox1->Text = (textBox1->Text) + "3";
		}


	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0")
		{
			textBox1->Text = "1";
		}
		else
		{
			textBox1->Text = (textBox1->Text) + "1";
		}

	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0")
		{
			textBox1->Text = "2";
		}
		else
		{
			textBox1->Text = (textBox1->Text) + "2";
		}

	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0")
		{
			textBox1->Text = "4";
		}
		else
		{
			textBox1->Text = (textBox1->Text) + "4";
		}

	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0")
		{
			textBox1->Text = "5";
		}
		else
		{
			textBox1->Text = (textBox1->Text) + "5";
		}

	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0")
		{
			textBox1->Text = "6";
		}
		else
		{
			textBox1->Text = (textBox1->Text) + "6";
		}

	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0")
		{
			textBox1->Text = "8";
		}
		else
		{
			textBox1->Text = (textBox1->Text) + "8";
		}

	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {

		firstnum = Convert::ToDouble(textBox1->Text);
		textBox1->Text = "0";
		operation = '/';

	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {

		firstnum = Convert::ToDouble(textBox1->Text);
		textBox1->Text = "0";
		operation = 'X';
	}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {

		firstnum = Convert::ToDouble(textBox1->Text);
		textBox1->Text = "0";
		operation = '+';
	}
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {

		firstnum = Convert::ToDouble(textBox1->Text);
		textBox1->Text = "0";
		operation = '-';
	}
	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
		secondnum = Convert::ToDouble(textBox1->Text);
		switch (operation)
		{
		case '+':
			result = firstnum + secondnum;
			textBox1->Text = System::Convert::ToString(result);
			break;
		case '-':
			result = firstnum - secondnum;
			textBox1->Text = System::Convert::ToString(result);
			break;
		case 'X':
			result = firstnum * secondnum;
			textBox1->Text = System::Convert::ToString(result);
			break;
		case '/':
			result = firstnum / secondnum;
			textBox1->Text = System::Convert::ToString(result);
			break;

		}

	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = "0";
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = " 	The Apollo astronauts' footprints on the moon will probably stay there for at least 100 million years as moon has no atmosphere";
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = " 	A snail can sleep for three years. ";
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = " A Blue whale's tongue weighs more than an elephant. ";
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = " If you somehow found a way to extract all of the gold from the bubbling core of our lovely little planet, you would be able to cover all of the land in a layer of gold up to your knees. ";
}

private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = " A CAT'S TAIL CONTAINS NEARLY 10 PERCENT OF ALL THE BONES IN ITS BODY. ";
}

private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = " The calcium in our bones and iron in our blood come from ancient explosions of the giant stars.";

}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = " The Night Sky Will Someday Be Completely Black";
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = " One day on Venus is longer than one year on Earth ";
}
};
}
		
#pragma endregion


