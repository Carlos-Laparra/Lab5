#include <stdio.h>     
#include <stdlib.h>     
#include <time.h> 
#pragma once

namespace Lab5CarlosLaparra1031120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Threading;

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
	private: System::Windows::Forms::Label^ lbl_Titulo;
	protected:
	private: System::Windows::Forms::Label^ lbl_Instrucciones;
	private: System::Windows::Forms::TextBox^ txt_Cantidad_Numeros;
	private: System::Windows::Forms::RichTextBox^ rtxt_Arreglo;
	private: System::Windows::Forms::Label^ lbl_Arreglo;
	private: System::Windows::Forms::Label^ lbl_Elegir_Metodo;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ lbl_Numero_Buscar;
	private: System::Windows::Forms::TextBox^ txt_Numero_Buscar;
	private: System::Windows::Forms::Label^ lbl_Posicion;
	private: System::Windows::Forms::Label^ lbl_Resultado_Posicion;
	private: System::Windows::Forms::Button^ btn_Aceptar;
	private: System::Windows::Forms::Button^ btn_Buscar;
	private: System::Windows::Forms::Label^ lbl_Modo_Arreglo;
	private: System::Windows::Forms::RichTextBox^ rtxt_Arreglo_Binario;
	private: System::Windows::Forms::Label^ lbl_Secuencial;
	private: System::Windows::Forms::Label^ lbl_Binario;
	private: System::Windows::Forms::Label^ lbl_Tiempo_Titulo;
	private: System::Windows::Forms::Label^ lbl_tiempo;




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
			this->lbl_Titulo = (gcnew System::Windows::Forms::Label());
			this->lbl_Instrucciones = (gcnew System::Windows::Forms::Label());
			this->txt_Cantidad_Numeros = (gcnew System::Windows::Forms::TextBox());
			this->rtxt_Arreglo = (gcnew System::Windows::Forms::RichTextBox());
			this->lbl_Arreglo = (gcnew System::Windows::Forms::Label());
			this->lbl_Elegir_Metodo = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_Numero_Buscar = (gcnew System::Windows::Forms::Label());
			this->txt_Numero_Buscar = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Posicion = (gcnew System::Windows::Forms::Label());
			this->lbl_Resultado_Posicion = (gcnew System::Windows::Forms::Label());
			this->btn_Aceptar = (gcnew System::Windows::Forms::Button());
			this->btn_Buscar = (gcnew System::Windows::Forms::Button());
			this->lbl_Modo_Arreglo = (gcnew System::Windows::Forms::Label());
			this->rtxt_Arreglo_Binario = (gcnew System::Windows::Forms::RichTextBox());
			this->lbl_Secuencial = (gcnew System::Windows::Forms::Label());
			this->lbl_Binario = (gcnew System::Windows::Forms::Label());
			this->lbl_Tiempo_Titulo = (gcnew System::Windows::Forms::Label());
			this->lbl_tiempo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_Titulo
			// 
			this->lbl_Titulo->AutoSize = true;
			this->lbl_Titulo->Font = (gcnew System::Drawing::Font(L"Nobile", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Titulo->Location = System::Drawing::Point(218, 35);
			this->lbl_Titulo->Name = L"lbl_Titulo";
			this->lbl_Titulo->Size = System::Drawing::Size(294, 38);
			this->lbl_Titulo->TabIndex = 0;
			this->lbl_Titulo->Text = L"Métodos de búsqueda";
			// 
			// lbl_Instrucciones
			// 
			this->lbl_Instrucciones->AutoSize = true;
			this->lbl_Instrucciones->Font = (gcnew System::Drawing::Font(L"Nobile", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Instrucciones->Location = System::Drawing::Point(12, 121);
			this->lbl_Instrucciones->Name = L"lbl_Instrucciones";
			this->lbl_Instrucciones->Size = System::Drawing::Size(357, 25);
			this->lbl_Instrucciones->TabIndex = 1;
			this->lbl_Instrucciones->Text = L"Ingrese cuantos números desea ingresar";
			// 
			// txt_Cantidad_Numeros
			// 
			this->txt_Cantidad_Numeros->Location = System::Drawing::Point(442, 121);
			this->txt_Cantidad_Numeros->Name = L"txt_Cantidad_Numeros";
			this->txt_Cantidad_Numeros->Size = System::Drawing::Size(155, 26);
			this->txt_Cantidad_Numeros->TabIndex = 2;
			// 
			// rtxt_Arreglo
			// 
			this->rtxt_Arreglo->Location = System::Drawing::Point(487, 207);
			this->rtxt_Arreglo->Name = L"rtxt_Arreglo";
			this->rtxt_Arreglo->ReadOnly = true;
			this->rtxt_Arreglo->Size = System::Drawing::Size(121, 96);
			this->rtxt_Arreglo->TabIndex = 3;
			this->rtxt_Arreglo->Text = L"";
			this->rtxt_Arreglo->Visible = false;
			// 
			// lbl_Arreglo
			// 
			this->lbl_Arreglo->AutoSize = true;
			this->lbl_Arreglo->Font = (gcnew System::Drawing::Font(L"Nobile", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Arreglo->Location = System::Drawing::Point(12, 207);
			this->lbl_Arreglo->Name = L"lbl_Arreglo";
			this->lbl_Arreglo->Size = System::Drawing::Size(306, 25);
			this->lbl_Arreglo->TabIndex = 4;
			this->lbl_Arreglo->Text = L"Arreglo de números entre 1 y 1000:";
			this->lbl_Arreglo->Visible = false;
			// 
			// lbl_Elegir_Metodo
			// 
			this->lbl_Elegir_Metodo->AutoSize = true;
			this->lbl_Elegir_Metodo->Font = (gcnew System::Drawing::Font(L"Nobile", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Elegir_Metodo->Location = System::Drawing::Point(12, 415);
			this->lbl_Elegir_Metodo->Name = L"lbl_Elegir_Metodo";
			this->lbl_Elegir_Metodo->Size = System::Drawing::Size(254, 25);
			this->lbl_Elegir_Metodo->TabIndex = 5;
			this->lbl_Elegir_Metodo->Text = L"Elija el método de búsqueda";
			this->lbl_Elegir_Metodo->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Búsqueda Secuencial", L"Búsqueda Binaria", L"Búsqueda Hash" });
			this->comboBox1->Location = System::Drawing::Point(442, 412);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->Visible = false;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// lbl_Numero_Buscar
			// 
			this->lbl_Numero_Buscar->AutoSize = true;
			this->lbl_Numero_Buscar->Font = (gcnew System::Drawing::Font(L"Nobile", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Numero_Buscar->Location = System::Drawing::Point(12, 336);
			this->lbl_Numero_Buscar->Name = L"lbl_Numero_Buscar";
			this->lbl_Numero_Buscar->Size = System::Drawing::Size(364, 25);
			this->lbl_Numero_Buscar->TabIndex = 7;
			this->lbl_Numero_Buscar->Text = L"Elija que número desea buscar (1 y 1000):";
			this->lbl_Numero_Buscar->Visible = false;
			// 
			// txt_Numero_Buscar
			// 
			this->txt_Numero_Buscar->Location = System::Drawing::Point(442, 336);
			this->txt_Numero_Buscar->Name = L"txt_Numero_Buscar";
			this->txt_Numero_Buscar->Size = System::Drawing::Size(155, 26);
			this->txt_Numero_Buscar->TabIndex = 8;
			this->txt_Numero_Buscar->Visible = false;
			// 
			// lbl_Posicion
			// 
			this->lbl_Posicion->AutoSize = true;
			this->lbl_Posicion->Font = (gcnew System::Drawing::Font(L"Nobile", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Posicion->Location = System::Drawing::Point(12, 482);
			this->lbl_Posicion->Name = L"lbl_Posicion";
			this->lbl_Posicion->Size = System::Drawing::Size(196, 25);
			this->lbl_Posicion->TabIndex = 9;
			this->lbl_Posicion->Text = L"Posición del número: ";
			this->lbl_Posicion->Visible = false;
			// 
			// lbl_Resultado_Posicion
			// 
			this->lbl_Resultado_Posicion->AutoSize = true;
			this->lbl_Resultado_Posicion->Font = (gcnew System::Drawing::Font(L"Noto Serif Cond", 8, System::Drawing::FontStyle::Bold));
			this->lbl_Resultado_Posicion->Location = System::Drawing::Point(437, 482);
			this->lbl_Resultado_Posicion->Name = L"lbl_Resultado_Posicion";
			this->lbl_Resultado_Posicion->Size = System::Drawing::Size(26, 22);
			this->lbl_Resultado_Posicion->TabIndex = 10;
			this->lbl_Resultado_Posicion->Text = L"----";
			this->lbl_Resultado_Posicion->Visible = false;
			// 
			// btn_Aceptar
			// 
			this->btn_Aceptar->Location = System::Drawing::Point(675, 123);
			this->btn_Aceptar->Name = L"btn_Aceptar";
			this->btn_Aceptar->Size = System::Drawing::Size(137, 35);
			this->btn_Aceptar->TabIndex = 11;
			this->btn_Aceptar->Text = L"Aceptar";
			this->btn_Aceptar->UseVisualStyleBackColor = true;
			this->btn_Aceptar->Click += gcnew System::EventHandler(this, &MyForm::btn_Aceptar_Click);
			// 
			// btn_Buscar
			// 
			this->btn_Buscar->Location = System::Drawing::Point(675, 330);
			this->btn_Buscar->Name = L"btn_Buscar";
			this->btn_Buscar->Size = System::Drawing::Size(137, 38);
			this->btn_Buscar->TabIndex = 12;
			this->btn_Buscar->Text = L"Buscar";
			this->btn_Buscar->UseVisualStyleBackColor = true;
			this->btn_Buscar->Visible = false;
			this->btn_Buscar->Click += gcnew System::EventHandler(this, &MyForm::btn_Buscar_Click);
			// 
			// lbl_Modo_Arreglo
			// 
			this->lbl_Modo_Arreglo->AutoSize = true;
			this->lbl_Modo_Arreglo->Font = (gcnew System::Drawing::Font(L"Nobile", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Modo_Arreglo->Location = System::Drawing::Point(341, 526);
			this->lbl_Modo_Arreglo->Name = L"lbl_Modo_Arreglo";
			this->lbl_Modo_Arreglo->Size = System::Drawing::Size(39, 25);
			this->lbl_Modo_Arreglo->TabIndex = 13;
			this->lbl_Modo_Arreglo->Text = L"---";
			this->lbl_Modo_Arreglo->Visible = false;
			// 
			// rtxt_Arreglo_Binario
			// 
			this->rtxt_Arreglo_Binario->Location = System::Drawing::Point(715, 207);
			this->rtxt_Arreglo_Binario->Name = L"rtxt_Arreglo_Binario";
			this->rtxt_Arreglo_Binario->ReadOnly = true;
			this->rtxt_Arreglo_Binario->Size = System::Drawing::Size(121, 96);
			this->rtxt_Arreglo_Binario->TabIndex = 14;
			this->rtxt_Arreglo_Binario->Text = L"";
			this->rtxt_Arreglo_Binario->Visible = false;
			// 
			// lbl_Secuencial
			// 
			this->lbl_Secuencial->AutoSize = true;
			this->lbl_Secuencial->Font = (gcnew System::Drawing::Font(L"Nobile", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Secuencial->Location = System::Drawing::Point(371, 207);
			this->lbl_Secuencial->Name = L"lbl_Secuencial";
			this->lbl_Secuencial->Size = System::Drawing::Size(110, 25);
			this->lbl_Secuencial->TabIndex = 15;
			this->lbl_Secuencial->Text = L"Secuencial:";
			this->lbl_Secuencial->Visible = false;
			// 
			// lbl_Binario
			// 
			this->lbl_Binario->AutoSize = true;
			this->lbl_Binario->Font = (gcnew System::Drawing::Font(L"Nobile", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Binario->Location = System::Drawing::Point(629, 207);
			this->lbl_Binario->Name = L"lbl_Binario";
			this->lbl_Binario->Size = System::Drawing::Size(80, 25);
			this->lbl_Binario->TabIndex = 16;
			this->lbl_Binario->Text = L"Binario:";
			this->lbl_Binario->Visible = false;
			// 
			// lbl_Tiempo_Titulo
			// 
			this->lbl_Tiempo_Titulo->AutoSize = true;
			this->lbl_Tiempo_Titulo->Font = (gcnew System::Drawing::Font(L"Nobile", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Tiempo_Titulo->Location = System::Drawing::Point(629, 479);
			this->lbl_Tiempo_Titulo->Name = L"lbl_Tiempo_Titulo";
			this->lbl_Tiempo_Titulo->Size = System::Drawing::Size(184, 25);
			this->lbl_Tiempo_Titulo->TabIndex = 17;
			this->lbl_Tiempo_Titulo->Text = L"Tiempo transcurrido";
			this->lbl_Tiempo_Titulo->Visible = false;
			// 
			// lbl_tiempo
			// 
			this->lbl_tiempo->AutoSize = true;
			this->lbl_tiempo->Font = (gcnew System::Drawing::Font(L"Nobile", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_tiempo->Location = System::Drawing::Point(710, 526);
			this->lbl_tiempo->Name = L"lbl_tiempo";
			this->lbl_tiempo->Size = System::Drawing::Size(39, 25);
			this->lbl_tiempo->TabIndex = 18;
			this->lbl_tiempo->Text = L"---";
			this->lbl_tiempo->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 571);
			this->Controls->Add(this->lbl_tiempo);
			this->Controls->Add(this->lbl_Tiempo_Titulo);
			this->Controls->Add(this->lbl_Binario);
			this->Controls->Add(this->lbl_Secuencial);
			this->Controls->Add(this->rtxt_Arreglo_Binario);
			this->Controls->Add(this->lbl_Modo_Arreglo);
			this->Controls->Add(this->btn_Buscar);
			this->Controls->Add(this->btn_Aceptar);
			this->Controls->Add(this->lbl_Resultado_Posicion);
			this->Controls->Add(this->lbl_Posicion);
			this->Controls->Add(this->txt_Numero_Buscar);
			this->Controls->Add(this->lbl_Numero_Buscar);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lbl_Elegir_Metodo);
			this->Controls->Add(this->lbl_Arreglo);
			this->Controls->Add(this->rtxt_Arreglo);
			this->Controls->Add(this->txt_Cantidad_Numeros);
			this->Controls->Add(this->lbl_Instrucciones);
			this->Controls->Add(this->lbl_Titulo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion		
		Random^ randm = gcnew Random();
		Stopwatch^ cronometro = gcnew Stopwatch();
		TimeSpan^ tiempo = cronometro->Elapsed;
		Hashtable^ funcionHash = gcnew Hashtable();
		array<Int32^>^ numeros;
		array<Int32^>^ nuevoArreglo;
		array<Int32^>^ numerosCopia;
		array<Int32^>^ HashN;
		int random, cantidad, eleccion, numeroBuscar, repetido=0, n,r;
	private: System::Void btn_Aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			cantidad = Convert::ToInt32(txt_Cantidad_Numeros->Text);
			numeros = gcnew array<Int32^>(cantidad);
			numerosCopia = gcnew array<Int32^>(cantidad);
			HashN = gcnew array<Int32^>(cantidad);
			for (int i = 0; i < cantidad; i++) {
				random = randm->Next(1001);				
				numeros[i] = random;
				numerosCopia[i] = numeros[i];
				HashN[i] = numeros[i];
				rtxt_Arreglo->Text += numeros[i] + "\r\n";
			}
			Ordenamiento(numerosCopia, cantidad);
			for (int i = 0; i < cantidad; i++) {
				rtxt_Arreglo_Binario->Text += numerosCopia[i] + "\r\n";
			}
			for (int i = 0; i < cantidad; i++) {
				if (funcionHash->ContainsKey(Hash(Convert::ToInt32(HashN[i]), 1000))) {
					n = 1;
					r = 0;
					while (funcionHash->ContainsKey(Hash(Convert::ToInt32(HashN[i]) + r, 1000 * n))) {
						n++;
						r = r + 1000;
					}
					funcionHash->Add(Hash(Convert::ToInt32(HashN[i]) + r, 1000 * n), Convert::ToString(HashN[i]));

				}
				else {
					funcionHash->Add(Hash(Convert::ToInt32(HashN[i]), 1000), Convert::ToString(HashN[i]));
				}
			}

			lbl_Arreglo->Visible = true;
			rtxt_Arreglo->Visible = true;
			rtxt_Arreglo_Binario->Visible = true;
			lbl_Numero_Buscar->Visible = true;
			txt_Numero_Buscar->Visible = true;
			btn_Buscar->Visible = true;
			lbl_Binario->Visible = true;
			lbl_Secuencial->Visible = true;
		}
		catch (Exception^ e) {
			MessageBox::Show("No ha ingresado un número correcto");
		}
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {	
	cronometro->Restart();
	eleccion = comboBox1->SelectedIndex;
	if (eleccion == 0) {
		cronometro->Start();
		Thread::Sleep(1000);
		Busqueda_Secuencial(numeros, numeroBuscar);
		lbl_Modo_Arreglo->Text = "Arreglo original";
		lbl_Modo_Arreglo->Visible = true;
		comboBox1->Visible = false;
		cronometro->Stop();
		lbl_tiempo->Text = Convert::ToString(tiempo);
		lbl_tiempo->Visible = true;
		lbl_Tiempo_Titulo->Visible = true;
	}
	else if (eleccion == 1) {
		cronometro->Start();
		Thread::Sleep(1000);
		Busqueda_Binaria(numerosCopia, numeroBuscar,numeros->Length-1,0);
		lbl_Resultado_Posicion->Visible = true;
		lbl_Posicion->Visible = true;
		lbl_Modo_Arreglo->Text = "Arreglo ordenado de menor a mayor";
		lbl_Modo_Arreglo->Visible = true;
		comboBox1->Visible = false;
		cronometro->Stop();
		lbl_tiempo->Text = Convert::ToString(tiempo);
		lbl_tiempo->Visible = true;
		lbl_Tiempo_Titulo->Visible = true;
	}
	else if (eleccion == 2) {	
		cronometro->Start();
		Thread::Sleep(1000);
		int aux = Hash(Convert::ToInt32(numeroBuscar), 1000);
		if (funcionHash->ContainsKey(numeroBuscar)) {			
				lbl_Resultado_Posicion->Text = Convert::ToString(aux);
				lbl_Modo_Arreglo->Text = "Arreglo modificado especialmente con función hash";							
		}
		else {
			lbl_Resultado_Posicion->Text = "No se encontró el número";
		}
		lbl_Resultado_Posicion->Visible = true;
		lbl_Posicion->Visible = true;
		lbl_Modo_Arreglo->Visible = true;		
		comboBox1->Visible = false;
		cronometro->Stop();
		lbl_tiempo->Text = Convert::ToString(tiempo);
		lbl_tiempo->Visible = true;
		lbl_Tiempo_Titulo->Visible = true;
	}
}	   
private: System::Void btn_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		numeroBuscar = Convert::ToInt32(txt_Numero_Buscar->Text);
		if (numeroBuscar > 0 && numeroBuscar <= 1000) {
			lbl_Elegir_Metodo->Visible = true;
			comboBox1->Visible = true;
			lbl_Resultado_Posicion->Visible = false;
			lbl_Posicion->Visible = false;
			lbl_Modo_Arreglo->Visible = false;
		}
		else {
			MessageBox::Show("El número no se encuentra dentro del rango correcto");
			lbl_Elegir_Metodo->Visible = false;
			comboBox1->Visible = false;
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("No ha ingresado un número correcto");
	}
}
	   void Busqueda_Secuencial(array<Int32^>^ arreglo, int numero) {		   
		   for (int i = 0; i < cantidad; i++) {
			   if (Convert::ToInt32(numero) == Convert::ToInt32(arreglo[i])) {
				   lbl_Resultado_Posicion->Text = Convert::ToString(i);
				   break;
			   }
			   else {
				   lbl_Resultado_Posicion->Text = "No se encontró el número";
			   }
		   }
		   lbl_Resultado_Posicion->Visible = true;
		   lbl_Posicion->Visible = true;
	   }
	   void Busqueda_Binaria(array<Int32^>^ arreglo, int numero, int mayor, int menor) {	
		   int  contador=0;		   
		   try {
			   if (mayor >= 1) {
				   int pivote = (menor + mayor) / 2;
				   if (repetido == pivote) {
					   lbl_Resultado_Posicion->Text = "No se encontró el número";
				   }
				   else {
					   repetido = pivote;
					   if (Convert::ToInt32(arreglo[pivote]) == numero) {
						   lbl_Resultado_Posicion->Text = Convert::ToString(pivote);
					   }
					   else if (Convert::ToInt32(arreglo[pivote]) > numero) {
						   Busqueda_Binaria(arreglo, numero, pivote - 1, menor);
					   }
					   else if (Convert::ToInt32(arreglo[pivote]) < numero) {
						   Busqueda_Binaria(arreglo, numero, mayor, pivote + 1);
					   }
				   }
			   }
		   }
		   catch (Exception^ e) {			   
		   }
	   }
	   int Hash(int numero, int modulo) {
		   int resultado;
		   resultado = numero % modulo;
		   return resultado;
	   }
	   void Ordenamiento(array<Int32^>^ arreglo, int cant) {
		   int aux, i, j;
		   for (i = 0; i < cant - 1; i++) {
			   for (j = i + 1; j < cant; j++) {
				   if (Convert::ToInt32(arreglo[i]) > Convert::ToInt32(arreglo[j])) {
					   aux = Convert::ToInt32(arreglo[i]);
					   arreglo[i] = arreglo[j];
					   arreglo[j] = aux;					   
				   }
			   }
		   }
	   }

};
}
