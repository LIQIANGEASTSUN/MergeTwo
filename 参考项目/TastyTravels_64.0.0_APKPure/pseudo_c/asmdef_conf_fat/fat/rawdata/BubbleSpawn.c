/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.BubbleSpawn$$.ctor RVA 0x190bb80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0191bb80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0191bca0 + 0x191bb94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0191bca4 + 0x191bba8));
    func_0x01384978(*(undefined4 *)(_UNK_0191bca8 + 0x191bbb4));
    func_0x01384978(*(undefined4 *)(_UNK_0191bcac + 0x191bbc0));
    func_0x01384978(*(undefined4 *)(_UNK_0191bcb0 + 0x191bbcc));
    func_0x01384978(*(undefined4 *)(_UNK_0191bcb4 + 0x191bbd8));
    func_0x01384978(*(undefined4 *)(_UNK_0191bcb8 + 0x191bbe4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0191bcbc + 0x191bbf8));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0191bcc0 + 0x191bc0c));
  puVar5 = *(undefined4 **)(_UNK_0191bcc4 + 0x191bc20);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0191bcc8 + 0x191bc38);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_0191bccc + 0x191bc60);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0191bcd0 + 0x191bc80));
                    /* WARNING: Could not recover jumptable at 0x0191bc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.BubbleSpawn$$.ctor RVA 0x190bcd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0191bcd4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_0191bdb8 + 0x191bcec);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0191bdbc + 0x191bd00));
    func_0x01384978(*(undefined4 *)(_UNK_0191bdc0 + 0x191bd0c));
    *pcVar3 = '\x01';
  }
  FUN_0191bb80(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_0191bdc4 + 0x191bd4c));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_0191bdc8 + 0x191bd78);
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.BubbleSpawn$$Clone RVA 0x190bdcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0191bdcc(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0191be20 + 0x191bde0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0191be24 + 0x191bdf4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0191be28 + 0x191be08));
  FUN_0191bcd4(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.BubbleSpawn$$ProxyInternalMergeFrom RVA 0x190be2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0191be2c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar3 = (char *)(_UNK_0191bfe8 + 0x191be48);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0191bfec + 0x191be5c));
    func_0x01384978(*(undefined4 *)(_UNK_0191bff0 + 0x191be68));
    func_0x01384978(*(undefined4 *)(_UNK_0191bff4 + 0x191be74));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0191bff8 + 0x191bea4);
    puVar8 = *(undefined4 **)(_UNK_0191bffc + 0x191beac);
    puVar9 = *(undefined4 **)(_UNK_0191c000 + 0x191beb4);
    do {
      if (uVar1 < 0x19) {
        if (uVar1 == 0x10 || uVar1 == 0x12) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_0191bf48:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar4,*puVar8);
        }
        else {
          if (uVar1 == 0x18) goto LAB_0191bf24;
LAB_0191bf6c:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else {
        if (uVar1 == 0x1a) {
LAB_0191bf24:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          goto LAB_0191bf48;
        }
        if (uVar1 == 0x22) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar4,*puVar9);
        }
        else {
          if (uVar1 != 0x28) goto LAB_0191bf6c;
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.BubbleSpawn$$get_XXX_RowIdentifier RVA 0x190c004 =====

undefined4 FUN_0191c004(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== fat.rawdata.BubbleSpawn$$set_XXX_RowIdentifier RVA 0x190c00c =====

void FUN_0191c00c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== fat.rawdata.BubbleSpawn$$.cctor RVA 0x190c014 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0191c014(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0191c0b8 + 0x191c024);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0191c0bc + 0x191c038));
    func_0x01384978(*(undefined4 *)(_UNK_0191c0c0 + 0x191c044));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0191c0c4 + 0x191c058);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0191c0c8 + 0x191c068);
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


