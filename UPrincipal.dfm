object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 413
  ClientWidth = 615
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 144
    Width = 48
    Height = 13
    Caption = 'Dimensi'#243'n'
  end
  object Label2: TLabel
    Left = 33
    Top = 37
    Width = 47
    Height = 13
    Caption = 'SG Vector'
  end
  object EDimension: TEdit
    Left = 40
    Top = 168
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object Button1: TButton
    Left = 184
    Top = 166
    Width = 75
    Height = 25
    Caption = 'Dimensionar'
    TabOrder = 1
    OnClick = Button1Click
  end
  object SGVector: TStringGrid
    Left = 33
    Top = 56
    Width = 553
    Height = 57
    ColCount = 1
    DefaultColWidth = 50
    DefaultRowHeight = 30
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    TabOrder = 2
  end
  object Button2: TButton
    Left = 184
    Top = 223
    Width = 121
    Height = 25
    Caption = 'MostrarSGVector'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 40
    Top = 223
    Width = 121
    Height = 25
    Caption = 'CargarSGVector'
    TabOrder = 4
    OnClick = Button3Click
  end
end
