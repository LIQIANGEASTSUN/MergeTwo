/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.UIMergeCostTips$$get_TapCostItems RVA 0x2070acc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02080acc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
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
  
  pcVar3 = (char *)(_UNK_02080bf0 + 0x2080ae0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02080bf4 + 0x2080af4));
    func_0x01384978(*(undefined4 *)(_UNK_02080bf8 + 0x2080b00));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb0ce,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb0ce,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02291f5c + 0x2291e7c);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02291f60 + 0x2291e90),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02291f64 + 0x2291f4c));
    return iVar1;
  }
  piVar6 = *(int **)(_UNK_02080bfc + 0x2080b58);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x02450910(param_1,0);
  if (iVar1 != 0) {
    uVar5 = func_0x0244ffd4(param_1,0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02450910(uVar5,0);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x68) != 0) {
        return *(int *)(param_1 + 0x68);
      }
      iVar1 = func_0x02f67194(param_1,**(undefined4 **)(_UNK_02080c00 + 0x2080bd0));
      *(int *)(param_1 + 0x68) = iVar1;
      return iVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  return 0;
}



// ===== FAT.UIMergeCostTips$$Awake RVA 0x2070c04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02080c04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pcVar3 = (char *)(_UNK_02080d84 + 0x2080c1c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02080d88 + 0x2080c30));
    func_0x01384978(*(undefined4 *)(_UNK_02080d8c + 0x2080c3c));
    func_0x01384978(*(undefined4 *)(_UNK_02080d90 + 0x2080c48));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb0cf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb0cf,0);
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
    _uStack_20 = CONCAT44(uStack_1c,uStack_38);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar5 = *(int **)(_UNK_02080d94 + 0x2080ca4);
  uVar6 = *(undefined4 *)(param_1 + 0x4c);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x02450910(uVar6,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245067c(&uStack_30,iVar1,0);
    uStack_18 = uStack_28;
    *(undefined4 *)(param_1 + 100) = uStack_28;
    *(ulonglong *)(param_1 + 0x5c) = CONCAT44(uStack_2c,uStack_30);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x50);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x02450910(uVar6,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02080d98 + 0x2080d3c));
    func_0x024500b4(uVar6,param_1,**(undefined4 **)(_UNK_02080d9c + 0x2080d5c),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0x18) = uVar6;
  }
  func_0x02080da0(param_1);
  return;
}



// ===== FAT.UIMergeCostTips$$AddDragMsgListener RVA 0x2070da0 =====

/* WARNING: Possible PIC construction at 0x034a2d5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x034a2d60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02080da0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *unaff_lr;
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
  int *apiStack_18 [2];
  
  pcVar5 = (char *)(_UNK_02080ee0 + 0x2080db4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02080ee4 + 0x2080dc8));
    func_0x01384978(*(undefined4 *)(_UNK_02080ee8 + 0x2080dd4));
    func_0x01384978(*(undefined4 *)(_UNK_02080eec + 0x2080de0));
    func_0x01384978(*(undefined4 *)(_UNK_02080ef0 + 0x2080dec));
    func_0x01384978(*(undefined4 *)(_UNK_02080ef4 + 0x2080df8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb0d2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb0d2,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x54) != '\0') {
    return;
  }
  piVar2 = *(int **)(_UNK_02080ef8 + 0x2080e60);
  *(undefined1 *)(param_1 + 0x54) = 1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02080efc + 0x2080e80));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_02080f00 + 0x2080e94));
  func_0x03cd5dbc(uVar8,param_1,**(undefined4 **)(_UNK_02080f04 + 0x2080eb0),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = **(int **)(_UNK_02080f08 + 0x2080ed4);
  iVar6 = 0;
  apiStack_18[0] = unaff_r4;
  piVar2 = (int *)func_0x0487907c(*(undefined4 *)(iVar1 + 8),uVar8,0);
  iVar7 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x02457d84(iVar7);
  }
  if ((piVar2 == (int *)0x0) || (iVar6 = func_0x02457d4c(piVar2,iVar7), iVar6 != 0)) {
    iVar7 = *(int *)(iVar3 + 0x10);
    *(int *)(iVar1 + 8) = iVar6;
    iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 4);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x02457d84(iVar7);
    }
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = func_0x02457d4c(piVar2,iVar7);
    if (iVar1 != 0) {
      return;
    }
  }
  else {
    unaff_lr = (int *)0x34a2d60;
    apiStack_18[0] = piVar2;
    register0x00000054 = (BADSPACEBASE *)apiStack_18;
  }
  *(int **)((int)register0x00000054 + -4) = unaff_lr;
  *(int **)((int)register0x00000054 + -8) = apiStack_18[0];
  func_0x0142996c((int **)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar2 + 0x20),iVar7);
  piVar2 = *(int **)((int)register0x00000054 + -0xc);
  if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) == 0) {
    piVar2 = (int *)((uint)((int)register0x00000054 + -0x14) | 1);
  }
  iVar1 = func_0x01419d2c(piVar2);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  func_0x01418ff0(iVar1,0);
  if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) != 0) {
    func_0x0148d9d4(*(int **)((int)register0x00000054 + -0xc));
  }
  return;
}



// ===== FAT.UIMergeCostTips$$OnEnable RVA 0x2070f0c =====

/* WARNING: Possible PIC construction at 0x034a2d5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x034a2d60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02080f0c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *unaff_lr;
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
  int *apiStack_18 [2];
  
  iVar2 = func_0x0229f06c(0xb0d4,0);
  if (iVar2 == 0) {
    pcVar5 = (char *)(_UNK_02080ee0 + 0x2080db4);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02080ee4 + 0x2080dc8));
      func_0x01384978(*(undefined4 *)(_UNK_02080ee8 + 0x2080dd4));
      func_0x01384978(*(undefined4 *)(_UNK_02080eec + 0x2080de0));
      func_0x01384978(*(undefined4 *)(_UNK_02080ef0 + 0x2080dec));
      func_0x01384978(*(undefined4 *)(_UNK_02080ef4 + 0x2080df8));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0xb0d2,0);
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0x54) != '\0') {
        return;
      }
      piVar1 = *(int **)(_UNK_02080ef8 + 0x2080e60);
      *(undefined1 *)(param_1 + 0x54) = 1;
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_02080efc + 0x2080e80));
      uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_02080f00 + 0x2080e94));
      func_0x03cd5dbc(uVar8,param_1,**(undefined4 **)(_UNK_02080f04 + 0x2080eb0),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = **(int **)(_UNK_02080f08 + 0x2080ed4);
      iVar6 = 0;
      apiStack_18[0] = unaff_r4;
      piVar1 = (int *)func_0x0487907c(*(undefined4 *)(iVar2 + 8),uVar8,0);
      iVar7 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
        iVar7 = func_0x02457d84(iVar7);
      }
      if ((piVar1 == (int *)0x0) || (iVar6 = func_0x02457d4c(piVar1,iVar7), iVar6 != 0)) {
        iVar7 = *(int *)(iVar3 + 0x10);
        *(int *)(iVar2 + 8) = iVar6;
        iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 4);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = func_0x02457d84(iVar7);
        }
        if (piVar1 == (int *)0x0) {
          return;
        }
        iVar2 = func_0x02457d4c(piVar1,iVar7);
        if (iVar2 != 0) {
          return;
        }
      }
      else {
        unaff_lr = (int *)0x34a2d60;
        apiStack_18[0] = piVar1;
        register0x00000054 = (BADSPACEBASE *)apiStack_18;
      }
      *(int **)((int)register0x00000054 + -4) = unaff_lr;
      *(int **)((int)register0x00000054 + -8) = apiStack_18[0];
      func_0x0142996c((int **)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar1 + 0x20),
                      iVar7);
      piVar1 = *(int **)((int)register0x00000054 + -0xc);
      if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) == 0) {
        piVar1 = (int *)((uint)((int)register0x00000054 + -0x14) | 1);
      }
      iVar2 = func_0x01419d2c(piVar1);
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      func_0x01418ff0(iVar2,0);
      if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) != 0) {
        func_0x0148d9d4(*(int **)((int)register0x00000054 + -0xc));
      }
      return;
    }
    iVar2 = func_0x0229f13c(0xb0d2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb0d4,0);
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
  iVar6 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar8,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.UIMergeCostTips$$OnDisable RVA 0x2070f64 =====

/* WARNING: Possible PIC construction at 0x034a2fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x034a2fc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02080f64(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_lr;
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
  int *apiStack_18 [2];
  
  iVar1 = func_0x0229f06c(0xb0d5,0);
  if (iVar1 == 0) {
    pcVar5 = (char *)(_UNK_02081100 + 0x2080fd0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02081104 + 0x2080fe4));
      func_0x01384978(*(undefined4 *)(_UNK_02081108 + 0x2080ff0));
      func_0x01384978(*(undefined4 *)(_UNK_0208110c + 0x2080ffc));
      func_0x01384978(*(undefined4 *)(_UNK_02081110 + 0x2081008));
      func_0x01384978(*(undefined4 *)(_UNK_02081114 + 0x2081014));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xb0d6,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x54) == '\0') {
        return;
      }
      piVar2 = *(int **)(_UNK_02081118 + 0x208107c);
      *(undefined1 *)(param_1 + 0x54) = 0;
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_0208111c + 0x208109c));
      iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02081120 + 0x20810b0));
      func_0x03cd5dbc(iVar6,param_1,**(undefined4 **)(_UNK_02081124 + 0x20810cc),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = **(int **)(_UNK_02081128 + 0x20810f0);
      if (iVar6 != 0) {
        iVar8 = 0;
        apiStack_18[0] = unaff_r4;
        piVar2 = (int *)func_0x0487929c(*(undefined4 *)(iVar1 + 8),iVar6,0);
        iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x02457d84(iVar6);
        }
        if ((piVar2 == (int *)0x0) || (iVar8 = func_0x02457d4c(piVar2,iVar6), iVar8 != 0)) {
          iVar6 = *(int *)(iVar3 + 0x10);
          *(int *)(iVar1 + 8) = iVar8;
          iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 4);
          if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = func_0x02457d84(iVar6);
          }
          if (piVar2 == (int *)0x0) {
            return;
          }
          iVar1 = func_0x02457d4c(piVar2,iVar6);
          if (iVar1 != 0) {
            return;
          }
        }
        else {
          unaff_lr = (int *)0x34a2fc0;
          apiStack_18[0] = piVar2;
          register0x00000054 = (BADSPACEBASE *)apiStack_18;
        }
        *(int **)((int)register0x00000054 + -4) = unaff_lr;
        *(int **)((int)register0x00000054 + -8) = apiStack_18[0];
        func_0x0142996c((int **)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar2 + 0x20),
                        iVar6);
        piVar2 = *(int **)((int)register0x00000054 + -0xc);
        if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) == 0) {
          piVar2 = (int *)((uint)((int)register0x00000054 + -0x14) | 1);
        }
        iVar1 = func_0x01419d2c(piVar2);
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *(undefined4 *)(iVar1 + 0x20) = 0;
        func_0x01418ff0(iVar1,0);
        if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) != 0) {
          func_0x0148d9d4(*(int **)((int)register0x00000054 + -0xc));
        }
        return;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xb0d6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb0d5,0);
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.UIMergeCostTips$$RemoveDragMsgListener RVA 0x2070fbc =====

/* WARNING: Possible PIC construction at 0x034a2fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x034a2fc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02080fbc(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_lr;
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
  int *apiStack_18 [2];
  
  pcVar5 = (char *)(_UNK_02081100 + 0x2080fd0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02081104 + 0x2080fe4));
    func_0x01384978(*(undefined4 *)(_UNK_02081108 + 0x2080ff0));
    func_0x01384978(*(undefined4 *)(_UNK_0208110c + 0x2080ffc));
    func_0x01384978(*(undefined4 *)(_UNK_02081110 + 0x2081008));
    func_0x01384978(*(undefined4 *)(_UNK_02081114 + 0x2081014));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb0d6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb0d6,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x54) == '\0') {
    return;
  }
  piVar2 = *(int **)(_UNK_02081118 + 0x208107c);
  *(undefined1 *)(param_1 + 0x54) = 0;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_0208111c + 0x208109c));
  iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02081120 + 0x20810b0));
  func_0x03cd5dbc(iVar6,param_1,**(undefined4 **)(_UNK_02081124 + 0x20810cc),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = **(int **)(_UNK_02081128 + 0x20810f0);
  if (iVar6 != 0) {
    iVar8 = 0;
    apiStack_18[0] = unaff_r4;
    piVar2 = (int *)func_0x0487929c(*(undefined4 *)(iVar1 + 8),iVar6,0);
    iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84(iVar6);
    }
    if ((piVar2 == (int *)0x0) || (iVar8 = func_0x02457d4c(piVar2,iVar6), iVar8 != 0)) {
      iVar6 = *(int *)(iVar3 + 0x10);
      *(int *)(iVar1 + 8) = iVar8;
      iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 4);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x02457d84(iVar6);
      }
      if (piVar2 == (int *)0x0) {
        return;
      }
      iVar1 = func_0x02457d4c(piVar2,iVar6);
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      unaff_lr = (int *)0x34a2fc0;
      apiStack_18[0] = piVar2;
      register0x00000054 = (BADSPACEBASE *)apiStack_18;
    }
    *(int **)((int)register0x00000054 + -4) = unaff_lr;
    *(int **)((int)register0x00000054 + -8) = apiStack_18[0];
    func_0x0142996c((int **)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar2 + 0x20),iVar6)
    ;
    piVar2 = *(int **)((int)register0x00000054 + -0xc);
    if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) == 0) {
      piVar2 = (int *)((uint)((int)register0x00000054 + -0x14) | 1);
    }
    iVar1 = func_0x01419d2c(piVar2);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    func_0x01418ff0(iVar1,0);
    if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) != 0) {
      func_0x0148d9d4(*(int **)((int)register0x00000054 + -0xc));
    }
    return;
  }
  return;
}



// ===== FAT.UIMergeCostTips$$OnDestroy RVA 0x207112c =====

/* WARNING: Possible PIC construction at 0x034a2fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x034a2fc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0208112c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_lr;
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
  int *apiStack_18 [2];
  
  iVar2 = func_0x0229f06c(0xb0d7,0);
  if (iVar2 == 0) {
    pcVar5 = (char *)(_UNK_02081100 + 0x2080fd0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02081104 + 0x2080fe4));
      func_0x01384978(*(undefined4 *)(_UNK_02081108 + 0x2080ff0));
      func_0x01384978(*(undefined4 *)(_UNK_0208110c + 0x2080ffc));
      func_0x01384978(*(undefined4 *)(_UNK_02081110 + 0x2081008));
      func_0x01384978(*(undefined4 *)(_UNK_02081114 + 0x2081014));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0xb0d6,0);
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0x54) == '\0') {
        return;
      }
      piVar1 = *(int **)(_UNK_02081118 + 0x208107c);
      *(undefined1 *)(param_1 + 0x54) = 0;
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_0208111c + 0x208109c));
      iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02081120 + 0x20810b0));
      func_0x03cd5dbc(iVar6,param_1,**(undefined4 **)(_UNK_02081124 + 0x20810cc),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = **(int **)(_UNK_02081128 + 0x20810f0);
      if (iVar6 != 0) {
        iVar8 = 0;
        apiStack_18[0] = unaff_r4;
        piVar1 = (int *)func_0x0487929c(*(undefined4 *)(iVar2 + 8),iVar6,0);
        iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x02457d84(iVar6);
        }
        if ((piVar1 == (int *)0x0) || (iVar8 = func_0x02457d4c(piVar1,iVar6), iVar8 != 0)) {
          iVar6 = *(int *)(iVar3 + 0x10);
          *(int *)(iVar2 + 8) = iVar8;
          iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 4);
          if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
            iVar6 = func_0x02457d84(iVar6);
          }
          if (piVar1 == (int *)0x0) {
            return;
          }
          iVar2 = func_0x02457d4c(piVar1,iVar6);
          if (iVar2 != 0) {
            return;
          }
        }
        else {
          unaff_lr = (int *)0x34a2fc0;
          apiStack_18[0] = piVar1;
          register0x00000054 = (BADSPACEBASE *)apiStack_18;
        }
        *(int **)((int)register0x00000054 + -4) = unaff_lr;
        *(int **)((int)register0x00000054 + -8) = apiStack_18[0];
        func_0x0142996c((int **)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar1 + 0x20),
                        iVar6);
        piVar1 = *(int **)((int)register0x00000054 + -0xc);
        if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) == 0) {
          piVar1 = (int *)((uint)((int)register0x00000054 + -0x14) | 1);
        }
        iVar2 = func_0x01419d2c(piVar1);
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0;
        func_0x01418ff0(iVar2,0);
        if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) != 0) {
          func_0x0148d9d4(*(int **)((int)register0x00000054 + -0xc));
        }
        return;
      }
      return;
    }
    iVar2 = func_0x0229f13c(0xb0d6,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb0d7,0);
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
  iVar6 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.UIMergeCostTips$$OnParse RVA 0x2071184 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02081184(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
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
  
  pcVar7 = (char *)(_UNK_02081278 + 0x208119c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0208127c + 0x20811b0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb0d8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb0d8,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = func_0x02081284(param_1);
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
  }
  if (param_2 == 0 || iVar1 == 0) {
    return;
  }
  piVar2 = *(int **)(param_2 + 0x10);
  if (piVar2 != (int *)0x0) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_02081280 + 0x2081238) + 0xb8);
    piVar3 = (int *)0x0;
    if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
       (piVar3 = piVar2,
       *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_02081280 + 0x2081238)))
    {
      piVar3 = (int *)0x0;
    }
    *(int **)(param_1 + 0x58) = piVar3;
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



// ===== FAT.UIMergeCostTips$$RecycleUIData RVA 0x2071284 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02081284(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_02081370 + 0x2081298);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02081374 + 0x20812ac));
    func_0x01384978(*(undefined4 *)(_UNK_02081378 + 0x20812b8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb0d9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb0d9,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    func_0x02081a90();
    piVar4 = *(int **)(_UNK_0208137c + 0x2081320);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x58);
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c65c(iVar1,uVar6,**(undefined4 **)(_UNK_02081380 + 0x208135c));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}



// ===== FAT.UIMergeCostTips$$OnPreOpen RVA 0x2071384 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02081384(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  iVar1 = func_0x0229f06c(0xb0da,0);
  if (iVar1 == 0) {
    FUN_01ee2d08(param_1,0);
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar1 = func_0x0229f06c(0xb0d1,0);
      if (iVar1 == 0) {
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
        iVar1 = func_0x0229f13c(0xb0d1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      func_0x02081468(param_1,1);
      iVar1 = func_0x0229f06c(0xb0dd,0);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = func_0x0229f13c(0xb0dd,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb0da,0);
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



// ===== FAT.UIMergeCostTips$$PlayHideEffect RVA 0x207140c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0208140c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  iVar1 = func_0x0229f06c(0xb0d1,0);
  if (iVar1 == 0) {
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
    iVar1 = func_0x0229f13c(0xb0d1,0);
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



// ===== FAT.UIMergeCostTips$$Refresh RVA 0x2071468 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02081468(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
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
  
  pcVar7 = (char *)(_UNK_0208158c + 0x2081480);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02081590 + 0x2081494));
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x0229f06c(0xb0db,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0xb0db,0);
    if (iVar4 == 0) {
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar4 + 8);
    uVar8 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar4 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar4 = *(int *)(param_1 + 0x58);
  if (iVar4 != 0) {
    pcVar7 = *(char **)(iVar4 + 8);
  }
  if (iVar4 != 0 && pcVar7 != (char *)0x0) {
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar4 + 0xc) == 0) {
      uVar8 = func_0x02116990(pcVar7,0);
      iVar4 = *(int *)(param_1 + 0x58);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0216a2cc(uVar8,*(undefined4 *)(iVar4 + 0xc),0);
    }
    func_0x02081774(param_1);
    iVar4 = FUN_02080acc(param_1);
    if (iVar4 != 0) {
      iVar6 = *(int *)(param_1 + 0x58);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      pcVar7 = (char *)(_UNK_02062524 + 0x2062314);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02062528 + 0x2062328),iVar6,param_2,0);
        func_0x01384978(*(undefined4 *)(_UNK_0206252c + 0x2062334));
        *pcVar7 = '\x01';
      }
      iVar1 = func_0x0229f06c(0xa505,0);
      if (iVar1 == 0) {
        piVar9 = *(int **)(_UNK_02062530 + 0x2062398);
        uVar8 = *(undefined4 *)(iVar4 + 0x10);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x02450910(uVar8,0);
        if (iVar1 != 0) {
          uVar8 = *(undefined4 *)(iVar4 + 0x14);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x02450910(uVar8,0);
          if (iVar6 != 0) {
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = *(int *)(iVar6 + 0xc);
            }
            if (iVar1 != 0 && iVar2 != 0) {
              *(int *)(iVar4 + 0x48) = iVar6;
              FUN_02061a60(iVar4);
              if (param_2 == 0) {
                iVar6 = *(int *)(iVar4 + 0x44);
              }
              else {
                iVar6 = 0;
                *(undefined4 *)(iVar4 + 0x40) = 0;
                *(undefined4 *)(iVar4 + 0x44) = 0;
              }
              iVar1 = *(int *)(iVar4 + 0x48);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar3 = 0;
              if (iVar6 < *(int *)(iVar1 + 0xc)) {
                uVar3 = *(uint *)(iVar4 + 0x44) & ~((int)*(uint *)(iVar4 + 0x44) >> 0x1f);
              }
              *(uint *)(iVar4 + 0x44) = uVar3;
              FUN_02062534(iVar4);
              uVar8 = *(undefined4 *)(iVar4 + 0x10);
              if (*(int *)(*piVar9 + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar6 = func_0x02450910(uVar8,0);
              if (iVar6 != 0) {
                iVar6 = *(int *)(iVar4 + 0x48);
                if (iVar6 == 0) {
                  func_0x01384bf0();
                }
                iVar6 = *(int *)(iVar6 + 0xc);
                while( true ) {
                  iVar1 = *(int *)(iVar4 + 0x10);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = func_0x02450148(iVar1,0);
                  if (iVar1 <= iVar6) break;
                  iVar1 = *(int *)(iVar4 + 0x10);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = func_0x02450158(iVar1,iVar6,0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = func_0x0244ffd4(iVar1,0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244ffe4(iVar1,0,0);
                  iVar6 = iVar6 + 1;
                }
              }
            }
          }
        }
      }
      else {
        iVar1 = func_0x0229f13c(0xa505,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_28 = 0;
        func_0x02175630(iVar1,iVar4,iVar6,param_2);
      }
      return;
    }
  }
  return;
}



// ===== FAT.UIMergeCostTips$$PlayShowEffect RVA 0x2071594 =====

void FUN_02081594(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb0dd,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb0dd,0);
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



// ===== FAT.UIMergeCostTips$$OnPostClose RVA 0x20715e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020815e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
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
  
  iVar1 = func_0x0229f06c(0xb0de,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_02081370 + 0x2081298);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02081374 + 0x20812ac));
      func_0x01384978(*(undefined4 *)(_UNK_02081378 + 0x20812b8));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xb0d9,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x58) != 0) {
        func_0x02081a90();
        piVar4 = *(int **)(_UNK_0208137c + 0x2081320);
        iVar1 = *piVar4;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar4;
        }
        uVar6 = *(undefined4 *)(param_1 + 0x58);
        iVar1 = **(int **)(iVar1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0359c65c(iVar1,uVar6,**(undefined4 **)(_UNK_02081380 + 0x208135c));
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xb0d9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb0de,0);
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.UIMergeCostTips$$OnNavBack RVA 0x2071638 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02081638(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  iVar1 = func_0x0229f06c(0xb0df,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0xb0d0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x0229f06c(0xb0d1,0);
      if (iVar1 == 0) {
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
        iVar1 = func_0x0229f13c(0xb0d1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xb0d0,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb0df,0);
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



// ===== FAT.UIMergeCostTips$$OnOutsideClose RVA 0x2071690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02081690(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  iVar1 = func_0x0229f06c(0xb0d0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0xb0d1,0);
    if (iVar1 == 0) {
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
      iVar1 = func_0x0229f13c(0xb0d1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb0d0,0);
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



// ===== FAT.UIMergeCostTips$$OnDragItem RVA 0x20716e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020816e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x0229f06c(0xb0d3,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x58) != 0) {
      iVar1 = func_0x0229f06c(0xb0d1,0);
      if (iVar1 == 0) {
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
        iVar1 = func_0x0229f13c(0xb0d1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_30 = 0;
      func_0x0245494c(&uStack_48,0,0);
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      uStack_24 = uStack_3c;
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
  }
  else {
    iVar1 = func_0x0229f13c(0xb0d3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    uStack_28 = param_4;
    func_0x022398d4(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.UIMergeCostTips$$ResetPosition RVA 0x2071774 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02081774(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  float fVar10;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02081a74 + 0x208178c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02081a78 + 0x20817a0));
    func_0x01384978(*(undefined4 *)(_UNK_02081a7c + 0x20817ac));
    func_0x01384978(*(undefined4 *)(_UNK_02081a80 + 0x20817b8));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xb0dc,0);
  if (iVar2 == 0) {
    piVar9 = *(int **)(_UNK_02081a84 + 0x2081814);
    iVar2 = *(int *)(param_1 + 0x4c);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar6 = func_0x02450910(iVar2,0);
    if (iVar6 != 0) {
      iVar6 = *(int *)(param_1 + 0x58);
      if (iVar6 != 0) {
        iVar2 = *(int *)(iVar6 + 8);
      }
      if (iVar6 != 0 && iVar2 != 0) {
        iVar6 = func_0x03668dfc(**(undefined4 **)(_UNK_02081a88 + 0x208185c));
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iVar6 + 0x7c);
        }
        func_0x0210cd7c(&iStack_30,iVar2,0);
        iVar2 = iStack_30;
        uStack_34 = uStack_2c;
        if (iVar6 == 0) {
          iVar6 = 1;
          bVar1 = true;
        }
        else {
          func_0x020da680(&iStack_30,iVar6,0);
          iVar6 = -1;
          if (iVar2 < iStack_30 + -1) {
            iVar6 = 1;
          }
          bVar1 = iVar2 < iStack_30 + -1;
        }
        iVar7 = *(int *)(param_1 + 0x4c);
        uVar8 = *(undefined4 *)(param_1 + 0x60);
        uVar4 = *(undefined4 *)(param_1 + 100);
        fVar10 = -ABS(*(float *)(param_1 + 0x5c));
        if (bVar1) {
          fVar10 = ABS(*(float *)(param_1 + 0x5c));
        }
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x024503a4(iVar7,fVar10,uVar8,uVar4);
        uVar3 = FUN_02080acc(param_1);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar7 = func_0x02450910(uVar3,0);
        if (iVar7 != 0) {
          iVar7 = FUN_02080acc(param_1);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          uVar3 = FUN_0206186c(iVar7,0);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar7 = func_0x02450910(uVar3,0);
          if (iVar7 != 0) {
            iVar7 = FUN_02080acc(param_1);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = FUN_0206186c(iVar7,0);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = func_0x0244fc34(iVar7,0);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = 0;
            func_0x024503a4(iVar7,fVar10,uVar8,uVar4);
          }
        }
        if (*(int *)(**(int **)(_UNK_02081a8c + 0x2081a14) + 0x74) == 0) {
          func_0x01384ab4();
        }
        FUN_01dd876c(&iStack_30,iVar6 + iVar2,uStack_34,0);
        iVar2 = *(int *)(param_1 + 0x4c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x024503d4(iVar2,iStack_30,uStack_2c,uStack_28);
      }
    }
    return;
  }
  iVar2 = func_0x0229f13c(0xb0dc,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_30 = 0;
  func_0x0245494c(&iStack_48,0,0);
  iStack_30 = iStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar6 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar8,&iStack_30,uVar4,0,0);
  return;
}



// ===== FAT.UIMergeCostTips$$ShowTips RVA 0x2071b3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02081b3c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  pcVar5 = (char *)(_UNK_02081d04 + 0x2081b50);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02081d08 + 0x2081b64));
    func_0x01384978(*(undefined4 *)(_UNK_02081d0c + 0x2081b70));
    func_0x01384978(*(undefined4 *)(_UNK_02081d10 + 0x2081b7c));
    func_0x01384978(*(undefined4 *)(_UNK_02081d14 + 0x2081b88));
    func_0x01384978(*(undefined4 *)(_UNK_02081d18 + 0x2081b94));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb0e0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb0e0,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  if (param_1 != 0) {
    piVar6 = *(int **)(_UNK_02081d1c + 0x2081bf4);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0359c52c(iVar1,**(undefined4 **)(_UNK_02081d20 + 0x2081c28));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_02081d24 + 0x2081c4c);
    *(int *)(iVar1 + 8) = param_1;
    iVar7 = func_0x034aaa34(*puVar2);
    piVar6 = *(int **)(_UNK_02081d28 + 0x2081c64);
    iVar3 = *piVar6;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar6;
    }
    uVar8 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x26c);
    piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02081d2c + 0x2081c88),1);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar6 + 0x20));
    if (iVar3 == 0) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if (piVar6[3] == 0) {
      func_0x01384bf4();
    }
    piVar6[4] = iVar1;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0xd,0,piVar6,0);
    if (iVar1 == 0) {
      func_0x01ee81d4(iVar7,uVar8,0,piVar6);
    }
    else {
      iVar1 = func_0x0229f13c(0xd,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x02174858(iVar1,iVar7,uVar8,piVar6);
    }
    return;
  }
  return;
}



// ===== FAT.UIMergeCostTips$$ShowTips RVA 0x2071d30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02081d30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
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
  
  pcVar3 = (char *)(_UNK_02081e84 + 0x2081d44);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02081e88 + 0x2081d58));
    func_0x01384978(*(undefined4 *)(_UNK_02081e8c + 0x2081d64));
    func_0x01384978(*(undefined4 *)(_UNK_02081e90 + 0x2081d70));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7659,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7659,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  if (param_1 != 0) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02081e94 + 0x2081dd0));
    piVar5 = *(int **)(_UNK_02081e98 + 0x2081de4);
    iVar4 = *piVar5;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar5;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x26c);
    piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02081e9c + 0x2081e08),1);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar5 + 0x20));
    if (iVar4 == 0) {
      uVar2 = func_0x01384c10();
      func_0x01384aa0(uVar2,0);
    }
    if (piVar5[3] == 0) {
      func_0x01384bf4();
    }
    piVar5[4] = param_1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0xd,0,piVar5,0);
    if (iVar4 == 0) {
      func_0x01ee81d4(iVar1,uVar6,0,piVar5);
    }
    else {
      iVar4 = func_0x0229f13c(0xd,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x02174858(iVar4,iVar1,uVar6,piVar5);
    }
    return;
  }
  return;
}



// ===== FAT.UIMergeCostTips$$TryShowTips RVA 0x2071ea0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02081ea0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
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
  
  pcVar3 = (char *)(_UNK_02082058 + 0x2081eb4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0208205c + 0x2081ec8));
    func_0x01384978(*(undefined4 *)(_UNK_02082060 + 0x2081ed4));
    func_0x01384978(*(undefined4 *)(_UNK_02082064 + 0x2081ee0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7656,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7656,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x0245496c(&uStack_30,0,0);
    return uVar6;
  }
  uVar6 = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0x60) != 0) {
    uVar6 = 0;
    iVar1 = func_0x01cc0100(*(int *)(iVar1 + 0x60),0xa3,0);
    if (param_1 != 0 && iVar1 != 0) {
      piVar5 = *(int **)(_UNK_02082068 + 0x2081f84);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar5;
      }
      iVar1 = **(int **)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0359c52c(iVar1,**(undefined4 **)(_UNK_0208206c + 0x2081fb8));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar1 + 8) = param_1;
      uVar6 = func_0x02116990(param_1,0);
      iVar4 = func_0x0216a2cc(uVar6,*(undefined4 *)(iVar1 + 0xc),0);
      if (iVar4 == 0) {
        FUN_02081a90(iVar1);
        iVar4 = *piVar5;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar5;
        }
        iVar4 = **(int **)(iVar4 + 0x5c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0359c65c(iVar4,iVar1,**(undefined4 **)(_UNK_02082070 + 0x2082048));
        uVar6 = 0;
      }
      else {
        FUN_02081d30(iVar1);
        uVar6 = 1;
      }
    }
  }
  return uVar6;
}



// ===== FAT.UIMergeCostTips$$.ctor RVA 0x2072074 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02082074(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined8 uVar5;
  
  pcVar4 = (char *)(_UNK_02082118 + 0x2082088);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0208211c + 0x208209c));
    *pcVar4 = '\x01';
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  pcVar4 = (char *)(_UNK_02082120 + 0x20820b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02082124 + 0x20820c4));
    *pcVar4 = '\x01';
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
  }
  iVar3 = *(int *)(**(int **)(_UNK_02082128 + 0x20820d8) + 0x5c);
  uVar5 = *(undefined8 *)(iVar3 + 0xc);
  iVar2 = **(int **)(_UNK_0208212c + 0x20820e8);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar3 + 0x14);
  *(undefined8 *)(param_1 + 0x5c) = uVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    param_3 = extraout_r2_01;
    param_4 = extraout_r3_01;
  }
  pcVar4 = (char *)(_UNK_01ee5288 + 0x1ee5224);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ee528c + 0x1ee5238),0,param_3,param_4,unaff_r4,unaff_r5,
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



// ===== FAT.UIMergeCostTips$$<>iFixBaseProxy_OnParse RVA 0x2072130 =====

void FUN_02082130(undefined4 param_1,undefined4 param_2)

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



// ===== FAT.UIMergeCostTips$$<>iFixBaseProxy_OnPreOpen RVA 0x2072138 =====

void FUN_02082138(undefined4 param_1)

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



// ===== FAT.UIMergeCostTips$$<>iFixBaseProxy_OnPostClose RVA 0x2072140 =====

void FUN_02082140(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x691,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x691,0);
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


