/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.Global$$.ctor RVA 0x167ace0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0168ace0(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  pcVar9 = (char *)(_UNK_0168b550 + 0x168acf8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0168b554 + 0x168ad0c));
    func_0x01384978(*(undefined4 *)(_UNK_0168b558 + 0x168ad18));
    func_0x01384978(*(undefined4 *)(_UNK_0168b55c + 0x168ad24));
    func_0x01384978(*(undefined4 *)(_UNK_0168b560 + 0x168ad30));
    func_0x01384978(*(undefined4 *)(_UNK_0168b564 + 0x168ad3c));
    func_0x01384978(*(undefined4 *)(_UNK_0168b568 + 0x168ad48));
    func_0x01384978(*(undefined4 *)(_UNK_0168b56c + 0x168ad54));
    func_0x01384978(*(undefined4 *)(_UNK_0168b570 + 0x168ad60));
    func_0x01384978(*(undefined4 *)(_UNK_0168b574 + 0x168ad6c));
    func_0x01384978(*(undefined4 *)(_UNK_0168b578 + 0x168ad78));
    func_0x01384978(*(undefined4 *)(_UNK_0168b57c + 0x168ad84));
    func_0x01384978(*(undefined4 *)(_UNK_0168b580 + 0x168ad90));
    func_0x01384978(*(undefined4 *)(_UNK_0168b584 + 0x168ad9c));
    *pcVar9 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_0168b588 + 0x168adb0);
  uVar1 = *puVar5;
  piVar8 = *(int **)(_UNK_0168b58c + 0x168adc0);
  iVar6 = *piVar8;
  param_1[0x12] = iVar6;
  param_1[0xe] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  puVar2 = *(undefined4 **)(_UNK_0168b590 + 0x168ade0);
  func_0x036542d8(iVar6,*puVar2);
  uVar1 = *puVar5;
  param_1[0x1f] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar6,*puVar2);
  iVar7 = *piVar8;
  puVar11 = *(undefined4 **)(_UNK_0168b594 + 0x168ae1c);
  param_1[0x27] = iVar6;
  param_1[0x28] = iVar7;
  iVar6 = func_0x01384be4(*puVar11);
  puVar3 = *(undefined4 **)(_UNK_0168b598 + 0x168ae38);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  iVar7 = *piVar8;
  param_1[0x2b] = iVar6;
  param_1[0x31] = iVar7;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0x3f] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0x41] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  iVar7 = *piVar8;
  param_1[0x43] = iVar6;
  param_1[0x4c] = iVar7;
  param_1[0x46] = iVar7;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  puVar4 = *(undefined4 **)(_UNK_0168b59c + 0x168aec4);
  param_1[0x4d] = iVar6;
  iVar6 = func_0x01384be4(*puVar4);
  func_0x034673e0(iVar6,**(undefined4 **)(_UNK_0168b5a0 + 0x168aedc));
  uVar1 = *puVar5;
  param_1[0x4e] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar6,*puVar2);
  uVar1 = *puVar5;
  param_1[0x50] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar6,*puVar2);
  uVar1 = *puVar5;
  param_1[0x51] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar6,*puVar2);
  uVar1 = *puVar5;
  param_1[0x52] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar6,*puVar2);
  uVar1 = *puVar5;
  param_1[0x53] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar6,*puVar2);
  uVar1 = *puVar11;
  param_1[0x54] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar5;
  param_1[0x57] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar6,*puVar2);
  uVar1 = *puVar11;
  param_1[0x61] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  param_1[0x66] = iVar6;
  puVar12 = *(undefined4 **)(_UNK_0168b5a4 + 0x168afb8);
  iVar6 = func_0x01384be4(*puVar12);
  puVar4 = *(undefined4 **)(_UNK_0168b5a8 + 0x168afcc);
  func_0x034614f8(iVar6,*puVar4);
  uVar1 = *puVar5;
  param_1[0x6b] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar6,*puVar2);
  uVar1 = *puVar5;
  param_1[0x6e] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar6,*puVar2);
  param_1[0x70] = iVar6;
  iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_0168b5ac + 0x168b010));
  func_0x0365683c(iVar6,**(undefined4 **)(_UNK_0168b5b0 + 0x168b024));
  uVar1 = *puVar5;
  param_1[0x72] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar6,*puVar2);
  piVar8 = *(int **)(_UNK_0168b5b4 + 0x168b050);
  param_1[0x7a] = iVar6;
  param_1[0x7b] = *piVar8;
  iVar6 = func_0x01384be4(*puVar12);
  func_0x034614f8(iVar6,*puVar4);
  uVar1 = *puVar11;
  param_1[0x7d] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0x81] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  iVar7 = *piVar8;
  param_1[0x8b] = iVar7;
  param_1[0x89] = iVar7;
  param_1[0x86] = iVar7;
  uVar1 = *puVar12;
  param_1[0x82] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x034614f8(iVar6,*puVar4);
  uVar1 = *puVar11;
  param_1[0x8c] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0x8d] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar12;
  param_1[0x8e] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x034614f8(iVar6,*puVar4);
  uVar1 = *puVar12;
  param_1[0x8f] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x034614f8(iVar6,*puVar4);
  uVar1 = *puVar11;
  param_1[0x90] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar5;
  param_1[0x92] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  puVar2 = *(undefined4 **)(_UNK_0168b5b8 + 0x168b15c);
  func_0x036542d8(iVar6,*puVar2);
  param_1[0x96] = iVar6;
  piVar8 = *(int **)(_UNK_0168b5bc + 0x168b170);
  iVar6 = *piVar8;
  param_1[0x9d] = iVar6;
  param_1[0x9e] = iVar6;
  iVar6 = func_0x01384be4(*puVar5);
  func_0x036542d8(iVar6,*puVar2);
  param_1[0xa1] = *piVar8;
  uVar1 = *puVar5;
  param_1[0xa0] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar6,*puVar2);
  param_1[0xab] = iVar6;
  puVar2 = *(undefined4 **)(_UNK_0168b5c0 + 0x168b1bc);
  iVar6 = func_0x01384be4(*puVar2);
  func_0x034614f8(iVar6,*puVar4);
  uVar1 = *puVar11;
  param_1[0xac] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0xad] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  param_1[0xce] = *piVar8;
  uVar1 = *puVar11;
  param_1[0xca] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar2;
  param_1[0xd2] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x034614f8(iVar6,*puVar4);
  uVar1 = *puVar2;
  param_1[0xd6] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x034614f8(iVar6,*puVar4);
  uVar1 = *puVar2;
  param_1[0xd8] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x034614f8(iVar6,*puVar4);
  param_1[0xdb] = *piVar8;
  uVar1 = *puVar11;
  param_1[0xd9] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  param_1[0xe3] = iVar6;
  puVar12 = *(undefined4 **)(_UNK_0168b5c4 + 0x168b294);
  iVar6 = func_0x01384be4(*puVar12);
  puVar2 = *(undefined4 **)(_UNK_0168b5c8 + 0x168b2a8);
  func_0x0365683c(iVar6,*puVar2);
  uVar1 = *puVar12;
  param_1[0xf5] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0365683c(iVar6,*puVar2);
  param_1[0xf6] = iVar6;
  puVar2 = *(undefined4 **)(_UNK_0168b5cc + 0x168b2d4);
  iVar6 = func_0x01384be4(*puVar2);
  puVar5 = *(undefined4 **)(_UNK_0168b5d0 + 0x168b2e8);
  func_0x036542d8(iVar6,*puVar5);
  uVar1 = *puVar11;
  param_1[0xf7] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0xfb] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  param_1[0xfc] = iVar6;
  iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_0168b5d4 + 0x168b32c));
  func_0x034614f8(iVar6,*puVar4);
  uVar1 = *puVar11;
  param_1[0xfe] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0xff] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar12;
  param_1[0x101] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0365683c(iVar6,**(undefined4 **)(_UNK_0168b5d8 + 0x168b388));
  uVar1 = *puVar2;
  param_1[0x102] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x036542d8(iVar6,*puVar5);
  uVar1 = *puVar11;
  param_1[0x105] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0x106] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  piVar10 = *(int **)(_UNK_0168b5dc + 0x168b3e4);
  uVar1 = *puVar11;
  param_1[0x108] = iVar6;
  iVar6 = *piVar10;
  param_1[0x10f] = iVar6;
  param_1[0x110] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0x113] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0x115] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0x116] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0x118] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0x119] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  param_1[0x11a] = iVar6;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  puVar2 = *(undefined4 **)(_UNK_0168b5e0 + 0x168b4a0);
  param_1[0x11e] = iVar6;
  iVar6 = func_0x01384be4(*puVar2);
  func_0x034614f8(iVar6,*puVar4);
  uVar1 = *puVar11;
  iVar7 = *piVar10;
  param_1[0x11f] = iVar6;
  param_1[0x120] = iVar7;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  uVar1 = *puVar11;
  iVar7 = *piVar10;
  param_1[0x123] = iVar6;
  param_1[0x129] = iVar7;
  param_1[0x12a] = iVar7;
  iVar6 = func_0x01384be4(uVar1);
  func_0x0364cfb8(iVar6,*puVar3);
  piVar8 = *(int **)(_UNK_0168b5e4 + 0x168b504);
  iVar7 = *piVar10;
  param_1[0x12f] = iVar6;
  iVar6 = *piVar8;
  param_1[0x130] = iVar7;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0168b5e8 + 0x168b52c));
                    /* WARNING: Could not recover jumptable at 0x0168b54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.Global$$.ctor RVA 0x167b5ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0168b5ec(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  pcVar8 = (char *)(_UNK_0168c404 + 0x168b608);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0168c408 + 0x168b61c));
    func_0x01384978(*(undefined4 *)(_UNK_0168c40c + 0x168b628));
    func_0x01384978(*(undefined4 *)(_UNK_0168c410 + 0x168b634));
    func_0x01384978(*(undefined4 *)(_UNK_0168c414 + 0x168b640));
    func_0x01384978(*(undefined4 *)(_UNK_0168c418 + 0x168b64c));
    *pcVar8 = '\x01';
  }
  FUN_0168ace0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  uVar11 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  *(undefined4 *)(param_1 + 0x1c) = uVar11;
  uVar6 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  uVar1 = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined1 *)(param_1 + 0x30) = uVar1;
  uVar15 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar15;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
  uVar15 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar15;
  uVar4 = *(undefined4 *)(param_2 + 0x74);
  uVar5 = *(undefined4 *)(param_2 + 0x78);
  iVar9 = *(int *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  puVar13 = *(undefined4 **)(_UNK_0168c41c + 0x168b740);
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x9c);
  uVar5 = *(undefined4 *)(param_2 + 0x88);
  uVar7 = *(undefined4 *)(param_2 + 0x8c);
  uVar14 = *(undefined4 *)(param_2 + 0x98);
  uVar11 = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x88) = uVar5;
  uVar6 = *(undefined4 *)(param_2 + 0x80);
  uVar5 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x8c) = uVar7;
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x90) = uVar11;
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  *(undefined4 *)(param_1 + 0x98) = uVar14;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  uVar5 = *(undefined4 *)(param_2 + 0xa0);
  uVar6 = *(undefined4 *)(param_2 + 0xa4);
  uVar7 = *(undefined4 *)(param_2 + 0xa8);
  iVar9 = *(int *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  *(undefined4 *)(param_1 + 0xa0) = uVar5;
  *(undefined4 *)(param_1 + 0xa4) = uVar6;
  *(undefined4 *)(param_1 + 0xa8) = uVar7;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  puVar12 = *(undefined4 **)(_UNK_0168c420 + 0x168b7c4);
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  *(undefined4 *)(param_1 + 0xac) = uVar4;
  uVar15 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar15;
  uVar5 = *(undefined4 *)(param_2 + 0xd0);
  uVar6 = *(undefined4 *)(param_2 + 0xd4);
  uVar4 = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xd4) = uVar6;
  *(undefined4 *)(param_1 + 0xc0) = uVar4;
  *(undefined4 *)(param_1 + 0xd0) = uVar5;
  uVar15 = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
  *(undefined8 *)(param_1 + 0xe4) = uVar15;
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  iVar9 = *(int *)(param_2 + 0xfc);
  uVar1 = *(undefined1 *)(param_2 + 0xcc);
  uVar2 = *(undefined1 *)(param_2 + 0xd8);
  uVar5 = *(undefined4 *)(param_2 + 0xc4);
  uVar4 = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  uVar3 = *(undefined1 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xc4) = uVar5;
  *(undefined1 *)(param_1 + 0xcc) = uVar1;
  *(undefined1 *)(param_1 + 0xd8) = uVar2;
  *(undefined4 *)(param_1 + 0xf0) = uVar4;
  *(undefined1 *)(param_1 + 0xf4) = uVar3;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x104);
  uVar5 = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0xfc) = uVar4;
  *(undefined4 *)(param_1 + 0x100) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x10c);
  uVar5 = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x104) = uVar4;
  *(undefined4 *)(param_1 + 0x108) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  *(undefined4 *)(param_1 + 0x10c) = uVar4;
  uVar7 = *(undefined4 *)(param_2 + 0x124);
  uVar4 = *(undefined4 *)(param_2 + 0x114);
  uVar5 = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = uVar5;
  *(undefined4 *)(param_1 + 0x114) = uVar4;
  uVar1 = *(undefined1 *)(param_2 + 0x120);
  uVar4 = *(undefined4 *)(param_2 + 0x128);
  uVar5 = *(undefined4 *)(param_2 + 300);
  uVar6 = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined1 *)(param_1 + 0x120) = uVar1;
  iVar9 = *(int *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x124) = uVar7;
  *(undefined4 *)(param_1 + 0x128) = uVar4;
  *(undefined4 *)(param_1 + 300) = uVar5;
  *(undefined4 *)(param_1 + 0x130) = uVar6;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x134) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03464804(iVar9,**(undefined4 **)(_UNK_0168c424 + 0x168b92c));
  iVar9 = *(int *)(param_2 + 0x140);
  uVar5 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x138) = uVar4;
  *(undefined4 *)(param_1 + 0x13c) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x140) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x144) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x148) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x14c) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x15c);
  uVar5 = *(undefined4 *)(param_2 + 0x158);
  uVar1 = *(undefined1 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x150) = uVar4;
  *(undefined1 *)(param_1 + 0x154) = uVar1;
  *(undefined4 *)(param_1 + 0x158) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  uVar15 = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = uVar15;
  iVar9 = *(int *)(param_2 + 0x184);
  uVar5 = *(undefined4 *)(param_2 + 0x178);
  uVar6 = *(undefined4 *)(param_2 + 0x17c);
  uVar7 = *(undefined4 *)(param_2 + 0x180);
  uVar1 = *(undefined1 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x15c) = uVar4;
  *(undefined1 *)(param_1 + 0x164) = uVar1;
  *(undefined4 *)(param_1 + 0x178) = uVar5;
  *(undefined4 *)(param_1 + 0x17c) = uVar6;
  *(undefined4 *)(param_1 + 0x180) = uVar7;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x184) = uVar4;
  uVar15 = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 400) = uVar15;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x198) = uVar4;
  uVar15 = *(undefined8 *)(param_2 + 0x1a4);
  *(undefined8 *)(param_1 + 0x19c) = *(undefined8 *)(param_2 + 0x19c);
  *(undefined8 *)(param_1 + 0x1a4) = uVar15;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  puVar10 = *(undefined4 **)(_UNK_0168c428 + 0x168bac0);
  uVar4 = func_0x0345e8e4(iVar9,*puVar10);
  uVar5 = *(undefined4 *)(param_2 + 0x1b0);
  uVar6 = *(undefined4 *)(param_2 + 0x1b4);
  iVar9 = *(int *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1ac) = uVar4;
  *(undefined4 *)(param_1 + 0x1b0) = uVar5;
  *(undefined4 *)(param_1 + 0x1b4) = uVar6;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x1c0);
  uVar5 = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1b8) = uVar4;
  *(undefined4 *)(param_1 + 0x1bc) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x1c8);
  uVar5 = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1c0) = uVar4;
  *(undefined4 *)(param_1 + 0x1c4) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x036544c0(iVar9,**(undefined4 **)(_UNK_0168c42c + 0x168bb3c));
  uVar15 = *(undefined8 *)(param_2 + 0x1d4);
  *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(param_2 + 0x1cc);
  *(undefined8 *)(param_1 + 0x1d4) = uVar15;
  iVar9 = *(int *)(param_2 + 0x1e8);
  uVar5 = *(undefined4 *)(param_2 + 0x1dc);
  uVar6 = *(undefined4 *)(param_2 + 0x1e0);
  uVar7 = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1c8) = uVar4;
  *(undefined4 *)(param_1 + 0x1dc) = uVar5;
  *(undefined4 *)(param_1 + 0x1e0) = uVar6;
  *(undefined4 *)(param_1 + 0x1e4) = uVar7;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  uVar5 = *(undefined4 *)(param_2 + 0x1ec);
  uVar6 = *(undefined4 *)(param_2 + 0x1f0);
  iVar9 = *(int *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x1e8) = uVar4;
  *(undefined4 *)(param_1 + 0x1ec) = uVar5;
  *(undefined4 *)(param_1 + 0x1f0) = uVar6;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0345e8e4(iVar9,*puVar10);
  uVar5 = *(undefined4 *)(param_2 + 0x1f8);
  uVar6 = *(undefined4 *)(param_2 + 0x1fc);
  uVar7 = *(undefined4 *)(param_2 + 0x200);
  iVar9 = *(int *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 500) = uVar4;
  *(undefined4 *)(param_1 + 0x1f8) = uVar5;
  *(undefined4 *)(param_1 + 0x1fc) = uVar6;
  *(undefined4 *)(param_1 + 0x200) = uVar7;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x204) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  *(undefined4 *)(param_1 + 0x208) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 0x220);
  uVar5 = *(undefined4 *)(param_2 + 0x20c);
  uVar6 = *(undefined4 *)(param_2 + 0x210);
  uVar7 = *(undefined4 *)(param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  iVar9 = *(int *)(param_2 + 0x230);
  uVar1 = *(undefined1 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x20c) = uVar5;
  *(undefined4 *)(param_1 + 0x210) = uVar6;
  *(undefined4 *)(param_1 + 0x214) = uVar7;
  uVar5 = *(undefined4 *)(param_2 + 0x224);
  uVar6 = *(undefined4 *)(param_2 + 0x228);
  uVar7 = *(undefined4 *)(param_2 + 0x22c);
  *(undefined1 *)(param_1 + 0x21c) = uVar1;
  *(undefined4 *)(param_1 + 0x220) = uVar4;
  *(undefined4 *)(param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x228) = uVar6;
  *(undefined4 *)(param_1 + 0x22c) = uVar7;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  puVar10 = *(undefined4 **)(_UNK_0168c430 + 0x168bc50);
  uVar4 = func_0x0345e8e4(iVar9,*puVar10);
  iVar9 = *(int *)(param_2 + 0x234);
  *(undefined4 *)(param_1 + 0x230) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x238);
  *(undefined4 *)(param_1 + 0x234) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x238) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0345e8e4(iVar9,*puVar10);
  iVar9 = *(int *)(param_2 + 0x240);
  *(undefined4 *)(param_1 + 0x23c) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0345e8e4(iVar9,*puVar10);
  iVar9 = *(int *)(param_2 + 0x248);
  uVar5 = *(undefined4 *)(param_2 + 0x244);
  *(undefined4 *)(param_1 + 0x240) = uVar4;
  *(undefined4 *)(param_1 + 0x244) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  uVar5 = *(undefined4 *)(param_2 + 0x24c);
  uVar6 = *(undefined4 *)(param_2 + 0x250);
  uVar7 = *(undefined4 *)(param_2 + 0x254);
  iVar9 = *(int *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x248) = uVar4;
  *(undefined4 *)(param_1 + 0x24c) = uVar5;
  *(undefined4 *)(param_1 + 0x250) = uVar6;
  *(undefined4 *)(param_1 + 0x254) = uVar7;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x280);
  uVar15 = *(undefined8 *)(param_2 + 0x264);
  *(undefined8 *)(param_1 + 0x25c) = *(undefined8 *)(param_2 + 0x25c);
  *(undefined8 *)(param_1 + 0x264) = uVar15;
  uVar5 = *(undefined4 *)(param_2 + 0x26c);
  uVar7 = *(undefined4 *)(param_2 + 0x278);
  uVar6 = *(undefined4 *)(param_2 + 0x27c);
  *(undefined4 *)(param_1 + 600) = uVar4;
  uVar11 = *(undefined4 *)(param_2 + 0x274);
  uVar4 = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x26c) = uVar5;
  *(undefined4 *)(param_1 + 0x270) = uVar4;
  *(undefined4 *)(param_1 + 0x274) = uVar11;
  *(undefined4 *)(param_1 + 0x278) = uVar7;
  *(undefined4 *)(param_1 + 0x27c) = uVar6;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  uVar5 = *(undefined4 *)(param_2 + 0x284);
  uVar15 = *(undefined8 *)(param_2 + 0x298);
  uVar16 = *(undefined8 *)(param_2 + 0x2a0);
  uVar17 = *(undefined8 *)(param_2 + 0x290);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x290) = uVar17;
  *(undefined4 *)(param_1 + 0x280) = uVar4;
  *(undefined8 *)(param_1 + 0x298) = uVar15;
  *(undefined8 *)(param_1 + 0x2a0) = uVar16;
  *(undefined4 *)(param_1 + 0x284) = uVar5;
  iVar9 = *(int *)(param_2 + 0x2ac);
  *(undefined2 *)(param_1 + 0x2a8) = *(undefined2 *)(param_2 + 0x2a8);
  puVar10 = *(undefined4 **)(_UNK_0168c434 + 0x168bdc4);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2ac) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0345e8e4(iVar9,*puVar10);
  iVar9 = *(int *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2b0) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  uVar15 = *(undefined8 *)(param_2 + 0x2b8);
  uVar16 = *(undefined8 *)(param_2 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2b4) = uVar4;
  *(undefined8 *)(param_1 + 0x2b8) = uVar15;
  *(undefined8 *)(param_1 + 0x2c0) = uVar16;
  uVar15 = *(undefined8 *)(param_2 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2d0) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2e0) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2f0) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x300);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  *(undefined8 *)(param_1 + 0x300) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x310);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_2 + 0x308);
  *(undefined8 *)(param_1 + 0x310) = uVar15;
  iVar9 = *(int *)(param_2 + 0x328);
  uVar15 = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(param_1 + 800) = uVar15;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x348);
  uVar14 = *(undefined4 *)(param_2 + 0x340);
  uVar5 = *(undefined4 *)(param_2 + 0x32c);
  uVar6 = *(undefined4 *)(param_2 + 0x330);
  uVar7 = *(undefined4 *)(param_2 + 0x334);
  uVar11 = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)(param_1 + 0x328) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 0x344);
  *(undefined4 *)(param_1 + 0x32c) = uVar5;
  uVar5 = *(undefined4 *)(param_2 + 0x33c);
  *(undefined4 *)(param_1 + 0x330) = uVar6;
  *(undefined4 *)(param_1 + 0x334) = uVar7;
  *(undefined4 *)(param_1 + 0x338) = uVar11;
  *(undefined4 *)(param_1 + 0x33c) = uVar5;
  *(undefined4 *)(param_1 + 0x340) = uVar14;
  *(undefined4 *)(param_1 + 0x344) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  uVar5 = *(undefined4 *)(param_2 + 0x34c);
  uVar6 = *(undefined4 *)(param_2 + 0x350);
  uVar7 = *(undefined4 *)(param_2 + 0x354);
  iVar9 = *(int *)(param_2 + 0x358);
  *(undefined4 *)(param_1 + 0x348) = uVar4;
  *(undefined4 *)(param_1 + 0x34c) = uVar5;
  *(undefined4 *)(param_1 + 0x350) = uVar6;
  *(undefined4 *)(param_1 + 0x354) = uVar7;
  puVar13 = *(undefined4 **)(_UNK_0168c438 + 0x168bf10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0345e8e4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x360);
  uVar5 = *(undefined4 *)(param_2 + 0x35c);
  *(undefined4 *)(param_1 + 0x358) = uVar4;
  *(undefined4 *)(param_1 + 0x35c) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0345e8e4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x364);
  *(undefined4 *)(param_1 + 0x360) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0345e8e4(iVar9,*puVar13);
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x368);
  uVar15 = *(undefined8 *)(param_2 + 0x378);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0x370);
  *(undefined8 *)(param_1 + 0x378) = uVar15;
  iVar9 = *(int *)(param_2 + 0x38c);
  uVar5 = *(undefined4 *)(param_2 + 0x380);
  uVar7 = *(undefined4 *)(param_2 + 900);
  uVar11 = *(undefined4 *)(param_2 + 0x388);
  uVar6 = *(undefined4 *)(param_2 + 0x36c);
  *(undefined4 *)(param_1 + 0x364) = uVar4;
  *(undefined4 *)(param_1 + 0x36c) = uVar6;
  *(undefined4 *)(param_1 + 0x380) = uVar5;
  *(undefined4 *)(param_1 + 900) = uVar7;
  *(undefined4 *)(param_1 + 0x388) = uVar11;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x390);
  uVar15 = *(undefined8 *)(param_2 + 0x3a0);
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_2 + 0x398);
  *(undefined8 *)(param_1 + 0x3a0) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x3b0);
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3b0) = uVar15;
  uVar15 = *(undefined8 *)(param_2 + 0x3c0);
  *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_2 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3c0) = uVar15;
  uVar5 = *(undefined4 *)(param_2 + 0x3c8);
  uVar6 = *(undefined4 *)(param_2 + 0x3cc);
  uVar7 = *(undefined4 *)(param_2 + 0x3d0);
  iVar9 = *(int *)(param_2 + 0x3d4);
  uVar1 = *(undefined1 *)(param_2 + 0x394);
  *(undefined4 *)(param_1 + 0x38c) = uVar4;
  *(undefined1 *)(param_1 + 0x394) = uVar1;
  *(undefined4 *)(param_1 + 0x3c8) = uVar5;
  *(undefined4 *)(param_1 + 0x3cc) = uVar6;
  *(undefined4 *)(param_1 + 0x3d0) = uVar7;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  puVar10 = *(undefined4 **)(_UNK_0168c43c + 0x168c028);
  uVar4 = func_0x036544c0(iVar9,*puVar10);
  *(undefined4 *)(param_1 + 0x3d4) = uVar4;
  iVar9 = *(int *)(param_2 + 0x3d8);
  puVar13 = *(undefined4 **)(_UNK_0168c440 + 0x168c044);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x036544c0(iVar9,*puVar10);
  iVar9 = *(int *)(param_2 + 0x3dc);
  *(undefined4 *)(param_1 + 0x3d8) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  puVar10 = *(undefined4 **)(_UNK_0168c444 + 0x168c078);
  uVar4 = func_0x03651cc4(iVar9,*puVar10);
  uVar5 = *(undefined4 *)(param_2 + 0x3e0);
  uVar6 = *(undefined4 *)(param_2 + 0x3e4);
  uVar7 = *(undefined4 *)(param_2 + 1000);
  iVar9 = *(int *)(param_2 + 0x3ec);
  *(undefined4 *)(param_1 + 0x3dc) = uVar4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar5;
  *(undefined4 *)(param_1 + 0x3e4) = uVar6;
  *(undefined4 *)(param_1 + 1000) = uVar7;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x3f0);
  *(undefined4 *)(param_1 + 0x3ec) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x3f8);
  uVar5 = *(undefined4 *)(param_2 + 0x3f4);
  *(undefined4 *)(param_1 + 0x3f0) = uVar4;
  *(undefined4 *)(param_1 + 0x3f4) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0345e8e4(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x3fc);
  *(undefined4 *)(param_1 + 0x3f8) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  uVar5 = *(undefined4 *)(param_2 + 0x400);
  *(undefined4 *)(param_1 + 0x3fc) = uVar4;
  *(undefined4 *)(param_1 + 0x400) = uVar5;
  iVar9 = *(int *)(param_2 + 0x404);
  puVar13 = *(undefined4 **)(_UNK_0168c448 + 0x168c12c);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x408);
  *(undefined4 *)(param_1 + 0x404) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x036544c0(iVar9,*puVar13);
  iVar9 = *(int *)(param_2 + 0x414);
  uVar5 = *(undefined4 *)(param_2 + 0x40c);
  uVar6 = *(undefined4 *)(param_2 + 0x410);
  *(undefined4 *)(param_1 + 0x408) = uVar4;
  *(undefined4 *)(param_1 + 0x40c) = uVar5;
  *(undefined4 *)(param_1 + 0x410) = uVar6;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x03651cc4(iVar9,*puVar10);
  iVar9 = *(int *)(param_2 + 0x418);
  *(undefined4 *)(param_1 + 0x414) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x420);
  uVar5 = *(undefined4 *)(param_2 + 0x41c);
  *(undefined4 *)(param_1 + 0x418) = uVar4;
  *(undefined4 *)(param_1 + 0x41c) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x44c);
  uVar15 = *(undefined8 *)(param_2 + 0x42c);
  *(undefined8 *)(param_1 + 0x424) = *(undefined8 *)(param_2 + 0x424);
  *(undefined8 *)(param_1 + 0x42c) = uVar15;
  uVar5 = *(undefined4 *)(param_2 + 0x434);
  uVar6 = *(undefined4 *)(param_2 + 0x438);
  uVar14 = *(undefined4 *)(param_2 + 0x444);
  uVar11 = *(undefined4 *)(param_2 + 0x448);
  uVar7 = *(undefined4 *)(param_2 + 0x440);
  *(undefined4 *)(param_1 + 0x420) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 0x43c);
  *(undefined4 *)(param_1 + 0x434) = uVar5;
  *(undefined4 *)(param_1 + 0x438) = uVar6;
  *(undefined4 *)(param_1 + 0x43c) = uVar4;
  *(undefined4 *)(param_1 + 0x440) = uVar7;
  *(undefined4 *)(param_1 + 0x444) = uVar14;
  *(undefined4 *)(param_1 + 0x448) = uVar11;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x454);
  uVar5 = *(undefined4 *)(param_2 + 0x450);
  *(undefined4 *)(param_1 + 0x44c) = uVar4;
  *(undefined4 *)(param_1 + 0x450) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  *(undefined4 *)(param_1 + 0x454) = uVar4;
  iVar9 = *(int *)(param_2 + 0x458);
  puVar13 = *(undefined4 **)(_UNK_0168c44c + 0x168c274);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x460);
  uVar5 = *(undefined4 *)(param_2 + 0x45c);
  *(undefined4 *)(param_1 + 0x458) = uVar4;
  *(undefined4 *)(param_1 + 0x45c) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x460) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x464) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x478);
  uVar5 = *(undefined4 *)(param_2 + 0x46c);
  uVar6 = *(undefined4 *)(param_2 + 0x470);
  uVar7 = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x468) = uVar4;
  *(undefined4 *)(param_1 + 0x46c) = uVar5;
  *(undefined4 *)(param_1 + 0x470) = uVar6;
  *(undefined4 *)(param_1 + 0x474) = uVar7;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  iVar9 = *(int *)(param_2 + 0x47c);
  *(undefined4 *)(param_1 + 0x478) = uVar4;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0345e8e4(iVar9,*puVar13);
  *(undefined4 *)(param_1 + 0x47c) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 0x484);
  uVar5 = *(undefined4 *)(param_2 + 0x488);
  iVar9 = *(int *)(param_2 + 0x48c);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 0x480);
  *(undefined4 *)(param_1 + 0x484) = uVar4;
  *(undefined4 *)(param_1 + 0x488) = uVar5;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  uVar15 = *(undefined8 *)(param_2 + 0x498);
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(param_2 + 0x490);
  *(undefined8 *)(param_1 + 0x498) = uVar15;
  uVar5 = *(undefined4 *)(param_2 + 0x4a0);
  *(undefined4 *)(param_1 + 0x48c) = uVar4;
  iVar9 = *(int *)(param_2 + 0x4bc);
  uVar4 = *(undefined4 *)(param_2 + 0x4a4);
  uVar6 = *(undefined4 *)(param_2 + 0x4a8);
  *(undefined4 *)(param_1 + 0x4a0) = uVar5;
  *(undefined4 *)(param_1 + 0x4a4) = uVar4;
  *(undefined4 *)(param_1 + 0x4a8) = uVar6;
  uVar15 = *(undefined8 *)(param_2 + 0x4b4);
  *(undefined8 *)(param_1 + 0x4ac) = *(undefined8 *)(param_2 + 0x4ac);
  *(undefined8 *)(param_1 + 0x4b4) = uVar15;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0364acbc(iVar9,*puVar12);
  uVar5 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x4bc) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 0x4c4);
  uVar6 = *(undefined4 *)(param_2 + 0x4c8);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x4c0);
  *(undefined4 *)(param_1 + 0x4c4) = uVar4;
  *(undefined4 *)(param_1 + 0x4c8) = uVar6;
  uVar4 = func_0x0244f914(uVar5,0);
  *(undefined4 *)(param_1 + 8) = uVar4;
  return;
}



// ===== fat.rawdata.Global$$Clone RVA 0x167c450 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0168c450(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0168c4a4 + 0x168c464);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0168c4a8 + 0x168c478));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0168c4ac + 0x168c48c));
  FUN_0168b5ec(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.Global$$ProxyInternalMergeFrom RVA 0x167c4b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0168c4b0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  pcVar5 = (char *)(_UNK_0168d4a4 + 0x168c4cc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0168d4a8 + 0x168c4e0));
    func_0x01384978(*(undefined4 *)(_UNK_0168d4ac + 0x168c4ec));
    func_0x01384978(*(undefined4 *)(_UNK_0168d4b0 + 0x168c4f8));
    func_0x01384978(*(undefined4 *)(_UNK_0168d4b4 + 0x168c504));
    func_0x01384978(*(undefined4 *)(_UNK_0168d508 + 0x168c510));
    func_0x01384978(*(undefined4 *)(_UNK_0168d50c + 0x168c51c));
    *pcVar5 = '\x01';
  }
  iVar7 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar7,0);
  if (uVar1 != 0) {
    piVar6 = *(int **)(_UNK_0168d554 + 0x168c570);
    do {
      if (uVar1 < 0x4ee) {
        if (uVar1 < 0x28b) {
          if (uVar1 < 0x159) {
            if (uVar1 < 0xb1) {
              if (uVar1 < 0x59) {
                if (uVar1 < 0x29) {
                  if (uVar1 < 0x11) {
                    if (uVar1 == 8) {
                      uVar2 = func_0x01484f98(param_2,iVar7,0);
                      *(undefined4 *)(param_1 + 0xc) = uVar2;
                    }
                    else {
                      if (uVar1 != 0x10) goto LAB_0168ec44;
                      uVar2 = func_0x01484f98(param_2,iVar7,0);
                      *(undefined4 *)(param_1 + 0x10) = uVar2;
                    }
                  }
                  else if (uVar1 == 0x18) {
                    uVar11 = func_0x01484f88(param_2,iVar7,0);
                    *(undefined8 *)(param_1 + 0x18) = uVar11;
                  }
                  else if (uVar1 == 0x20) {
                    lVar10 = func_0x01484f88(param_2,iVar7,0);
                    *(bool *)(param_1 + 0x20) = lVar10 != 0;
                  }
                  else {
                    if (uVar1 != 0x28) goto LAB_0168ec44;
                    lVar10 = func_0x01484f88(param_2,iVar7,0);
                    *(bool *)(param_1 + 0x21) = lVar10 != 0;
                  }
                }
                else if (uVar1 < 0x41) {
                  if (uVar1 == 0x30) {
                    lVar10 = func_0x01484f88(param_2,iVar7,0);
                    *(bool *)(param_1 + 0x22) = lVar10 != 0;
                  }
                  else if (uVar1 == 0x38) {
                    lVar10 = func_0x01484f88(param_2,iVar7,0);
                    *(bool *)(param_1 + 0x23) = lVar10 != 0;
                  }
                  else {
                    if (uVar1 != 0x40) goto LAB_0168ec44;
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x24) = uVar2;
                  }
                }
                else if (uVar1 == 0x48) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x28) = uVar2;
                }
                else if (uVar1 == 0x50) {
                  lVar10 = func_0x01484f88(param_2,iVar7,0);
                  *(bool *)(param_1 + 0x30) = lVar10 != 0;
                }
                else {
                  if (uVar1 != 0x58) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x34) = uVar2;
                }
              }
              else if (uVar1 < 0x81) {
                if (uVar1 < 0x69) {
                  if (uVar1 == 0x60) {
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x40) = uVar2;
                  }
                  else {
                    if (uVar1 != 0x68) goto LAB_0168ec44;
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x44) = uVar2;
                  }
                }
                else if (uVar1 == 0x72) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                  *(undefined4 *)(param_1 + 0x48) = uVar2;
                }
                else if (uVar1 == 0x78) {
                  lVar10 = func_0x01484f88(param_2,iVar7,0);
                  *(bool *)(param_1 + 0x4c) = lVar10 != 0;
                }
                else {
                  if (uVar1 != 0x80) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x50) = uVar2;
                }
              }
              else if (uVar1 < 0x99) {
                if (uVar1 == 0x88) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x54) = uVar2;
                }
                else if (uVar1 == 0x90) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x58) = uVar2;
                }
                else {
                  if (uVar1 != 0x98) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x5c) = uVar2;
                }
              }
              else if (uVar1 == 0xa0) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x60) = uVar2;
              }
              else if (uVar1 == 0xa8) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 100) = uVar2;
              }
              else {
                if (uVar1 != 0xb0) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x68) = uVar2;
              }
            }
            else if (uVar1 < 0x109) {
              if (uVar1 < 0xdb) {
                if (uVar1 < 0xc1) {
                  if (uVar1 == 0xb8) {
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x6c) = uVar2;
                  }
                  else {
                    if (uVar1 != 0xc0) goto LAB_0168ec44;
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x70) = uVar2;
                  }
                }
                else if (uVar1 == 200) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x74) = uVar2;
                }
                else if (uVar1 == 0xd0) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x78) = uVar2;
                }
                else {
                  if (uVar1 != 0xda) goto LAB_0168ec44;
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x7c);
                  puVar9 = *(undefined4 **)(_UNK_0168e978 + 0x168d994);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
                  if (iVar8 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x036520e8(iVar8,param_2,uVar2,*puVar9);
                  piVar6 = *(int **)(_UNK_0168e9ac + 0x168d9dc);
                }
              }
              else if (uVar1 < 0xf1) {
                if (uVar1 == 0xe0) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x80) = uVar2;
                }
                else if (uVar1 == 0xe8) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x84) = uVar2;
                }
                else {
                  if (uVar1 != 0xf0) goto LAB_0168ec44;
                  uVar11 = func_0x01484f88(param_2,iVar7,0);
                  *(undefined8 *)(param_1 + 0x88) = uVar11;
                }
              }
              else if (uVar1 == 0xf8) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x90) = uVar2;
              }
              else if (uVar1 == 0x100) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x94) = uVar2;
              }
              else {
                if (uVar1 != 0x108) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x98) = uVar2;
              }
            }
            else if (uVar1 < 299) {
              if (uVar1 < 0x119) {
                if (uVar1 == 0x112) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                  *(undefined4 *)(param_1 + 0xa0) = uVar2;
                }
                else {
                  if (uVar1 != 0x118) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0xa4) = uVar2;
                }
              }
              else {
                if (uVar1 != 0x120) {
                  if (uVar1 == 0x128 || uVar1 == 0x12a) {
                    iVar3 = *piVar6;
                    iVar8 = *(int *)(param_1 + 0xac);
                    if (*(int *)(iVar3 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar3 = *piVar6;
                    }
                    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
                    goto LAB_0168eb4c;
                  }
                  goto LAB_0168ec44;
                }
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0xa8) = uVar2;
              }
            }
            else if (uVar1 < 0x141) {
              if (uVar1 == 0x130) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0xb0) = uVar2;
              }
              else if (uVar1 == 0x138) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0xbc) = uVar2;
              }
              else {
                if (uVar1 != 0x140) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0xc0) = uVar2;
              }
            }
            else if (uVar1 == 0x14a) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
              *(undefined4 *)(param_1 + 0xc4) = uVar2;
            }
            else if (uVar1 == 0x150) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 200) = uVar2;
            }
            else {
              if (uVar1 != 0x158) goto LAB_0168ec44;
              lVar10 = func_0x01484f88(param_2,iVar7,0);
              *(bool *)(param_1 + 0xcc) = lVar10 != 0;
            }
          }
          else if (uVar1 >> 1 < 0xfb) {
            if (uVar1 < 0x1b1) {
              if (uVar1 < 0x181) {
                if (uVar1 < 0x169) {
                  if (uVar1 == 0x160) {
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0xd0) = uVar2;
                  }
                  else {
                    if (uVar1 != 0x168) goto LAB_0168ec44;
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0xd4) = uVar2;
                  }
                }
                else if (uVar1 == 0x170) {
                  lVar10 = func_0x01484f88(param_2,iVar7,0);
                  *(bool *)(param_1 + 0xd8) = lVar10 != 0;
                }
                else if (uVar1 == 0x178) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0xdc) = uVar2;
                }
                else {
                  if (uVar1 != 0x180) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0xe0) = uVar2;
                }
              }
              else if (uVar1 < 0x199) {
                if (uVar1 == 0x188) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0xe4) = uVar2;
                }
                else if (uVar1 == 400) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0xe8) = uVar2;
                }
                else {
                  if (uVar1 != 0x198) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0xec) = uVar2;
                }
              }
              else if (uVar1 == 0x1a0) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0xf0) = uVar2;
              }
              else if (uVar1 == 0x1a8) {
                lVar10 = func_0x01484f88(param_2,iVar7,0);
                *(bool *)(param_1 + 0xf4) = lVar10 != 0;
              }
              else {
                if (uVar1 != 0x1b0) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0xf8) = uVar2;
              }
            }
            else {
              uVar4 = 0x1ca;
              if (uVar1 < 0x1cb) {
                if (uVar1 < 0x1bb) {
                  if ((uVar1 | 2) == 0x1ba) {
                    iVar3 = *piVar6;
                    iVar8 = *(int *)(param_1 + 0xfc);
                    if (*(int *)(iVar3 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar3 = *piVar6;
                    }
                    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
                    goto LAB_0168eb4c;
                  }
                }
                else {
                  if (uVar1 == 0x1c0) {
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x100) = uVar2;
                    goto LAB_0168ec58;
                  }
                  if (uVar1 == 0x1c8 || uVar1 == 0x1ca) {
                    iVar3 = *piVar6;
                    iVar8 = *(int *)(param_1 + 0x104);
                    if (*(int *)(iVar3 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar3 = *piVar6;
                    }
                    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
                    goto LAB_0168eb4c;
                  }
                }
LAB_0168ec44:
                uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
                *(undefined4 *)(param_1 + 8) = uVar2;
              }
              else if (uVar1 < 0x1d9) {
                if (uVar1 != 0x1d0) {
                  uVar4 = 0x1d2;
                }
                if (uVar1 == 0x1d0 || uVar1 == uVar4) {
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x10c);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
                  goto LAB_0168eb4c;
                }
                if (uVar1 != 0x1d8) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x110) = uVar2;
              }
              else if (uVar1 == 0x1e0) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x114) = uVar2;
              }
              else if (uVar1 == 0x1ea) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                *(undefined4 *)(param_1 + 0x118) = uVar2;
              }
              else {
                if (uVar1 != 0x1f5) goto LAB_0168ec44;
                uVar2 = func_0x01484f78(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x11c) = uVar2;
              }
            }
          }
          else if (uVar1 < 0x243) {
            if (uVar1 < 0x219) {
              if (uVar1 < 0x201) {
                if (uVar1 == 0x1f8) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x124) = uVar2;
                }
                else {
                  if (uVar1 != 0x200) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x128) = uVar2;
                }
              }
              else if (uVar1 == 0x208) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 300) = uVar2;
              }
              else {
                if (uVar1 != 0x212) {
                  if (uVar1 == 0x218) goto LAB_0168daa8;
                  goto LAB_0168ec44;
                }
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                *(undefined4 *)(param_1 + 0x130) = uVar2;
              }
              goto LAB_0168ec58;
            }
            if (uVar1 < 0x22b) {
              if (uVar1 == 0x21a) {
LAB_0168daa8:
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x134);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1c);
                goto LAB_0168eb4c;
              }
              if (uVar1 == 0x220) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x13c) = uVar2;
                goto LAB_0168ec58;
              }
              if (uVar1 != 0x22a) goto LAB_0168ec44;
              iVar3 = *piVar6;
              iVar8 = *(int *)(param_1 + 0x140);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar6;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x24);
            }
            else if (uVar1 == 0x232) {
              iVar3 = *piVar6;
              iVar8 = *(int *)(param_1 + 0x148);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar6;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x2c);
            }
            else if (uVar1 == 0x23a) {
              iVar3 = *piVar6;
              iVar8 = *(int *)(param_1 + 0x14c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar6;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x30);
            }
            else {
              if (uVar1 != 0x242) goto LAB_0168ec44;
              iVar3 = *piVar6;
              iVar8 = *(int *)(param_1 + 0x150);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar6;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x34);
            }
LAB_0168f9e4:
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            puVar9 = *(undefined4 **)(_UNK_0168fdc4 + 0x168f9fc);
LAB_0168f9f8:
            func_0x036520e8(iVar8,param_2,uVar2,*puVar9);
LAB_0168eb74:
            piVar6 = *(int **)(_UNK_0168fb6c + 0x168eb84);
          }
          else if (uVar1 < 0x261) {
            if (uVar1 < 0x251) {
              if (uVar1 != 0x248) {
                if (uVar1 != 0x250) goto LAB_0168ec44;
LAB_0168e6f4:
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x15c);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x38);
                goto LAB_0168eb4c;
              }
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x158) = uVar2;
            }
            else {
              if (uVar1 == 0x252) goto LAB_0168e6f4;
              if (uVar1 == 600) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x160) = uVar2;
              }
              else {
                if (uVar1 != 0x260) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x17c) = uVar2;
              }
            }
          }
          else if (uVar1 < 0x279) {
            if (uVar1 != 0x268) {
              if (uVar1 == 0x272) {
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x184);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x3c);
                goto LAB_0168f9e4;
              }
              if (uVar1 != 0x278) goto LAB_0168ec44;
LAB_0168e71c:
              iVar3 = *piVar6;
              iVar8 = *(int *)(param_1 + 0x198);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar6;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x40);
              goto LAB_0168eb4c;
            }
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x180) = uVar2;
          }
          else {
            if (uVar1 == 0x27a) goto LAB_0168e71c;
            if (uVar1 != 0x280) {
              if (uVar1 == 0x28a) {
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x1ac);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x44);
                goto LAB_0168fa64;
              }
              goto LAB_0168ec44;
            }
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x19c) = uVar2;
          }
        }
        else if (uVar1 < 0x3b9) {
          if (uVar1 < 0x321) {
            if (uVar1 < 0x2d9) {
              if (uVar1 < 0x2b3) {
                if (uVar1 < 0x299) {
                  if (uVar1 == 0x290) {
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x1b0) = uVar2;
                  }
                  else {
                    if (uVar1 != 0x298) goto LAB_0168ec44;
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x1b4) = uVar2;
                  }
                }
                else {
                  if (uVar1 == 0x2a2) {
                    iVar3 = *piVar6;
                    iVar8 = *(int *)(param_1 + 0x1b8);
                    if (*(int *)(iVar3 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar3 = *piVar6;
                    }
                    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x48);
                    goto LAB_0168f9e4;
                  }
                  if (uVar1 != 0x2a8) {
                    if (uVar1 == 0x2b2) goto LAB_0168d818;
                    goto LAB_0168ec44;
                  }
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x1c4) = uVar2;
                }
              }
              else if (uVar1 < 0x2c1) {
                if (uVar1 == 0x2b5) {
LAB_0168d818:
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x1c8);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x50);
LAB_0168e768:
                  if (iVar8 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x036548e8(iVar8,param_2,uVar2,**(undefined4 **)(_UNK_0168f76c + 0x168e788));
                  goto LAB_0168eb74;
                }
                if (uVar1 == 0x2b8) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x1d0) = uVar2;
                }
                else {
                  if (uVar1 != 0x2c0) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x1d4) = uVar2;
                }
              }
              else if (uVar1 == 0x2c8) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x1d8) = uVar2;
              }
              else if (uVar1 == 0x2d0) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x1dc) = uVar2;
              }
              else {
                if (uVar1 != 0x2d8) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x1e0) = uVar2;
              }
            }
            else if (uVar1 < 0x301) {
              if (uVar1 < 0x2eb) {
                if (uVar1 != 0x2e0) {
                  if (uVar1 == 0x2ea) {
                    iVar3 = *piVar6;
                    iVar8 = *(int *)(param_1 + 0x1e8);
                    if (*(int *)(iVar3 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar3 = *piVar6;
                    }
                    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x54);
                    goto LAB_0168f9e4;
                  }
                  goto LAB_0168ec44;
                }
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x1e4) = uVar2;
              }
              else if (uVar1 == 0x2f0) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x1f0) = uVar2;
              }
              else {
                if (uVar1 == 0x2fa) {
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 500);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x58);
                  goto LAB_0168fa64;
                }
                if (uVar1 != 0x300) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x1fc) = uVar2;
              }
            }
            else {
              uVar4 = 0x312;
              if (uVar1 < 0x313) {
                if (uVar1 != 0x308) {
                  if (uVar1 != 0x310 && uVar1 != 0x312) goto LAB_0168ec44;
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x204);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x5c);
                  goto LAB_0168eb4c;
                }
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x200) = uVar2;
              }
              else {
                if (uVar1 != 0x318) {
                  uVar4 = 0x31a;
                }
                if (uVar1 == 0x318 || uVar1 == uVar4) {
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x208);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x60);
                  goto LAB_0168eb4c;
                }
                if (uVar1 != 800) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x210) = uVar2;
              }
            }
          }
          else {
            if (uVar1 < 0x363) {
              if (uVar1 < 0x341) {
                uVar4 = 0x332;
                if (uVar1 < 0x333) {
                  if (uVar1 == 0x32a) {
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                    *(undefined4 *)(param_1 + 0x224) = uVar2;
                  }
                  else {
                    if (uVar1 != 0x332) goto LAB_0168ec44;
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                    *(undefined4 *)(param_1 + 0x22c) = uVar2;
                  }
                  goto LAB_0168ec58;
                }
                if (uVar1 != 0x338) {
                  uVar4 = 0x33a;
                }
                if (uVar1 != 0x338 && uVar1 != uVar4) {
                  if (uVar1 == 0x340) goto LAB_0168eb28;
                  goto LAB_0168ec44;
                }
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x234);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x68);
              }
              else {
                uVar4 = 0x352;
                if (uVar1 < 0x353) {
                  if (uVar1 != 0x342) {
                    if (uVar1 == 0x34a) {
                      iVar3 = *piVar6;
                      iVar8 = *(int *)(param_1 + 0x23c);
                      if (*(int *)(iVar3 + 0x74) == 0) {
                        func_0x01384ab4();
                        iVar3 = *piVar6;
                      }
                      uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x70);
                    }
                    else {
                      if (uVar1 != 0x352) goto LAB_0168ec44;
                      iVar3 = *piVar6;
                      iVar8 = *(int *)(param_1 + 0x240);
                      if (*(int *)(iVar3 + 0x74) == 0) {
                        func_0x01384ab4();
                        iVar3 = *piVar6;
                      }
                      uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x74);
                    }
                    goto LAB_0168fa64;
                  }
LAB_0168eb28:
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x238);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x6c);
                }
                else {
                  if (uVar1 == 0x358) {
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x244) = uVar2;
                    goto LAB_0168ec58;
                  }
                  if (uVar1 != 0x360) {
                    uVar4 = 0x362;
                  }
                  if (uVar1 != 0x360 && uVar1 != uVar4) goto LAB_0168ec44;
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x248);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x78);
                }
              }
LAB_0168eb4c:
              if (iVar8 == 0) {
                func_0x01384bf0();
              }
              puVar9 = *(undefined4 **)(_UNK_0168fb50 + 0x168eb64);
LAB_0168eb60:
              func_0x0364b0e0(iVar8,param_2,uVar2,*puVar9);
              goto LAB_0168eb74;
            }
            if (uVar1 < 0x38b) {
              if (uVar1 < 0x371) {
                if (uVar1 == 0x368) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x24c) = uVar2;
                }
                else {
                  if (uVar1 != 0x370) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x250) = uVar2;
                }
              }
              else if (uVar1 == 0x378) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x254) = uVar2;
              }
              else if (uVar1 == 0x380) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x264) = uVar2;
              }
              else {
                if (uVar1 != 0x38a) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                *(undefined4 *)(param_1 + 0x274) = uVar2;
              }
            }
            else if (uVar1 < 0x3a1) {
              if (uVar1 == 0x392) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                *(undefined4 *)(param_1 + 0x278) = uVar2;
              }
              else if (uVar1 == 0x39a) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                *(undefined4 *)(param_1 + 0x284) = uVar2;
              }
              else {
                if (uVar1 != 0x3a0) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x288) = uVar2;
              }
            }
            else if (uVar1 == 0x3a8) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x28c) = uVar2;
            }
            else if (uVar1 == 0x3b0) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x290) = uVar2;
            }
            else {
              if (uVar1 != 0x3b8) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x294) = uVar2;
            }
          }
        }
        else if (uVar1 < 0x45b) {
          if (uVar1 < 0x409) {
            if (uVar1 < 0x3d9) {
              uVar4 = 0x3ca;
              if (uVar1 < 0x3cb) {
                if (uVar1 != 0x3c0) {
                  if (uVar1 == 0x3ca) {
                    iVar3 = *piVar6;
                    iVar8 = *(int *)(param_1 + 0x2ac);
                    if (*(int *)(iVar3 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar3 = *piVar6;
                    }
                    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x84);
                    goto LAB_0168f9e4;
                  }
                  goto LAB_0168ec44;
                }
                lVar10 = func_0x01484f88(param_2,iVar7,0);
                *(bool *)(param_1 + 0x29f) = lVar10 != 0;
              }
              else {
                if (uVar1 != 0x3d0) {
                  uVar4 = 0x3d2;
                }
                if (uVar1 == 0x3d0 || uVar1 == uVar4) {
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x2b4);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x8c);
                  goto LAB_0168eb4c;
                }
                if (uVar1 != 0x3d8) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x2b8) = uVar2;
              }
            }
            else if (uVar1 < 0x3f1) {
              if (uVar1 == 0x3e0) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 700) = uVar2;
              }
              else if (uVar1 == 1000) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x2c0) = uVar2;
              }
              else {
                if (uVar1 != 0x3f0) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x2c4) = uVar2;
              }
            }
            else if (uVar1 == 0x3f8) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x2c8) = uVar2;
            }
            else if (uVar1 == 0x400) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x2cc) = uVar2;
            }
            else {
              if (uVar1 != 0x408) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x2e4) = uVar2;
            }
          }
          else if (uVar1 < 0x431) {
            if (uVar1 < 0x419) {
              if (uVar1 == 0x410) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x2f0) = uVar2;
              }
              else {
                if (uVar1 != 0x418) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x2f4) = uVar2;
              }
            }
            else if (uVar1 == 0x420) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x2f8) = uVar2;
            }
            else if (uVar1 == 0x428) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x308) = uVar2;
            }
            else {
              if (uVar1 != 0x430) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x318) = uVar2;
            }
          }
          else {
            uVar4 = 0x448;
            if (uVar1 < 0x449) {
              if (uVar1 == 0x438) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x31c) = uVar2;
              }
              else if (uVar1 == 0x440) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 800) = uVar2;
              }
              else {
                if (uVar1 != 0x448) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x324) = uVar2;
              }
            }
            else {
              if (uVar1 != 0x450) {
                uVar4 = 0x452;
              }
              if (uVar1 == 0x450 || uVar1 == uVar4) {
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x328);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x90);
                goto LAB_0168eb4c;
              }
              if (uVar1 != 0x45a) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
              *(undefined4 *)(param_1 + 0x338) = uVar2;
            }
          }
        }
        else if (uVar1 < 0x4ab) {
          if (uVar1 < 0x47b) {
            if (uVar1 < 0x469) {
              if (uVar1 == 0x460) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x33c) = uVar2;
              }
              else {
                if (uVar1 != 0x468) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x340) = uVar2;
              }
            }
            else {
              if (uVar1 != 0x470) {
                uVar4 = 0x478;
                if (uVar1 != 0x478) {
                  uVar4 = 0x47a;
                }
                if (uVar1 == 0x478 || uVar1 == uVar4) {
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x348);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x94);
                  goto LAB_0168eb4c;
                }
                goto LAB_0168ec44;
              }
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x344) = uVar2;
            }
          }
          else {
            if (0x490 < uVar1) {
              if (uVar1 == 0x49a) {
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x358);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x98);
              }
              else {
                if (uVar1 == 0x4a0) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x35c) = uVar2;
                  goto LAB_0168ec58;
                }
                if (uVar1 != 0x4aa) goto LAB_0168ec44;
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x360);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x9c);
              }
LAB_0168fa64:
              if (iVar8 == 0) {
                func_0x01384bf0();
              }
              puVar9 = *(undefined4 **)(_UNK_0168fdc8 + 0x168fa7c);
LAB_0168fd64:
              func_0x034604a8(iVar8,param_2,uVar2,*puVar9);
              goto LAB_0168eb74;
            }
            if (uVar1 == 0x480) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x34c) = uVar2;
            }
            else if (uVar1 == 0x488) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x350) = uVar2;
            }
            else {
              if (uVar1 != 0x490) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x354) = uVar2;
            }
          }
        }
        else if (uVar1 < 0x4c9) {
          uVar4 = 0x4b8;
          if (uVar1 < 0x4b9) {
            if (uVar1 == 0x4b2) {
              iVar3 = *piVar6;
              iVar8 = *(int *)(param_1 + 0x364);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar6;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa0);
              goto LAB_0168fa64;
            }
            if (uVar1 != 0x4b8) goto LAB_0168ec44;
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x368) = uVar2;
          }
          else {
            if (uVar1 != 0x4c0) {
              uVar4 = 0x4c2;
            }
            if (uVar1 == 0x4c0 || uVar1 == uVar4) {
              iVar3 = *piVar6;
              iVar8 = *(int *)(param_1 + 0x38c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar6;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa4);
              goto LAB_0168eb4c;
            }
            if (uVar1 != 0x4c8) goto LAB_0168ec44;
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x390) = uVar2;
          }
        }
        else {
          if (0x4e2 < uVar1) {
            if (uVar1 == 0x4e5) {
LAB_0168e744:
              iVar3 = *piVar6;
              iVar8 = *(int *)(param_1 + 0x3d4);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar6;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa8);
              goto LAB_0168e768;
            }
            if (uVar1 == 0x4ea || uVar1 == 0x4ed) {
              iVar3 = *piVar6;
              iVar8 = *(int *)(param_1 + 0x3d8);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar6;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xac);
              goto LAB_0168e768;
            }
            goto LAB_0168ec44;
          }
          if (uVar1 == 0x4d0) {
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x3c0) = uVar2;
          }
          else {
            if (uVar1 != 0x4d8) {
              if (uVar1 == 0x4e2) goto LAB_0168e744;
              goto LAB_0168ec44;
            }
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x3c8) = uVar2;
          }
        }
      }
      else {
        if (0x740 < uVar1) {
          if (uVar1 < 0x8a9) {
            if (uVar1 < 0x7f9) {
              if (uVar1 < 0x799) {
                if (uVar1 < 0x769) {
                  if (uVar1 < 0x751) {
                    if (uVar1 == 0x748) {
                      uVar2 = func_0x01484f98(param_2,iVar7,0);
                      *(undefined4 *)(param_1 + 0x108) = uVar2;
                    }
                    else {
                      if (uVar1 != 0x750) goto LAB_0168ec44;
                      uVar2 = func_0x01484f98(param_2,iVar7,0);
                      *(undefined4 *)(param_1 + 0x3a4) = uVar2;
                    }
                  }
                  else if (uVar1 == 0x758) {
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x3a8) = uVar2;
                  }
                  else if (uVar1 == 0x760) {
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x3b0) = uVar2;
                  }
                  else {
                    if (uVar1 != 0x768) goto LAB_0168ec44;
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x3ac) = uVar2;
                  }
                }
                else if (uVar1 < 0x783) {
                  if (uVar1 == 0x770) {
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x3b4) = uVar2;
                  }
                  else if (uVar1 == 0x778) {
                    lVar10 = func_0x01484f88(param_2,iVar7,0);
                    *(bool *)(param_1 + 0x29d) = lVar10 != 0;
                  }
                  else {
                    if (uVar1 != 0x782) goto LAB_0168ec44;
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                    *(undefined4 *)(param_1 + 0x1ec) = uVar2;
                  }
                }
                else if (uVar1 == 0x788) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x26c) = uVar2;
                }
                else if (uVar1 == 0x790) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x270) = uVar2;
                }
                else {
                  if (uVar1 != 0x798) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x30c) = uVar2;
                }
              }
              else if (uVar1 < 0x7c1) {
                if (uVar1 < 0x7a9) {
                  if (uVar1 == 0x7a0) {
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 1000) = uVar2;
                  }
                  else {
                    if (uVar1 != 0x7a8) goto LAB_0168ec44;
                    lVar10 = func_0x01484f88(param_2,iVar7,0);
                    *(bool *)(param_1 + 0x29a) = lVar10 != 0;
                  }
                }
                else if (uVar1 == 0x7b0) {
                  lVar10 = func_0x01484f88(param_2,iVar7,0);
                  *(bool *)(param_1 + 0x29b) = lVar10 != 0;
                }
                else if (uVar1 == 0x7b8) {
                  lVar10 = func_0x01484f88(param_2,iVar7,0);
                  *(bool *)(param_1 + 0x2a0) = lVar10 != 0;
                }
                else {
                  if (uVar1 != 0x7c0) goto LAB_0168ec44;
                  lVar10 = func_0x01484f88(param_2,iVar7,0);
                  *(bool *)(param_1 + 0x2a1) = lVar10 != 0;
                }
              }
              else if (uVar1 < 0x7e1) {
                if (uVar1 == 0x7c8) {
                  lVar10 = func_0x01484f88(param_2,iVar7,0);
                  *(bool *)(param_1 + 0x2a2) = lVar10 != 0;
                }
                else if (uVar1 == 0x7d8) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x3a0) = uVar2;
                }
                else {
                  if (uVar1 != 0x7e0) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x39c) = uVar2;
                }
              }
              else if (uVar1 == 0x7e8) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x3c4) = uVar2;
              }
              else if (uVar1 == 0x7f0) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x430) = uVar2;
              }
              else {
                if (uVar1 != 0x7f8) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x18c) = uVar2;
              }
            }
            else if (uVar1 < 0x851) {
              if (uVar1 < 0x821) {
                if (uVar1 < 0x809) {
                  if (uVar1 == 0x800) {
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x194) = uVar2;
                  }
                  else {
                    if (uVar1 != 0x808) goto LAB_0168ec44;
                    uVar2 = func_0x01484f98(param_2,iVar7,0);
                    *(undefined4 *)(param_1 + 0x2c) = uVar2;
                  }
                }
                else if (uVar1 == 0x810) {
                  lVar10 = func_0x01484f88(param_2,iVar7,0);
                  *(bool *)(param_1 + 0x2a4) = lVar10 != 0;
                }
                else if (uVar1 == 0x818) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x434) = uVar2;
                }
                else {
                  if (uVar1 != 0x820) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x228) = uVar2;
                }
              }
              else if (uVar1 < 0x839) {
                if (uVar1 == 0x82a) {
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x414);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xcc);
                  goto LAB_0168f13c;
                }
                if (uVar1 == 0x832) {
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x138);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x20);
                  if (iVar8 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x034663ac(iVar8,param_2,uVar2,**(undefined4 **)(_UNK_0168fdd4 + 0x168eeb4));
                  goto LAB_0168eb74;
                }
                if (uVar1 != 0x838) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x214) = uVar2;
              }
              else if (uVar1 == 0x840) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x380) = uVar2;
              }
              else if (uVar1 == 0x848) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0xb8) = uVar2;
              }
              else {
                if (uVar1 != 0x850) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0xb4) = uVar2;
              }
            }
            else if (uVar1 < 0x879) {
              if (uVar1 < 0x863) {
                if (uVar1 != 0x858) {
                  if (uVar1 != 0x862) goto LAB_0168ec44;
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x9c);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
                  goto LAB_0168f13c;
                }
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x490) = uVar2;
              }
              else if (uVar1 == 0x868) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x1a4) = uVar2;
              }
              else if (uVar1 == 0x872) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                *(undefined4 *)(param_1 + 0x38) = uVar2;
              }
              else {
                if (uVar1 != 0x878) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x450) = uVar2;
              }
            }
            else if (uVar1 < 0x891) {
              if (uVar1 == 0x882) {
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 600);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x7c);
                goto LAB_0168f13c;
              }
              if (uVar1 == 0x888) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x310) = uVar2;
              }
              else {
                if (uVar1 != 0x890) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x378) = uVar2;
              }
            }
            else if (uVar1 == 0x89a) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
              *(undefined4 *)(param_1 + 0x4c0) = uVar2;
            }
            else if (uVar1 == 0x8a0) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x4c4) = uVar2;
            }
            else {
              if (uVar1 != 0x8a8) goto LAB_0168ec44;
              lVar10 = func_0x01484f88(param_2,iVar7,0);
              *(bool *)(param_1 + 0x2a7) = lVar10 != 0;
            }
          }
          else if (uVar1 < 0x969) {
            if (uVar1 < 0x909) {
              if (uVar1 < 0x8d3) {
                if (uVar1 < 0x8b9) {
                  if (uVar1 == 0x8b2) {
                    iVar3 = *piVar6;
                    iVar8 = *(int *)(param_1 + 0x280);
                    if (*(int *)(iVar3 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar3 = *piVar6;
                    }
                    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x80);
LAB_0168f13c:
                    if (iVar8 == 0) {
                      func_0x01384bf0();
                    }
                    puVar9 = *(undefined4 **)(_UNK_0168fdd0 + 0x168f154);
                    goto LAB_0168f9f8;
                  }
                  if (uVar1 != 0x8b8) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x4c8) = uVar2;
                }
                else if (uVar1 == 0x8c0) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x444) = uVar2;
                }
                else {
                  if (uVar1 != 0x8c8) {
                    if (uVar1 != 0x8d2) goto LAB_0168ec44;
                    iVar3 = *piVar6;
                    iVar8 = *(int *)(param_1 + 0x1c0);
                    if (*(int *)(iVar3 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar3 = *piVar6;
                    }
                    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x4c);
                    goto LAB_0168f13c;
                  }
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x448) = uVar2;
                }
              }
              else if (uVar1 < 0x8e9) {
                if (uVar1 == 0x8d8) {
                  lVar10 = func_0x01484f88(param_2,iVar7,0);
                  *(bool *)(param_1 + 0x29c) = lVar10 != 0;
                }
                else if (uVar1 == 0x8e0) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x4b4) = uVar2;
                }
                else {
                  if (uVar1 != 0x8e8) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x16c) = uVar2;
                }
              }
              else if (uVar1 == 0x8f0) {
                lVar10 = func_0x01484f88(param_2,iVar7,0);
                *(bool *)(param_1 + 0x29e) = lVar10 != 0;
              }
              else if (uVar1 == 0x900) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x27c) = uVar2;
              }
              else {
                if (uVar1 != 0x908) goto LAB_0168ec44;
                lVar10 = func_0x01484f88(param_2,iVar7,0);
                *(bool *)(param_1 + 0x2a6) = lVar10 != 0;
              }
            }
            else if (uVar1 < 0x929) {
              if (uVar1 < 0x913) {
                if ((uVar1 | 2) == 0x912) {
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x44c);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xd8);
                  goto LAB_0168e6dc;
                }
                goto LAB_0168ec44;
              }
              if (uVar1 == 0x918) {
                lVar10 = func_0x01484f88(param_2,iVar7,0);
                *(bool *)(param_1 + 0x2a3) = lVar10 != 0;
              }
              else if (uVar1 == 0x920) {
                lVar10 = func_0x01484f88(param_2,iVar7,0);
                *(bool *)(param_1 + 0x394) = lVar10 != 0;
              }
              else {
                if (uVar1 != 0x928) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x398) = uVar2;
              }
            }
            else if (uVar1 < 0x949) {
              if (uVar1 == 0x930) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x3c) = uVar2;
              }
              else if (uVar1 == 0x940) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x2fc) = uVar2;
              }
              else {
                if (uVar1 != 0x948) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x300) = uVar2;
              }
            }
            else if (uVar1 == 0x950) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x304) = uVar2;
            }
            else if (uVar1 == 0x960) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x260) = uVar2;
            }
            else {
              if (uVar1 != 0x968) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x4b8) = uVar2;
            }
          }
          else if (uVar1 < 0x9bb) {
            if (uVar1 < 0x989) {
              if (uVar1 < 0x973) {
                if ((uVar1 | 2) == 0x972) {
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x4bc);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xfc);
                  goto LAB_0168e6dc;
                }
                goto LAB_0168ec44;
              }
              if (uVar1 == 0x97a) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                *(undefined4 *)(param_1 + 0x4a8) = uVar2;
              }
              else if (uVar1 == 0x980) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x4ac) = uVar2;
              }
              else {
                if (uVar1 != 0x988) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x4b0) = uVar2;
              }
            }
            else if (uVar1 < 0x9a3) {
              if (uVar1 == 0x990) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x174) = uVar2;
              }
              else if (uVar1 == 0x998) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x178) = uVar2;
              }
              else {
                if (uVar1 != 0x9a2) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                *(undefined4 *)(param_1 + 0x36c) = uVar2;
              }
            }
            else if (uVar1 == 0x9a8) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x370) = uVar2;
            }
            else if (uVar1 == 0x9b0) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x374) = uVar2;
            }
            else {
              if (uVar1 != 0x9ba) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
              *(undefined4 *)(param_1 + 0x218) = uVar2;
            }
          }
          else if (uVar1 < 0x9e9) {
            if (uVar1 < 0x9d1) {
              if (uVar1 == 0x9c2) {
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x144);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x28);
                goto LAB_0168f13c;
              }
              if (uVar1 != 0x9d0) goto LAB_0168ec44;
              lVar10 = func_0x01484f88(param_2,iVar7,0);
              *(bool *)(param_1 + 0x2a8) = lVar10 != 0;
            }
            else if (uVar1 == 0x9d8) {
              lVar10 = func_0x01484f88(param_2,iVar7,0);
              *(bool *)(param_1 + 0x164) = lVar10 != 0;
            }
            else if (uVar1 == 0x9e0) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x168) = uVar2;
            }
            else {
              if (uVar1 != 0x9e8) goto LAB_0168ec44;
              lVar10 = func_0x01484f88(param_2,iVar7,0);
              *(bool *)(param_1 + 0x298) = lVar10 != 0;
            }
          }
          else if (uVar1 < 0xa01) {
            if (uVar1 == 0x9f0) {
              lVar10 = func_0x01484f88(param_2,iVar7,0);
              *(bool *)(param_1 + 0x120) = lVar10 != 0;
            }
            else if (uVar1 == 0x9f8) {
              lVar10 = func_0x01484f88(param_2,iVar7,0);
              *(bool *)(param_1 + 0x21c) = lVar10 != 0;
            }
            else {
              if (uVar1 != 0xa00) goto LAB_0168ec44;
              lVar10 = func_0x01484f88(param_2,iVar7,0);
              *(bool *)(param_1 + 0x2a9) = lVar10 != 0;
            }
          }
          else if (uVar1 == 0xa28) {
            lVar10 = func_0x01484f88(param_2,iVar7,0);
            *(bool *)(param_1 + 0x154) = lVar10 != 0;
          }
          else if (uVar1 == 0xa30) {
            lVar10 = func_0x01484f88(param_2,iVar7,0);
            *(bool *)(param_1 + 0x299) = lVar10 != 0;
          }
          else {
            if (uVar1 != 0xa38) goto LAB_0168ec44;
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x3e4) = uVar2;
          }
          goto LAB_0168ec58;
        }
        if (uVar1 < 0x5f1) {
          if (uVar1 < 0x56b) {
            if (uVar1 < 0x529) {
              if (0x508 < uVar1) {
                uVar4 = 0x51a;
                if (uVar1 < 0x51b) {
                  if (uVar1 == 0x50a) {
LAB_0168ead8:
                    iVar3 = *piVar6;
                    iVar8 = *(int *)(param_1 + 0x3f0);
                    if (*(int *)(iVar3 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar3 = *piVar6;
                    }
                    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xb8);
                    goto LAB_0168eb4c;
                  }
                  if (uVar1 != 0x510) {
                    if (uVar1 == 0x51a) {
                      iVar3 = *piVar6;
                      iVar8 = *(int *)(param_1 + 0x3f8);
                      if (*(int *)(iVar3 + 0x74) == 0) {
                        func_0x01384ab4();
                        iVar3 = *piVar6;
                      }
                      uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xbc);
                      goto LAB_0168fa64;
                    }
                    goto LAB_0168ec44;
                  }
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x3f4) = uVar2;
                }
                else {
                  if (uVar1 != 0x520) {
                    uVar4 = 0x522;
                  }
                  if (uVar1 == 0x520 || uVar1 == uVar4) {
                    iVar3 = *piVar6;
                    iVar8 = *(int *)(param_1 + 0x3fc);
                    if (*(int *)(iVar3 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar3 = *piVar6;
                    }
                    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc0);
                    goto LAB_0168eb4c;
                  }
                  if (uVar1 != 0x528) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x400) = uVar2;
                }
                goto LAB_0168ec58;
              }
              uVar4 = 0x4f8;
              if (uVar1 < 0x4f9) {
                if (uVar1 == 0x4f2) {
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x3dc);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xb0);
                  goto LAB_0168f9e4;
                }
                if (uVar1 == 0x4f8) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
                  goto LAB_0168ec58;
                }
              }
              else {
                if (uVar1 != 0x500) {
                  uVar4 = 0x502;
                }
                if (uVar1 == 0x500 || uVar1 == uVar4) {
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x3ec);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xb4);
                  goto LAB_0168eb4c;
                }
                if (uVar1 == 0x508) goto LAB_0168ead8;
              }
            }
            else {
              if (0x540 < uVar1) {
                if (uVar1 < 0x553) {
                  uVar4 = 0x548;
                  if (uVar1 != 0x548) {
                    if (uVar1 != 0x550) {
                      uVar4 = 0x552;
                    }
                    if (uVar1 == 0x550 || uVar1 == uVar4) {
                      iVar3 = *piVar6;
                      iVar8 = *(int *)(param_1 + 0x420);
                      if (*(int *)(iVar3 + 0x74) == 0) {
                        func_0x01384ab4();
                        iVar3 = *piVar6;
                      }
                      uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xd4);
                      goto LAB_0168e6dc;
                    }
                    goto LAB_0168ec44;
                  }
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x410) = uVar2;
                }
                else if (uVar1 == 0x558) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x438) = uVar2;
                }
                else if (uVar1 == 0x562) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                  *(undefined4 *)(param_1 + 0x43c) = uVar2;
                }
                else {
                  if (uVar1 != 0x56a) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
                  *(undefined4 *)(param_1 + 0x440) = uVar2;
                }
                goto LAB_0168ec58;
              }
              if (uVar1 < 0x533) {
                if ((uVar1 | 2) == 0x532) {
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x404);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc4);
                  goto LAB_0168eb4c;
                }
              }
              else {
                uVar4 = 0x53a;
                if (uVar1 != 0x53a) {
                  uVar4 = 0x53d;
                }
                if (uVar1 == 0x53a || uVar1 == uVar4) {
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x408);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 200);
                  goto LAB_0168e768;
                }
                if (uVar1 == 0x540) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x40c) = uVar2;
                  goto LAB_0168ec58;
                }
              }
            }
            goto LAB_0168ec44;
          }
          if (uVar1 < 0x5a9) {
            if (uVar1 < 0x583) {
              if (0x578 < uVar1) {
                uVar4 = 0x57a;
                if (uVar1 != 0x57a) {
                  if (uVar1 != 0x580) {
                    uVar4 = 0x582;
                  }
                  if (uVar1 == 0x580 || uVar1 == uVar4) {
                    iVar3 = *piVar6;
                    iVar8 = *(int *)(param_1 + 0x464);
                    if (*(int *)(iVar3 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar3 = *piVar6;
                    }
                    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xe8);
                    goto LAB_0168e6dc;
                  }
                  goto LAB_0168ec44;
                }
LAB_0168e6b8:
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x460);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xe4);
                goto LAB_0168e6dc;
              }
              if (uVar1 != 0x570) {
                if (uVar1 == 0x578) goto LAB_0168e6b8;
                goto LAB_0168ec44;
              }
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x45c) = uVar2;
            }
            else if (uVar1 < 0x591) {
              uVar4 = 0x588;
              if (uVar1 != 0x588) {
                uVar4 = 0x58a;
              }
              if (uVar1 == 0x588 || uVar1 == uVar4) {
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x468);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xec);
                goto LAB_0168e6dc;
              }
              if (uVar1 != 0x590) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x46c) = uVar2;
            }
            else if (uVar1 == 0x598) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x470) = uVar2;
            }
            else {
              if (uVar1 != 0x5a0) {
                if (uVar1 == 0x5a8) goto LAB_0168e130;
                goto LAB_0168ec44;
              }
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x474) = uVar2;
            }
          }
          else if (uVar1 < 0x5c9) {
            if (uVar1 < 0x5b3) {
              if (uVar1 == 0x5aa) {
LAB_0168e130:
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x478);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xf0);
                goto LAB_0168e6dc;
              }
              if (uVar1 != 0x5b2) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
              *(undefined4 *)(param_1 + 0x480) = uVar2;
            }
            else if (uVar1 == 0x5b8) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x484) = uVar2;
            }
            else {
              if (uVar1 != 0x5c0) {
                if (uVar1 == 0x5c8) goto LAB_0168dda4;
                goto LAB_0168ec44;
              }
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x488) = uVar2;
            }
          }
          else if (uVar1 < 0x5db) {
            if (uVar1 == 0x5ca) {
LAB_0168dda4:
              iVar3 = *piVar6;
              iVar8 = *(int *)(param_1 + 0x48c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar6;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xf8);
              goto LAB_0168e6dc;
            }
            if (uVar1 == 0x5d0) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x4a0) = uVar2;
            }
            else {
              if (uVar1 != 0x5da) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              uVar2 = func_0x01484fc8(param_2,iVar7,uVar2,0);
              *(undefined4 *)(param_1 + 0x4a4) = uVar2;
            }
          }
          else if (uVar1 == 0x5e0) {
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x1f8) = uVar2;
          }
          else {
            if (uVar1 != 0x5e8) {
              if (uVar1 == 0x5f0) goto LAB_0168e504;
              goto LAB_0168ec44;
            }
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x20c) = uVar2;
          }
        }
        else if (uVar1 < 0x691) {
          if (uVar1 < 0x639) {
            if (uVar1 < 0x609) {
              if (uVar1 < 0x5f9) {
                if (uVar1 == 0x5f2) {
LAB_0168e504:
                  iVar3 = *piVar6;
                  iVar8 = *(int *)(param_1 + 0x454);
                  if (*(int *)(iVar3 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar3 = *piVar6;
                  }
                  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xdc);
                  goto LAB_0168e6dc;
                }
                if (uVar1 != 0x5f8) goto LAB_0168ec44;
              }
              else if (uVar1 != 0x5fa) {
                if (uVar1 == 0x600) {
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
                }
                else {
                  if (uVar1 != 0x608) goto LAB_0168ec44;
                  uVar2 = func_0x01484f98(param_2,iVar7,0);
                  *(undefined4 *)(param_1 + 0x1cc) = uVar2;
                }
                goto LAB_0168ec58;
              }
              iVar3 = *piVar6;
              iVar8 = *(int *)(param_1 + 0x458);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar6;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xe0);
LAB_0168e6dc:
              if (iVar8 == 0) {
                func_0x01384bf0();
              }
              puVar9 = *(undefined4 **)(_UNK_0168f6d4 + 0x168e6f4);
              goto LAB_0168eb60;
            }
            if (uVar1 < 0x621) {
              if (uVar1 == 0x610) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x1a8) = uVar2;
              }
              else if (uVar1 == 0x618) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x25c) = uVar2;
              }
              else {
                if (uVar1 != 0x620) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x3bc) = uVar2;
              }
            }
            else if (uVar1 == 0x628) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x268) = uVar2;
            }
            else if (uVar1 == 0x630) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x330) = uVar2;
            }
            else {
              if (uVar1 != 0x638) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x334) = uVar2;
            }
          }
          else if (uVar1 < 0x669) {
            if (uVar1 < 0x649) {
              if (uVar1 == 0x640) {
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x2ec) = uVar2;
              }
              else {
                if (uVar1 != 0x648) goto LAB_0168ec44;
                uVar2 = func_0x01484f98(param_2,iVar7,0);
                *(undefined4 *)(param_1 + 0x314) = uVar2;
              }
            }
            else if (uVar1 == 0x650) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x2e8) = uVar2;
            }
            else if (uVar1 == 0x660) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x41c) = uVar2;
            }
            else {
              if (uVar1 != 0x668) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x3cc) = uVar2;
            }
          }
          else if (uVar1 < 0x67b) {
            if (uVar1 != 0x670) {
              uVar4 = 0x678;
              if (uVar1 != 0x678) {
                uVar4 = 0x67a;
              }
              if (uVar1 == 0x678 || uVar1 == uVar4) {
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x418);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xd0);
                goto LAB_0168e6dc;
              }
              goto LAB_0168ec44;
            }
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x3d0) = uVar2;
          }
          else if (uVar1 == 0x680) {
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x37c) = uVar2;
          }
          else if (uVar1 == 0x688) {
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x188) = uVar2;
          }
          else {
            if (uVar1 != 0x690) goto LAB_0168ec44;
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 400) = uVar2;
          }
        }
        else if (uVar1 < 0x6e9) {
          if (uVar1 < 0x6b9) {
            if (uVar1 < 0x6a1) {
              if (uVar1 == 0x69a) {
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x230);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
LAB_0168fd50:
                if (iVar8 == 0) {
                  func_0x01384bf0();
                }
                puVar9 = *(undefined4 **)(_UNK_0168fdcc + 0x168fd68);
                goto LAB_0168fd64;
              }
              if (uVar1 != 0x6a0) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x494) = uVar2;
            }
            else if (uVar1 == 0x6a8) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x498) = uVar2;
            }
            else {
              if (uVar1 == 0x6b2) {
                iVar3 = *piVar6;
                iVar8 = *(int *)(param_1 + 0x2b0);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar6;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x88);
                goto LAB_0168fd50;
              }
              if (uVar1 != 0x6b8) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x220) = uVar2;
            }
          }
          else if (uVar1 < 0x6d1) {
            if (uVar1 == 0x6c0) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x49c) = uVar2;
            }
            else if (uVar1 == 0x6c8) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x2d0) = uVar2;
            }
            else {
              if (uVar1 != 0x6d0) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x2d8) = uVar2;
            }
          }
          else if (uVar1 == 0x6d8) {
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x2dc) = uVar2;
          }
          else if (uVar1 == 0x6e0) {
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x2e0) = uVar2;
          }
          else {
            if (uVar1 != 0x6e8) goto LAB_0168ec44;
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 900) = uVar2;
          }
        }
        else if (uVar1 < 0x711) {
          if (uVar1 < 0x6f9) {
            if (uVar1 == 0x6f0) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x388) = uVar2;
            }
            else {
              if (uVar1 != 0x6f8) goto LAB_0168ec44;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x2d4) = uVar2;
            }
          }
          else if (uVar1 == 0x700) {
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x170) = uVar2;
          }
          else if (uVar1 == 0x708) {
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x32c) = uVar2;
          }
          else {
            if (uVar1 != 0x710) goto LAB_0168ec44;
            lVar10 = func_0x01484f88(param_2,iVar7,0);
            *(bool *)(param_1 + 0x2a5) = lVar10 != 0;
          }
        }
        else if (uVar1 < 0x729) {
          if (uVar1 == 0x718) {
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x3b8) = uVar2;
          }
          else if (uVar1 == 0x720) {
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x424) = uVar2;
          }
          else {
            if (uVar1 != 0x728) goto LAB_0168ec44;
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x428) = uVar2;
          }
        }
        else if (uVar1 == 0x730) {
          uVar2 = func_0x01484f98(param_2,iVar7,0);
          *(undefined4 *)(param_1 + 0x42c) = uVar2;
        }
        else {
          if (uVar1 == 0x73a) {
            iVar3 = *piVar6;
            iVar8 = *(int *)(param_1 + 0x47c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar6;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xf4);
            goto LAB_0168fd50;
          }
          if (uVar1 != 0x740) goto LAB_0168ec44;
          uVar2 = func_0x01484f98(param_2,iVar7,0);
          *(undefined4 *)(param_1 + 0x1a0) = uVar2;
        }
      }
LAB_0168ec58:
      uVar1 = func_0x01484f58(param_2,iVar7,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.Global$$get_XXX_RowIdentifier RVA 0x167fdd8 =====

undefined4 FUN_0168fdd8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4cc);
}



// ===== fat.rawdata.Global$$set_XXX_RowIdentifier RVA 0x167fde0 =====

void FUN_0168fde0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4cc) = param_2;
  return;
}



// ===== fat.rawdata.Global$$.cctor RVA 0x167fde8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0168fde8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_016907c8 + 0x168fdfc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016907cc + 0x168fe10));
    func_0x01384978(*(undefined4 *)(_UNK_016907d0 + 0x168fe1c));
    func_0x01384978(*(undefined4 *)(_UNK_016907d4 + 0x168fe28));
    func_0x01384978(*(undefined4 *)(_UNK_016907d8 + 0x168fe34));
    func_0x01384978(*(undefined4 *)(_UNK_016907dc + 0x168fe40));
    func_0x01384978(*(undefined4 *)(_UNK_016907e0 + 0x168fe4c));
    func_0x01384978(*(undefined4 *)(_UNK_016907e4 + 0x168fe58));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_016907e8 + 0x168fe6c);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_016907ec + 0x168fe7c);
  uVar1 = func_0x0244f954(0xda,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x862,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x12a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x1ba,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x1ca,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x1d2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f970(0x21a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f980(0x12,**(undefined4 **)(_UNK_016907f0 + 0x168ff4c),0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_016907f4 + 0x168ff64));
  func_0x0244f944(uVar3,uVar1,uVar2,0x832,**(undefined4 **)(_UNK_016907f8 + 0x168ff84));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x20) = uVar3;
  uVar1 = func_0x0244f954(0x22a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x24) = uVar1;
  uVar1 = func_0x0244f954(0x9c2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x28) = uVar1;
  uVar1 = func_0x0244f954(0x232,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x2c) = uVar1;
  uVar1 = func_0x0244f954(0x23a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x30) = uVar1;
  uVar1 = func_0x0244f954(0x242,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x34) = uVar1;
  uVar1 = func_0x0244f970(0x252,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x38) = uVar1;
  uVar1 = func_0x0244f954(0x272,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x3c) = uVar1;
  uVar1 = func_0x0244f970(0x27a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x40) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  puVar6 = *(undefined4 **)(_UNK_016907fc + 0x1690090);
  uVar3 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_01690800 + 0x16900b0);
  func_0x0244f990(uVar3,uVar1,uVar2,0x28a,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x44) = uVar3;
  uVar1 = func_0x0244f954(0x2a2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x48) = uVar1;
  uVar1 = func_0x0244f954(0x8d2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x4c) = uVar1;
  uVar1 = func_0x0244f998(0x2b2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x50) = uVar1;
  uVar1 = func_0x0244f954(0x2ea,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x54) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x2fa,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x58) = uVar3;
  uVar1 = func_0x0244f970(0x312,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x5c) = uVar1;
  uVar1 = func_0x0244f970(0x31a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x60) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x69a,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 100) = uVar3;
  uVar1 = func_0x0244f970(0x33a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x68) = uVar1;
  uVar1 = func_0x0244f970(0x342,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x6c) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x34a,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x70) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x352,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x74) = uVar3;
  uVar1 = func_0x0244f970(0x362,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x78) = uVar1;
  uVar1 = func_0x0244f954(0x882,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x7c) = uVar1;
  uVar1 = func_0x0244f954(0x8b2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x80) = uVar1;
  uVar1 = func_0x0244f954(0x3ca,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x84) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x6b2,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x88) = uVar3;
  uVar1 = func_0x0244f970(0x3d2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x8c) = uVar1;
  uVar1 = func_0x0244f970(0x452,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x90) = uVar1;
  uVar1 = func_0x0244f970(0x47a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x94) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x49a,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x98) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x4aa,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x9c) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x4b2,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xa0) = uVar3;
  uVar1 = func_0x0244f970(0x4c2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xa4) = uVar1;
  uVar1 = func_0x0244f998(0x4e2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xa8) = uVar1;
  uVar1 = func_0x0244f998(0x4ea,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xac) = uVar1;
  uVar1 = func_0x0244f954(0x4f2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xb0) = uVar1;
  uVar1 = func_0x0244f970(0x502,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xb4) = uVar1;
  uVar1 = func_0x0244f970(0x50a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xb8) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x51a,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xbc) = uVar3;
  uVar1 = func_0x0244f970(0x522,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc0) = uVar1;
  uVar1 = func_0x0244f970(0x532,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc4) = uVar1;
  uVar1 = func_0x0244f998(0x53a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 200) = uVar1;
  uVar1 = func_0x0244f954(0x82a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xcc) = uVar1;
  uVar1 = func_0x0244f970(0x67a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xd0) = uVar1;
  uVar1 = func_0x0244f970(0x552,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xd4) = uVar1;
  uVar1 = func_0x0244f970(0x912,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xd8) = uVar1;
  uVar1 = func_0x0244f970(0x5f2,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xdc) = uVar1;
  uVar1 = func_0x0244f970(0x5fa,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xe0) = uVar1;
  uVar1 = func_0x0244f970(0x57a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xe4) = uVar1;
  uVar1 = func_0x0244f970(0x582,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xe8) = uVar1;
  uVar1 = func_0x0244f970(0x58a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xec) = uVar1;
  uVar1 = func_0x0244f970(0x5aa,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xf0) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x73a,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xf4) = uVar3;
  uVar1 = func_0x0244f970(0x5ca,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xf8) = uVar1;
  uVar1 = func_0x0244f970(0x972,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xfc) = uVar1;
  return;
}


