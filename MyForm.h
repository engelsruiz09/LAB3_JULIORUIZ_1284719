#pragma once
#include "MyForm.h"
#include "multirecursivo.h"
#include "multisumaiterativo.h"

namespace LAB3JULIORUIZ1284719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ bIENVENIDOSELECCIONEUNAOPCIONDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eJERCICIO2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eJERCICIO3ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ sALIRToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ejerciciosIterativosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eJERCICIO1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eJERCICIO2ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ eJERCICIO3ToolStripMenuItem1;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->bIENVENIDOSELECCIONEUNAOPCIONDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eJERCICIO2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eJERCICIO3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sALIRToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ejerciciosIterativosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eJERCICIO1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eJERCICIO2ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eJERCICIO3ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(-11, 81);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(420, 63);
			this->label1->TabIndex = 3;
			this->label1->Text = L"TAREA LAB NO.3";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DarkOrange;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->bIENVENIDOSELECCIONEUNAOPCIONDToolStripMenuItem,
					this->sALIRToolStripMenuItem1, this->ejerciciosIterativosToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(398, 29);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// bIENVENIDOSELECCIONEUNAOPCIONDToolStripMenuItem
			// 
			this->bIENVENIDOSELECCIONEUNAOPCIONDToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->oPToolStripMenuItem,
					this->eJERCICIO2ToolStripMenuItem, this->eJERCICIO3ToolStripMenuItem
			});
			this->bIENVENIDOSELECCIONEUNAOPCIONDToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bIENVENIDOSELECCIONEUNAOPCIONDToolStripMenuItem->Name = L"bIENVENIDOSELECCIONEUNAOPCIONDToolStripMenuItem";
			this->bIENVENIDOSELECCIONEUNAOPCIONDToolStripMenuItem->Size = System::Drawing::Size(165, 25);
			this->bIENVENIDOSELECCIONEUNAOPCIONDToolStripMenuItem->Text = L"Ejercicios Recursivos";
			// 
			// oPToolStripMenuItem
			// 
			this->oPToolStripMenuItem->Name = L"oPToolStripMenuItem";
			this->oPToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->oPToolStripMenuItem->Text = L"EJERCICIO 1";
			this->oPToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oPToolStripMenuItem_Click);
			// 
			// eJERCICIO2ToolStripMenuItem
			// 
			this->eJERCICIO2ToolStripMenuItem->Name = L"eJERCICIO2ToolStripMenuItem";
			this->eJERCICIO2ToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->eJERCICIO2ToolStripMenuItem->Text = L"EJERCICIO 2";
			// 
			// eJERCICIO3ToolStripMenuItem
			// 
			this->eJERCICIO3ToolStripMenuItem->Name = L"eJERCICIO3ToolStripMenuItem";
			this->eJERCICIO3ToolStripMenuItem->Size = System::Drawing::Size(165, 26);
			this->eJERCICIO3ToolStripMenuItem->Text = L"EJERCICIO 3";
			// 
			// sALIRToolStripMenuItem1
			// 
			this->sALIRToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sALIRToolStripMenuItem1->Name = L"sALIRToolStripMenuItem1";
			this->sALIRToolStripMenuItem1->Size = System::Drawing::Size(75, 25);
			this->sALIRToolStripMenuItem1->Text = L"SALIR :(";
			this->sALIRToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::sALIRToolStripMenuItem1_Click);
			// 
			// ejerciciosIterativosToolStripMenuItem
			// 
			this->ejerciciosIterativosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->eJERCICIO1ToolStripMenuItem,
					this->eJERCICIO2ToolStripMenuItem1, this->eJERCICIO3ToolStripMenuItem1
			});
			this->ejerciciosIterativosToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ejerciciosIterativosToolStripMenuItem->Name = L"ejerciciosIterativosToolStripMenuItem";
			this->ejerciciosIterativosToolStripMenuItem->Size = System::Drawing::Size(154, 25);
			this->ejerciciosIterativosToolStripMenuItem->Text = L"Ejercicios Iterativos";
			// 
			// eJERCICIO1ToolStripMenuItem
			// 
			this->eJERCICIO1ToolStripMenuItem->Name = L"eJERCICIO1ToolStripMenuItem";
			this->eJERCICIO1ToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->eJERCICIO1ToolStripMenuItem->Text = L"EJERCICIO1";
			this->eJERCICIO1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::eJERCICIO1ToolStripMenuItem_Click);
			// 
			// eJERCICIO2ToolStripMenuItem1
			// 
			this->eJERCICIO2ToolStripMenuItem1->Name = L"eJERCICIO2ToolStripMenuItem1";
			this->eJERCICIO2ToolStripMenuItem1->Size = System::Drawing::Size(180, 26);
			this->eJERCICIO2ToolStripMenuItem1->Text = L"EJERCICIO2";
			// 
			// eJERCICIO3ToolStripMenuItem1
			// 
			this->eJERCICIO3ToolStripMenuItem1->Name = L"eJERCICIO3ToolStripMenuItem1";
			this->eJERCICIO3ToolStripMenuItem1->Size = System::Drawing::Size(180, 26);
			this->eJERCICIO3ToolStripMenuItem1->Text = L"EJERCICIO3";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(398, 205);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void oPToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	multirecursivo^ imprimir1 = gcnew multirecursivo();//el objeto
	imprimir1->ShowDialog();
	this->Show();
}
private: System::Void sALIRToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void eJERCICIO1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	multisumaiterativo^ imprimir2 = gcnew multisumaiterativo();//el objeto
	imprimir2->ShowDialog();
	this->Show();
}
};
}
