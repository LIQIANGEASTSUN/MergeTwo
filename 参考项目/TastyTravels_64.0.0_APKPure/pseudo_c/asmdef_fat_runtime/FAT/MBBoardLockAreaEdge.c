/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardLockAreaEdge$$ModifyMesh RVA 0x1ddff44 =====

/* WARNING: Possible PIC construction at 0x01df0054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01df0058) */
/* WARNING: Removing unreachable block (ram,0x01df0070) */
/* WARNING: Removing unreachable block (ram,0x01df0074) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01deff44(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_01df0098 + 0x1deff5c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df009c + 0x1deff70));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f20,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f20,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piStack_30 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    piStack_30 = (int *)uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 != 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar1 = func_0x02452430(0,0);
      if (iVar1 == 0) {
        return;
      }
      func_0x01384bf0();
    }
    else {
      iVar1 = func_0x02452430(param_2,0);
      if (iVar1 == 0) {
        return;
      }
    }
    func_0x02452440(param_2,0);
    iStack_28 = func_0x03668dfc(**(undefined4 **)(_UNK_01df00a0 + 0x1df0030));
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iStack_28 + 0x78) != 0) {
      pcVar4 = (char *)(_UNK_01df01fc + 0x1df00b8);
      piStack_30 = param_1;
      iStack_2c = param_2;
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01df0200 + 0x1df00cc));
        func_0x01384978(*(undefined4 *)(_UNK_01df0204 + 0x1df00d8));
        func_0x01384978(*(undefined4 *)(_UNK_01df0208 + 0x1df00e4));
        func_0x01384978(*(undefined4 *)(_UNK_01df020c + 0x1df00f0));
        func_0x01384978(*(undefined4 *)(_UNK_01df0210 + 0x1df00fc));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x9f21,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x9f21,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_48 = 0;
        uStack_38 = 0;
        func_0x0245494c(&uStack_60,0,0);
        uStack_48 = uStack_60;
        uStack_44 = uStack_5c;
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_48,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_48,param_1,0);
        iVar3 = *(int *)(iVar1 + 8);
        uVar5 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 2;
        if (iVar1 == 0) {
          uVar2 = 1;
        }
        func_0x0245495c(iVar3,uVar5,&uStack_48,uVar2,0,0);
        return;
      }
      iVar1 = param_1[5];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = param_1[6];
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar1 = param_1[7];
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5d8a8(iVar1,**(undefined4 **)(_UNK_01df0214 + 0x1df01a8));
      iVar1 = param_1[8];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_01df0218 + 0x1df01cc));
      iVar1 = param_1[9];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar1 + 0x10);
      if (0 < iVar3) {
        iVar6 = *(int *)(iVar1 + 8);
        if (iVar6 == 0) {
          func_0x02457d50(iVar1,**(undefined4 **)(_UNK_01df021c + 0x1df01f0));
        }
        func_0x0484e5ec(iVar6,0,*(undefined4 *)(iVar6 + 0xc),0);
        *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
        func_0x0484e5ec(*(undefined4 *)(iVar1 + 0xc),0,iVar3,0);
      }
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      return;
    }
  }
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$_Clear RVA 0x1de00a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df00a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar3 = (char *)(_UNK_01df01fc + 0x1df00b8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df0200 + 0x1df00cc));
    func_0x01384978(*(undefined4 *)(_UNK_01df0204 + 0x1df00d8));
    func_0x01384978(*(undefined4 *)(_UNK_01df0208 + 0x1df00e4));
    func_0x01384978(*(undefined4 *)(_UNK_01df020c + 0x1df00f0));
    func_0x01384978(*(undefined4 *)(_UNK_01df0210 + 0x1df00fc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f21,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f21,0);
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
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5d8a8(iVar1,**(undefined4 **)(_UNK_01df0214 + 0x1df01a8));
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_01df0218 + 0x1df01cc));
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0x10);
  if (0 < iVar4) {
    iVar6 = *(int *)(iVar1 + 8);
    if (iVar6 == 0) {
      func_0x02457d50(iVar1,**(undefined4 **)(_UNK_01df021c + 0x1df01f0));
    }
    func_0x0484e5ec(iVar6,0,*(undefined4 *)(iVar6 + 0xc),0);
    *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    func_0x0484e5ec(*(undefined4 *)(iVar1 + 0xc),0,iVar4,0);
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$BuildBoard RVA 0x1de0220 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df0220(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01df054c + 0x1df0238);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df0550 + 0x1df024c));
    func_0x01384978(*(undefined4 *)(_UNK_01df0554 + 0x1df0258));
    func_0x01384978(*(undefined4 *)(_UNK_01df0558 + 0x1df0264));
    func_0x01384978(*(undefined4 *)(_UNK_01df055c + 0x1df0270));
    func_0x01384978(*(undefined4 *)(_UNK_01df0560 + 0x1df027c));
    func_0x01384978(*(undefined4 *)(_UNK_01df0564 + 0x1df0288));
    func_0x01384978(*(undefined4 *)(_UNK_01df0568 + 0x1df0294));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x9f22,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_01df056c + 0x1df030c);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar3 = (char *)(_UNK_01df0570 + 0x1df0328);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df0574 + 0x1df033c));
      *pcVar3 = '\x01';
    }
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    fVar10 = _UNK_01df0548;
    fVar8 = *(float *)(param_1 + 0x30);
    fVar7 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    *(float *)(param_1 + 0x34) = fVar7;
    fVar7 = fVar7 * 0.5;
    fVar9 = fVar8;
    if (fVar7 < fVar8) {
      fVar9 = fVar7;
    }
    if (0.0 <= fVar8) {
      fVar10 = fVar9;
    }
    *(float *)(param_1 + 0x38) = fVar10;
    piVar4 = (int *)func_0x02452460(param_1,0);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar4 + 0x170))(&uStack_50,piVar4,*(undefined4 *)(*piVar4 + 0x174));
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    *(undefined4 *)(param_1 + 0x3c) = uStack_50;
    *(undefined4 *)(param_1 + 0x40) = uStack_4c;
    *(undefined4 *)(param_1 + 0x44) = uStack_48;
    *(undefined4 *)(param_1 + 0x48) = uStack_44;
    if (0.0 < *(float *)(param_1 + 0x38)) {
      func_0x01df0730(param_1);
      iVar1 = *(int *)(param_1 + 0x2c);
      if (0 < iVar1) {
        iVar2 = *(int *)(param_1 + 0x28);
        iVar5 = 0;
        do {
          if (0 < iVar2) {
            iVar1 = 0;
            do {
              func_0x01df093c(param_1,iVar1,iVar5);
              iVar2 = *(int *)(param_1 + 0x28);
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar2);
            iVar1 = *(int *)(param_1 + 0x2c);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5db50(&uStack_30,iVar1,**(undefined4 **)(_UNK_01df0578 + 0x1df0468));
      puVar6 = *(undefined4 **)(_UNK_01df057c + 0x1df0480);
      while (iVar1 = func_0x014756f8(&uStack_30,*puVar6), iVar1 != 0) {
        func_0x01df0af0(param_1,uStack_24,uStack_20);
      }
      func_0x02452480(&uStack_30,**(undefined4 **)(_UNK_01df0580 + 0x1df04ac));
      func_0x01df0c58(param_1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f22,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$Setup RVA 0x1de058c =====

void FUN_01df058c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x9f38,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f38,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02179a68(iVar1,param_1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  iVar1 = func_0x0229f06c(0x1672,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1672,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    return;
  }
  piVar2 = (int *)func_0x02452460(param_1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x1a0))(piVar2,*(undefined4 *)(*piVar2 + 0x1a4));
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$_SetDirty RVA 0x1de060c =====

void FUN_01df060c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x1672,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1672,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    return;
  }
  piVar2 = (int *)func_0x02452460(param_1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x1a0))(piVar2,*(undefined4 *)(*piVar2 + 0x1a4));
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$Cleanup RVA 0x1de068c =====

void FUN_01df068c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f39,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9f39,0);
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



// ===== FAT.MBBoardLockAreaEdge$$Refresh RVA 0x1de06d8 =====

void FUN_01df06d8(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar2 = func_0x0229f06c(0x1671,0);
  if (iVar2 == 0) {
    iVar2 = func_0x0229f06c(0x1672,0);
    if (iVar2 == 0) {
      piVar1 = (int *)func_0x02452460(param_1,0);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
      return;
    }
    iVar2 = func_0x0229f13c(0x1672,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1671,0);
    if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$CacheUnlockedStates RVA 0x1de0730 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df0730(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01df0918 + 0x1df0748);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df091c + 0x1df075c));
    func_0x01384978(*(undefined4 *)(_UNK_01df0920 + 0x1df0768));
    func_0x01384978(*(undefined4 *)(_UNK_01df0924 + 0x1df0774));
    func_0x01384978(*(undefined4 *)(_UNK_01df0928 + 0x1df0780));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f23,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f23,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  iVar6 = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x03d4eb08(iVar6,**(undefined4 **)(_UNK_01df092c + 0x1df07f8));
  if (iVar6 < iVar1) {
    iVar6 = *(int *)(param_1 + 0x24);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x03d51188(iVar6,iVar1,**(undefined4 **)(_UNK_01df0930 + 0x1df0828));
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01df0934 + 0x1df083c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_1 + 0x2c);
  if (0 < iVar6) {
    iVar8 = *(int *)(iVar1 + 0x7c);
    iVar9 = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    puVar10 = *(undefined4 **)(_UNK_01df0938 + 0x1df0874);
    do {
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          uVar7 = func_0x01df0ff4(param_1,iVar6,iVar9);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x020e81ec(iVar8,iVar6,iVar9,0);
          iVar5 = *(int *)(param_1 + 0x24);
          if (iVar1 == 0) {
            uVar2 = 1;
          }
          else {
            uVar2 = func_0x0211015c(iVar1,0);
            uVar2 = uVar2 ^ 1;
          }
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x03d4edf0(iVar5,uVar7,uVar2,*puVar10);
          iVar1 = *(int *)(param_1 + 0x28);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
        iVar6 = *(int *)(param_1 + 0x2c);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar6);
  }
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$CollectFromLockedCell RVA 0x1de093c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df093c(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  byte bStack_19;
  
  pcVar4 = (char *)(_UNK_01df0ae4 + 0x1df095c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df0ae8 + 0x1df0970));
    *pcVar4 = '\x01';
  }
  bStack_19 = 0;
  iVar2 = func_0x0229f06c(0x9f25,0);
  if (iVar2 == 0) {
    uVar3 = func_0x01df0ff4(param_1,param_2,param_3);
    iVar2 = *(int *)(param_1 + 0x24);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    bVar1 = func_0x03d50be8(iVar2,uVar3,&bStack_19,**(undefined4 **)(_UNK_01df0aec + 0x1df0a08));
    if ((bStack_19 & bVar1) == 0) {
      iVar2 = func_0x01df1068(param_1,param_2,param_3 + -1);
      if (iVar2 != 0) {
        func_0x01df1188(param_1,param_2,param_3 + -1,4);
      }
      iVar2 = func_0x01df1068(param_1,param_2 + 1,param_3);
      if (iVar2 != 0) {
        func_0x01df1188(param_1,param_2 + 1,param_3,8);
      }
      iVar2 = func_0x01df1068(param_1,param_2,param_3 + 1);
      if (iVar2 != 0) {
        func_0x01df1188(param_1,param_2,param_3 + 1,1);
      }
      iVar2 = func_0x01df1068(param_1,param_2 + -1,param_3);
      if (iVar2 != 0) {
        func_0x01df1188(param_1,param_2 + -1,param_3,2);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9f25,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$AddEdge RVA 0x1de0af0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df0af0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = func_0x0229f06c(0x9f29,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f29,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02289fd0(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  iVar1 = func_0x01457ae8(param_2 >> 4,iVar2);
  fVar3 = *(float *)(param_1 + 0x38);
  fVar5 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = *(float *)(param_1 + 0x34);
  fVar8 = (float)VectorSignedToFloat((param_2 >> 4) - iVar1 * iVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = -(fVar4 * fVar5);
  fVar5 = fVar4 - (fVar3 + fVar3);
  fVar8 = fVar4 * fVar8;
  if (param_3 == 4) {
    fVar7 = fVar3 + (fVar7 - fVar4);
    fVar4 = -fVar3;
  }
  else {
    if (param_3 == 2) {
      fVar9 = -fVar5;
      fVar7 = fVar7 - fVar3;
      fVar6 = (fVar4 + fVar8) - fVar3;
      fVar4 = _UNK_01df0c54;
      fVar5 = _UNK_01df0c54;
      goto LAB_01df0c0c;
    }
    fVar7 = fVar7 - fVar3;
    fVar6 = fVar3 + fVar8;
    fVar4 = fVar3;
    if (param_3 != 1) {
      fVar3 = -fVar3;
      fVar9 = -fVar5;
      fVar4 = _UNK_01df0c54;
      fVar5 = _UNK_01df0c54;
      goto LAB_01df0c0c;
    }
  }
  fVar6 = fVar3 + fVar8;
  fVar3 = _UNK_01df0c54;
  fVar9 = _UNK_01df0c54;
LAB_01df0c0c:
  func_0x01df1b3c(param_1,fVar6,fVar7,fVar5 + fVar6,fVar9 + fVar7,fVar3 + fVar5 + fVar6,
                  fVar4 + fVar9 + fVar7,fVar3 + fVar6,fVar4 + fVar7);
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$CollectCornersFromEdges RVA 0x1de0c58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df0c58(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  pcVar2 = (char *)(_UNK_01df0f98 + 0x1df0c70);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df0f9c + 0x1df0c84));
    func_0x01384978(*(undefined4 *)(_UNK_01df0fa0 + 0x1df0c90));
    func_0x01384978(*(undefined4 *)(_UNK_01df0fa4 + 0x1df0c9c));
    func_0x01384978(*(undefined4 *)(_UNK_01df0fa8 + 0x1df0ca8));
    func_0x01384978(*(undefined4 *)(_UNK_01df0fac + 0x1df0cb4));
    func_0x01384978(*(undefined4 *)(_UNK_01df0fb0 + 0x1df0cc0));
    func_0x01384978(*(undefined4 *)(_UNK_01df0fb4 + 0x1df0ccc));
    func_0x01384978(*(undefined4 *)(_UNK_01df0fb8 + 0x1df0cd8));
    func_0x01384978(*(undefined4 *)(_UNK_01df0fbc + 0x1df0ce4));
    func_0x01384978(*(undefined4 *)(_UNK_01df0fc0 + 0x1df0cf0));
    func_0x01384978(*(undefined4 *)(_UNK_01df0fc4 + 0x1df0cfc));
    func_0x01384978(*(undefined4 *)(_UNK_01df0fc8 + 0x1df0d08));
    *pcVar2 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  iVar1 = func_0x0229f06c(0x9f2b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5db50(&uStack_68,iVar1,**(undefined4 **)(_UNK_01df0fcc + 0x1df0dac));
    uStack_38 = uStack_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    uStack_28 = uStack_58;
    puVar3 = *(undefined4 **)(_UNK_01df0fd0 + 0x1df0ddc);
    while (iVar1 = func_0x014756f8(&uStack_38,*puVar3), iVar1 != 0) {
      func_0x01df12f4(param_1,uStack_2c,(undefined4)uStack_28);
    }
    func_0x02452480(&uStack_38,**(undefined4 **)(_UNK_01df0fd4 + 0x1df0e08));
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_68,iVar1,**(undefined4 **)(_UNK_01df0fdc + 0x1df0e30));
    uStack_50 = uStack_68;
    uStack_4c = uStack_64;
    uStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    puVar3 = *(undefined4 **)(_UNK_01df0fe0 + 0x1df0e5c);
    while (iVar1 = func_0x01475638(&uStack_50,*puVar3), iVar1 != 0) {
      func_0x01df14e4(param_1,uStack_44,(undefined4)uStack_40);
    }
    func_0x0245059c(&uStack_50,**(undefined4 **)(_UNK_01df0fe8 + 0x1df0e88));
  }
  else {
    iVar1 = func_0x0229f13c(0x9f2b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$CoordToIndex RVA 0x1de0ff4 =====

int FUN_01df0ff4(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9f24,0);
  if (iVar1 == 0) {
    param_2 = *(int *)(param_1 + 0x28) * param_3 + param_2;
  }
  else {
    iVar1 = func_0x0229f13c(0x9f24,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_2 = func_0x02180128(iVar1,param_1,param_2,param_3,0);
  }
  return param_2;
}



// ===== FAT.MBBoardLockAreaEdge$$IsUnlocked RVA 0x1de1068 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01df1068(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  byte bStack_19;
  
  pcVar5 = (char *)(_UNK_01df117c + 0x1df1088);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df1180 + 0x1df109c));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  bStack_19 = 0;
  iVar2 = func_0x0229f06c(0x9f26,0);
  if (iVar2 == 0) {
    if (-1 < param_2 && -1 < param_3) {
      iVar3 = *(int *)(param_1 + 0x28);
      bVar8 = SBORROW4(iVar3,param_2);
      iVar2 = iVar3 - param_2;
      bVar7 = iVar3 == param_2;
      if (param_2 < iVar3) {
        iVar3 = *(int *)(param_1 + 0x2c);
        bVar8 = SBORROW4(iVar3,param_3);
        iVar2 = iVar3 - param_3;
        bVar7 = iVar3 == param_3;
      }
      if (!bVar7 && iVar2 < 0 == bVar8) {
        uVar4 = FUN_01df0ff4(param_1,param_2,param_3);
        iVar2 = *(int *)(param_1 + 0x24);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        bVar1 = func_0x03d50be8(iVar2,uVar4,&bStack_19,**(undefined4 **)(_UNK_01df1184 + 0x1df1164))
        ;
        uVar6 = (uint)((bStack_19 & bVar1) != 0);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9f26,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0217a5ac(iVar2,param_1,param_2,param_3,0);
  }
  return uVar6;
}



// ===== FAT.MBBoardLockAreaEdge$$AddEdgeKey RVA 0x1de1188 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df1188(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01df1274 + 0x1df11a8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df1278 + 0x1df11c0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f27,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f27,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02289d34(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  uVar2 = FUN_01df0ff4(param_1,param_2,param_3);
  uVar2 = func_0x01df1280(param_1,uVar2,param_4);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5e230(iVar1,uVar2,param_4,0,
                  *(undefined4 *)
                   (*(int *)(*(int *)(**(int **)(_UNK_01df127c + 0x1df1264) + 0x10) + 0x60) + 0x88))
  ;
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$MakeKey RVA 0x1de1280 =====

uint FUN_01df1280(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x0229f06c(0x9f28,0);
  if (iVar1 == 0) {
    uVar2 = param_3 & 0xf | param_2 << 4;
  }
  else {
    iVar1 = func_0x0229f13c(0x9f28,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02180128(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.MBBoardLockAreaEdge$$MarkCornerFromEdge RVA 0x1de12f4 =====

void FUN_01df12f4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = func_0x0229f06c(0x9f2c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f2c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02289fd0(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  iVar1 = func_0x01457ae8(param_2 >> 4,iVar3);
  iVar3 = (param_2 >> 4) - iVar1 * iVar3;
  if (param_3 == 8) {
    func_0x01df1944(param_1,iVar3,iVar1,2);
    func_0x01df1944(param_1,iVar3,iVar1 + 1,2);
    func_0x01df1944(param_1,iVar3,iVar1,8);
LAB_01df14d4:
    iVar1 = iVar1 + 1;
    uVar2 = 4;
  }
  else {
    if (param_3 == 4) {
      iVar1 = iVar1 + 1;
      func_0x01df1944(param_1,iVar3,iVar1,4);
      func_0x01df1944(param_1,iVar3 + 1,iVar1,4);
      func_0x01df1944(param_1,iVar3,iVar1,2);
    }
    else {
      if (param_3 != 1) {
        iVar3 = iVar3 + 1;
        func_0x01df1944(param_1,iVar3,iVar1,1);
        func_0x01df1944(param_1,iVar3,iVar1 + 1,1);
        func_0x01df1944(param_1,iVar3,iVar1,8);
        goto LAB_01df14d4;
      }
      func_0x01df1944(param_1,iVar3,iVar1,8);
      func_0x01df1944(param_1,iVar3 + 1,iVar1,8);
      func_0x01df1944(param_1,iVar3,iVar1,2);
    }
    iVar3 = iVar3 + 1;
    uVar2 = 1;
  }
  func_0x01df1944(param_1,iVar3,iVar1,uVar2);
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$AddCornerAtVertex RVA 0x1de14e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df14e4(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  
  iVar1 = func_0x0229f06c(0x9f2f,0);
  if (iVar1 == 0) {
    iVar8 = *(int *)(param_1 + 0x28) + 1;
    iVar1 = func_0x01457ae8(param_2,iVar8);
    param_2 = param_2 - iVar1 * iVar8;
    fVar18 = *(float *)(param_1 + 0x34);
    uVar17 = *(undefined4 *)(param_1 + 0x38);
    uVar2 = func_0x01df2578(param_1,param_2,iVar1);
    uVar3 = func_0x01df270c(param_1,param_2,iVar1);
    uVar4 = func_0x01df28a0(param_1,param_2,iVar1);
    uVar5 = func_0x01df2a34(param_1,param_2,iVar1);
    fVar16 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar16 = fVar18 * fVar16;
    fVar15 = -(fVar18 * fVar15);
    uVar6 = (param_3 & 7) >> 2;
    pcVar10 = (char *)(_UNK_01df1900 + 0x1df1604);
    if ((uVar6 & param_3) != 0) {
      uVar7 = func_0x01df2bc8(param_1,uVar2,uVar4);
      pcVar11 = (char *)(_UNK_01df1904 + 0x1df162c);
      if (*pcVar10 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01df1908 + 0x1df1638));
        *pcVar10 = '\x01';
      }
      piVar9 = *(int **)(_UNK_01df190c + 0x1df164c);
      iVar1 = *(int *)(*piVar9 + 0x5c);
      uVar12 = *(undefined4 *)(iVar1 + 0x20);
      uVar14 = *(undefined4 *)(iVar1 + 0x24);
      if (*pcVar11 == '\0') {
        func_0x01384978(piVar9);
        iVar1 = *(int *)(*piVar9 + 0x5c);
        *(undefined1 *)(_UNK_01df1910 + 0x1df1684) = 1;
      }
      func_0x01df2c5c(param_1,fVar16,fVar15,uVar12,uVar14,*(undefined4 *)(iVar1 + 0x10),
                      *(undefined4 *)(iVar1 + 0x14),uVar17,uVar7);
    }
    uVar13 = (param_3 & 0xf) >> 3;
    if ((uVar13 & param_3) != 0) {
      uVar2 = func_0x01df2bc8(param_1,uVar2,uVar5);
      if (*pcVar10 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01df1914 + 0x1df16f0));
        *pcVar10 = '\x01';
      }
      piVar9 = *(int **)(_UNK_01df1918 + 0x1df1704);
      iVar1 = *(int *)(*piVar9 + 0x5c);
      uVar7 = *(undefined4 *)(iVar1 + 0x20);
      uVar12 = *(undefined4 *)(iVar1 + 0x24);
      if (*(char *)(_UNK_01df191c + 0x1df1714) == '\0') {
        func_0x01384978(piVar9);
        iVar1 = *(int *)(*piVar9 + 0x5c);
        *(undefined1 *)(_UNK_01df1920 + 0x1df1744) = 1;
      }
      func_0x01df2c5c(param_1,fVar16,fVar15,uVar7,uVar12,*(undefined4 *)(iVar1 + 0x18),
                      *(undefined4 *)(iVar1 + 0x1c),uVar17,uVar2);
    }
    pcVar10 = (char *)(_UNK_01df1924 + 0x1df178c);
    if ((uVar6 & param_3 >> 1) != 0) {
      uVar2 = func_0x01df2bc8(param_1,uVar3,uVar4);
      if (*pcVar10 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01df1928 + 0x1df17b8));
        *pcVar10 = '\x01';
      }
      piVar9 = *(int **)(_UNK_01df192c + 0x1df17cc);
      iVar1 = *(int *)(*piVar9 + 0x5c);
      pcVar10 = (char *)(_UNK_01df1930 + 0x1df17dc);
      uVar7 = *(undefined4 *)(iVar1 + 0x28);
      uVar4 = *(undefined4 *)(iVar1 + 0x2c);
      if (*pcVar10 == '\0') {
        func_0x01384978(piVar9);
        iVar1 = *piVar9;
        *pcVar10 = '\x01';
        iVar1 = *(int *)(iVar1 + 0x5c);
      }
      func_0x01df2c5c(param_1,fVar16,fVar15,uVar7,uVar4,*(undefined4 *)(iVar1 + 0x10),
                      *(undefined4 *)(iVar1 + 0x14),uVar17,uVar2);
      pcVar10 = (char *)(_UNK_01df1934 + 0x1df1844);
    }
    pcVar11 = (char *)(_UNK_01df1938 + 0x1df1850);
    if ((uVar13 & param_3 >> 1) != 0) {
      uVar2 = func_0x01df2bc8(param_1,uVar3,uVar5);
      if (*pcVar10 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01df193c + 0x1df187c));
        *pcVar10 = '\x01';
      }
      piVar9 = *(int **)(_UNK_01df1940 + 0x1df1890);
      iVar1 = *(int *)(*piVar9 + 0x5c);
      uVar4 = *(undefined4 *)(iVar1 + 0x28);
      uVar3 = *(undefined4 *)(iVar1 + 0x2c);
      if (*pcVar11 == '\0') {
        func_0x01384978(piVar9);
        iVar1 = *piVar9;
        *pcVar11 = '\x01';
        iVar1 = *(int *)(iVar1 + 0x5c);
      }
      func_0x01df2c5c(param_1,fVar16,fVar15,uVar4,uVar3,*(undefined4 *)(iVar1 + 0x18),
                      *(undefined4 *)(iVar1 + 0x1c),uVar17,uVar2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f2f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$AddCornerMask RVA 0x1de1944 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df1944(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  bool bVar7;
  uint uStack_24;
  
  pcVar6 = (char *)(_UNK_01df1aac + 0x1df1964);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df1ab0 + 0x1df197c));
    func_0x01384978(*(undefined4 *)(_UNK_01df1ab4 + 0x1df1988));
    *pcVar6 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0x9f2d,0);
  if (iVar2 == 0) {
    if (-1 < param_2 && -1 < param_3) {
      iVar3 = *(int *)(param_1 + 0x28);
      bVar7 = SBORROW4(iVar3,param_2);
      iVar2 = iVar3 - param_2;
      if (param_2 <= iVar3) {
        bVar7 = SBORROW4(*(int *)(param_1 + 0x2c),param_3);
        iVar2 = *(int *)(param_1 + 0x2c) - param_3;
      }
      if (iVar2 < 0 == bVar7) {
        uVar4 = func_0x01df1ac4(param_1,param_2,param_3);
        iVar2 = *(int *)(param_1 + 0x20);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x03d5bb20(iVar2,uVar4,&uStack_24,**(undefined4 **)(_UNK_01df1ab8 + 0x1df1a48))
        ;
        uVar1 = uStack_24;
        iVar3 = *(int *)(param_1 + 0x20);
        if (iVar2 == 0) {
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          puVar5 = *(undefined4 **)(_UNK_01df1ac0 + 0x1df1aa0);
        }
        else {
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          param_4 = uVar1 | param_4;
          puVar5 = *(undefined4 **)(_UNK_01df1abc + 0x1df1a80);
        }
        func_0x03d59d54(iVar3,uVar4,param_4,*puVar5);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9f2d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0228a0b4(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$VertexToIndex RVA 0x1de1ac4 =====

int FUN_01df1ac4(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9f2e,0);
  if (iVar1 == 0) {
    param_2 = (*(int *)(param_1 + 0x28) + 1) * param_3 + param_2;
  }
  else {
    iVar1 = func_0x0229f13c(0x9f2e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_2 = func_0x02180128(iVar1,param_1,param_2,param_3,0);
  }
  return param_2;
}



// ===== FAT.MBBoardLockAreaEdge$$AddQuad RVA 0x1de1b3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df1b3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 auStack_3b8 [4];
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  int iStack_33c;
  undefined4 uStack_338;
  undefined4 *puStack_334;
  undefined4 *puStack_330;
  int iStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  pcVar3 = (char *)(_UNK_01df2554 + 0x1df1b68);
  uStack_338 = param_2;
  puStack_330 = (undefined4 *)param_3;
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df2558 + 0x1df1b7c));
    func_0x01384978(*(undefined4 *)(_UNK_01df255c + 0x1df1b88));
    func_0x01384978(*(undefined4 *)(_UNK_01df2560 + 0x1df1b94));
    *pcVar3 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9f2a,0);
  if (iVar2 == 0) {
    uVar9 = *(undefined4 *)(param_1 + 0x3c);
    uVar13 = *(undefined4 *)(param_1 + 0x40);
    uVar7 = *(undefined4 *)(param_1 + 0x44);
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    auStack_3b8[0] = 0;
    uStack_344 = param_4;
    uStack_350 = func_0x01e07c50(uVar9,uVar13,uVar7,uVar4);
    uVar16 = 0;
    uVar17 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar19 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_e8 = 0;
    uStack_c8 = 0;
    uStack_bc = 0;
    uStack_f8 = 0;
    uStack_d8 = 0;
    auStack_3b8[0] = 0;
    uStack_f4 = uVar17;
    uStack_f0 = uVar18;
    uStack_ec = uVar19;
    uStack_e4 = uVar17;
    uStack_e0 = uVar18;
    uStack_dc = uVar19;
    uStack_d4 = uVar17;
    uStack_d0 = uVar18;
    uStack_cc = uVar19;
    uStack_c4 = uVar17;
    uStack_c0 = uVar18;
    uStack_b8 = uVar17;
    uStack_b4 = uVar18;
    uStack_b0 = uVar19;
    uStack_34c = func_0x01e07c50(uVar9,uVar13,uVar7,uVar4);
    auStack_3b8[0] = 0;
    uStack_148 = uVar16;
    uStack_144 = uVar17;
    uStack_140 = uVar18;
    uStack_13c = uVar19;
    uStack_138 = uVar16;
    uStack_134 = uVar17;
    uStack_130 = uVar18;
    uStack_12c = uVar19;
    uStack_128 = uVar16;
    uStack_124 = uVar17;
    uStack_120 = uVar18;
    uStack_11c = uVar19;
    uStack_118 = uVar16;
    uStack_114 = uVar17;
    uStack_110 = uVar18;
    uStack_10c = uVar16;
    uStack_108 = uVar17;
    uStack_104 = uVar18;
    uStack_100 = uVar19;
    uStack_348 = func_0x01e07c50(uVar9,uVar13,uVar7,uVar4);
    auStack_3b8[0] = 0;
    uStack_198 = uVar16;
    uStack_194 = uVar17;
    uStack_190 = uVar18;
    uStack_18c = uVar19;
    uStack_188 = uVar16;
    uStack_184 = uVar17;
    uStack_180 = uVar18;
    uStack_17c = uVar19;
    uStack_178 = uVar16;
    uStack_174 = uVar17;
    uStack_170 = uVar18;
    uStack_16c = uVar19;
    uStack_168 = uVar16;
    uStack_164 = uVar17;
    uStack_160 = uVar18;
    uStack_15c = uVar16;
    uStack_158 = uVar17;
    uStack_154 = uVar18;
    uStack_150 = uVar19;
    uStack_340 = func_0x01e07c50(uVar9,uVar13,uVar7,uVar4);
    iVar5 = *(int *)(param_1 + 0x14);
    iVar2 = iVar5;
    iStack_32c = param_1;
    uStack_1e8 = uVar16;
    uStack_1e4 = uVar17;
    uStack_1e0 = uVar18;
    uStack_1dc = uVar19;
    uStack_1d8 = uVar16;
    uStack_1d4 = uVar17;
    uStack_1d0 = uVar18;
    uStack_1cc = uVar19;
    uStack_1c8 = uVar16;
    uStack_1c4 = uVar17;
    uStack_1c0 = uVar18;
    uStack_1bc = uVar19;
    uStack_1b8 = uVar16;
    uStack_1b4 = uVar17;
    uStack_1b0 = uVar18;
    uStack_1ac = uVar16;
    uStack_1a8 = uVar17;
    uStack_1a4 = uVar18;
    uStack_1a0 = uVar19;
    if (iVar5 == 0) {
      func_0x01384bf0();
      iVar2 = *(int *)(iStack_32c + 0x14);
    }
    uStack_208 = CONCAT44(uStack_c4,uStack_c8);
    iStack_33c = *(int *)(iVar5 + 0xc);
    uStack_200 = uStack_c0;
    uStack_1fc = uStack_bc;
    uStack_1f8 = uStack_b8;
    uStack_1f4 = uStack_b4;
    uStack_1f0 = uStack_b0;
    uStack_238 = uStack_f8;
    uStack_234 = uStack_f4;
    uStack_230 = uStack_f0;
    uStack_22c = uStack_ec;
    uStack_228 = uStack_e8;
    uStack_224 = uStack_e4;
    uStack_220 = uStack_e0;
    uStack_21c = uStack_dc;
    uStack_218 = uStack_d8;
    uStack_214 = uStack_d4;
    uStack_210 = uStack_d0;
    uStack_20c = uStack_cc;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar15 = **(int **)(_UNK_01df2564 + 0x1df1dd0);
    uStack_7c = 0;
    uStack_78 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_74 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_70 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_334 = &uStack_90;
    uStack_9c = uStack_208;
    uStack_94 = uStack_200;
    uStack_90 = uStack_1fc;
    uStack_8c = uStack_1f8;
    uStack_88 = CONCAT44(uStack_1f0,uStack_1f4);
    uStack_a0 = 0;
    uStack_a4 = puStack_330;
    uStack_a8 = uStack_338;
    uStack_80 = uStack_350;
    puStack_330 = &uStack_6c;
    uStack_6c = uStack_238;
    uStack_68 = uStack_234;
    uStack_64 = uStack_230;
    uStack_60 = uStack_22c;
    uStack_5c = uStack_228;
    uStack_58 = uStack_224;
    uStack_54 = uStack_220;
    uStack_50 = uStack_21c;
    uStack_4c = uStack_218;
    uStack_48 = uStack_214;
    uStack_44 = uStack_210;
    uStack_40 = uStack_20c;
    iVar5 = *(int *)(iVar2 + 8);
    uVar10 = *(uint *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar18 = uStack_a0;
    uVar17 = uStack_a4;
    uVar16 = uStack_a8;
    if (uVar10 < *(uint *)(iVar5 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar10 + 1;
      func_0x01458938(uVar10 * 0x6c + iVar5 + 0x10,&uStack_a8,0x6c);
    }
    else {
      uStack_358 = *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38);
      iVar5 = 0x60;
      puVar6 = &uStack_9c;
      puVar11 = auStack_3b8;
      do {
        iVar5 = iVar5 + -4;
        *puVar11 = *(undefined4 *)puVar6;
        puVar6 = (undefined8 *)((int)puVar6 + 4);
        puVar11 = puVar11 + 1;
      } while (iVar5 != 0);
      func_0x032ec9cc(iVar2,uVar16,uVar17,uVar18);
    }
    uStack_258 = CONCAT44(uStack_114,uStack_118);
    iVar2 = *(int *)(iStack_32c + 0x14);
    uStack_250 = uStack_110;
    uStack_24c = uStack_10c;
    uStack_248 = uStack_108;
    uStack_244 = uStack_104;
    uStack_240 = uStack_100;
    uStack_288 = uStack_148;
    uStack_284 = uStack_144;
    uStack_280 = uStack_140;
    uStack_27c = uStack_13c;
    uStack_278 = uStack_138;
    uStack_274 = uStack_134;
    uStack_270 = uStack_130;
    uStack_26c = uStack_12c;
    uStack_268 = uStack_128;
    uStack_264 = uStack_124;
    uStack_260 = uStack_120;
    uStack_25c = uStack_11c;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar15 = **(int **)(_UNK_01df2568 + 0x1df1f18);
    uStack_9c = uStack_258;
    uStack_94 = uStack_250;
    uStack_90 = uStack_24c;
    *puStack_334 = uStack_24c;
    puStack_334[1] = uStack_248;
    puStack_334[2] = uStack_244;
    puStack_334[3] = uStack_240;
    uStack_a0 = 0;
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_78 = 0;
    uStack_a4 = param_5;
    uStack_7c = 0x3f800000;
    uStack_80 = uStack_34c;
    uStack_a8 = uStack_344;
    *puStack_330 = uStack_288;
    puStack_330[1] = uStack_284;
    puStack_330[2] = uStack_280;
    puStack_330[3] = uStack_27c;
    puStack_330[4] = uStack_278;
    puStack_330[5] = uStack_274;
    puStack_330[6] = uStack_270;
    puStack_330[7] = uStack_26c;
    puStack_330[8] = uStack_268;
    puStack_330[9] = uStack_264;
    puStack_330[10] = uStack_260;
    puStack_330[0xb] = uStack_25c;
    iVar5 = *(int *)(iVar2 + 8);
    uVar10 = *(uint *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar18 = uStack_a0;
    uVar17 = uStack_a4;
    uVar16 = uStack_a8;
    if (uVar10 < *(uint *)(iVar5 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar10 + 1;
      func_0x01458938(uVar10 * 0x6c + iVar5 + 0x10,&uStack_a8,0x6c);
    }
    else {
      uStack_358 = *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38);
      iVar5 = 0x60;
      puVar6 = &uStack_9c;
      puVar11 = auStack_3b8;
      do {
        iVar5 = iVar5 + -4;
        *puVar11 = *(undefined4 *)puVar6;
        puVar6 = (undefined8 *)((int)puVar6 + 4);
        puVar11 = puVar11 + 1;
      } while (iVar5 != 0);
      func_0x032ec9cc(iVar2,uVar16,uVar17,uVar18);
    }
    uStack_2a8 = CONCAT44(uStack_164,uStack_168);
    iVar2 = *(int *)(iStack_32c + 0x14);
    uStack_2a0 = uStack_160;
    uStack_29c = uStack_15c;
    uStack_298 = uStack_158;
    uStack_294 = uStack_154;
    uStack_290 = uStack_150;
    uStack_2d8 = uStack_198;
    uStack_2d4 = uStack_194;
    uStack_2d0 = uStack_190;
    uStack_2cc = uStack_18c;
    uStack_2c8 = uStack_188;
    uStack_2c4 = uStack_184;
    uStack_2c0 = uStack_180;
    uStack_2bc = uStack_17c;
    uStack_2b8 = uStack_178;
    uStack_2b4 = uStack_174;
    uStack_2b0 = uStack_170;
    uStack_2ac = uStack_16c;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar15 = **(int **)(_UNK_01df256c + 0x1df2068);
    uStack_9c = uStack_2a8;
    uStack_94 = uStack_2a0;
    uStack_90 = uStack_29c;
    *puStack_334 = uStack_29c;
    puStack_334[1] = uStack_298;
    puStack_334[2] = uStack_294;
    puStack_334[3] = uStack_290;
    uStack_a0 = 0;
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_a4 = param_7;
    uStack_78 = 0x3f800000;
    uStack_7c = 0x3f800000;
    uStack_80 = uStack_348;
    uStack_a8 = param_6;
    *puStack_330 = uStack_2d8;
    puStack_330[1] = uStack_2d4;
    puStack_330[2] = uStack_2d0;
    puStack_330[3] = uStack_2cc;
    puStack_330[4] = uStack_2c8;
    puStack_330[5] = uStack_2c4;
    puStack_330[6] = uStack_2c0;
    puStack_330[7] = uStack_2bc;
    puStack_330[8] = uStack_2b8;
    puStack_330[9] = uStack_2b4;
    puStack_330[10] = uStack_2b0;
    puStack_330[0xb] = uStack_2ac;
    iVar5 = *(int *)(iVar2 + 8);
    uVar10 = *(uint *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar18 = uStack_a0;
    uVar17 = uStack_a4;
    uVar16 = uStack_a8;
    if (uVar10 < *(uint *)(iVar5 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar10 + 1;
      func_0x01458938(uVar10 * 0x6c + iVar5 + 0x10,&uStack_a8,0x6c);
    }
    else {
      uStack_358 = *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38);
      iVar5 = 0x60;
      puVar6 = &uStack_9c;
      puVar11 = auStack_3b8;
      do {
        iVar5 = iVar5 + -4;
        *puVar11 = *(undefined4 *)puVar6;
        puVar6 = (undefined8 *)((int)puVar6 + 4);
        puVar11 = puVar11 + 1;
      } while (iVar5 != 0);
      func_0x032ec9cc(iVar2,uVar16,uVar17,uVar18);
    }
    uStack_2f8 = CONCAT44(uStack_1b4,uStack_1b8);
    iVar2 = *(int *)(iStack_32c + 0x14);
    uStack_2f0 = uStack_1b0;
    uStack_2ec = uStack_1ac;
    uStack_2e8 = uStack_1a8;
    uStack_2e4 = uStack_1a4;
    uStack_2e0 = uStack_1a0;
    uStack_328 = uStack_1e8;
    uStack_324 = uStack_1e4;
    uStack_320 = uStack_1e0;
    uStack_31c = uStack_1dc;
    uStack_318 = uStack_1d8;
    uStack_314 = uStack_1d4;
    uStack_310 = uStack_1d0;
    uStack_30c = uStack_1cc;
    uStack_308 = uStack_1c8;
    uStack_304 = uStack_1c4;
    uStack_300 = uStack_1c0;
    uStack_2fc = uStack_1bc;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar15 = **(int **)(_UNK_01df2570 + 0x1df21b8);
    uStack_9c = uStack_2f8;
    uStack_94 = uStack_2f0;
    uStack_90 = uStack_2ec;
    *puStack_334 = uStack_2ec;
    puStack_334[1] = uStack_2e8;
    puStack_334[2] = uStack_2e4;
    puStack_334[3] = uStack_2e0;
    uStack_a4 = param_9;
    uStack_a8 = param_8;
    uStack_a0 = 0;
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0x3f800000;
    uStack_80 = uStack_340;
    *puStack_330 = uStack_328;
    puStack_330[1] = uStack_324;
    puStack_330[2] = uStack_320;
    puStack_330[3] = uStack_31c;
    puStack_330[4] = uStack_318;
    puStack_330[5] = uStack_314;
    puStack_330[6] = uStack_310;
    puStack_330[7] = uStack_30c;
    puStack_330[8] = uStack_308;
    puStack_330[9] = uStack_304;
    puStack_330[10] = uStack_300;
    puStack_330[0xb] = uStack_2fc;
    iVar5 = *(int *)(iVar2 + 8);
    uVar10 = *(uint *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar18 = uStack_a0;
    uVar17 = uStack_a4;
    uVar16 = uStack_a8;
    iVar1 = iStack_33c;
    if (uVar10 < *(uint *)(iVar5 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar10 + 1;
      func_0x01458938(uVar10 * 0x6c + iVar5 + 0x10,&uStack_a8,0x6c);
    }
    else {
      uStack_358 = *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38);
      iVar5 = 0x60;
      puVar6 = &uStack_9c;
      puVar11 = auStack_3b8;
      do {
        iVar5 = iVar5 + -4;
        *puVar11 = *(undefined4 *)puVar6;
        puVar6 = (undefined8 *)((int)puVar6 + 4);
        puVar11 = puVar11 + 1;
      } while (iVar5 != 0);
      func_0x032ec9cc(iVar2,uVar16,uVar17,uVar18);
    }
    iVar2 = iStack_32c;
    iVar5 = *(int *)(iStack_32c + 0x18);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar15 = *(int *)(iVar5 + 8);
    uVar10 = *(uint *)(iVar5 + 0xc);
    piVar12 = *(int **)(_UNK_01df2574 + 0x1df22e0);
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    iVar8 = *piVar12;
    if (iVar15 == 0) {
      func_0x01384bf0();
    }
    if (uVar10 < *(uint *)(iVar15 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar10 + 1;
      *(int *)(iVar15 + uVar10 * 4 + 0x10) = iVar1;
    }
    else {
      func_0x0325970c(iVar5,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
    }
    iVar5 = *(int *)(iVar2 + 0x18);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar15 = *(int *)(iVar5 + 8);
    uVar10 = *(uint *)(iVar5 + 0xc);
    iVar8 = *piVar12;
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    if (iVar15 == 0) {
      func_0x01384bf0();
    }
    if (uVar10 < *(uint *)(iVar15 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar10 + 1;
      *(int *)(iVar15 + uVar10 * 4 + 0x10) = iVar1 + 1;
    }
    else {
      func_0x0325970c(iVar5,iVar1 + 1,
                      *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
    }
    iVar5 = *(int *)(iVar2 + 0x18);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar5 + 8);
    uVar10 = *(uint *)(iVar5 + 0xc);
    iVar15 = *piVar12;
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar14 = iVar1 + 2;
    if (uVar10 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar10 + 1;
      *(int *)(iVar8 + uVar10 * 4 + 0x10) = iVar14;
    }
    else {
      func_0x0325970c(iVar5,iVar14,*(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar5 = *(int *)(iVar2 + 0x18);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar5 + 8);
    uVar10 = *(uint *)(iVar5 + 0xc);
    iVar15 = *piVar12;
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (uVar10 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar10 + 1;
      *(int *)(iVar8 + uVar10 * 4 + 0x10) = iVar14;
    }
    else {
      func_0x0325970c(iVar5,iVar14,*(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar5 = *(int *)(iVar2 + 0x18);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar15 = *(int *)(iVar5 + 8);
    uVar10 = *(uint *)(iVar5 + 0xc);
    iVar8 = *piVar12;
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    if (iVar15 == 0) {
      func_0x01384bf0();
    }
    if (uVar10 < *(uint *)(iVar15 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar10 + 1;
      *(int *)(iVar15 + uVar10 * 4 + 0x10) = iVar1 + 3;
    }
    else {
      func_0x0325970c(iVar5,iVar1 + 3,
                      *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
    }
    iVar2 = *(int *)(iVar2 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar2 + 8);
    uVar10 = *(uint *)(iVar2 + 0xc);
    iVar15 = *piVar12;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (uVar10 < *(uint *)(iVar5 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar10 + 1;
      *(int *)(iVar5 + uVar10 * 4 + 0x10) = iVar1;
    }
    else {
      func_0x0325970c(iVar2,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9f2a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    auStack_3b8[1] = param_5;
    auStack_3b8[2] = param_6;
    auStack_3b8[3] = param_7;
    uStack_3a8 = param_8;
    uStack_3a4 = param_9;
    uStack_3a0 = 0;
    auStack_3b8[0] = param_4;
    func_0x02289e28(iVar2,param_1,uStack_338,puStack_330);
  }
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$HasHorizontalEdgeToLeft RVA 0x1de2578 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01df2578(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  
  pcVar3 = (char *)(_UNK_01df26fc + 0x1df2598);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df2700 + 0x1df25ac));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x9f30,0);
  if (iVar1 == 0) {
    if (0 < param_2) {
      if (-1 < param_3) {
        if (param_3 < *(int *)(param_1 + 0x2c)) {
          iVar1 = *(int *)(param_1 + 0x1c);
          uVar2 = FUN_01df0ff4(param_1,param_2 + -1,param_3);
          uVar2 = FUN_01df1280(param_1,uVar2,1);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03d5d918(iVar1,uVar2,**(undefined4 **)(_UNK_01df2704 + 0x1df2670));
          if (iVar1 != 0) {
            return 1;
          }
        }
        bVar5 = SBORROW4(param_3,1);
        iVar1 = param_3 + -1;
        if (0 < param_3) {
          bVar5 = SBORROW4(*(int *)(param_1 + 0x2c),param_3);
          iVar1 = *(int *)(param_1 + 0x2c) - param_3;
        }
        if (iVar1 < 0 == bVar5) {
          iVar1 = *(int *)(param_1 + 0x1c);
          uVar2 = FUN_01df0ff4(param_1,param_2 + -1,param_3 + -1);
          uVar2 = FUN_01df1280(param_1,uVar2,4);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03d5d918(iVar1,uVar2,**(undefined4 **)(_UNK_01df2708 + 0x1df26e4));
          return (uint)(iVar1 != 0);
        }
      }
      uVar4 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f30,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}



// ===== FAT.MBBoardLockAreaEdge$$HasHorizontalEdgeToRight RVA 0x1de270c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01df270c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  
  pcVar3 = (char *)(_UNK_01df2890 + 0x1df272c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df2894 + 0x1df2740));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x9f31,0);
  if (iVar1 == 0) {
    if (param_2 < *(int *)(param_1 + 0x28)) {
      if (-1 < param_3) {
        if (param_3 < *(int *)(param_1 + 0x2c)) {
          iVar1 = *(int *)(param_1 + 0x1c);
          uVar2 = FUN_01df0ff4(param_1,param_2,param_3);
          uVar2 = FUN_01df1280(param_1,uVar2,1);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03d5d918(iVar1,uVar2,**(undefined4 **)(_UNK_01df2898 + 0x1df2804));
          if (iVar1 != 0) {
            return 1;
          }
        }
        bVar5 = SBORROW4(param_3,1);
        iVar1 = param_3 + -1;
        if (0 < param_3) {
          bVar5 = SBORROW4(*(int *)(param_1 + 0x2c),param_3);
          iVar1 = *(int *)(param_1 + 0x2c) - param_3;
        }
        if (iVar1 < 0 == bVar5) {
          iVar1 = *(int *)(param_1 + 0x1c);
          uVar2 = FUN_01df0ff4(param_1,param_2,param_3 + -1);
          uVar2 = FUN_01df1280(param_1,uVar2,4);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03d5d918(iVar1,uVar2,**(undefined4 **)(_UNK_01df289c + 0x1df2878));
          return (uint)(iVar1 != 0);
        }
      }
      uVar4 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f31,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}



// ===== FAT.MBBoardLockAreaEdge$$HasVerticalEdgeAbove RVA 0x1de28a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01df28a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  
  pcVar3 = (char *)(_UNK_01df2a24 + 0x1df28c0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df2a28 + 0x1df28d4));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x9f32,0);
  if (iVar1 == 0) {
    if (0 < param_3) {
      if (-1 < param_2) {
        if (param_2 < *(int *)(param_1 + 0x28)) {
          iVar1 = *(int *)(param_1 + 0x1c);
          uVar2 = FUN_01df0ff4(param_1,param_2,param_3 + -1);
          uVar2 = FUN_01df1280(param_1,uVar2,8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03d5d918(iVar1,uVar2,**(undefined4 **)(_UNK_01df2a2c + 0x1df2994));
          if (iVar1 != 0) {
            return 1;
          }
        }
        bVar5 = SBORROW4(param_2,1);
        iVar1 = param_2 + -1;
        if (0 < param_2) {
          bVar5 = SBORROW4(*(int *)(param_1 + 0x28),param_2);
          iVar1 = *(int *)(param_1 + 0x28) - param_2;
        }
        if (iVar1 < 0 == bVar5) {
          iVar1 = *(int *)(param_1 + 0x1c);
          uVar2 = FUN_01df0ff4(param_1,param_2 + -1,param_3 + -1);
          uVar2 = FUN_01df1280(param_1,uVar2,2);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03d5d918(iVar1,uVar2,**(undefined4 **)(_UNK_01df2a30 + 0x1df2a0c));
          return (uint)(iVar1 != 0);
        }
      }
      uVar4 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f32,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}



// ===== FAT.MBBoardLockAreaEdge$$HasVerticalEdgeBelow RVA 0x1de2a34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01df2a34(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  
  pcVar3 = (char *)(_UNK_01df2bb8 + 0x1df2a54);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df2bbc + 0x1df2a68));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x9f33,0);
  if (iVar1 == 0) {
    if (param_3 < *(int *)(param_1 + 0x2c)) {
      if (-1 < param_2) {
        if (param_2 < *(int *)(param_1 + 0x28)) {
          iVar1 = *(int *)(param_1 + 0x1c);
          uVar2 = FUN_01df0ff4(param_1,param_2,param_3);
          uVar2 = FUN_01df1280(param_1,uVar2,8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03d5d918(iVar1,uVar2,**(undefined4 **)(_UNK_01df2bc0 + 0x1df2b28));
          if (iVar1 != 0) {
            return 1;
          }
        }
        bVar5 = SBORROW4(param_2,1);
        iVar1 = param_2 + -1;
        if (0 < param_2) {
          bVar5 = SBORROW4(*(int *)(param_1 + 0x28),param_2);
          iVar1 = *(int *)(param_1 + 0x28) - param_2;
        }
        if (iVar1 < 0 == bVar5) {
          iVar1 = *(int *)(param_1 + 0x1c);
          uVar2 = FUN_01df0ff4(param_1,param_2 + -1,param_3);
          uVar2 = FUN_01df1280(param_1,uVar2,2);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03d5d918(iVar1,uVar2,**(undefined4 **)(_UNK_01df2bc4 + 0x1df2ba0));
          return (uint)(iVar1 != 0);
        }
      }
      uVar4 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f33,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}



// ===== FAT.MBBoardLockAreaEdge$$GetCornerType RVA 0x1de2bc8 =====

undefined4 FUN_01df2bc8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x9f34,0);
  if (iVar1 == 0) {
    if (param_2 == 0 || param_3 == 0) {
      uVar2 = 1;
      if (param_3 != 0) {
        uVar2 = 3;
      }
      if (param_2 != 0) {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f34,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0228a1a8(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.MBBoardLockAreaEdge$$AddCornerAtVertex RVA 0x1de2c5c =====

void FUN_01df2c5c(undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,undefined4 param_9)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9f35,0);
  if (iVar1 == 0) {
    func_0x01df2d7c(param_1,param_2 + (param_4 + param_6) * param_8,
                    param_3 + (param_5 + param_7) * param_8,param_2 + param_4 * param_8,
                    param_3 + param_5 * param_8,param_2,param_3,param_2 + param_6 * param_8,
                    param_3 + param_7 * param_8,param_9);
  }
  else {
    iVar1 = func_0x0229f13c(0x9f35,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0228a6b0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0)
    ;
  }
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$AddCornerTriangles RVA 0x1de2d7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df2d7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,int param_10)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_2c;
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x9f36,0);
  if (iVar1 == 0) {
    uVar8 = *(undefined4 *)(param_1 + 0x3c);
    uVar2 = param_10 - 1;
    uVar6 = *(undefined4 *)(param_1 + 0x40);
    uVar9 = *(undefined4 *)(param_1 + 0x44);
    uVar7 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = 0;
    uStack_2c = 0x3f800000;
    uVar5 = 0x3f800000;
    if (uVar2 < 3) {
      uStack_2c = *(undefined4 *)(_UNK_01df2f64 + 0x1df2e6c + uVar2 * 4);
      uVar3 = *(undefined4 *)(_UNK_01df2f68 + 0x1df2e74 + uVar2 * 4);
      uVar4 = *(undefined4 *)(_UNK_01df2f6c + 0x1df2e7c + uVar2 * 4);
      uVar5 = uVar3;
    }
    func_0x01df2f70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar4,0,uVar3,uVar5,
                    uVar5,0x3f800000,uVar8,uVar6,uVar9,uVar7);
    func_0x01df2f70(param_1,param_2,param_3,param_6,param_7,param_8,param_9,uVar4,0,uVar5,0x3f800000
                    ,uVar3,uStack_2c,uVar8,uVar6,uVar9,uVar7);
  }
  else {
    iVar1 = func_0x0229f13c(0x9f36,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0228a4f8(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    param_10,0);
  }
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$AddTriangle RVA 0x1de2f70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df2f70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  undefined4 auStack_200 [4];
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1a0;
  int iStack_194;
  undefined8 *puStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 auStack_84 [3];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01df3620 + 0x1df2f94);
  uStack_188 = param_4;
  uStack_184 = param_3;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df3624 + 0x1df2fa8));
    func_0x01384978(*(undefined4 *)(_UNK_01df3628 + 0x1df2fb4));
    func_0x01384978(*(undefined4 *)(_UNK_01df362c + 0x1df2fc0));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9f37,0);
  if (iVar2 == 0) {
    iVar6 = *(int *)(param_1 + 0x14);
    iVar2 = iVar6;
    if (iVar6 == 0) {
      func_0x01384bf0();
      iVar2 = *(int *)(param_1 + 0x14);
    }
    iStack_194 = *(int *)(iVar6 + 0xc);
    auStack_200[0] = 0;
    iStack_18c = param_1;
    uStack_68 = func_0x01e07c50(param_14,param_15,param_16,param_17);
    uStack_dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_d8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_d4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_d0 = 0;
    uStack_b0 = 0;
    uStack_a4 = 0;
    uStack_e0 = 0;
    uStack_c0 = 0;
    uStack_cc = uStack_dc;
    uStack_c8 = uStack_d8;
    uStack_c4 = uStack_d4;
    uStack_bc = uStack_dc;
    uStack_b8 = uStack_d8;
    uStack_b4 = uStack_d4;
    uStack_ac = uStack_dc;
    uStack_a8 = uStack_d8;
    uStack_a0 = uStack_dc;
    uStack_9c = uStack_d8;
    uStack_98 = uStack_d4;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar13 = **(int **)(_UNK_01df3630 + 0x1df3114);
    puStack_190 = &uStack_78;
    auStack_84[0] = uStack_b0;
    auStack_84[1] = uStack_ac;
    auStack_84[2] = uStack_a8;
    uStack_78 = CONCAT44(uStack_a0,uStack_a4);
    uStack_70 = CONCAT44(uStack_98,uStack_9c);
    uStack_8c = uStack_184;
    uStack_60 = param_9;
    uStack_88 = 0;
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_64 = param_8;
    uStack_54 = uStack_e0;
    uStack_50 = uStack_dc;
    uStack_4c = uStack_d8;
    uStack_48 = uStack_d4;
    uStack_44 = uStack_d0;
    uStack_40 = uStack_cc;
    uStack_3c = uStack_c8;
    uStack_38 = uStack_c4;
    uStack_34 = uStack_c0;
    uStack_30 = uStack_bc;
    uStack_2c = uStack_b8;
    uStack_28 = uStack_b4;
    iVar6 = *(int *)(iVar2 + 8);
    uVar9 = *(uint *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    uStack_90 = param_2;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar1 = uStack_88;
    uVar3 = uStack_8c;
    uVar4 = uStack_90;
    iVar8 = iStack_18c;
    if (uVar9 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar9 + 1;
      func_0x01458938(uVar9 * 0x6c + iVar6 + 0x10,&uStack_90,0x6c);
    }
    else {
      uStack_1a0 = *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38);
      iVar6 = 0x60;
      puVar7 = auStack_200;
      puVar11 = auStack_84;
      do {
        iVar6 = iVar6 + -4;
        *puVar7 = *puVar11;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar6 != 0);
      func_0x032ec9cc(iVar2,uVar4,uVar3,uVar1);
    }
    uVar4 = uStack_188;
    iVar2 = *(int *)(iVar8 + 0x14);
    auStack_200[0] = 0;
    uVar3 = func_0x01e07c50(param_14,param_15,param_16,param_17);
    uStack_12c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_128 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_124 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_120 = 0;
    uStack_100 = 0;
    uStack_f4 = 0;
    uStack_130 = 0;
    uStack_110 = 0;
    uStack_11c = uStack_12c;
    uStack_118 = uStack_128;
    uStack_114 = uStack_124;
    uStack_10c = uStack_12c;
    uStack_108 = uStack_128;
    uStack_104 = uStack_124;
    uStack_fc = uStack_12c;
    uStack_f8 = uStack_128;
    uStack_f0 = uStack_12c;
    uStack_ec = uStack_128;
    uStack_e8 = uStack_124;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar13 = **(int **)(_UNK_01df3634 + 0x1df327c);
    auStack_84[0] = uStack_100;
    auStack_84[1] = uStack_fc;
    auStack_84[2] = uStack_f8;
    uStack_78 = CONCAT44(uStack_78._4_4_,uStack_f4);
    *puStack_190 = CONCAT44(uStack_f0,uStack_f4);
    puStack_190[1] = CONCAT44(uStack_e8,uStack_ec);
    uStack_8c = param_5;
    uStack_60 = param_11;
    uStack_64 = param_10;
    uStack_88 = 0;
    uStack_90 = uVar4;
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_68 = uVar3;
    uStack_54 = uStack_130;
    uStack_50 = uStack_12c;
    uStack_4c = uStack_128;
    uStack_48 = uStack_124;
    uStack_44 = uStack_120;
    uStack_40 = uStack_11c;
    uStack_3c = uStack_118;
    uStack_38 = uStack_114;
    uStack_34 = uStack_110;
    uStack_30 = uStack_10c;
    uStack_2c = uStack_108;
    uStack_28 = uStack_104;
    iVar6 = *(int *)(iVar2 + 8);
    uVar9 = *(uint *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar1 = uStack_88;
    uVar3 = uStack_8c;
    uVar4 = uStack_90;
    if (uVar9 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar9 + 1;
      func_0x01458938(uVar9 * 0x6c + iVar6 + 0x10,&uStack_90,0x6c);
    }
    else {
      uStack_1a0 = *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38);
      iVar6 = 0x60;
      puVar7 = auStack_200;
      puVar11 = auStack_84;
      do {
        iVar6 = iVar6 + -4;
        *puVar7 = *puVar11;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar6 != 0);
      func_0x032ec9cc(iVar2,uVar4,uVar3,uVar1);
    }
    iVar2 = *(int *)(iStack_18c + 0x14);
    auStack_200[0] = 0;
    uVar4 = func_0x01e07c50(param_14,param_15,param_16,param_17);
    uStack_17c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_178 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_174 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_170 = 0;
    uStack_150 = 0;
    uStack_144 = 0;
    uStack_180 = 0;
    uStack_160 = 0;
    uStack_16c = uStack_17c;
    uStack_168 = uStack_178;
    uStack_164 = uStack_174;
    uStack_15c = uStack_17c;
    uStack_158 = uStack_178;
    uStack_154 = uStack_174;
    uStack_14c = uStack_17c;
    uStack_148 = uStack_178;
    uStack_140 = uStack_17c;
    uStack_13c = uStack_178;
    uStack_138 = uStack_174;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar13 = **(int **)(_UNK_01df3638 + 0x1df33d8);
    auStack_84[0] = uStack_150;
    auStack_84[1] = uStack_14c;
    auStack_84[2] = uStack_148;
    uStack_78 = CONCAT44(uStack_78._4_4_,uStack_144);
    *puStack_190 = CONCAT44(uStack_140,uStack_144);
    puStack_190[1] = CONCAT44(uStack_138,uStack_13c);
    uStack_8c = param_7;
    uStack_90 = param_6;
    uStack_60 = param_13;
    uStack_88 = 0;
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_64 = param_12;
    uStack_68 = uVar4;
    uStack_54 = uStack_180;
    uStack_50 = uStack_17c;
    uStack_4c = uStack_178;
    uStack_48 = uStack_174;
    uStack_44 = uStack_170;
    uStack_40 = uStack_16c;
    uStack_3c = uStack_168;
    uStack_38 = uStack_164;
    uStack_34 = uStack_160;
    uStack_30 = uStack_15c;
    uStack_2c = uStack_158;
    uStack_28 = uStack_154;
    iVar6 = *(int *)(iVar2 + 8);
    uVar9 = *(uint *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar1 = uStack_88;
    uVar3 = uStack_8c;
    uVar4 = uStack_90;
    if (uVar9 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar9 + 1;
      func_0x01458938(uVar9 * 0x6c + iVar6 + 0x10,&uStack_90,0x6c);
    }
    else {
      uStack_1a0 = *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38);
      iVar6 = 0x60;
      puVar7 = auStack_84;
      puVar11 = auStack_200;
      do {
        iVar6 = iVar6 + -4;
        *puVar11 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar6 != 0);
      func_0x032ec9cc(iVar2,uVar4,uVar3,uVar1);
    }
    iVar6 = iStack_18c;
    iVar2 = iStack_194;
    iVar13 = *(int *)(iStack_18c + 0x18);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar13 + 8);
    uVar9 = *(uint *)(iVar13 + 0xc);
    piVar12 = *(int **)(_UNK_01df363c + 0x1df34fc);
    *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
    iVar10 = *piVar12;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (uVar9 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar13 + 0xc) = uVar9 + 1;
      *(int *)(iVar8 + uVar9 * 4 + 0x10) = iVar2;
    }
    else {
      func_0x0325970c(iVar13,iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar13 = *(int *)(iVar6 + 0x18);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar13 + 8);
    uVar9 = *(uint *)(iVar13 + 0xc);
    iVar10 = *piVar12;
    *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (uVar9 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar13 + 0xc) = uVar9 + 1;
      *(int *)(iVar8 + uVar9 * 4 + 0x10) = iVar2 + 1;
    }
    else {
      func_0x0325970c(iVar13,iVar2 + 1,
                      *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
    }
    iVar6 = *(int *)(iVar6 + 0x18);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar6 + 8);
    uVar9 = *(uint *)(iVar6 + 0xc);
    iVar8 = *piVar12;
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    if (uVar9 < *(uint *)(iVar13 + 0xc)) {
      *(uint *)(iVar6 + 0xc) = uVar9 + 1;
      *(int *)(iVar13 + uVar9 * 4 + 0x10) = iVar2 + 2;
    }
    else {
      func_0x0325970c(iVar6,iVar2 + 2,
                      *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9f37,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    auStack_200[0] = uStack_188;
    auStack_200[1] = param_5;
    auStack_200[2] = param_6;
    uStack_1f0 = param_8;
    uStack_1ec = param_9;
    uStack_1e8 = param_10;
    uStack_1e4 = param_11;
    uStack_1d8 = param_14;
    uStack_1d4 = param_15;
    uStack_1d0 = param_16;
    uStack_1cc = param_17;
    auStack_200[3] = param_7;
    uStack_1e0 = param_12;
    uStack_1dc = param_13;
    uStack_1c8 = 0;
    func_0x0228a2a0(iVar2,param_1,param_2,uStack_184);
  }
  return;
}



// ===== FAT.MBBoardLockAreaEdge$$.ctor RVA 0x1de3640 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df3640(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01df37d4 + 0x1df3654);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df37d8 + 0x1df3668));
    func_0x01384978(*(undefined4 *)(_UNK_01df37dc + 0x1df3674));
    func_0x01384978(*(undefined4 *)(_UNK_01df37e0 + 0x1df3680));
    func_0x01384978(*(undefined4 *)(_UNK_01df37e4 + 0x1df368c));
    func_0x01384978(*(undefined4 *)(_UNK_01df37e8 + 0x1df3698));
    func_0x01384978(*(undefined4 *)(_UNK_01df37ec + 0x1df36a4));
    func_0x01384978(*(undefined4 *)(_UNK_01df37f0 + 0x1df36b0));
    func_0x01384978(*(undefined4 *)(_UNK_01df37f4 + 0x1df36bc));
    func_0x01384978(*(undefined4 *)(_UNK_01df37f8 + 0x1df36c8));
    func_0x01384978(*(undefined4 *)(_UNK_01df37fc + 0x1df36d4));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01df3800 + 0x1df36e8));
  func_0x032ec070(uVar1,**(undefined4 **)(_UNK_01df3804 + 0x1df36fc));
  puVar2 = *(undefined4 **)(_UNK_01df3808 + 0x1df3710);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_01df380c + 0x1df3728));
  puVar2 = *(undefined4 **)(_UNK_01df3810 + 0x1df373c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d5cc74(uVar1,**(undefined4 **)(_UNK_01df3814 + 0x1df3754));
  puVar2 = *(undefined4 **)(_UNK_01df3818 + 0x1df3768);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_01df381c + 0x1df3780));
  puVar2 = *(undefined4 **)(_UNK_01df3820 + 0x1df3794);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d4e3b0(uVar1,**(undefined4 **)(_UNK_01df3824 + 0x1df37ac));
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = 0x40800000;
  (*(code *)&UNK_05438458)(param_1,0);
  return;
}


