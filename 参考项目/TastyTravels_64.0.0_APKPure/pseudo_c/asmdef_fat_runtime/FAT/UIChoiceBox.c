/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.UIChoiceBox$$OnCreate RVA 0x1f9f87c =====

/* WARNING: Possible PIC construction at 0x01fafa28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01fafa90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01fafa2c) */
/* WARNING: Removing unreachable block (ram,0x01fafa94) */
/* WARNING: Removing unreachable block (ram,0x01fafaa0) */
/* WARNING: Removing unreachable block (ram,0x01fafaa4) */
/* WARNING: Removing unreachable block (ram,0x01fafae0) */
/* WARNING: Removing unreachable block (ram,0x01fafae4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01faf87c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01fafafc + 0x1faf894);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fafb00 + 0x1faf8a8));
    func_0x01384978(*(undefined4 *)(_UNK_01fafb04 + 0x1faf8b4));
    func_0x01384978(*(undefined4 *)(_UNK_01fafb08 + 0x1faf8c0));
    func_0x01384978(*(undefined4 *)(_UNK_01fafb0c + 0x1faf8cc));
    func_0x01384978(*(undefined4 *)(_UNK_01fafb10 + 0x1faf8d8));
    func_0x01384978(*(undefined4 *)(_UNK_01fafb14 + 0x1faf8e4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa93b,0);
  if (iVar1 == 0) {
    puVar7 = *(undefined4 **)(_UNK_01fafb18 + 0x1faf944);
    puVar8 = *(undefined4 **)(_UNK_01fafb1c + 0x1faf94c);
    puVar6 = *(undefined4 **)(_UNK_01fafb20 + 0x1faf954);
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450148(iVar1,0);
    if (iVar1 < 1) {
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xb4);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01fafb28 + 0x1fafa50));
      func_0x0244ffa0(uVar5,param_1,**(undefined4 **)(_UNK_01fafb2c + 0x1fafa70),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar4 = func_0x01384be4(*puVar7);
      func_0x0244f5a0(iVar4,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(iVar4 + 8) = 0;
      *(int *)(iVar4 + 0xc) = param_1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450158(iVar1,0,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02f67194(iVar1,*puVar8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xb4);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01fafb24 + 0x1faf9f4));
      func_0x0244ffa0(uVar5,iVar4,*puVar6,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    (*(code *)&UNK_0519d8f0)(iVar1,uVar5,0);
    return;
  }
  iVar1 = func_0x0229f13c(0xa93b,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.UIChoiceBox.<>c__DisplayClass9_0$$.ctor RVA 0x1f9fb38 =====

void FUN_01fafb38(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.UIChoiceBox$$OnParse RVA 0x1f9fb40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fafb40(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(_UNK_01fafce4 + 0x1fafb58);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fafce8 + 0x1fafb6c));
    func_0x01384978(*(undefined4 *)(_UNK_01fafcec + 0x1fafb78));
    func_0x01384978(*(undefined4 *)(_UNK_01fafcf0 + 0x1fafb84));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa941,0);
  if (iVar1 == 0) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if (param_2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2 = (int *)param_2[4];
    piVar3 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      uVar6 = (uint)*(byte *)(**(int **)(_UNK_01fafcf4 + 0x1fafc0c) + 0xb8);
      if ((uVar6 <= *(byte *)(*piVar2 + 0xb8)) &&
         (piVar3 = piVar2,
         *(int *)(*(int *)(*piVar2 + 100) + uVar6 * 4 + -4) != **(int **)(_UNK_01fafcf4 + 0x1fafc0c)
         )) {
        piVar3 = (int *)0x0;
      }
    }
    if ((uint)param_2[3] < 2) {
      func_0x01384bf4();
    }
    piVar4 = (int *)param_2[5];
    piVar2 = (int *)0x0;
    if (piVar4 != (int *)0x0) {
      uVar6 = (uint)*(byte *)(**(int **)(_UNK_01fafcf8 + 0x1fafc64) + 0xb8);
      if ((uVar6 <= *(byte *)(*piVar4 + 0xb8)) &&
         (piVar2 = piVar4,
         *(int *)(*(int *)(*piVar4 + 100) + uVar6 * 4 + -4) != **(int **)(_UNK_01fafcf8 + 0x1fafc64)
         )) {
        piVar2 = (int *)0x0;
      }
    }
    if ((uint)param_2[3] < 3) {
      func_0x01384bf4();
    }
    puVar11 = *(undefined4 **)(_UNK_01fafcfc + 0x1fafcac);
    iVar1 = param_2[6];
    uVar12 = func_0x01384ab8(iVar1,*puVar11);
    uVar7 = *puVar11;
    *(undefined4 *)(param_1 + 0x6c) = uVar12;
    func_0x01384ab8(iVar1,uVar7);
    func_0x01fafd00(param_1,piVar3);
    pcVar10 = (char *)(_UNK_01faffe0 + 0x1fafe7c);
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01faffe4 + 0x1fafe90));
      func_0x01384978(*(undefined4 *)(_UNK_01faffe8 + 0x1fafe9c));
      *pcVar10 = '\x01';
    }
    iVar9 = 0;
    iVar1 = func_0x0229f06c(0xa943,0);
    if (iVar1 == 0) {
      *(int **)(param_1 + 0x68) = piVar2;
      puVar11 = *(undefined4 **)(_UNK_01faffec + 0x1faff00);
      while( true ) {
        iVar1 = *(int *)(param_1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450148(iVar1,0);
        if (iVar1 <= iVar9) break;
        iVar1 = *(int *)(param_1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450158(iVar1,iVar9,0);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar8 = piVar2[3];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0244ffd4(iVar1,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (iVar9 < iVar8) {
          func_0x0244ffe4(iVar5,1,0);
          uVar12 = func_0x03259410(piVar2,iVar9,*puVar11);
          func_0x01fb00c0(param_1,iVar1,uVar12);
          func_0x01fb0234(param_1,iVar1,0);
        }
        else {
          func_0x0244ffe4(iVar5,0,0);
        }
        iVar9 = iVar9 + 1;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xa943,0);
    param_2 = piVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa941,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar9 = *(int *)(iVar1 + 8);
  uVar12 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar1 == 0) {
    uVar7 = 2;
  }
  func_0x0245495c(iVar9,uVar12,&uStack_38,uVar7,0,0);
  return;
}



// ===== FAT.UIChoiceBox$$ShowTitle RVA 0x1f9fd00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fafd00(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01fafe58 + 0x1fafd18);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fafe5c + 0x1fafd2c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa942,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa942,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0210e2d4(param_2,0);
  *(undefined4 *)(param_1 + 0x60) = uVar6;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0210e2d4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cca5b0(iVar1,uVar6,0);
  piVar3 = *(int **)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(iVar1 + 0x24);
  if (*(int *)(**(int **)(_UNK_01fafe60 + 0x1fafe0c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar6 = func_0x028c1350(uVar6,0);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x01fafe54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x2d0))(piVar3,uVar6,*(undefined4 *)(*piVar3 + 0x2d4));
  return;
}



// ===== FAT.UIChoiceBox$$ShowChoices RVA 0x1f9fe64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fafe64(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01faffe0 + 0x1fafe7c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01faffe4 + 0x1fafe90));
    func_0x01384978(*(undefined4 *)(_UNK_01faffe8 + 0x1fafe9c));
    *pcVar4 = '\x01';
  }
  iVar6 = 0;
  iVar1 = func_0x0229f06c(0xa943,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa943,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  *(int *)(param_1 + 0x68) = param_2;
  puVar8 = *(undefined4 **)(_UNK_01faffec + 0x1faff00);
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450148(iVar1,0);
    if (iVar1 <= iVar6) break;
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450158(iVar1,iVar6,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(param_2 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0244ffd4(iVar1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (iVar6 < iVar5) {
      func_0x0244ffe4(iVar2,1,0);
      uVar7 = func_0x03259410(param_2,iVar6,*puVar8);
      func_0x01fb00c0(param_1,iVar1,uVar7);
      func_0x01fb0234(param_1,iVar1,0);
    }
    else {
      func_0x0244ffe4(iVar2,0,0);
    }
    iVar6 = iVar6 + 1;
  }
  return;
}



// ===== FAT.UIChoiceBox$$OnPreOpen RVA 0x1f9fff0 =====

/* WARNING: Possible PIC construction at 0x01fb007c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01fb0080) */
/* WARNING: Removing unreachable block (ram,0x01fb008c) */
/* WARNING: Removing unreachable block (ram,0x01fb0090) */
/* WARNING: Removing unreachable block (ram,0x01fb00a8) */
/* WARNING: Removing unreachable block (ram,0x01fb00ac) */

void FUN_01fafff0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa945,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa945,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&SUB_05189da8)(iVar1,0,0);
  return;
}



// ===== FAT.UIChoiceBox$$ItemShow RVA 0x1fa00c0 =====

/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fb00c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_r4;
  int *unaff_r5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *unaff_r6;
  undefined4 uVar9;
  int *unaff_r7;
  char *pcVar10;
  undefined4 unaff_r8;
  int *unaff_r9;
  undefined4 unaff_r10;
  int *unaff_lr;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int *piStack_1c;
  
  pcVar10 = (char *)(_UNK_01fb0218 + 0x1fb00e0);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fb021c + 0x1fb00f4));
    func_0x01384978(*(undefined4 *)(_UNK_01fb0220 + 0x1fb0100));
    func_0x01384978(*(undefined4 *)(_UNK_01fb0224 + 0x1fb010c));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa944,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa944,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piStack_20 = (int *)0x0;
    func_0x0217b868(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cca5b0(iVar1,param_3,0);
  if (*(int *)(**(int **)(_UNK_01fb0228 + 0x1fb01b0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  piVar2 = (int *)func_0x03073d9c(param_2,**(undefined4 **)(_UNK_01fb0230 + 0x1fb01d8),
                                  **(undefined4 **)(_UNK_01fb022c + 0x1fb01cc));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar6 = *(int **)(iVar1 + 0x1c);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_0267cd4c + 0x267cc3c);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0267cd50 + 0x267cc50),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_0267cd54 + 0x267cc5c));
    func_0x01384978(*(undefined4 *)(_UNK_0267cd58 + 0x267cc68));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4d6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4d6,0);
    piVar8 = piVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02174108:
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piStack_38 = (int *)0x0;
    uStack_28 = 0;
    func_0x0245494c(&piStack_50,0,piVar6,0);
    piStack_38 = piStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&piStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&piStack_38,piVar8,0);
    func_0x01485278(&piStack_38,piVar6,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&piStack_38,uVar5,0,0);
    return;
  }
  iVar1 = func_0x0467229c(piVar6,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0267cd64 + 0x267cd0c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x025550ec(piVar6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar1 + 8);
    iVar4 = *(int *)(iVar1 + 0xc);
    iVar1 = func_0x0229f06c(0x42b,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x42b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piStack_20 = (int *)0x0;
      func_0x02174858(iVar1,piVar2,iVar7,iVar4);
      return;
    }
    func_0x0267c530(piVar2);
    piVar2[0xc] = iVar7;
    *(undefined1 *)(piVar2 + 0x10) = 1;
    piVar2[0xd] = iVar4;
    func_0x0267c77c(piVar2);
    pcVar10 = (char *)(_UNK_0267bec0 + 0x267bd74);
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0267bec4 + 0x267bd88));
      func_0x01384978(*(undefined4 *)(_UNK_0267bec8 + 0x267bd94));
      *pcVar10 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x434,0);
    if (iVar1 == 0) {
      func_0x0267cf20(piVar2);
      iVar1 = func_0x0467229c(piVar2[0xe],0);
      if (iVar1 == 0) {
        iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_0267becc + 0x267be3c));
        iVar7 = piVar2[0xe];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar9 = func_0x028c7930(iVar1,iVar7,0);
        if (*(int *)(**(int **)(_UNK_0267bed0 + 0x267be74) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0145b1cc(uVar9,0,0);
        if (iVar1 != 0) {
          func_0x0267d3c8(piVar2,uVar9);
        }
      }
      else if ((piVar2[10] != 0) && (iVar1 = func_0x028bc4d8(piVar2[10],0), iVar1 != 0)) {
        if ((char)piVar2[0xb] == '\0') {
          func_0x0267dc58(piVar2);
        }
        else {
          func_0x0267d570(piVar2);
        }
      }
      iVar1 = func_0x0229f06c(0x430,0);
      if (iVar1 == 0) {
        piVar8 = (int *)piVar2[8];
        if (piVar8 == (int *)0x0) {
          return;
        }
        iVar1 = func_0x0229f06c(0x431,0);
        if (iVar1 == 0) {
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0267b814(piVar2);
          if (iVar1 == 0) {
            return;
          }
          uVar9 = (**(code **)(*piVar8 + 0xe8))(piVar8,*(undefined4 *)(*piVar8 + 0xec));
                    /* WARNING: Could not recover jumptable at 0x0267cf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar8 + 0x100))(piVar8,uVar9,*(undefined4 *)(*piVar8 + 0x104));
          return;
        }
        iVar1 = func_0x0229f13c(0x431,0);
        piVar6 = piVar2;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02174108;
      }
      iVar1 = func_0x0229f13c(0x430,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x434,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
SUB_02173f80:
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    piStack_20 = (int *)0x0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    piStack_20 = piStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,piVar2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    piStack_50 = (int *)0x0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0267cd5c + 0x267ccd8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  piVar2 = (int *)**(int **)(_UNK_0267cd60 + 0x267ccf8);
  pcVar10 = (char *)(_UNK_028c2938 + 0x28c2888);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c293c + 0x28c289c),0);
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x199,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x199,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  piVar6 = *(int **)(_UNK_028c2940 + 0x28c28f4);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  if (3 < *(int *)(*(int *)(iVar1 + 0x5c) + 4)) {
    return;
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar10 = (char *)(_UNK_028c2868 + 0x28c26ec);
  piStack_20 = unaff_r4;
  piStack_1c = unaff_r5;
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14,0);
    piVar6 = piStack_20;
    piVar8 = piStack_1c;
    if (iVar1 == 0) {
      func_0x01384bf0();
      piVar6 = piStack_20;
      piVar8 = piStack_1c;
    }
    goto LAB_02174038;
  }
  piVar6 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  if (**(int **)(iVar1 + 0x5c) < 1) {
LAB_028c2848:
    piVar3 = piVar2;
    piVar2 = piStack_20;
    piVar8 = piStack_1c;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      piVar2 = piStack_20;
      piVar8 = piStack_1c;
    }
  }
  else {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
      iVar1 = *piVar6;
    }
    iVar7 = piVar2[2];
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    piVar8 = (int *)**(int **)(iVar1 + 0x5c);
    if (iVar7 <= (int)piVar8) goto LAB_028c2848;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      piVar8 = (int *)**(int **)(*piVar6 + 0x5c);
    }
    piVar3 = (int *)piVar2[2];
    if ((int)piVar3 < 1) {
      return;
    }
    unaff_r6 = (int *)0x0;
    if ((int)piVar3 < (int)piVar8) {
      piVar8 = piVar3;
    }
    unaff_r7 = (int *)func_0x04673af4(piVar2,0,piVar8,0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = (int *)0x28c2824;
    piVar3 = unaff_r7;
    unaff_r8 = 3;
    unaff_r9 = piVar6;
    register0x00000054 = (BADSPACEBASE *)&piStack_20;
  }
  *(int **)((int)register0x00000054 + -4) = unaff_lr;
  *(int **)((int)register0x00000054 + -8) = unaff_r6;
  *(int **)((int)register0x00000054 + -0xc) = piVar8;
  *(int **)((int)register0x00000054 + -0x10) = piVar2;
  pcVar10 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x15,0);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_028c31a0 + _UNK_028c31a8))();
    return;
  }
  iVar1 = func_0x0229f13c(0x15,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_r6 = *(int **)((int)register0x00000054 + -8);
  unaff_lr = *(int **)((int)register0x00000054 + -4);
  piVar2 = piVar3;
  piVar6 = *(int **)((int)register0x00000054 + -0x10);
  piVar8 = *(int **)((int)register0x00000054 + -0xc);
LAB_02174038:
  *(int **)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int **)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int **)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int **)((int)register0x00000054 + -0x1c) = piVar8;
  *(int **)((int)register0x00000054 + -0x20) = piVar6;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,piVar2,0);
  iVar7 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar7 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar7,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),3,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),piVar2,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar1 == 0) {
    uVar5 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar7,uVar9,(undefined1 *)((int)register0x00000054 + -0x38),uVar5);
  return;
}



// ===== FAT.UIChoiceBox$$ItemSelect RVA 0x1fa0234 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fb0234(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01fb032c + 0x1fb0254);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fb0330 + 0x1fb0268));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa93f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa93f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175630(iVar1,param_1,param_2,param_3,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450178(param_2,**(undefined4 **)(_UNK_01fb0334 + 0x1fb02e0),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&SUB_05189da8)(iVar1,param_3,0);
  return;
}



// ===== FAT.UIChoiceBox$$OnSelectItem RVA 0x1fa0338 =====

/* WARNING: Possible PIC construction at 0x01fb04a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01fb04ac) */
/* WARNING: Removing unreachable block (ram,0x01fb04b8) */
/* WARNING: Removing unreachable block (ram,0x01fb04bc) */
/* WARNING: Removing unreachable block (ram,0x01fb04d4) */
/* WARNING: Removing unreachable block (ram,0x01fb04d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fb0338(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01fb04ec + 0x1fb0350);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fb04f0 + 0x1fb0364));
    func_0x01384978(*(undefined4 *)(_UNK_01fb04f4 + 0x1fb0370));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iVar1 = func_0x0229f06c(0xa93e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa93e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450148(iVar1,0);
    if (iVar1 <= iVar4) break;
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x02450158(iVar1,iVar4,0);
    FUN_01fb0234(param_1,uVar5,param_2 == iVar4);
    iVar4 = iVar4 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (param_2 < *(int *)(iVar1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x03259410(iVar1,param_2,**(undefined4 **)(_UNK_01fb04f8 + 0x1fb0464));
    *(undefined4 *)(param_1 + 100) = uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&SUB_05189da8)(iVar1,1,0);
  return;
}



// ===== FAT.UIChoiceBox$$OnBtnConfirm RVA 0x1fa04fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fb04fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01fb05e4 + 0x1fb0510);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fb05e8 + 0x1fb0524));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa940,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x6c);
    if ((iVar1 == 0) ||
       (iVar1 = (**(code **)(iVar1 + 0xc))
                          (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(param_1 + 100),
                           *(undefined4 *)(iVar1 + 0x14)), iVar1 == 0)) {
      return;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x60);
    uVar2 = *(undefined4 *)(param_1 + 100);
    uVar6 = *(undefined4 *)(param_1 + 0x68);
    if (*(int *)(**(int **)(_UNK_01fb05ec + 0x1fb05a8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x019963e8(uVar5,uVar2,uVar6,0);
    pcVar3 = (char *)(_UNK_01ee40dc + 0x1ee3fd4);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ee40e0 + 0x1ee3fe8),0);
      func_0x01384978(*(undefined4 *)(_UNK_01ee40e4 + 0x1ee3ff4));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xb41,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x2c) != '\0') {
        FUN_01ee3ae8(param_1);
        FUN_01ee3b58(param_1);
        *(undefined1 *)(param_1 + 0x2c) = 0;
        uVar5 = func_0x0244ffd4(param_1,0);
        if (*(int *)(**(int **)(_UNK_01ee40e8 + 0x1ee4080) + 0x74) == 0) {
          func_0x01384ab4();
        }
        (*(code *)&UNK_0518f7fc)(uVar5,0);
        return;
      }
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01ee40ec + 0x1ee40ac));
      uVar5 = *(undefined4 *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee40f0(iVar1,uVar5);
      pcVar3 = (char *)(_UNK_01ee4224 + 0x1ee4168);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ee4228 + 0x1ee417c));
        *pcVar3 = '\x01';
      }
      iVar1 = func_0x0229f06c(0xb42,0);
      if (iVar1 == 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x34);
        if (*(int *)(**(int **)(_UNK_01ee422c + 0x1ee41d4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0145b1cc(uVar5,0,0);
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0x34);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          (*(code *)&SUB_05189da8)(iVar1,0,0);
          return;
        }
        return;
      }
      iVar1 = func_0x0229f13c(0xb42,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xb41,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa940,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.UIChoiceBox$$.ctor RVA 0x1fa05f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fb05f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_01fb0658 + 0x1fb0604);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fb065c + 0x1fb0618));
    *pcVar4 = '\x01';
    param_4 = extraout_r3;
  }
  piVar2 = *(int **)(_UNK_01fb0660 + 0x1fb0630);
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  iVar3 = *(int *)(*piVar2 + 0x74);
  if (iVar3 == 0) {
    func_0x01384ab4();
    iVar3 = extraout_r2;
    param_4 = extraout_r3_00;
  }
  pcVar4 = (char *)(_UNK_01ee5288 + 0x1ee5224);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ee528c + 0x1ee5238),0,iVar3,param_4,unaff_r4,unaff_r5,
                    unaff_r11,unaff_lr);
    func_0x01384978(*(undefined4 *)(_UNK_01ee5290 + 0x1ee5244));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ee5294 + 0x1ee5258));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01ee5298 + 0x1ee526c));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.UIChoiceBox$$<>iFixBaseProxy_OnCreate RVA 0x1fa0664 =====

void FUN_01fb0664(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x79,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x79,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.UIChoiceBox$$<>iFixBaseProxy_OnParse RVA 0x1fa066c =====

void FUN_01fb066c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x41,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x41,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.UIChoiceBox$$<>iFixBaseProxy_OnPreOpen RVA 0x1fa0674 =====

void FUN_01fb0674(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x42,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x42,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.UIChoiceBox.<>c__DisplayClass9_0$$<OnCreate>b__0 RVA 0x1fa067c =====

/* WARNING: Possible PIC construction at 0x01fb04a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01fb04ac) */
/* WARNING: Removing unreachable block (ram,0x01fb04b8) */
/* WARNING: Removing unreachable block (ram,0x01fb04bc) */
/* WARNING: Removing unreachable block (ram,0x01fb04d4) */
/* WARNING: Removing unreachable block (ram,0x01fb04d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fb067c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  int iVar3;
  undefined4 unaff_r5;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar4 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_01fb04ec + 0x1fb0350);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fb04f0 + 0x1fb0364));
    func_0x01384978(*(undefined4 *)(_UNK_01fb04f4 + 0x1fb0370));
    *pcVar5 = '\x01';
  }
  iVar6 = 0;
  iVar1 = func_0x0229f06c(0xa93e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa93e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar3,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar4,0);
    func_0x01485238(&uStack_38,iVar3,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar3 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar7,&uStack_38,uVar2,0,0);
    return;
  }
  while( true ) {
    iVar1 = *(int *)(iVar4 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450148(iVar1,0);
    if (iVar1 <= iVar6) break;
    iVar1 = *(int *)(iVar4 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x02450158(iVar1,iVar6,0);
    FUN_01fb0234(iVar4,uVar7,iVar3 == iVar6);
    iVar6 = iVar6 + 1;
  }
  iVar1 = *(int *)(iVar4 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (iVar3 < *(int *)(iVar1 + 0xc)) {
    iVar1 = *(int *)(iVar4 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x03259410(iVar1,iVar3,**(undefined4 **)(_UNK_01fb04f8 + 0x1fb0464));
    *(undefined4 *)(iVar4 + 100) = uVar7;
  }
  iVar3 = *(int *)(iVar4 + 0x54);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0244ffd4(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&SUB_05189da8)(iVar3,1,0);
  return;
}


