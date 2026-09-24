/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.BoardTokenBoostController$$get_IsEnabled RVA 0x2bdec64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02beec64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_02beed10 + 0x2beec78);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02beed14 + 0x2beec8c));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x5cb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5cb,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      uVar5 = 1;
    }
  }
  return uVar5;
}



// ===== FAT.BoardTokenBoostController$$get_CurrentRate RVA 0x2bded18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02beed18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_02beee30 + 0x2beed2c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02beee34 + 0x2beed40));
    func_0x01384978(*(undefined4 *)(_UNK_02beee38 + 0x2beed4c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ca4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ca4,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_02beec64(param_1);
  if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x10), -1 < iVar1)) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 < *(int *)(iVar3 + 0xc)) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0364c9b8(iVar1,uVar5,**(undefined4 **)(_UNK_02beee3c + 0x2beee14));
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      return iVar1;
    }
  }
  return 1;
}



// ===== FAT.BoardTokenBoostController$$TryCalculateTokenCost RVA 0x2bdee40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02beee40(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uStack_38;
  uint uStack_34;
  uint uStack_2c;
  uint uStack_28;
  
  pcVar9 = (char *)(_UNK_02bef224 + 0x2beee60);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bef228 + 0x2beee78));
    func_0x01384978(*(undefined4 *)(_UNK_02bef22c + 0x2beee84));
    func_0x01384978(*(undefined4 *)(_UNK_02bef230 + 0x2beee90));
    func_0x01384978(*(undefined4 *)(_UNK_02bef234 + 0x2beee9c));
    func_0x01384978(*(undefined4 *)(_UNK_02bef238 + 0x2beeea8));
    func_0x01384978(*(undefined4 *)(_UNK_02bef23c + 0x2beeeb4));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c8e,0);
  if (iVar1 == 0) {
    uVar3 = 1;
    *param_3 = 0;
    *param_4 = 1;
    if ((int)param_2 < 1) {
      uStack_38 = param_2;
      uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_02bef240 + 0x2beef88),&uStack_38);
      uVar8 = 0;
      puVar12 = *(undefined4 **)(_UNK_02bef244 + 0x2beefa8);
      uVar10 = *puVar12;
      if (param_1 != 0) {
        puVar12 = *(undefined4 **)(param_1 + 0xc);
      }
      if (param_1 != 0 && puVar12 != (undefined4 *)0x0) {
        piVar4 = (int *)func_0x0487582c(puVar12,0,0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        uVar8 = (**(code **)(*piVar4 + 0x100))(piVar4,*(undefined4 *)(*piVar4 + 0x104));
      }
      uVar8 = func_0x0467272c(uVar10,uVar2,uVar8,0);
    }
    else {
      if (param_1 != 0) {
        iVar1 = func_0x02bef25c(param_1,param_4);
        if (iVar1 == 0) {
          return 0;
        }
        uVar3 = *param_4;
      }
      uVar11 = (uint)((ulonglong)param_2 * (ulonglong)uVar3);
      uVar3 = ((int)uVar3 >> 0x1f) * param_2 + (int)((ulonglong)param_2 * (ulonglong)uVar3 >> 0x20);
      if (uVar3 == (uVar11 == 0) && (uint)(0x7ffffffe < uVar11 - 1) <= uVar3 - (uVar11 == 0)) {
        *param_3 = uVar11;
        return 1;
      }
      piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bef24c + 0x2bef00c),4);
      puVar12 = *(undefined4 **)(_UNK_02bef250 + 0x2bef024);
      uStack_28 = param_2;
      iVar1 = func_0x01384abc(*puVar12,&uStack_28);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
        uVar2 = func_0x01384c10();
        func_0x01384aa0(uVar2,0);
      }
      if (piVar4[3] == 0) {
        func_0x01384bf4();
      }
      piVar4[4] = iVar1;
      uStack_2c = *param_4;
      iVar1 = func_0x01384abc(*puVar12,&uStack_2c);
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
        uVar2 = func_0x01384c10();
        func_0x01384aa0(uVar2,0);
      }
      if ((uint)piVar4[3] < 2) {
        func_0x01384bf4();
      }
      piVar4[5] = iVar1;
      uStack_38 = uVar11;
      uStack_34 = uVar3;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02bef254 + 0x2bef0e4),&uStack_38);
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
        uVar2 = func_0x01384c10();
        func_0x01384aa0(uVar2,0);
      }
      if ((uint)piVar4[3] < 3) {
        func_0x01384bf4();
      }
      piVar4[6] = iVar1;
      uVar2 = **(undefined4 **)(_UNK_02bef258 + 0x2bef144);
      if (param_1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar5 = 0;
        if (*(int *)(param_1 + 0xc) != 0) {
          piVar6 = (int *)func_0x0487582c(*(int *)(param_1 + 0xc),0);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar5 = (**(code **)(*piVar6 + 0x100))(piVar6,*(undefined4 *)(*piVar6 + 0x104));
        }
        iVar1 = 0;
        if ((iVar5 != 0) &&
           (iVar7 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar1 = iVar5,
           iVar7 == 0)) {
          uVar8 = func_0x01384c10();
          func_0x01384aa0(uVar8,0);
        }
      }
      if ((uint)piVar4[3] < 4) {
        func_0x01384bf4();
      }
      piVar4[7] = iVar1;
      uVar8 = func_0x046727d0(uVar2,piVar4,0);
    }
    uVar2 = 0;
    if (*(int *)(**(int **)(_UNK_02bef248 + 0x2bef1fc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar8,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5c8e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02182904(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.BoardTokenBoostController$$TryGetCurrentCostRate RVA 0x2bdf25c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bef25c(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_02bef548 + 0x2bef278);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bef54c + 0x2bef28c));
    func_0x01384978(*(undefined4 *)(_UNK_02bef550 + 0x2bef298));
    func_0x01384978(*(undefined4 *)(_UNK_02bef554 + 0x2bef2a4));
    func_0x01384978(*(undefined4 *)(_UNK_02bef558 + 0x2bef2b0));
    func_0x01384978(*(undefined4 *)(_UNK_02bef55c + 0x2bef2bc));
    func_0x01384978(*(undefined4 *)(_UNK_02bef560 + 0x2bef2c8));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c8f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c8f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    iStack_28 = iStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    func_0x01485238(&uStack_38,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar3,1,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    *param_2 = iVar1;
    uVar9 = func_0x0245496c(&uStack_38,1,0);
    return uVar9;
  }
  uVar9 = 1;
  *param_2 = 1;
  iVar1 = FUN_02beec64(param_1);
  if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x10), -1 < iVar1)) {
    iVar7 = *(int *)(param_1 + 8);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0x14);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 < *(int *)(iVar7 + 0xc)) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      uVar9 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0364c9b8(iVar1,uVar9,**(undefined4 **)(_UNK_02bef56c + 0x2bef3a0));
      *param_2 = iVar1;
      if (0 < iVar1) {
        return 1;
      }
      uStack_24 = *(undefined4 *)(param_1 + 0x10);
      puVar6 = *(undefined4 **)(_UNK_02bef570 + 0x2bef3c4);
      uVar9 = func_0x01384abc(*puVar6,&uStack_24);
      iStack_28 = *param_2;
      uVar3 = func_0x01384abc(*puVar6,&iStack_28);
      uVar4 = 0;
      uVar5 = **(undefined4 **)(_UNK_02bef574 + 0x2bef408);
      if (*(int *)(param_1 + 0xc) != 0) {
        piVar2 = (int *)func_0x0487582c(*(int *)(param_1 + 0xc),0);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        uVar4 = (**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
      }
    }
    else {
      uStack_24 = *(undefined4 *)(param_1 + 0x10);
      puVar6 = *(undefined4 **)(_UNK_02bef564 + 0x2bef460);
      uVar9 = func_0x01384abc(*puVar6,&uStack_24);
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iStack_28 = *(int *)(iVar1 + 0xc);
      uVar3 = func_0x01384abc(*puVar6,&iStack_28);
      uVar4 = 0;
      uVar5 = **(undefined4 **)(_UNK_02bef568 + 0x2bef4c4);
      if (*(int *)(param_1 + 0xc) != 0) {
        piVar2 = (int *)func_0x0487582c(*(int *)(param_1 + 0xc),0);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        uVar4 = (**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
      }
    }
    uStack_30 = 0;
    uVar3 = func_0x0467277c(uVar5,uVar9,uVar3,uVar4);
    if (*(int *)(**(int **)(_UNK_02bef578 + 0x2bef51c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar9 = 0;
    func_0x028c2944(uVar3,0);
  }
  return uVar9;
}



// ===== FAT.BoardTokenBoostController$$get_CurrentLevelAdd RVA 0x2bdf57c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bef57c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  int extraout_r3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  longlong lVar8;
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
  
  pcVar6 = (char *)(_UNK_02bef68c + 0x2bef590);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bef690 + 0x2bef5a4));
    func_0x01384978(*(undefined4 *)(_UNK_02bef694 + 0x2bef5b0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c96,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c96,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_02beec64(param_1);
  if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x10), -1 < iVar1)) {
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x20);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 < *(int *)(iVar5 + 0xc)) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x20);
      uVar4 = *(uint *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar7 = **(undefined4 **)(_UNK_02bef698 + 0x2bef678);
      if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(iVar1 + 0xc))) {
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar4) {
          func_0x02457d5c();
        }
        return *(int *)(iVar1 + uVar4 * 4 + 0x10);
      }
      func_0x02457d6c(*(undefined4 *)(iRam0364ca44 + 0x364ca10));
      uVar3 = func_0x02457d58();
      uVar2 = func_0x02457d6c(*(undefined4 *)(iRam0364ca48 + 0x364ca24));
      func_0x047901e8(uVar3,uVar2,0);
      func_0x02457d90(uVar3,uVar7);
      lVar8 = func_0x02457d94();
      uVar4 = (uint)((ulonglong)lVar8 >> 0x20);
      pcVar6 = (char *)(iRam0364cb28 + 0x364ca68);
      uStack_28 = uVar7;
      uStack_24 = uVar3;
      if (*pcVar6 == '\0') {
        func_0x02457d54(*(undefined4 *)(iRam0364cb2c + 0x364ca80));
        *pcVar6 = '\x01';
      }
      if ((-1 < lVar8) && ((int)uVar4 < *(int *)((int)lVar8 + 0xc))) {
        func_0x03031db0(extraout_r2,**(undefined4 **)(iRam0364cb30 + 0x364cab0),
                        *(undefined4 *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x80));
        iVar1 = *(int *)((int)lVar8 + 8);
        if (iVar1 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar4) {
          func_0x02457d5c();
        }
        iVar1 = iVar1 + uVar4 * 4;
        *(undefined4 *)(iVar1 + 0x10) = extraout_r2;
        return iVar1;
      }
      func_0x02457d6c(*(undefined4 *)(iRam0364cb34 + 0x364caf4));
      uVar7 = func_0x02457d58();
      uVar3 = func_0x02457d6c(*(undefined4 *)(iRam0364cb38 + 0x364cb08));
      func_0x047901e8(uVar7,uVar3,0);
      func_0x02457d90(uVar7,extraout_r3);
      func_0x02457d94();
      return 0;
    }
  }
  return 0;
}



// ===== FAT.BoardTokenBoostController$$get_CurrentState RVA 0x2bdf69c =====

undefined4 FUN_02bef69c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5d28,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5d28,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.BoardTokenBoostController$$get_MaxState RVA 0x2bdf6f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bef6f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_02bef794 + 0x2bef704);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bef798 + 0x2bef718));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5d24,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5d24,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    return *(int *)(iVar1 + 0xc) + -1;
  }
  return -1;
}



// ===== FAT.BoardTokenBoostController$$get_MaxUnlocked RVA 0x2bdf79c =====

undefined4 FUN_02bef79c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5d23,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5d23,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.BoardTokenBoostController$$get_MaxShown RVA 0x2bdf7f0 =====

undefined4 FUN_02bef7f0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7a80,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a80,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.BoardTokenBoostController$$get_HasUnshownUnlock RVA 0x2bdf844 =====

undefined4 FUN_02bef844(int param_1)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5d16,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5d16,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_02beec64(param_1);
  if ((iVar1 != 0) && (uVar4 = 0, *(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x14))) {
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.BoardTokenBoostController$$MarkAllShown RVA 0x2bdf8c0 =====

void FUN_02bef8c0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5d1e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5d1e,0);
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
  iVar1 = FUN_02beec64(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  return;
}



// ===== FAT.BoardTokenBoostController$$add_OnStateChanged RVA 0x2bdf930 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bef930(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_02bef9c4 + 0x2bef948);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bef9c8 + 0x2bef95c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02bef9cc + 0x2bef974);
  iVar1 = *(int *)(param_1 + 0x1c);
  do {
    piVar2 = (int *)func_0x0487907c(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_02bef9a4:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_02bef9a4;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x1c),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.BoardTokenBoostController$$remove_OnStateChanged RVA 0x2bdf9d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bef9d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_02befa64 + 0x2bef9e8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02befa68 + 0x2bef9fc));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02befa6c + 0x2befa14);
  iVar1 = *(int *)(param_1 + 0x1c);
  do {
    piVar2 = (int *)func_0x0487929c(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_02befa44:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_02befa44;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x1c),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.BoardTokenBoostController$$add_OnUnlockChanged RVA 0x2bdfa70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02befa70(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_02befb04 + 0x2befa88);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02befb08 + 0x2befa9c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02befb0c + 0x2befab4);
  iVar1 = *(int *)(param_1 + 0x20);
  do {
    piVar2 = (int *)func_0x0487907c(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_02befae4:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_02befae4;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x20),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.BoardTokenBoostController$$remove_OnUnlockChanged RVA 0x2bdfb10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02befb10(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_02befba4 + 0x2befb28);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02befba8 + 0x2befb3c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02befbac + 0x2befb54);
  iVar1 = *(int *)(param_1 + 0x20);
  do {
    piVar2 = (int *)func_0x0487929c(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_02befb84:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_02befb84;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x20),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.BoardTokenBoostController$$Bind RVA 0x2bdfbb0 =====

void FUN_02befbb0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0x5c0a,0);
  if (iVar1 == 0) {
    if (0 < param_2) {
      uVar2 = func_0x017b65a8(param_2,0);
    }
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    iVar1 = FUN_02beec64(param_1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c0a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.BoardTokenBoostController$$Clear RVA 0x2bdfc68 =====

void FUN_02befc68(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b68,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b68,0);
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
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// ===== FAT.BoardTokenBoostController$$RefreshUnlock RVA 0x2bdfcdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02befcdc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
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
  
  pcVar6 = (char *)(_UNK_02befe10 + 0x2befcf4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02befe14 + 0x2befd08));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ca,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ca,0);
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
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = FUN_02beec64(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    uVar7 = *(uint *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_1 + 0x14);
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar4 + 1 < iVar1) {
      do {
        iVar4 = iVar4 + 1;
        iVar2 = func_0x02befe18(param_1,iVar4,param_2);
        if (iVar2 == 0) {
          iVar4 = *(int *)(param_1 + 0x14);
          break;
        }
        *(int *)(param_1 + 0x14) = iVar4;
      } while (iVar1 + -1 != iVar4);
    }
    if ((int)uVar7 < iVar4) {
      iVar1 = *(int *)(param_1 + 0x20);
      if (0x7fffffff < (*(uint *)(param_1 + 0x10) & uVar7)) {
        *(int *)(param_1 + 0x10) = iVar4;
      }
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02befe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        return;
      }
    }
  }
  return;
}



// ===== FAT.BoardTokenBoostController$$IsRequirementMet RVA 0x2bdfe18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02befe18(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_02beffe4 + 0x2befe38);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02beffe8 + 0x2befe4c));
    func_0x01384978(*(undefined4 *)(_UNK_02beffec + 0x2befe58));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5cc,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x28);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    iVar4 = 0;
    if (param_2 < *(int *)(iVar2 + 0xc)) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0364c9b8(iVar2,param_2,**(undefined4 **)(_UNK_02befff0 + 0x2beff14));
    }
    if (iVar4 <= param_3) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x24);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 1;
      if (param_2 < *(int *)(iVar2 + 0xc)) {
        iVar2 = *(int *)(param_1 + 8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x24);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0364c9b8(iVar2,param_2,**(undefined4 **)(_UNK_02befff4 + 0x2beff84));
        if (0 < iVar2) {
          iVar4 = func_0x01c24918(0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar4 + 0x3c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          pcVar5 = (char *)(_UNK_01cc45c8 + 0x1cc4504);
          if (*pcVar5 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01cc45cc + 0x1cc4518),iVar2,0);
            *pcVar5 = '\x01';
          }
          iVar1 = func_0x0229f06c(0x2ca,0);
          if (iVar1 == 0) {
            iVar4 = *(int *)(iVar4 + 0x14);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x02451924(iVar4,iVar2,&stack0xffffffec,
                                    **(undefined4 **)(_UNK_01cc45d0 + 0x1cc4594));
            uVar3 = 0;
            if (iVar2 != 0) {
              uVar3 = 0;
            }
          }
          else {
            iVar1 = func_0x0229f13c(0x2ca,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar3 = func_0x02179234(iVar1,iVar4,iVar2,0);
          }
          return uVar3;
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5cc,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0217a5ac(iVar2,param_1,param_2,param_3,0);
  }
  return uVar3;
}



// ===== FAT.BoardTokenBoostController$$TrySwitchNext RVA 0x2bdfff8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02befff8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
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
  
  pcVar7 = (char *)(_UNK_02bf0138 + 0x2bf000c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf013c + 0x2bf0020));
    *pcVar7 = '\x01';
  }
  uVar8 = 0;
  iVar1 = func_0x0229f06c(0x72e6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x72e6,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar9,&uStack_30,uVar4,0,0);
    uVar8 = func_0x0245496c(&uStack_30,0,0);
    return uVar8;
  }
  iVar1 = FUN_02beec64(param_1);
  if (iVar1 != 0) {
    piVar10 = *(int **)(param_1 + 0xc);
    uVar8 = 0;
    uVar9 = 0;
    if (piVar10 != (int *)0x0) {
      iVar1 = *piVar10;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_02bf0140 + 0x2bf00a4)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_02bf00ec;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_02bf0140 + 0x2bf00a4),0);
LAB_02bf00ec:
      uVar9 = (*(code *)*puVar2)(piVar10,puVar2[1]);
    }
    FUN_02befcdc(param_1,uVar9);
    if (-1 < *(int *)(param_1 + 0x14)) {
      iVar6 = *(int *)(param_1 + 0x10);
      iVar1 = iVar6 + 1;
      if (*(int *)(param_1 + 0x14) < iVar1) {
        iVar1 = -1;
      }
      uVar8 = (uint)(iVar1 != iVar6);
      if (iVar1 != iVar6) {
        *(int *)(param_1 + 0x10) = iVar1;
      }
    }
  }
  return uVar8;
}



// ===== FAT.BoardTokenBoostController$$EnsureRateAffordable RVA 0x2be0144 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bf0144(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  
  pcVar3 = (char *)(_UNK_02bf02c4 + 0x2bf0164);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf02c8 + 0x2bf0178));
    *pcVar3 = '\x01';
  }
  uVar8 = 0;
  iVar1 = func_0x0229f06c(0x5c90,0);
  if (iVar1 == 0) {
    uVar10 = FUN_02beec64(param_1);
    iVar1 = (int)((ulonglong)uVar10 >> 0x20);
    if ((int)uVar10 != 0) {
      iVar4 = *(int *)(param_1 + 8);
      if (iVar4 == 0) {
        func_0x01384bf0();
        iVar1 = extraout_r1;
      }
      if ((*(char *)(iVar4 + 0x1c) == '\0') && (uVar7 = *(uint *)(param_1 + 0x10), -1 < (int)uVar7))
      {
        bVar6 = false;
        puVar9 = *(undefined4 **)(_UNK_02bf02cc + 0x2bf0228);
        iVar4 = 0;
        do {
          uVar10 = CONCAT44(iVar1,iVar4);
          iVar5 = *(int *)(param_1 + 8);
          if (iVar5 == 0) {
            uVar10 = func_0x01384bf0(iVar4,iVar1);
            uVar7 = *(uint *)(param_1 + 0x10);
          }
          iVar1 = *(int *)(iVar5 + 0x14);
          if (iVar1 == 0) {
            func_0x01384bf0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
          }
          uVar7 = func_0x0364c9b8(iVar1,uVar7,*puVar9);
          if ((int)uVar7 < 2) {
            uVar7 = 1;
          }
          uVar2 = (uint)((ulonglong)param_2 * (ulonglong)uVar7);
          iVar5 = uVar7 * ((int)param_2 >> 0x1f) +
                  (int)((ulonglong)param_2 * (ulonglong)uVar7 >> 0x20);
          iVar1 = param_3 - uVar2;
          iVar4 = (int)param_3 >> 0x1f;
          if ((int)(iVar4 - (iVar5 + (uint)(param_3 < uVar2))) < 0 ==
              (SBORROW4(iVar4,iVar5) != SBORROW4(iVar4 - iVar5,(uint)(param_3 < uVar2)))) {
            if (!bVar6) {
              return 0;
            }
            break;
          }
          iVar4 = *(int *)(param_1 + 0x10);
          bVar6 = true;
          uVar7 = iVar4 - 1;
          *(uint *)(param_1 + 0x10) = uVar7;
        } while (uVar7 < 0x80000000);
        iVar1 = *(int *)(param_1 + 0x1c);
        uVar8 = 1;
        if (iVar1 != 0) {
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c90,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar8;
}



// ===== FAT.BoardTokenBoostController$$AutoAdjustOnActivate RVA 0x2be02d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf02d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_02bf03d0 + 0x2bf02e4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf03d4 + 0x2bf02f8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c0b,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02beec64(param_1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      return;
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(iVar1 + 0xc);
    iVar1 = *(int *)(param_1 + 0x14);
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar2 <= iVar5) {
      iVar5 = iVar2 + -1;
      *(int *)(param_1 + 0x10) = iVar5;
    }
    if (iVar2 <= iVar1) {
      iVar1 = iVar2 + -1;
      *(int *)(param_1 + 0x14) = iVar1;
    }
    if (iVar2 <= iVar4) {
      iVar4 = iVar2 + -1;
      *(int *)(param_1 + 0x18) = iVar4;
    }
    if (iVar1 < iVar5) {
      *(int *)(param_1 + 0x10) = iVar1;
    }
    if (iVar1 < iVar4) {
      *(int *)(param_1 + 0x18) = iVar1;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x5c0b,0);
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.BoardTokenBoostController$$SaveTo RVA 0x2be03d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf03d8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_02bf0610 + 0x2bf03f8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf0614 + 0x2bf0414));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c0d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c0d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021d283c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
    return;
  }
  uVar2 = func_0x01c23578(param_3,*(undefined4 *)(param_1 + 0x10),0);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  piVar7 = *(int **)(_UNK_02bf0618 + 0x2bf04a4);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar7) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
        goto LAB_02bf04ec;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,*piVar7,2);
LAB_02bf04ec:
  (*(code *)*puVar3)(param_2,uVar2,puVar3[1]);
  uVar2 = func_0x01c23578(param_4,*(undefined4 *)(param_1 + 0x14),0);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar7) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
        goto LAB_02bf0570;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,*piVar7,2);
LAB_02bf0570:
  (*(code *)*puVar3)(param_2,uVar2,puVar3[1]);
  uVar2 = func_0x01c23578(param_5,*(undefined4 *)(param_1 + 0x18),0);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar7) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
        goto LAB_02bf05f4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,*piVar7,2);
LAB_02bf05f4:
                    /* WARNING: Could not recover jumptable at 0x02bf060c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_2,uVar2,puVar3[1]);
  return;
}



// ===== FAT.BoardTokenBoostController$$LoadFrom RVA 0x2be061c =====

void FUN_02bf061c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x5c10,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01c23ccc(param_3,param_2,0xffffffff,0);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    uVar2 = func_0x01c23ccc(param_4,param_2,0xffffffff,0);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    iVar1 = func_0x01c23ccc(param_5,param_2,0xffffffff,0);
    if (*(int *)(param_1 + 0x14) < iVar1) {
      iVar1 = *(int *)(param_1 + 0x14);
    }
    *(int *)(param_1 + 0x18) = iVar1;
  }
  else {
    iVar1 = func_0x0229f13c(0x5c10,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021d283c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.BoardTokenBoostController$$ResolveBoostOutput RVA 0x2be06e8 =====

/* WARNING: Removing unreachable block (ram,0x02bf1e54) */
/* WARNING: Removing unreachable block (ram,0x02bf1c40) */
/* WARNING: Removing unreachable block (ram,0x02bf1c3c) */
/* WARNING: Removing unreachable block (ram,0x02bf1ab4) */
/* WARNING: Removing unreachable block (ram,0x02bf1834) */
/* WARNING: Removing unreachable block (ram,0x02bf0db8) */
/* WARNING: Removing unreachable block (ram,0x02bf0db4) */
/* WARNING: Removing unreachable block (ram,0x02bf1514) */
/* WARNING: Removing unreachable block (ram,0x02bf0da8) */
/* WARNING: Removing unreachable block (ram,0x02bf10e0) */
/* WARNING: Removing unreachable block (ram,0x02bf1840) */
/* WARNING: Removing unreachable block (ram,0x02bf1844) */
/* WARNING: Removing unreachable block (ram,0x02bf1c30) */
/* WARNING: Removing unreachable block (ram,0x02bf1e34) */
/* WARNING: Removing unreachable block (ram,0x02bf1e70) */
/* WARNING: Removing unreachable block (ram,0x02bf1520) */
/* WARNING: Removing unreachable block (ram,0x02bf10f4) */
/* WARNING: Removing unreachable block (ram,0x02bf1ac0) */
/* WARNING: Removing unreachable block (ram,0x02bf1110) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf06e8(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 uStack_dc;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  int iStack_64;
  undefined1 uStack_5d;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int aiStack_3c [4];
  int iStack_2c;
  int iStack_28;
  
  pcVar13 = (char *)(_UNK_02bf1584 + 0x2bf070c);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf1588 + 0x2bf0720));
    func_0x01384978(*(undefined4 *)(_UNK_02bf158c + 0x2bf072c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf1590 + 0x2bf0738));
    func_0x01384978(*(undefined4 *)(_UNK_02bf1594 + 0x2bf0744));
    func_0x01384978(*(undefined4 *)(_UNK_02bf1598 + 0x2bf0750));
    func_0x01384978(*(undefined4 *)(_UNK_02bf159c + 0x2bf075c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf15a0 + 0x2bf0768));
    func_0x01384978(*(undefined4 *)(_UNK_02bf15a4 + 0x2bf0774));
    func_0x01384978(*(undefined4 *)(_UNK_02bf15a8 + 0x2bf0780));
    func_0x01384978(*(undefined4 *)(_UNK_02bf15ac + 0x2bf078c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf15b0 + 0x2bf0798));
    func_0x01384978(*(undefined4 *)(_UNK_02bf15b4 + 0x2bf07a4));
    func_0x01384978(*(undefined4 *)(_UNK_02bf15b8 + 0x2bf07b0));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17b0 + 0x2bf07bc));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17b4 + 0x2bf07c8));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17b8 + 0x2bf07d4));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17bc + 0x2bf07e0));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17c0 + 0x2bf07ec));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17c4 + 0x2bf07f8));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17c8 + 0x2bf0804));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17cc + 0x2bf0810));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17d0 + 0x2bf081c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17d4 + 0x2bf0828));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17d8 + 0x2bf0834));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17dc + 0x2bf0840));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17e0 + 0x2bf084c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17e4 + 0x2bf0858));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17e8 + 0x2bf0864));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17ec + 0x2bf0870));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17f0 + 0x2bf087c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17f4 + 0x2bf0888));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17f8 + 0x2bf0894));
    func_0x01384978(*(undefined4 *)(_UNK_02bf17fc + 0x2bf08a0));
    func_0x01384978(*(undefined4 *)(_UNK_02bf1800 + 0x2bf08ac));
    func_0x01384978(*(undefined4 *)(_UNK_02bf1804 + 0x2bf08b8));
    *pcVar13 = '\x01';
  }
  uStack_7c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_78 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_74 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_80 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  aiStack_3c[2] = 0;
  aiStack_3c[1] = 0;
  aiStack_3c[0] = 0;
  uStack_44 = 0;
  iStack_48 = 0;
  iStack_4c = 0;
  uStack_54 = 0;
  iStack_58 = 0;
  iStack_5c = 0;
  uStack_5d = 0;
  iStack_64 = 0;
  uStack_70 = 0;
  uStack_84 = 0;
  iStack_88 = 0;
  iStack_8c = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  iVar2 = func_0x0229f06c(0x5c97,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5c97,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02236070(iVar2,param_1,param_2,param_3,param_4,param_5,0);
    return;
  }
  if (param_5 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_5 + 0xc) = 0;
  *(int *)(param_5 + 0x10) = *(int *)(param_5 + 0x10) + 1;
  *param_4 = param_2;
  if (param_3 < 1) {
    return;
  }
  iVar2 = FUN_02beec64(param_1);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_02bef57c(param_1);
  if (iVar2 < 1) {
    return;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x50);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x01db1798(iVar3,param_2,&iStack_28,&iStack_2c,0);
  iVar4 = iStack_28;
  iVar12 = iStack_2c;
  if (iStack_28 < 1) {
    return;
  }
  iVar15 = iVar2 + iStack_2c + 1;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_dc = 0;
  iVar4 = func_0x01db20e8(iVar3,iVar4,iVar15,&uStack_5d,0);
  if (iVar4 < 1) {
    piVar5 = (int *)func_0x021566f4(0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar5;
    uVar10 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_02bf194c + 0x2bf0a9c)) {
          puVar6 = (undefined4 *)(iVar4 + *piVar11 * 8 + 0x188);
          goto LAB_02bf0ae4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02bf194c + 0x2bf0a9c),0x19);
LAB_02bf0ae4:
    iVar4 = (*(code *)*puVar6)(piVar5,param_2,iVar2,puVar6[1]);
  }
  *param_4 = iVar4;
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar5 = (int *)func_0x0487582c(*(int *)(param_1 + 0xc),0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    uStack_dc = (**(code **)(*piVar5 + 0x100))(piVar5,*(undefined4 *)(*piVar5 + 0x104));
  }
  piVar5 = *(int **)(_UNK_02bf1950 + 0x2bf0b50);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x028c8d78(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a45c(aiStack_3c + 1,iVar2,aiStack_3c,**(undefined4 **)(_UNK_02bf1954 + 0x2bf0b8c));
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x028c8d78(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a45c(&iStack_c8,iVar2,&iStack_4c,**(undefined4 **)(_UNK_02bf1bc4 + 0x2bf0bcc));
  uStack_44 = uStack_c4;
  iStack_48 = iStack_c8;
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x028c8d78(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a45c(&iStack_c8,iVar2,&iStack_5c,**(undefined4 **)(_UNK_02bf1be8 + 0x2bf0c2c));
  iVar12 = iVar12 + 2;
  uStack_54 = uStack_c4;
  iStack_58 = iStack_c8;
  if (iVar12 <= iVar15) {
    piVar5 = *(int **)(_UNK_02bf2218 + 0x2bf1230);
    do {
      iVar2 = iStack_28;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01db20e8(iVar3,iVar2,iVar12,&uStack_5d,0);
      if (0 < iVar2) {
        piVar11 = (int *)func_0x021566f4(0);
        if (piVar11 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar11;
        uVar10 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar10 != 0) {
          piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_02bf225c + 0x2bf128c)) {
              puVar6 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0x108);
              goto LAB_02bf12dc;
            }
            uVar10 = uVar10 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02bf225c + 0x2bf128c),9);
LAB_02bf12dc:
        iVar2 = (*(code *)*puVar6)(piVar11,iVar2,puVar6[1]);
        if (iVar2 != 0) {
          iVar2 = *(int *)(iVar2 + 0x48);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          piVar11 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_02bf22f0 + 0x2bf1314));
LAB_02bf1334:
          if (piVar11 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar11;
          uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar10 != 0) {
            piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar9[-1] == *piVar5) {
                puVar6 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
                goto LAB_02bf1390;
              }
              uVar10 = uVar10 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined4 *)func_0x014002dc(piVar11,*piVar5,0);
LAB_02bf1390:
          iVar2 = (*(code *)*puVar6)(piVar11,puVar6[1]);
          if (iVar2 != 0) {
            if (piVar11 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = *piVar11;
            uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar10 != 0) {
              piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar9[-1] == **(int **)(_UNK_02bf23a4 + 0x2bf13c4)) {
                  puVar6 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
                  goto LAB_02bf140c;
                }
                uVar10 = uVar10 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02bf23a4 + 0x2bf13c4),0);
LAB_02bf140c:
            iVar4 = (*(code *)*puVar6)(piVar11,puVar6[1]);
            iVar2 = aiStack_3c[0];
            if (0 < iVar4) {
              if (aiStack_3c[0] == 0) {
                func_0x01384bf0();
              }
              func_0x03d5bb20(iVar2,iVar4,&iStack_64,**(undefined4 **)(_UNK_02bf23d4 + 0x2bf1444));
              iVar1 = aiStack_3c[0];
              iVar2 = iStack_64;
              if (aiStack_3c[0] == 0) {
                func_0x01384bf0();
              }
              func_0x03d59d54(iVar1,iVar4,iVar2 + (1 << (iVar15 - iVar12 & 0x1fU)),
                              **(undefined4 **)(_UNK_02bf23d8 + 0x2bf1478));
            }
            goto LAB_02bf1334;
          }
          if (piVar11 != (int *)0x0) {
            iVar2 = *piVar11;
            uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar10 != 0) {
              piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar9[-1] == **(int **)(_UNK_02bf23dc + 0x2bf14ac)) {
                  puVar6 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
                  goto LAB_02bf14fc;
                }
                uVar10 = uVar10 - 1;
                piVar9 = piVar9 + 2;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02bf23dc + 0x2bf14ac),0);
LAB_02bf14fc:
            (*(code *)*puVar6)(piVar11,puVar6[1]);
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 <= iVar15);
  }
  puVar6 = *(undefined4 **)(_UNK_02bf1bec + 0x2bf0c6c);
  iStack_ac = param_2;
  uVar7 = func_0x01384abc(*puVar6,&iStack_ac);
  uVar7 = func_0x0467272c(**(undefined4 **)(_UNK_02bf1bf0 + 0x2bf0c8c),uStack_dc,uVar7,0);
  func_0x02bf2460(uVar7,aiStack_3c[0]);
  iVar2 = aiStack_3c[0];
  if (aiStack_3c[0] == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a200(&iStack_c8,iVar2,**(undefined4 **)(_UNK_02bf1bf4 + 0x2bf0cbc));
  iStack_80 = iStack_c8;
  uStack_7c = uStack_c4;
  uStack_78 = uStack_c0;
  uStack_74 = uStack_bc;
  uStack_70 = uStack_b8;
  puVar16 = *(undefined4 **)(_UNK_02bf1bf8 + 0x2bf0cf0);
  puVar14 = *(undefined4 **)(_UNK_02bf1bfc + 0x2bf0cf8);
  while (iVar2 = func_0x03f9975c(&iStack_80,*puVar16), uVar7 = uStack_74, iVar2 != 0) {
    uVar8 = (int)uStack_70;
    iVar2 = func_0x02bf28ec(uStack_74);
    if ((iVar2 == 0) || (iVar3 = func_0x02bf2984(param_1,uVar7), iVar2 = iStack_4c, iVar3 != 0)) {
      iVar2 = iStack_5c;
      if (iStack_5c == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar2,uVar7,uVar8,*puVar14);
    }
    else {
      if (iStack_4c == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar2,uVar7,uVar8,*puVar14);
    }
  }
  func_0x03f9989c(&iStack_80,**(undefined4 **)(_UNK_02bf1c00 + 0x2bf0d98));
  iStack_c8 = param_2;
  uVar7 = func_0x01384abc(*puVar6,&iStack_c8);
  uVar7 = func_0x0467272c(**(undefined4 **)(_UNK_02bf1c04 + 0x2bf0de4),uStack_dc,uVar7,0);
  piVar5 = *(int **)(_UNK_02bf1c08 + 0x2bf0dfc);
  func_0x02bf2460(uVar7,iStack_5c);
  iStack_ac = param_2;
  uVar7 = func_0x01384abc(*puVar6,&iStack_ac);
  uVar7 = func_0x0467272c(**(undefined4 **)(_UNK_02bf1dfc + 0x2bf0e24),uStack_dc,uVar7,0);
  func_0x02bf2460(uVar7,iStack_4c);
  iVar2 = 0;
  do {
    iVar3 = iStack_4c;
    if (iStack_4c == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d59a74(iVar3,**(undefined4 **)(_UNK_02bf1e00 + 0x2bf0e58));
    if (iVar3 < 1) break;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x028c8d78(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a45c(&iStack_c8,iVar3,&iStack_8c,**(undefined4 **)(_UNK_02bf1e8c + 0x2bf0ea0));
    uStack_84 = uStack_c4;
    iStack_88 = iStack_c8;
    func_0x02bf2b14(iStack_4c,iStack_8c);
    puVar6 = *(undefined4 **)(_UNK_02bf1e90 + 0x2bf0ed8);
    iStack_c8 = param_2;
    uVar7 = func_0x01384abc(*puVar6,&iStack_c8);
    iStack_ac = iVar2;
    uVar8 = func_0x01384abc(*puVar6,&iStack_ac);
    uVar7 = func_0x0467277c(**(undefined4 **)(_UNK_02bf1eec + 0x2bf0f0c),uStack_dc,uVar7,uVar8,0);
    func_0x02bf2460(uVar7,iStack_4c);
    puVar6 = *(undefined4 **)(_UNK_02bf1f14 + 0x2bf0f34);
    iStack_cc = param_2;
    uVar7 = func_0x01384abc(*puVar6,&iStack_cc);
    iStack_d0 = iVar2;
    uVar8 = func_0x01384abc(*puVar6,&iStack_d0);
    uVar7 = func_0x0467277c(**(undefined4 **)(_UNK_02bf1f58 + 0x2bf0f68),uStack_dc,uVar7,uVar8,0);
    func_0x02bf2460(uVar7,iStack_8c);
    iVar12 = func_0x02bf363c(iStack_8c,iStack_4c);
    iVar3 = iStack_4c;
    if (iVar12 == 0) {
      if (iStack_4c == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar3,**(undefined4 **)(_UNK_02bf1fe8 + 0x2bf0ff0));
      iVar3 = iStack_8c;
      if (iStack_8c == 0) {
        func_0x01384bf0();
      }
      func_0x03d5a200(&iStack_c8,iVar3,**(undefined4 **)(_UNK_02bf2010 + 0x2bf1018));
      iStack_80 = iStack_c8;
      uStack_7c = uStack_c4;
      uStack_78 = uStack_c0;
      uStack_74 = uStack_bc;
      uStack_70 = uStack_b8;
      while (iVar3 = func_0x03f9975c(&iStack_80,*puVar16), uVar7 = uStack_74, iVar3 != 0) {
        uVar8 = (int)uStack_70;
        iVar3 = func_0x02bf28ec(uStack_74);
        if ((iVar3 == 0) ||
           (iVar12 = func_0x02bf2984(param_1,uVar7), iVar3 = iStack_4c, iVar12 != 0)) {
          func_0x02bf3bbc(iStack_5c,uVar7,uVar8);
        }
        else {
          if (iStack_4c == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d54(iVar3,uVar7,uVar8,**(undefined4 **)(_UNK_02bf2088 + 0x2bf10a4));
        }
      }
      func_0x03f9989c(&iStack_80,**(undefined4 **)(_UNK_02bf20b4 + 0x2bf10d0));
      iVar3 = 0x1c;
      piVar5 = *(int **)(_UNK_02bf20f0 + 0x2bf1100);
    }
    else {
      func_0x02bf3924(iStack_5c,iStack_4c);
      iVar3 = iStack_4c;
      if (iStack_4c == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar3,**(undefined4 **)(_UNK_02bf1fb8 + 0x2bf0fc0));
      iVar3 = 0x17;
    }
    func_0x028c98a0(&iStack_88,0);
    if (iVar3 != 0 && iVar3 != 0x1c) {
      if (iVar3 != 0x17) goto LAB_02bf1e3c;
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x14);
  iVar2 = iStack_4c;
  if (iStack_4c == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x03d59a74(iVar2,**(undefined4 **)(_UNK_02bf23ec + 0x2bf15e0));
  if (iVar2 < 1) goto LAB_02bf1acc;
  if (*(int *)(**(int **)(_UNK_02bf23f0 + 0x2bf15fc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x024500c4(&iStack_c8,0);
  iVar2 = iStack_4c;
  uStack_98 = CONCAT44(uStack_c4,iStack_c8);
  uStack_90 = uStack_c0;
  if (iStack_4c == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a200(&iStack_c8,iVar2,**(undefined4 **)(_UNK_02bf23f4 + 0x2bf1644));
  iStack_80 = iStack_c8;
  uStack_7c = uStack_c4;
  uStack_78 = uStack_c0;
  uStack_74 = uStack_bc;
  uStack_70 = uStack_b8;
  piVar5 = *(int **)(_UNK_02bf23f8 + 0x2bf1678);
  while (iVar2 = func_0x03f9975c(&iStack_80,*puVar16), uVar7 = uStack_74, iVar2 != 0) {
    uVar8 = (int)uStack_70;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    if (0 < (int)uStack_98._4_4_) {
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (*(char *)(_UNK_02bf23fc + 0x2bf16cc) == '\0') {
        func_0x01384978(piVar5);
        *(undefined1 *)(_UNK_02bf2400 + 0x2bf16ec) = 1;
      }
      iVar2 = (int)uStack_98;
      if ((int)uStack_98 == 0) {
        func_0x01384bf0();
      }
      uVar10 = uStack_98._4_4_;
      if ((int)(*(int *)(iVar2 + 0xc) - uStack_98._4_4_) < 1) {
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x0148d688(&uStack_98,1,0);
        uVar10 = uStack_98._4_4_;
      }
      iVar2 = (int)uStack_98;
      uStack_98 = CONCAT44(uVar10 + 1,(int)uStack_98);
      if ((int)uStack_98 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar10) {
        func_0x01384bf4();
      }
      *(undefined2 *)(iVar2 + uVar10 * 2 + 0x10) = 0x2c;
    }
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x030c1e2c(&uStack_98,**(undefined4 **)(_UNK_02bf2404 + 0x2bf178c),uVar7,uVar8,
                    **(undefined4 **)(_UNK_02bf2408 + 0x2bf1798));
  }
  func_0x03f9989c(&iStack_80,**(undefined4 **)(_UNK_02bf240c + 0x2bf181c));
  puVar6 = *(undefined4 **)(_UNK_02bf2410 + 0x2bf1830);
  piVar11 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bf2414 + 0x2bf1858),4);
  iStack_c8 = 0x14;
  iVar2 = func_0x01384abc(*puVar6,&iStack_c8);
  if (piVar11 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar2 != 0) && (iVar3 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar11 + 0x20)), iVar3 == 0))
  {
    uVar7 = func_0x01384c10();
    func_0x01384aa0(uVar7,0);
  }
  if (piVar11[3] == 0) {
    func_0x01384bf4();
  }
  piVar11[4] = iVar2;
  uVar7 = **(undefined4 **)(_UNK_02bf2418 + 0x2bf18d4);
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_02bf1958:
    iVar2 = 0;
  }
  else {
    piVar9 = (int *)func_0x0487582c(*(int *)(param_1 + 0xc),0);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = (**(code **)(*piVar9 + 0x100))(piVar9,*(undefined4 *)(*piVar9 + 0x104));
    if (iVar2 == 0) goto LAB_02bf1958;
    iVar3 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar11 + 0x20));
    if (iVar3 == 0) {
      uVar8 = func_0x01384c10();
      func_0x01384aa0(uVar8,0);
    }
  }
  if ((uint)piVar11[3] < 2) {
    func_0x01384bf4();
  }
  piVar11[5] = iVar2;
  iStack_c8 = param_2;
  iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_02bf2420 + 0x2bf197c),&iStack_c8);
  if ((iVar2 != 0) && (iVar3 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar11 + 0x20)), iVar3 == 0))
  {
    uVar8 = func_0x01384c10();
    func_0x01384aa0(uVar8,0);
  }
  if ((uint)piVar11[3] < 3) {
    func_0x01384bf4();
  }
  piVar11[6] = iVar2;
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0148d6d8(&uStack_98,0);
  if ((iVar2 != 0) && (iVar3 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar11 + 0x20)), iVar3 == 0))
  {
    uVar8 = func_0x01384c10();
    func_0x01384aa0(uVar8,0);
  }
  if ((uint)piVar11[3] < 4) {
    func_0x01384bf4();
  }
  piVar11[7] = iVar2;
  uVar7 = func_0x046727d0(uVar7,piVar11,0);
  if (*(int *)(**(int **)(_UNK_02bf2424 + 0x2bf1a54) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar7,0);
  func_0x02bf3924(iStack_5c,iStack_4c);
  if (*(int *)(**(int **)(_UNK_02bf2428 + 0x2bf1a90) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x019a8084(&uStack_98,0);
LAB_02bf1acc:
  iVar2 = iStack_5c;
  if (iStack_5c == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a200(&iStack_c8,iVar2,**(undefined4 **)(_UNK_02bf242c + 0x2bf1ae8));
  iStack_80 = iStack_c8;
  uStack_7c = uStack_c4;
  uStack_78 = uStack_c0;
  uStack_74 = uStack_bc;
  uStack_70 = uStack_b8;
  while (iVar2 = func_0x03f9975c(&iStack_80,*puVar16), iVar2 != 0) {
    if (0 < (int)uStack_70) {
      uStack_c4 = 0;
      iStack_c8 = 0;
      func_0x038fd264(&iStack_c8,uStack_74,(int)uStack_70 * param_3,
                      **(undefined4 **)(_UNK_02bf2434 + 0x2bf1b40));
      if (param_5 == 0) {
        func_0x01384bf0();
      }
      uVar7 = uStack_c4;
      iVar2 = iStack_c8;
      iVar3 = *(int *)(param_5 + 8);
      uVar10 = *(uint *)(param_5 + 0xc);
      piVar5 = *(int **)(_UNK_02bf2438 + 0x2bf1b94);
      *(int *)(param_5 + 0x10) = *(int *)(param_5 + 0x10) + 1;
      iVar12 = *piVar5;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (uVar10 < *(uint *)(iVar3 + 0xc)) {
        *(uint *)(param_5 + 0xc) = uVar10 + 1;
        iVar3 = iVar3 + uVar10 * 8;
        *(int *)(iVar3 + 0x10) = iVar2;
        *(undefined4 *)(iVar3 + 0x14) = uVar7;
      }
      else {
        func_0x0441a364(param_5,iVar2,uVar7,
                        *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
      }
    }
  }
  func_0x03f9989c(&iStack_80,**(undefined4 **)(_UNK_02bf243c + 0x2bf1c20));
  if (*(int *)(**(int **)(_UNK_02bf2440 + 0x2bf1c54) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = 0;
  func_0x024500c4(&iStack_c8,0);
  uStack_a8 = CONCAT44(uStack_c4,iStack_c8);
  uStack_a0 = uStack_c0;
  puVar6 = *(undefined4 **)(_UNK_02bf2444 + 0x2bf1c98);
  piVar5 = *(int **)(_UNK_02bf2448 + 0x2bf1ca0);
  puVar14 = *(undefined4 **)(_UNK_02bf244c + 0x2bf1ca8);
  while( true ) {
    if (param_5 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_5 + 0xc) <= iVar2) break;
    if (iVar2 != 0) {
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (*(char *)(_UNK_02bf2454 + 0x2bf1ce8) == '\0') {
        func_0x01384978(piVar5);
        *(undefined1 *)(_UNK_02bf2458 + 0x2bf1d08) = 1;
      }
      iVar3 = (int)uStack_a8;
      if ((int)uStack_a8 == 0) {
        func_0x01384bf0();
      }
      uVar10 = uStack_a8._4_4_;
      if ((int)(*(int *)(iVar3 + 0xc) - uStack_a8._4_4_) < 1) {
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x0148d688(&uStack_a8,1,0);
        uVar10 = uStack_a8._4_4_;
      }
      iVar3 = (int)uStack_a8;
      uStack_a8 = CONCAT44(uVar10 + 1,(int)uStack_a8);
      if ((int)uStack_a8 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar10) {
        func_0x01384bf4();
      }
      *(undefined2 *)(iVar3 + uVar10 * 2 + 0x10) = 0x2c;
    }
    func_0x0441a030(&iStack_c8,param_5,iVar2,*puVar6);
    iVar3 = iStack_c8;
    func_0x0441a030(&iStack_c8,param_5,iVar2,*puVar6);
    uVar7 = uStack_c4;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x030c1e2c(&uStack_a8,**(undefined4 **)(_UNK_02bf245c + 0x2bf1ddc),iVar3,uVar7,*puVar14);
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x019a8084(&uStack_a8,0);
LAB_02bf1e3c:
  func_0x028c98a0(&iStack_58,0);
  func_0x028c98a0(&iStack_48,0);
  func_0x028c98a0(aiStack_3c + 1,0);
  return;
}



// ===== FAT.BoardTokenBoostController$$DumpDictLog RVA 0x2be2460 =====

/* WARNING: Removing unreachable block (ram,0x02bf2764) */
/* WARNING: Removing unreachable block (ram,0x02bf279c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf2460(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02bf2890 + 0x2bf247c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf2894 + 0x2bf2490));
    func_0x01384978(*(undefined4 *)(_UNK_02bf2898 + 0x2bf249c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf289c + 0x2bf24a8));
    func_0x01384978(*(undefined4 *)(_UNK_02bf28a0 + 0x2bf24b4));
    func_0x01384978(*(undefined4 *)(_UNK_02bf28a4 + 0x2bf24c0));
    func_0x01384978(*(undefined4 *)(_UNK_02bf28a8 + 0x2bf24cc));
    func_0x01384978(*(undefined4 *)(_UNK_02bf28ac + 0x2bf24d8));
    func_0x01384978(*(undefined4 *)(_UNK_02bf28b0 + 0x2bf24e4));
    func_0x01384978(*(undefined4 *)(_UNK_02bf28b4 + 0x2bf24f0));
    func_0x01384978(*(undefined4 *)(_UNK_02bf28b8 + 0x2bf24fc));
    *pcVar4 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  iVar3 = func_0x0229f06c(0x5c99,0);
  if (iVar3 == 0) {
    if (*(int *)(**(int **)(_UNK_02bf28bc + 0x2bf2580) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024500c4(&uStack_60,0);
    uStack_30 = CONCAT44(uStack_5c,uStack_60);
    uStack_28 = uStack_58;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_60,param_2,**(undefined4 **)(_UNK_02bf28c0 + 0x2bf25c4));
    uStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    piVar5 = *(int **)(_UNK_02bf28c4 + 0x2bf25fc);
    while (iVar3 = func_0x03f9975c(&uStack_48,**(undefined4 **)(_UNK_02bf28d8 + 0x2bf2604)),
          uVar1 = uStack_3c, iVar3 != 0) {
      uVar2 = (undefined4)uStack_38;
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (0 < (int)uStack_30._4_4_) {
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x01384ab4();
        }
        if (*(char *)(_UNK_02bf28c8 + 0x2bf265c) == '\0') {
          func_0x01384978(piVar5);
          *(undefined1 *)(_UNK_02bf28cc + 0x2bf267c) = 1;
        }
        iVar3 = (int)uStack_30;
        if ((int)uStack_30 == 0) {
          func_0x01384bf0();
        }
        uVar6 = uStack_30._4_4_;
        if ((int)(*(int *)(iVar3 + 0xc) - uStack_30._4_4_) < 1) {
          if (*(int *)(*piVar5 + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x0148d688(&uStack_30,1,0);
          uVar6 = uStack_30._4_4_;
        }
        iVar3 = (int)uStack_30;
        uStack_30 = CONCAT44(uVar6 + 1,(int)uStack_30);
        if ((int)uStack_30 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar6) {
          func_0x01384bf4();
        }
        *(undefined2 *)(iVar3 + uVar6 * 2 + 0x10) = 0x2c;
      }
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x030c1e2c(&uStack_30,**(undefined4 **)(_UNK_02bf28d0 + 0x2bf271c),uVar1,uVar2,
                      **(undefined4 **)(_UNK_02bf28d4 + 0x2bf2728));
    }
    func_0x03f9989c(&uStack_48,**(undefined4 **)(_UNK_02bf28dc + 0x2bf2750));
    if (*(int *)(**(int **)(_UNK_02bf28e4 + 0x2bf2778) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x019a8084(&uStack_30,0);
  }
  else {
    iVar3 = func_0x0229f13c(0x5c99,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar3,param_1,param_2,0);
  }
  return;
}



// ===== FAT.BoardTokenBoostController$$HasMergeChain RVA 0x2be28ec =====

uint FUN_02bf28ec(undefined4 param_1)

{
  uint uVar1;
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
  
  iVar2 = func_0x0229f06c(0x5c9a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5c9a,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
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
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x50);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01dd02a0(iVar2,param_1,0);
  return (uint)(0 < iVar2);
}



// ===== FAT.BoardTokenBoostController$$IsIgnoredItem RVA 0x2be2984 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bf2984(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
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
  
  pcVar6 = (char *)(_UNK_02bf2b04 + 0x2bf299c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf2b08 + 0x2bf29b0));
    func_0x01384978(*(undefined4 *)(_UNK_02bf2b0c + 0x2bf29bc));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  iVar1 = func_0x0229f06c(0x5c9b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c9b,0);
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
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    uVar7 = func_0x0245496c(&uStack_38,0,0);
    return uVar7;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 0;
      iVar1 = func_0x01dd02a0(iVar1,param_2,0);
      if (0 < iVar1) {
        iVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_02bf2b10 + 0x2bf2a90);
        do {
          iVar4 = *(int *)(param_1 + 8);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar4 + 0x18);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar4 + 0xc);
          uVar7 = (uint)(iVar3 < iVar4);
          if (iVar4 <= iVar3) {
            return uVar7;
          }
          iVar4 = *(int *)(param_1 + 8);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar4 + 0x18);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x0364c9b8(iVar4,iVar3,*puVar8);
          iVar3 = iVar3 + 1;
        } while (iVar4 != iVar1);
      }
    }
  }
  return uVar7;
}



// ===== FAT.BoardTokenBoostController$$RunStep1 RVA 0x2be2b14 =====

/* WARNING: Removing unreachable block (ram,0x02bf3278) */
/* WARNING: Removing unreachable block (ram,0x02bf31c0) */
/* WARNING: Removing unreachable block (ram,0x02bf3370) */
/* WARNING: Removing unreachable block (ram,0x02bf31cc) */
/* WARNING: Removing unreachable block (ram,0x02bf3284) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02bf2b14(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  char *pcVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined1 uStack_65;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_34 [4];
  
  pcVar18 = (char *)(_UNK_02bf35ac + 0x2bf2b30);
  if (*pcVar18 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf35b0 + 0x2bf2b44));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35b4 + 0x2bf2b50));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35b8 + 0x2bf2b5c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35bc + 0x2bf2b68));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35c0 + 0x2bf2b74));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35c4 + 0x2bf2b80));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35c8 + 0x2bf2b8c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35cc + 0x2bf2b98));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35d0 + 0x2bf2ba4));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35d4 + 0x2bf2bb0));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35d8 + 0x2bf2bbc));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35dc + 0x2bf2bc8));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35e0 + 0x2bf2bd4));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35e4 + 0x2bf2be0));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35e8 + 0x2bf2bec));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35ec + 0x2bf2bf8));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35f0 + 0x2bf2c04));
    func_0x01384978(*(undefined4 *)(_UNK_02bf35f4 + 0x2bf2c10));
    *pcVar18 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_60 = 0;
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  iStack_44 = 0;
  uStack_50 = 0;
  uStack_64 = 0;
  uStack_65 = 0;
  iVar2 = func_0x0229f06c(0x5c9c,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(param_2,**(undefined4 **)(_UNK_02bf35f8 + 0x2bf2cbc));
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar19 = *(int **)(_UNK_02bf35fc + 0x2bf2ce8);
    iVar2 = *(int *)(iVar2 + 0x50);
    if (*(int *)(*piVar19 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x028c8d78(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a45c(aiStack_34 + 1,iVar3,aiStack_34,**(undefined4 **)(_UNK_02bf3600 + 0x2bf2d28));
    if (*(int *)(*piVar19 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x028c8d78(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a45c(&uStack_80,iVar3,&iStack_44,**(undefined4 **)(_UNK_02bf3604 + 0x2bf2d68));
    uStack_3c = uStack_7c;
    uStack_40 = uStack_80;
    func_0x02bf3cec(param_1,aiStack_34[0],iStack_44);
    iVar3 = aiStack_34[0];
    if (aiStack_34[0] == 0) {
      func_0x01384bf0();
    }
    func_0x03d64e30(&uStack_80,iVar3,**(undefined4 **)(_UNK_02bf3608 + 0x2bf2db8));
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    uStack_58 = uStack_78;
    uStack_54 = uStack_74;
    uStack_50 = uStack_70;
    while (iVar3 = func_0x03f9b324(&uStack_60,**(undefined4 **)(_UNK_02bf360c + 0x2bf2df0)),
          uVar1 = uStack_54, iVar3 != 0) {
      iVar3 = (int)uStack_50;
      iVar4 = func_0x02bf4200();
      if (((0 < iVar4) && (iVar5 = func_0x02bf42dc(iVar3), 0 < iVar5)) && (iVar5 <= iVar4)) {
        uVar21 = 0;
        iVar22 = 0;
        do {
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x03d5bb20(iVar3,iVar5,&uStack_64,**(undefined4 **)(_UNK_02bf3610 + 0x2bf2e64));
          uVar10 = iVar5 - 1U & 0x3f;
          uVar16 = 1 >> (0x20 - uVar10 & 0xff);
          uVar13 = uVar10 - 0x20;
          if (-1 < (int)uVar13) {
            uVar16 = 1 << (uVar13 & 0xff);
          }
          iVar14 = 1 << uVar10;
          if (-1 < (int)uVar13) {
            iVar14 = 0;
          }
          uVar24 = func_0x01458584(uVar21,iVar22,iVar14,uVar16);
          iVar11 = (int)((ulonglong)uVar24 >> 0x20);
          uVar6 = (uint)uVar24;
          uVar12 = uVar6 + uStack_64;
          iVar7 = iVar11 + ((int)uStack_64 >> 0x1f) + (uint)CARRY4(uVar6,uStack_64);
          uVar16 = -(iVar7 >> 0x1f);
          uVar15 = uVar12 + uVar16 & 0xfffffffe;
          uVar20 = uVar12 - uVar15;
          iVar14 = -(uint)CARRY4(uVar12,uVar16) - (uint)(uVar12 < uVar15);
          if (iVar5 == iVar4) {
            uVar20 = uVar12;
            iVar14 = iVar7;
          }
          if ((int)(uint)(uVar20 == 0) <= iVar14) {
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar14 = func_0x01db20e8(iVar2,uVar1,iVar5,&uStack_65,0);
            if (0 < iVar14) {
              func_0x02bf3bbc(param_2,iVar14,uVar20);
            }
          }
          if ((int)(uint)(uVar6 == 0) <= iVar11) {
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar14 = func_0x01db20e8(iVar2,uVar1,iVar5,&uStack_65,0);
            if (0 < iVar14) {
              piVar19 = (int *)func_0x021566f4(0);
              if (piVar19 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar7 = *piVar19;
              uVar16 = (uint)*(ushort *)(iVar7 + 0xb6);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(int *)(iVar7 + 0x58) + 4);
                do {
                  if (piVar17[-1] == **(int **)(_UNK_02bf3614 + 0x2bf2fa4)) {
                    puVar8 = (undefined4 *)(iVar7 + *piVar17 * 8 + 0x108);
                    goto LAB_02bf2fec;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 2;
                } while (uVar16 != 0);
              }
              puVar8 = (undefined4 *)
                       func_0x014002dc(piVar19,**(int **)(_UNK_02bf3614 + 0x2bf2fa4),9);
LAB_02bf2fec:
              iVar14 = (*(code *)*puVar8)(piVar19,iVar14,puVar8[1]);
              if (iVar14 != 0) {
                iVar14 = *(int *)(iVar14 + 0x48);
                if (iVar14 == 0) {
                  func_0x01384bf0();
                }
                piVar19 = (int *)func_0x0364c2b4(iVar14,**(undefined4 **)(_UNK_02bf3618 + 0x2bf3024)
                                                );
LAB_02bf3034:
                if (piVar19 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar14 = *piVar19;
                uVar16 = (uint)*(ushort *)(iVar14 + 0xb6);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(int *)(iVar14 + 0x58) + 4);
                  do {
                    if (piVar17[-1] == **(int **)(_UNK_02bf361c + 0x2bf3050)) {
                      puVar8 = (undefined4 *)(iVar14 + *piVar17 * 8 + 0xc0);
                      goto LAB_02bf3098;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 2;
                  } while (uVar16 != 0);
                }
                puVar8 = (undefined4 *)
                         func_0x014002dc(piVar19,**(int **)(_UNK_02bf361c + 0x2bf3050),0);
LAB_02bf3098:
                iVar14 = (*(code *)*puVar8)(piVar19,puVar8[1]);
                if (iVar14 != 0) {
                  if (piVar19 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar14 = *piVar19;
                  uVar16 = (uint)*(ushort *)(iVar14 + 0xb6);
                  if (uVar16 != 0) {
                    piVar17 = (int *)(*(int *)(iVar14 + 0x58) + 4);
                    do {
                      if (piVar17[-1] == **(int **)(_UNK_02bf3620 + 0x2bf30cc)) {
                        puVar8 = (undefined4 *)(iVar14 + *piVar17 * 8 + 0xc0);
                        goto LAB_02bf3114;
                      }
                      uVar16 = uVar16 - 1;
                      piVar17 = piVar17 + 2;
                    } while (uVar16 != 0);
                  }
                  puVar8 = (undefined4 *)
                           func_0x014002dc(piVar19,**(int **)(_UNK_02bf3620 + 0x2bf30cc),0);
LAB_02bf3114:
                  iVar14 = (*(code *)*puVar8)(piVar19,puVar8[1]);
                  if (0 < iVar14) {
                    func_0x02bf3bbc(param_2,iVar14,uVar6);
                  }
                  goto LAB_02bf3034;
                }
                if (piVar19 != (int *)0x0) {
                  iVar14 = *piVar19;
                  uVar16 = (uint)*(ushort *)(iVar14 + 0xb6);
                  if (uVar16 != 0) {
                    piVar17 = (int *)(*(int *)(iVar14 + 0x58) + 4);
                    do {
                      if (piVar17[-1] == **(int **)(_UNK_02bf3624 + 0x2bf3160)) {
                        puVar8 = (undefined4 *)(iVar14 + *piVar17 * 8 + 0xc0);
                        goto LAB_02bf31a8;
                      }
                      uVar16 = uVar16 - 1;
                      piVar17 = piVar17 + 2;
                    } while (uVar16 != 0);
                  }
                  puVar8 = (undefined4 *)
                           func_0x014002dc(piVar19,**(int **)(_UNK_02bf3624 + 0x2bf3160),0);
LAB_02bf31a8:
                  (*(code *)*puVar8)(piVar19,puVar8[1]);
                }
              }
            }
          }
          iVar5 = iVar5 + 1;
          uVar16 = uStack_64 >> (0x20 - uVar10 & 0xff) | ((int)uStack_64 >> 0x1f) << uVar10;
          if (-1 < (int)uVar13) {
            uVar16 = uStack_64 << (uVar13 & 0xff);
          }
          uVar10 = uStack_64 << uVar10;
          if (-1 < (int)uVar13) {
            uVar10 = 0;
          }
          bVar23 = CARRY4(uVar10,uVar21);
          uVar21 = uVar10 + uVar21;
          iVar22 = uVar16 + iVar22 + (uint)bVar23;
        } while (iVar5 <= iVar4);
      }
    }
    func_0x03f9b464(&uStack_60,**(undefined4 **)(_UNK_02bf362c + 0x2bf3268));
    iVar2 = 0;
    puVar8 = *(undefined4 **)(_UNK_02bf3630 + 0x2bf32a0);
    while( true ) {
      iVar3 = iStack_44;
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      iVar4 = iStack_44;
      if (*(int *)(iVar3 + 0xc) <= iVar2) break;
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      piVar19 = (int *)func_0x0328eea8(iVar4,iVar2,*puVar8);
      if (piVar19 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar19;
      uVar21 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar21 != 0) {
        piVar17 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar17[-1] == **(int **)(_UNK_02bf3638 + 0x2bf32f8)) {
            puVar9 = (undefined4 *)(iVar3 + *piVar17 * 8 + 0xc0);
            goto LAB_02bf3340;
          }
          uVar21 = uVar21 - 1;
          piVar17 = piVar17 + 2;
        } while (uVar21 != 0);
      }
      puVar9 = (undefined4 *)func_0x014002dc(piVar19,**(int **)(_UNK_02bf3638 + 0x2bf32f8),0);
LAB_02bf3340:
      (*(code *)*puVar9)(piVar19,puVar9[1]);
      iVar2 = iVar2 + 1;
    }
    func_0x028c98a0(&uStack_40,0);
    func_0x028c98a0(aiStack_34 + 1,0);
  }
  else {
    iVar2 = func_0x0229f13c(0x5c9c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.BoardTokenBoostController$$AreSameDict RVA 0x2be363c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bf363c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar5 = (char *)(_UNK_02bf38e4 + 0x2bf3658);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf38e8 + 0x2bf366c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf38ec + 0x2bf3678));
    func_0x01384978(*(undefined4 *)(_UNK_02bf38f0 + 0x2bf3684));
    func_0x01384978(*(undefined4 *)(_UNK_02bf38f4 + 0x2bf3690));
    func_0x01384978(*(undefined4 *)(_UNK_02bf38f8 + 0x2bf369c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf38fc + 0x2bf36a8));
    func_0x01384978(*(undefined4 *)(_UNK_02bf3900 + 0x2bf36b4));
    func_0x01384978(*(undefined4 *)(_UNK_02bf3904 + 0x2bf36c0));
    *pcVar5 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iStack_44 = 0;
  iVar2 = func_0x0229f06c(0x5ca1,0);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_02bf3908 + 0x2bf3750);
    iVar2 = func_0x03d59a74(param_1,*puVar6);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x03d59a74(param_2,*puVar6);
    uVar3 = 0;
    if (iVar2 == iVar4) {
      if (param_1 == 0) {
        func_0x01384bf0(0);
      }
      func_0x03d5a200(&uStack_60,param_1,**(undefined4 **)(_UNK_02bf390c + 0x2bf37a0));
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      puVar6 = *(undefined4 **)(_UNK_02bf3910 + 0x2bf37d0);
      puVar7 = *(undefined4 **)(_UNK_02bf3914 + 0x2bf37d8);
      do {
        iVar2 = func_0x03f9975c(&uStack_40,*puVar6);
        uVar3 = uStack_34;
        if (iVar2 == 0) {
          iVar2 = 8;
          goto LAB_02bf3834;
        }
        iVar2 = (int)uStack_30;
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        bVar1 = func_0x03d5bb20(param_2,uVar3,&iStack_44,*puVar7);
      } while ((bVar1 & iStack_44 == iVar2) != 0);
      iVar2 = 7;
LAB_02bf3834:
      func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_02bf3918 + 0x2bf3840));
      uVar3 = 0;
      if (iVar2 != 7) {
        uVar3 = 1;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5ca1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021734d8(iVar2,param_1,param_2,0);
  }
  return uVar3;
}



// ===== FAT.BoardTokenBoostController$$MergeInto RVA 0x2be3924 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf3924(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_02bf3b7c + 0x2bf3940);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf3b80 + 0x2bf3954));
    func_0x01384978(*(undefined4 *)(_UNK_02bf3b84 + 0x2bf3960));
    func_0x01384978(*(undefined4 *)(_UNK_02bf3b88 + 0x2bf396c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf3b8c + 0x2bf3978));
    func_0x01384978(*(undefined4 *)(_UNK_02bf3b90 + 0x2bf3984));
    func_0x01384978(*(undefined4 *)(_UNK_02bf3b94 + 0x2bf3990));
    func_0x01384978(*(undefined4 *)(_UNK_02bf3b98 + 0x2bf399c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf3b9c + 0x2bf39a8));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iStack_44 = 0;
  iVar3 = func_0x0229f06c(0x5ca2,0);
  if (iVar3 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_60,param_2,**(undefined4 **)(_UNK_02bf3ba0 + 0x2bf3a38));
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    puVar6 = *(undefined4 **)(_UNK_02bf3ba4 + 0x2bf3a68);
    puVar5 = *(undefined4 **)(_UNK_02bf3ba8 + 0x2bf3a70);
    while (iVar3 = func_0x03f9975c(&uStack_40,*puVar6), uVar2 = uStack_34, iVar3 != 0) {
      iVar3 = (int)uStack_30;
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5bb20(param_1,uVar2,&iStack_44,**(undefined4 **)(_UNK_02bf3bac + 0x2bf3a9c));
      iVar1 = iStack_44;
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(param_1,uVar2,iVar1 + iVar3,*puVar5);
    }
    func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_02bf3bb0 + 0x2bf3ae0));
  }
  else {
    iVar3 = func_0x0229f13c(0x5ca2,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar3,param_1,param_2,0);
  }
  return;
}



// ===== FAT.BoardTokenBoostController$$TryAddOrAdd RVA 0x2be3bbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf3bbc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_02bf3cd4 + 0x2bf3bdc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf3cd8 + 0x2bf3bf0));
    func_0x01384978(*(undefined4 *)(_UNK_02bf3cdc + 0x2bf3bfc));
    *pcVar2 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x5ca0,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
      func_0x03d5bb20(0,param_2,&iStack_1c,**(undefined4 **)(_UNK_02bf3ce4 + 0x2bf3ca0));
      iVar1 = iStack_1c;
      func_0x01384bf0();
    }
    else {
      func_0x03d5bb20(param_1,param_2,&iStack_1c,**(undefined4 **)(_UNK_02bf3ce0 + 0x2bf3c78));
      iVar1 = iStack_1c;
    }
    func_0x03d59d54(param_1,param_2,iVar1 + param_3,**(undefined4 **)(_UNK_02bf3ce8 + 0x2bf3cc4));
  }
  else {
    iVar1 = func_0x0229f13c(0x5ca0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.BoardTokenBoostController$$GroupByChain RVA 0x2be3cec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf3cec(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar7 = (char *)(_UNK_02bf4190 + 0x2bf3d0c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf4194 + 0x2bf3d20));
    func_0x01384978(*(undefined4 *)(_UNK_02bf4198 + 0x2bf3d2c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf419c + 0x2bf3d38));
    func_0x01384978(*(undefined4 *)(_UNK_02bf41a0 + 0x2bf3d44));
    func_0x01384978(*(undefined4 *)(_UNK_02bf41a4 + 0x2bf3d50));
    func_0x01384978(*(undefined4 *)(_UNK_02bf41a8 + 0x2bf3d5c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf41ac + 0x2bf3d68));
    func_0x01384978(*(undefined4 *)(_UNK_02bf41b0 + 0x2bf3d74));
    func_0x01384978(*(undefined4 *)(_UNK_02bf41b4 + 0x2bf3d80));
    func_0x01384978(*(undefined4 *)(_UNK_02bf41b8 + 0x2bf3d8c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf41bc + 0x2bf3d98));
    func_0x01384978(*(undefined4 *)(_UNK_02bf41c0 + 0x2bf3da4));
    func_0x01384978(*(undefined4 *)(_UNK_02bf41c4 + 0x2bf3db0));
    func_0x01384978(*(undefined4 *)(_UNK_02bf41c8 + 0x2bf3dbc));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iStack_44 = 0;
  iStack_48 = 0;
  iStack_4c = 0;
  iStack_50 = 0;
  iStack_54 = 0;
  iVar2 = func_0x0229f06c(0x5c9d,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x50);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_70,param_1,**(undefined4 **)(_UNK_02bf41cc + 0x2bf3e84));
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    uStack_38 = uStack_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    while (iVar3 = func_0x03f9975c(&uStack_40,**(undefined4 **)(_UNK_02bf41f0 + 0x2bf3eb0)),
          uVar5 = uStack_34, iVar3 != 0) {
      iVar3 = (int)uStack_30;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01db1798(iVar2,uVar5,&iStack_44,&iStack_48,0);
      iVar4 = iStack_44;
      if (0 < iStack_44) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x03d66780(param_2,iVar4,&iStack_4c,
                                **(undefined4 **)(_UNK_02bf41d0 + 0x2bf3f14));
        if (iVar4 == 0) {
          if (*(int *)(**(int **)(_UNK_02bf41d4 + 0x2bf3f38) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar4 = func_0x028c8d78(0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0302a45c(&uStack_70,iVar4,&iStack_54,**(undefined4 **)(_UNK_02bf41d8 + 0x2bf3f6c));
          uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02bf41dc + 0x2bf3f94),&uStack_70);
          if (param_3 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(param_3 + 8);
          uVar8 = *(uint *)(param_3 + 0xc);
          piVar6 = *(int **)(_UNK_02bf41e0 + 0x2bf3fdc);
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
          iVar9 = *piVar6;
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          if (uVar8 < *(uint *)(iVar4 + 0xc)) {
            *(uint *)(param_3 + 0xc) = uVar8 + 1;
            *(undefined4 *)(iVar4 + uVar8 * 4 + 0x10) = uVar5;
          }
          else {
            func_0x0328f170(param_3,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
          }
          iVar9 = iStack_44;
          iVar4 = iStack_54;
          iStack_4c = iStack_54;
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          func_0x03d6491c(param_2,iVar9,iVar4,**(undefined4 **)(_UNK_02bf41e4 + 0x2bf404c));
        }
        iVar9 = iStack_48;
        iVar4 = iStack_4c;
        if (iStack_4c == 0) {
          func_0x01384bf0();
        }
        func_0x03d5bb20(iVar4,iVar9 + 1,&iStack_50,**(undefined4 **)(_UNK_02bf41e8 + 0x2bf4080));
        iVar1 = iStack_4c;
        iVar4 = iStack_50;
        if (iStack_4c == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar1,iVar9 + 1,iVar4 + iVar3,**(undefined4 **)(_UNK_02bf41ec + 0x2bf40b4));
      }
    }
    func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_02bf41f4 + 0x2bf40d0));
  }
  else {
    iVar2 = func_0x0229f13c(0x5c9d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.BoardTokenBoostController$$GetChainMaxLevel RVA 0x2be4200 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bf4200(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_02bf42d4 + 0x2bf4214);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf42d8 + 0x2bf4228));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c9e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c9e,0);
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
    func_0x01485238(&uStack_30,param_1,0);
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
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x0245498c(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 0;
  iVar1 = func_0x01db1884(iVar1,param_1,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
  }
  return uVar5;
}



// ===== FAT.BoardTokenBoostController$$MinKey RVA 0x2be42dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bf42dc(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined8 uStack_20;
  
  pcVar3 = (char *)(_UNK_02bf44bc + 0x2bf42f4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf44c0 + 0x2bf4308));
    func_0x01384978(*(undefined4 *)(_UNK_02bf44c4 + 0x2bf4314));
    func_0x01384978(*(undefined4 *)(_UNK_02bf44c8 + 0x2bf4320));
    func_0x01384978(*(undefined4 *)(_UNK_02bf44cc + 0x2bf432c));
    func_0x01384978(*(undefined4 *)(_UNK_02bf44d0 + 0x2bf4338));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x5c9f,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_48,param_1,**(undefined4 **)(_UNK_02bf44d4 + 0x2bf43c4));
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_24 = iStack_3c;
    uStack_20 = uStack_38;
    puVar4 = *(undefined4 **)(_UNK_02bf44d8 + 0x2bf43f4);
    iVar1 = 0x7fffffff;
    while (iVar2 = func_0x03f9975c(&uStack_30,*puVar4), iVar2 != 0) {
      if (iStack_24 < iVar1) {
        iVar1 = iStack_24;
      }
    }
    func_0x03f9989c(&uStack_30,**(undefined4 **)(_UNK_02bf44dc + 0x2bf4420));
    iVar2 = 0;
    if (iVar1 != 0x7fffffff) {
      iVar2 = iVar1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c9f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0217493c(iVar1,param_1,0);
  }
  return iVar2;
}



// ===== FAT.BoardTokenBoostController$$.ctor RVA 0x2be44e8 =====

void FUN_02bf44e8(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}


