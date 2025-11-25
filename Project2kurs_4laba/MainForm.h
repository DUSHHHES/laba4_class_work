#pragma once

#include "Entities.h"
#include "AddEditTariffForm.h"

namespace Project2kurs_4laba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			tariffs = gcnew List<Tariff^>();
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		List<Tariff^>^ tariffs;

	private: System::Windows::Forms::DataGridView^ dataGridViewTariffs;
	private: System::Windows::Forms::Button^ buttonAddTariff;
	private: System::Windows::Forms::Button^ buttonEditTariff;
	private: System::Windows::Forms::Button^ buttonDeleteTariff;
	private: System::Windows::Forms::Button^ buttonSortTariffs;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ Ù‡ÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Á‡„ÛÁËÚ¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code

		   void InitializeComponent(void)
		   {
			   this->dataGridViewTariffs = (gcnew System::Windows::Forms::DataGridView());
			   this->buttonAddTariff = (gcnew System::Windows::Forms::Button());
			   this->buttonEditTariff = (gcnew System::Windows::Forms::Button());
			   this->buttonDeleteTariff = (gcnew System::Windows::Forms::Button());
			   this->buttonSortTariffs = (gcnew System::Windows::Forms::Button());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->Ù‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->Á‡„ÛÁËÚ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			   this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTariffs))->BeginInit();
			   this->menuStrip1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // dataGridViewTariffs
			   // 
			   this->dataGridViewTariffs->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridViewTariffs->Location = System::Drawing::Point(12, 40);
			   this->dataGridViewTariffs->Name = L"dataGridViewTariffs";
			   this->dataGridViewTariffs->RowHeadersWidth = 82;
			   this->dataGridViewTariffs->RowTemplate->Height = 33;
			   this->dataGridViewTariffs->Size = System::Drawing::Size(1000, 500);
			   this->dataGridViewTariffs->TabIndex = 0;
			   // 
			   // buttonAddTariff
			   // 
			   this->buttonAddTariff->Location = System::Drawing::Point(1020, 40);
			   this->buttonAddTariff->Name = L"buttonAddTariff";
			   this->buttonAddTariff->Size = System::Drawing::Size(230, 50);
			   this->buttonAddTariff->TabIndex = 1;
			   this->buttonAddTariff->Text = L"ƒÓ·‡‚ËÚ¸";
			   this->buttonAddTariff->UseVisualStyleBackColor = true;
			   this->buttonAddTariff->Click += gcnew System::EventHandler(this, &MainForm::buttonAddTariff_Click);
			   // 
			   // buttonEditTariff
			   // 
			   this->buttonEditTariff->Location = System::Drawing::Point(1020, 100);
			   this->buttonEditTariff->Name = L"buttonEditTariff";
			   this->buttonEditTariff->Size = System::Drawing::Size(230, 50);
			   this->buttonEditTariff->TabIndex = 2;
			   this->buttonEditTariff->Text = L"»ÁÏÂÌËÚ¸";
			   this->buttonEditTariff->UseVisualStyleBackColor = true;
			   this->buttonEditTariff->Click += gcnew System::EventHandler(this, &MainForm::buttonEditTariff_Click);
			   // 
			   // buttonDeleteTariff
			   // 
			   this->buttonDeleteTariff->Location = System::Drawing::Point(1020, 160);
			   this->buttonDeleteTariff->Name = L"buttonDeleteTariff";
			   this->buttonDeleteTariff->Size = System::Drawing::Size(230, 50);
			   this->buttonDeleteTariff->TabIndex = 3;
			   this->buttonDeleteTariff->Text = L"”‰‡ÎËÚ¸";
			   this->buttonDeleteTariff->UseVisualStyleBackColor = true;
			   this->buttonDeleteTariff->Click += gcnew System::EventHandler(this, &MainForm::buttonDeleteTariff_Click);
			   // 
			   // buttonSortTariffs
			   // 
			   this->buttonSortTariffs->Location = System::Drawing::Point(1020, 220);
			   this->buttonSortTariffs->Name = L"buttonSortTariffs";
			   this->buttonSortTariffs->Size = System::Drawing::Size(230, 73);
			   this->buttonSortTariffs->TabIndex = 4;
			   this->buttonSortTariffs->Text = L"—ÓÚËÓ‚‡Ú¸ ÔÓ ËÏÂÌË";
			   this->buttonSortTariffs->UseVisualStyleBackColor = true;
			   this->buttonSortTariffs->Click += gcnew System::EventHandler(this, &MainForm::buttonSortTariffs_Click);
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			   this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Ù‡ÈÎToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(1264, 40);
			   this->menuStrip1->TabIndex = 5;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // Ù‡ÈÎToolStripMenuItem
			   // 
			   this->Ù‡ÈÎToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->Á‡„ÛÁËÚ¸ToolStripMenuItem,
					   this->ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem
			   });
			   this->Ù‡ÈÎToolStripMenuItem->Name = L"Ù‡ÈÎToolStripMenuItem";
			   this->Ù‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(90, 36);
			   this->Ù‡ÈÎToolStripMenuItem->Text = L"‘‡ÈÎ";
			   // 
			   // Á‡„ÛÁËÚ¸ToolStripMenuItem
			   // 
			   this->Á‡„ÛÁËÚ¸ToolStripMenuItem->Name = L"Á‡„ÛÁËÚ¸ToolStripMenuItem";
			   this->Á‡„ÛÁËÚ¸ToolStripMenuItem->Size = System::Drawing::Size(321, 44);
			   this->Á‡„ÛÁËÚ¸ToolStripMenuItem->Text = L"«‡„ÛÁËÚ¸...";
			   this->Á‡„ÛÁËÚ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::Á‡„ÛÁËÚ¸ToolStripMenuItem_Click);
			   // 
			   // ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem
			   // 
			   this->ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem->Name = L"ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem";
			   this->ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem->Size = System::Drawing::Size(321, 44);
			   this->ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem->Text = L"—Óı‡ÌËÚ¸ Í‡Í...";
			   this->ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem_Click);
			   // 
			   // openFileDialog1
			   // 
			   this->openFileDialog1->FileName = L"openFileDialog1";
			   // 
			   // MainForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1264, 561);
			   this->Controls->Add(this->buttonSortTariffs);
			   this->Controls->Add(this->buttonDeleteTariff);
			   this->Controls->Add(this->buttonEditTariff);
			   this->Controls->Add(this->buttonAddTariff);
			   this->Controls->Add(this->dataGridViewTariffs);
			   this->Controls->Add(this->menuStrip1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"MainForm";
			   this->Text = L"”Ô‡‚ÎÂÌËÂ „ÛÁÓÔÂÂ‚ÓÁÍ‡ÏË";
			   this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTariffs))->EndInit();
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private:

		void RefreshTariffGrid() {// Œ˜Ë˘‡ÂÚ DataGridView Ë Á‡ÔÓÎÌˇÂÚ Â„Ó ‡ÍÚÛ‡Î¸Ì˚ÏË ‰‡ÌÌ˚ÏË ËÁ tariffs
			dataGridViewTariffs->Rows->Clear();
			for each (Tariff ^ tariff in tariffs) {
				dataGridViewTariffs->Rows->Add(
					tariff->Name,
					tariff->PricePerKm,
					tariff->Discount,
					tariff->Type.ToString()
				);
			}
		}

		int CompareTariffsByName(Tariff^ a, Tariff^ b) {// —ÓÚËÓ‚Í‡ ‰‡ÌÌ˚ı
			return String::Compare(a->Name, b->Name);
		}

		System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
			dataGridViewTariffs->ColumnCount = 4;
			dataGridViewTariffs->Columns[0]->Name = "Õ‡Á‚‡ÌËÂ";
			dataGridViewTariffs->Columns[1]->Name = "÷ÂÌ‡/ÍÏ";
			dataGridViewTariffs->Columns[2]->Name = "—ÍË‰Í‡, %";
			dataGridViewTariffs->Columns[3]->Name = "“ËÔ „ÛÁ‡";

			dataGridViewTariffs->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewTariffs->AllowUserToAddRows = false;
			dataGridViewTariffs->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
			dataGridViewTariffs->RowHeadersVisible = false;
			dataGridViewTariffs->MultiSelect = false;
			dataGridViewTariffs->ReadOnly = true;
		}

		System::Void buttonAddTariff_Click(System::Object^ sender, System::EventArgs^ e) {
			AddEditTariffForm^ addForm = gcnew AddEditTariffForm();
			if (addForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				tariffs->Add(addForm->ResultTariff);
				RefreshTariffGrid();
			}
		}

		System::Void buttonEditTariff_Click(System::Object^ sender, System::EventArgs^ e) {
			if (dataGridViewTariffs->CurrentRow == nullptr) {
				MessageBox::Show("œÓÊ‡ÎÛÈÒÚ‡, ‚˚·ÂËÚÂ Ú‡ËÙ ‰Îˇ Â‰‡ÍÚËÓ‚‡ÌËˇ.", "¬ÌËÏ‡ÌËÂ", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			int index = dataGridViewTariffs->CurrentRow->Index;
			Tariff^ selectedTariff = tariffs[index];

			AddEditTariffForm^ editForm = gcnew AddEditTariffForm(selectedTariff);
			if (editForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				tariffs[index] = editForm->ResultTariff;
				RefreshTariffGrid();
			}
		}

		System::Void buttonDeleteTariff_Click(System::Object^ sender, System::EventArgs^ e) {
			if (dataGridViewTariffs->CurrentRow == nullptr) {
				MessageBox::Show("œÓÊ‡ÎÛÈÒÚ‡, ‚˚·ÂËÚÂ Ú‡ËÙ ‰Îˇ Û‰‡ÎÂÌËˇ.", "¬ÌËÏ‡ÌËÂ", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			int index = dataGridViewTariffs->CurrentRow->Index;

			String^ message = "¬˚ Û‚ÂÂÌ˚, ˜ÚÓ ıÓÚËÚÂ Û‰‡ÎËÚ¸ Ú‡ËÙ '" + tariffs[index]->Name + "'?";
			if (MessageBox::Show(message, "œÓ‰Ú‚ÂÊ‰ÂÌËÂ Û‰‡ÎÂÌËˇ", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				tariffs->RemoveAt(index);
				RefreshTariffGrid();
			}
		}

		System::Void buttonSortTariffs_Click(System::Object^ sender, System::EventArgs^ e) {
			tariffs->Sort(gcnew Comparison<Tariff^>(this, &MainForm::CompareTariffsByName));
			RefreshTariffGrid();
		}

	
		System::Void Á‡„ÛÁËÚ¸ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {// «‡„ÛÁËÚ¸ Ò ÔÓÏÓ˘¸˛ openFileDialog
			openFileDialog1->Filter = "CSV-Ù‡ÈÎ˚ (*.csv)|*.csv|¬ÒÂ Ù‡ÈÎ˚ (*.*)|*.*";
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				try {
					StreamReader^ reader = gcnew StreamReader(openFileDialog1->FileName);
					tariffs->Clear();
					String^ line;
					while ((line = reader->ReadLine()) != nullptr) {
						array<String^>^ parts = line->Split(';');
						if (parts->Length == 4) {
							Tariff^ newTariff = gcnew Tariff();
							newTariff->Name = parts[0];
							newTariff->PricePerKm = Double::Parse(parts[1]);
							newTariff->Discount = Double::Parse(parts[2]);
							newTariff->Type = (CargoType)Enum::Parse(CargoType::typeid, parts[3]);
							tariffs->Add(newTariff);
						}
					}
					reader->Close();
					RefreshTariffGrid();
					MessageBox::Show("ƒ‡ÌÌ˚Â ÛÒÔÂ¯ÌÓ Á‡„ÛÊÂÌ˚.", "”ÒÔÂı", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Œ¯Ë·Í‡ ÔË ˜ÚÂÌËË Ù‡ÈÎ‡: " + ex->Message, "Œ¯Ë·Í‡", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}

		
		System::Void ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {// ŒÚÍ˚Ú¸ Ò ÔÓÏÓ˘¸˛ saveFileDialog
			saveFileDialog1->Filter = "CSV-Ù‡ÈÎ˚ (*.csv)|*.csv|¬ÒÂ Ù‡ÈÎ˚ (*.*)|*.*";
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				try {
					StreamWriter^ writer = gcnew StreamWriter(saveFileDialog1->FileName);
					for each (Tariff ^ tariff in tariffs) {
						writer->WriteLine(String::Format("{0};{1};{2};{3}",
							tariff->Name,
							tariff->PricePerKm.ToString(),
							tariff->Discount.ToString(),
							tariff->Type.ToString()
						));
					}
					writer->Close();
					MessageBox::Show("ƒ‡ÌÌ˚Â ÛÒÔÂ¯ÌÓ ÒÓı‡ÌÂÌ˚.", "”ÒÔÂı", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Œ¯Ë·Í‡ ÔË ÒÓı‡ÌÂÌËË Ù‡ÈÎ‡: " + ex->Message, "Œ¯Ë·Í‡", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
	};
}