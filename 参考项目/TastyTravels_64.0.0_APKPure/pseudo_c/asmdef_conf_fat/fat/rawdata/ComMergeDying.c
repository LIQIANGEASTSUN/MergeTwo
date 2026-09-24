/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeDying$$.ctor RVA 0x191dc48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192dc48(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0192dd98 + 0x192dc5c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192dd9c + 0x192dc70));
    func_0x01384978(*(undefined4 *)(_UNK_0192dda0 + 0x192dc7c));
    func_0x01384978(*(undefined4 *)(_UNK_0192dda4 + 0x192dc88));
    func_0x01384978(*(undefined4 *)(_UNK_0192dda8 + 0x192dc94));
    func_0x01384978(*(undefined4 *)(_UNK_0192ddac + 0x192dca0));
    func_0x01384978(*(undefined4 *)(_UNK_0192ddb0 + 0x192dcac));
    func_0x01384978(*(undefined4 *)(_UNK_0192ddb4 + 0x192dcb8));
    func_0x01384978(*(undefined4 *)(_UNK_0192ddb8 + 0x192dcc4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192ddbc + 0x192dcd8));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0192ddc0 + 0x192dcec));
  puVar2 = *(undefined4 **)(_UNK_0192ddc4 + 0x192dd00);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_0192ddc8 + 0x192dd18));
  puVar2 = *(undefined4 **)(_UNK_0192ddcc + 0x192dd2c);
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x034614f8(iVar1,**(undefined4 **)(_UNK_0192ddd0 + 0x192dd44));
  piVar3 = *(int **)(_UNK_0192ddd4 + 0x192dd58);
  param_1[8] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0192ddd8 + 0x192dd78));
                    /* WARNING: Could not recover jumptable at 0x0192dd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeDying$$.ctor RVA 0x191dddc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192dddc(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar6 = (char *)(_UNK_0192defc + 0x192ddf4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192df00 + 0x192de08));
    func_0x01384978(*(undefined4 *)(_UNK_0192df04 + 0x192de14));
    func_0x01384978(*(undefined4 *)(_UNK_0192df08 + 0x192de20));
    *pcVar6 = '\x01';
  }
  FUN_0192dc48(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar7,**(undefined4 **)(_UNK_0192df0c + 0x192de60));
  iVar7 = *(int *)(param_2 + 0x18);
  uVar1 = *(undefined1 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar7,**(undefined4 **)(_UNK_0192df10 + 0x192de90));
  iVar7 = *(int *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0345e8e4(iVar7,**(undefined4 **)(_UNK_0192df14 + 0x192dec0));
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar1 = *(undefined1 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined1 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.ComMergeDying$$Clone RVA 0x191df18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0192df18(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0192df6c + 0x192df2c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192df70 + 0x192df40));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192df74 + 0x192df54));
  FUN_0192dddc(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeDying$$ProxyInternalMergeFrom RVA 0x191df78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192df78(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  pcVar4 = (char *)(_UNK_0192e224 + 0x192df94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192e228 + 0x192dfa8));
    func_0x01384978(*(undefined4 *)(_UNK_0192e22c + 0x192dfb4));
    func_0x01384978(*(undefined4 *)(_UNK_0192e230 + 0x192dfc0));
    func_0x01384978(*(undefined4 *)(_UNK_0192e234 + 0x192dfcc));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0192e238 + 0x192dffc);
    puVar8 = *(undefined4 **)(_UNK_0192e23c + 0x192e004);
    puVar9 = *(undefined4 **)(_UNK_0192e240 + 0x192e00c);
    do {
      if (uVar1 < 0x21) {
        if (uVar1 < 0x11) {
          if (uVar1 == 8) {
            uVar3 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar3;
          }
          else if (uVar1 == 0x10) {
            lVar10 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x14) = lVar10 != 0;
          }
          else {
LAB_0192e1b4:
            uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar3;
          }
        }
        else if (uVar1 == 0x18 || uVar1 == 0x1a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar3,*puVar8);
        }
        else {
          if (uVar1 != 0x20) goto LAB_0192e1b4;
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar3;
        }
      }
      else if (uVar1 < 0x31) {
        if (uVar1 == 0x2a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x034604a8(iVar6,param_2,uVar3,*puVar9);
        }
        else {
          if (uVar1 != 0x30) goto LAB_0192e1b4;
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x24) = uVar3;
        }
      }
      else if (uVar1 == 0x38) {
        lVar10 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x28) = lVar10 != 0;
      }
      else if (uVar1 == 0x40) {
        uVar3 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
      }
      else {
        if (uVar1 != 0x4a) goto LAB_0192e1b4;
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar3,**(undefined4 **)(_UNK_0192e244 + 0x192e128));
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeDying$$get_XXX_RowIdentifier RVA 0x191e248 =====

undefined4 FUN_0192e248(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== fat.rawdata.ComMergeDying$$set_XXX_RowIdentifier RVA 0x191e250 =====

void FUN_0192e250(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeDying$$.cctor RVA 0x191e258 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192e258(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_0192e370 + 0x192e26c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192e374 + 0x192e280));
    func_0x01384978(*(undefined4 *)(_UNK_0192e378 + 0x192e28c));
    func_0x01384978(*(undefined4 *)(_UNK_0192e37c + 0x192e298));
    func_0x01384978(*(undefined4 *)(_UNK_0192e380 + 0x192e2a4));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0192e384 + 0x192e2b8);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_0192e388 + 0x192e2c8);
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0192e38c + 0x192e330));
  func_0x0244f990(uVar3,uVar1,uVar2,0x2a,**(undefined4 **)(_UNK_0192e390 + 0x192e350));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar3;
  return;
}


