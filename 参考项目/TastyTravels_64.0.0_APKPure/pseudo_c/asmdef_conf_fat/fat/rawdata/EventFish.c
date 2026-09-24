/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventFish$$.ctor RVA 0x15c5c6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d5c6c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_015d5d94 + 0x15d5c80);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d5d98 + 0x15d5c94));
    func_0x01384978(*(undefined4 *)(_UNK_015d5d9c + 0x15d5ca0));
    func_0x01384978(*(undefined4 *)(_UNK_015d5da0 + 0x15d5cac));
    func_0x01384978(*(undefined4 *)(_UNK_015d5da4 + 0x15d5cb8));
    func_0x01384978(*(undefined4 *)(_UNK_015d5da8 + 0x15d5cc4));
    func_0x01384978(*(undefined4 *)(_UNK_015d5dac + 0x15d5cd0));
    func_0x01384978(*(undefined4 *)(_UNK_015d5db0 + 0x15d5cdc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015d5db4 + 0x15d5cf0));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015d5db8 + 0x15d5d04));
  puVar2 = *(undefined4 **)(_UNK_015d5dbc + 0x15d5d18);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_015d5dc0 + 0x15d5d30));
  piVar3 = *(int **)(_UNK_015d5dc8 + 0x15d5d50);
  iVar4 = *(int *)(**(int **)(_UNK_015d5dc4 + 0x15d5d44) + 0x74);
  param_1[6] = iVar1;
  param_1[0x13] = *piVar3;
  if (iVar4 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015d5dcc + 0x15d5d74));
                    /* WARNING: Could not recover jumptable at 0x015d5d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventFish$$.ctor RVA 0x15c5dd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d5dd0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  pcVar7 = (char *)(_UNK_015d5ef0 + 0x15d5de8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d5ef4 + 0x15d5dfc));
    func_0x01384978(*(undefined4 *)(_UNK_015d5ef8 + 0x15d5e08));
    *pcVar7 = '\x01';
  }
  FUN_015d5c6c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0244f94c(iVar8,**(undefined4 **)(_UNK_015d5efc + 0x15d5e50));
  iVar8 = *(int *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0244f968(iVar8,**(undefined4 **)(_UNK_015d5f00 + 0x15d5e80));
  uVar11 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x24) = uVar11;
  uVar11 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x34) = uVar11;
  uVar1 = *(undefined1 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0x40) = uVar1;
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  uVar10 = *(undefined4 *)(param_2 + 0x58);
  uVar9 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar9;
  *(undefined4 *)(param_1 + 0x50) = uVar6;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0x58) = uVar10;
  uVar2 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.EventFish$$Clone RVA 0x15c5f04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015d5f04(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015d5f58 + 0x15d5f18);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d5f5c + 0x15d5f2c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015d5f60 + 0x15d5f40));
  FUN_015d5dd0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventFish$$ProxyInternalMergeFrom RVA 0x15c5f64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d5f64(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  pcVar4 = (char *)(_UNK_015d6358 + 0x15d5f80);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d635c + 0x15d5f94));
    func_0x01384978(*(undefined4 *)(_UNK_015d6360 + 0x15d5fa0));
    func_0x01384978(*(undefined4 *)(_UNK_015d6364 + 0x15d5fac));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015d6368 + 0x15d5fdc);
    puVar8 = *(undefined4 **)(_UNK_015d636c + 0x15d5fe4);
    puVar9 = *(undefined4 **)(_UNK_015d6370 + 0x15d5fec);
    do {
      if (uVar1 < 0x51) {
        if (uVar1 < 0x29) {
          if (uVar1 < 0x11) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else {
              if (uVar1 != 0x10) goto LAB_015d621c;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x14) = uVar2;
            }
          }
          else if (uVar1 == 0x18) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar2;
          }
          else if (uVar1 == 0x20) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
          else {
            if (uVar1 != 0x28) goto LAB_015d621c;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x24) = uVar2;
          }
        }
        else if (uVar1 < 0x39) {
          if (uVar1 == 0x30) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar2;
          }
          else {
            if (uVar1 != 0x38) goto LAB_015d621c;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x38) = uVar2;
          }
        }
        else if (uVar1 == 0x42) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x4c) = uVar2;
        }
        else if (uVar1 == 0x48) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x54) = uVar2;
        }
        else {
          if (uVar1 != 0x50) goto LAB_015d621c;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x58) = uVar2;
        }
      }
      else if (uVar1 < 0x89) {
        if (uVar1 < 0x71) {
          if (uVar1 == 0x58) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x30) = uVar2;
          }
          else if (uVar1 == 0x70) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x44) = uVar2;
          }
          else {
LAB_015d621c:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x80 || uVar1 == 0x82) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f96c(iVar6,param_2,uVar2,*puVar8);
        }
        else {
          if (uVar1 != 0x88) goto LAB_015d621c;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
      }
      else if (uVar1 < 0xa1) {
        if (uVar1 == 0x90) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x34) = uVar2;
        }
        else if (uVar1 == 0x98) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x50) = uVar2;
        }
        else {
          if (uVar1 != 0xa0) goto LAB_015d621c;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x48) = uVar2;
        }
      }
      else if (uVar1 == 0xaa) {
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f950(iVar6,param_2,uVar2,*puVar9);
      }
      else if (uVar1 == 0xb0) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x3c) = uVar2;
      }
      else {
        if (uVar1 != 0xb8) goto LAB_015d621c;
        lVar10 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x40) = lVar10 != 0;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventFish$$get_XXX_RowIdentifier RVA 0x15c6374 =====

undefined4 FUN_015d6374(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== fat.rawdata.EventFish$$set_XXX_RowIdentifier RVA 0x15c637c =====

void FUN_015d637c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}



// ===== fat.rawdata.EventFish$$.cctor RVA 0x15c6384 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d6384(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015d6410 + 0x15d6394);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d6414 + 0x15d63a8));
    func_0x01384978(*(undefined4 *)(_UNK_015d6418 + 0x15d63b4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015d641c + 0x15d63c8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015d6420 + 0x15d63d8);
  uVar1 = func_0x0244f954(0xaa,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x82,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


