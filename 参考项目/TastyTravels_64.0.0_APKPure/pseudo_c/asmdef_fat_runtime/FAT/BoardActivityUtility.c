/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.BoardActivityUtility$$CollectAllBoardReward RVA 0x2bf389c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c0389c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_02c03dbc + 0x2c038b8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c03dc0 + 0x2c038cc));
    func_0x01384978(*(undefined4 *)(_UNK_02c03dc4 + 0x2c038d8));
    func_0x01384978(*(undefined4 *)(_UNK_02c03dc8 + 0x2c038e4));
    func_0x01384978(*(undefined4 *)(_UNK_02c03dcc + 0x2c038f0));
    func_0x01384978(*(undefined4 *)(_UNK_02c03dd0 + 0x2c038fc));
    func_0x01384978(*(undefined4 *)(_UNK_02c03dd4 + 0x2c03908));
    func_0x01384978(*(undefined4 *)(_UNK_02c03dd8 + 0x2c03914));
    func_0x01384978(*(undefined4 *)(_UNK_02c03ddc + 0x2c03920));
    func_0x01384978(*(undefined4 *)(_UNK_02c03de0 + 0x2c0392c));
    func_0x01384978(*(undefined4 *)(_UNK_02c03de4 + 0x2c03938));
    func_0x01384978(*(undefined4 *)(_UNK_02c03de8 + 0x2c03944));
    func_0x01384978(*(undefined4 *)(_UNK_02c03dec + 0x2c03950));
    func_0x01384978(*(undefined4 *)(_UNK_02c03df0 + 0x2c0395c));
    func_0x01384978(*(undefined4 *)(_UNK_02c03df4 + 0x2c03968));
    func_0x01384978(*(undefined4 *)(_UNK_02c03df8 + 0x2c03974));
    func_0x01384978(*(undefined4 *)(_UNK_02c03dfc + 0x2c03980));
    func_0x01384978(*(undefined4 *)(_UNK_02c03e00 + 0x2c0398c));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x5c20,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02c03e04 + 0x2c03a08));
    func_0x02c05f70(iVar1,0);
    if (param_1 == 0 || param_2 == 0) {
      uVar2 = **(undefined4 **)(_UNK_02c03e08 + 0x2c03a30);
    }
    else {
      piVar7 = *(int **)(_UNK_02c03e0c + 0x2c03a40);
      iVar3 = *piVar7;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar7;
      }
      iVar3 = **(int **)(iVar3 + 0x5c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      puVar10 = *(undefined4 **)(_UNK_02c03e10 + 0x2c03a78);
      uVar2 = func_0x0359c52c(iVar3,*puVar10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = **(int **)(*piVar7 + 0x5c);
      *(undefined4 *)(iVar1 + 8) = uVar2;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0359c52c(iVar3,*puVar10);
      puVar10 = *(undefined4 **)(_UNK_02c03e14 + 0x2c03ac0);
      *(undefined4 *)(iVar1 + 0xc) = uVar2;
      uVar2 = func_0x01384be4(*puVar10);
      func_0x03ccb96c(uVar2,iVar1,**(undefined4 **)(_UNK_02c03e18 + 0x2c03ae4),0);
      func_0x021475dc(param_2,uVar2,5,0);
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar3 = *(int *)(iVar3 + 0x40);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5a200(&uStack_58,iVar5,**(undefined4 **)(_UNK_02c03e1c + 0x2c03b44));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      while (iVar5 = func_0x03f9975c(&uStack_40,**(undefined4 **)(_UNK_02c03e34 + 0x2c03b74)),
            uVar2 = uStack_34, iVar5 != 0) {
        uVar6 = (undefined4)uStack_30;
        iVar5 = **(int **)(_UNK_02c03e20 + 0x2c03b90);
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x01384ab4();
          iVar5 = **(int **)(_UNK_02c03e24 + 0x2c03bb0);
        }
        uVar8 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x24);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x01cdcbac(iVar3,uVar2,uVar6,uVar8,0,0,0,0x35,
                                **(undefined4 **)(_UNK_02c03e28 + 0x2c03bd0),
                                **(undefined4 **)(_UNK_02c03e2c + 0x2c03bdc),0);
        iVar5 = *(int *)(param_1 + 8);
        uVar9 = *(uint *)(param_1 + 0xc);
        piVar7 = *(int **)(_UNK_02c03e30 + 0x2c03c30);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        iVar11 = *piVar7;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (uVar9 < *(uint *)(iVar5 + 0xc)) {
          *(uint *)(param_1 + 0xc) = uVar9 + 1;
          *(undefined4 *)(iVar5 + uVar9 * 4 + 0x10) = uVar2;
        }
        else {
          func_0x0328f170(param_1,uVar2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
        }
      }
      func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_02c03e38 + 0x2c03c84));
      piVar7 = *(int **)(_UNK_02c03e40 + 0x2c03ca0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x02c03e4c(*(undefined4 *)(iVar1 + 8));
      iVar3 = *piVar7;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar7;
      }
      uVar6 = *(undefined4 *)(iVar1 + 8);
      iVar3 = **(int **)(iVar3 + 0x5c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      puVar10 = *(undefined4 **)(_UNK_02c03e44 + 0x2c03cf4);
      func_0x0359c65c(iVar3,uVar6,*puVar10);
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = **(int **)(*piVar7 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c65c(iVar1,uVar6,*puVar10);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c20,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02173d58(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.BoardActivityUtility$$ConvertDictToString RVA 0x2bf3e4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02c03e4c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02c044ec + 0x2c03e64);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c044f0 + 0x2c03e78));
    func_0x01384978(*(undefined4 *)(_UNK_02c044f4 + 0x2c03e84));
    func_0x01384978(*(undefined4 *)(_UNK_02c044f8 + 0x2c03e90));
    func_0x01384978(*(undefined4 *)(_UNK_02c044fc + 0x2c03e9c));
    func_0x01384978(*(undefined4 *)(_UNK_02c04500 + 0x2c03ea8));
    func_0x01384978(*(undefined4 *)(_UNK_02c04504 + 0x2c03eb4));
    func_0x01384978(*(undefined4 *)(_UNK_02c04508 + 0x2c03ec0));
    func_0x01384978(*(undefined4 *)(_UNK_02c0450c + 0x2c03ecc));
    func_0x01384978(*(undefined4 *)(_UNK_02c04510 + 0x2c03ed8));
    func_0x01384978(*(undefined4 *)(_UNK_02c04514 + 0x2c03ee4));
    *pcVar4 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_4c = 0;
  iVar1 = func_0x0229f06c(0x5c2b,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02c04518 + 0x2c03f68) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024500c4(&uStack_68,0);
    uStack_30 = CONCAT44(uStack_64,uStack_68);
    uStack_28 = uStack_60;
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_68,param_1,**(undefined4 **)(_UNK_02c0451c + 0x2c03fb4));
    uStack_48 = uStack_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uStack_38 = uStack_58;
    piVar3 = *(int **)(_UNK_02c04520 + 0x2c03fe8);
    pcVar7 = (char *)(_UNK_02c04524 + 0x2c03ff4);
    pcVar4 = (char *)(_UNK_02c04528 + 0x2c03ff8);
    while (iVar1 = func_0x03f9975c(&uStack_48,**(undefined4 **)(_UNK_02c04550 + 0x2c04000)),
          uVar6 = uStack_3c, iVar1 != 0) {
      uVar8 = (undefined4)uStack_38;
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (0 < uStack_30._4_4_) {
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = **(int **)(_UNK_02c0452c + 0x2c04058);
        if (*pcVar7 == '\0') {
          func_0x01384978(piVar3);
          *pcVar7 = '\x01';
        }
        if (*pcVar4 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02c04530 + 0x2c0408c));
          *pcVar4 = '\x01';
        }
        if (iVar1 == 0) {
          uVar5 = 0;
          uVar2 = 0;
        }
        else {
          uVar2 = func_0x0466f590(iVar1,0);
          uVar5 = *(undefined4 *)(iVar1 + 8);
        }
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x019a7f14(&uStack_30,uVar2,uVar5,0);
      }
      uStack_4c = uVar6;
      iVar1 = func_0x04821a08(&uStack_4c,0);
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02c04534 + 0x2c04140));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar5 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = func_0x0466f590(iVar1,0);
        uVar5 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar2,uVar5,0);
      iVar1 = **(int **)(_UNK_02c04538 + 0x2c041a4);
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02c0453c + 0x2c041d8));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar5 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = func_0x0466f590(iVar1,0);
        uVar5 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar2,uVar5,0);
      uStack_4c = uVar8;
      iVar1 = func_0x04821a08(&uStack_4c,0);
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02c04540 + 0x2c04278));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar2 = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = func_0x0466f590(iVar1,0);
        uVar2 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar8,uVar2,0);
      iVar1 = **(int **)(_UNK_02c04544 + 0x2c042dc);
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02c04548 + 0x2c04310));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar2 = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = func_0x0466f590(iVar1,0);
        uVar2 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar8,uVar2,0);
      uStack_4c = func_0x02157e88(uVar6,0);
      iVar1 = func_0x04821a08(&uStack_4c,0);
      if (*pcVar7 == '\0') {
        func_0x01384978(piVar3);
        *pcVar7 = '\x01';
      }
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02c0454c + 0x2c043bc));
        *pcVar4 = '\x01';
      }
      if (iVar1 == 0) {
        uVar8 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = func_0x0466f590(iVar1,0);
        uVar8 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_30,uVar6,uVar8,0);
    }
    func_0x03f9989c(&uStack_48,**(undefined4 **)(_UNK_02c04554 + 0x2c04424));
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0148d6d8(&uStack_30,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5c2b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173e78(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.BoardActivityUtility$$_TryCollectReward RVA 0x2bf4560 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c04560(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_02c047b0 + 0x2c04580);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c047b4 + 0x2c04594));
    func_0x01384978(*(undefined4 *)(_UNK_02c047b8 + 0x2c045a0));
    *pcVar5 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x5c23,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c23,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
    return;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02feb690(param_1,&iStack_1c,0,**(undefined4 **)(_UNK_02c047bc + 0x2c04624));
  if ((((iStack_1c == 0 || iVar1 == 0) || (iVar1 = func_0x0211d748(iStack_1c,0), iVar1 != 1)) ||
      (iStack_1c == 0)) || (iVar1 = func_0x0211dc48(iStack_1c,0), iVar1 == 0)) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(param_1,&iStack_20,0,**(undefined4 **)(_UNK_02c047c0 + 0x2c04660));
    iVar1 = iStack_20;
    if (iVar2 == 0) {
      return;
    }
    if (iStack_20 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021372e0(iVar1,0);
    if (iVar1 != 3) {
      return;
    }
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0210e2d4(param_1,0);
    func_0x02c047c4(param_2,uVar3,1,0xffffffff);
    iVar1 = iStack_20;
    if (iStack_20 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02137218(iVar1,0);
    iVar1 = iStack_20;
    if (iStack_20 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0213727c(iVar1,0);
  }
  else {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0210e2d4(param_1,0);
    func_0x02c047c4(param_2,uVar3,1,0xffffffff);
    iVar1 = iStack_1c;
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0211d680(iVar1,0);
    iVar1 = iStack_1c;
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0211d6e4(iVar1,0);
  }
  func_0x02c047c4(param_3,uVar3,uVar4,0xffffffff);
  return;
}



// ===== FAT.BoardActivityUtility$$Collect RVA 0x2bf47c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c047c4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_02c04a00 + 0x2c047e4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c04a04 + 0x2c047fc));
    func_0x01384978(*(undefined4 *)(_UNK_02c04a08 + 0x2c04808));
    func_0x01384978(*(undefined4 *)(_UNK_02c04a0c + 0x2c04814));
    func_0x01384978(*(undefined4 *)(_UNK_02c04a10 + 0x2c04820));
    func_0x01384978(*(undefined4 *)(_UNK_02c04a14 + 0x2c0482c));
    *pcVar3 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x5c25,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c25,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  if (param_4 != -1) {
    if (param_4 < 1) {
      return;
    }
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d5bb20(param_1,param_2,&iStack_24,**(undefined4 **)(_UNK_02c04a30 + 0x2c048c0))
    ;
    if (iVar1 == 0) {
      if (param_3 < param_4) {
        param_4 = param_3;
      }
      param_3 = param_4;
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      puVar2 = *(undefined4 **)(_UNK_02c04a38 + 0x2c04970);
      goto LAB_02c049ec;
    }
    if (iStack_24 + param_3 < param_4) {
      param_4 = iStack_24 + param_3;
    }
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_02c04a34 + 0x2c04900);
    goto LAB_02c049cc;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x03d59fc8(0,param_2,**(undefined4 **)(_UNK_02c04a28 + 0x2c04984));
    func_0x01384bf0();
    if (iVar1 == 0) goto LAB_02c049dc;
    param_4 = func_0x03d59cc4(0,param_2,**(undefined4 **)(_UNK_02c04a20 + 0x2c049ac));
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x03d59fc8(param_1,param_2,**(undefined4 **)(_UNK_02c04a18 + 0x2c04918));
    if (iVar1 == 0) {
LAB_02c049dc:
      puVar2 = *(undefined4 **)(_UNK_02c04a2c + 0x2c049f0);
LAB_02c049ec:
      func_0x03d59d7c(param_1,param_2,param_3,*puVar2);
      return;
    }
    param_4 = func_0x03d59cc4(param_1,param_2,**(undefined4 **)(_UNK_02c04a1c + 0x2c04938));
  }
  param_4 = param_4 + param_3;
  puVar2 = *(undefined4 **)(_UNK_02c04a24 + 0x2c049d0);
LAB_02c049cc:
  func_0x03d59d54(param_1,param_2,param_4,*puVar2);
  return;
}



// ===== FAT.BoardActivityUtility$$FillBoardRowConfStr RVA 0x2bf4a3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c04a3c(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uStack_28;
  
  pcVar12 = (char *)(_UNK_02c0528c + 0x2c04a5c);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c05290 + 0x2c04a74));
    func_0x01384978(*(undefined4 *)(_UNK_02c05294 + 0x2c04a80));
    func_0x01384978(*(undefined4 *)(_UNK_02c05298 + 0x2c04a8c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0529c + 0x2c04a98));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b76,0);
  if (iVar1 == 0) {
    uStack_28 = 0;
    if ((0 < param_2) && (uStack_28 = 0, param_3 != (int *)0x0)) {
      if (param_1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *param_1;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_02c052a0 + 0x2c04b2c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xd0);
            goto LAB_02c04b74;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c052a0 + 0x2c04b2c),2);
LAB_02c04b74:
      iVar1 = (*(code *)*puVar2)(param_1,param_2,puVar2[1]);
      if (param_1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *param_1;
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_02c052a4 + 0x2c04ba8)) {
            puVar2 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02c04bf0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c052a4 + 0x2c04ba8),0);
LAB_02c04bf0:
      piVar9 = (int *)(*(code *)*puVar2)(param_1,param_2,puVar2[1]);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar9;
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_02c052a8 + 0x2c04c24)) {
            puVar2 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
            goto LAB_02c04c6c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02c052a8 + 0x2c04c24),0);
LAB_02c04c6c:
      iVar3 = (*(code *)*puVar2)(piVar9,puVar2[1]);
      if (((0 < param_5) && (-1 < param_4)) && (0 < iVar3)) {
        iVar4 = *param_3;
        uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_02c052ac + 0x2c04ca8)) {
              puVar2 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xd8);
              goto LAB_02c04cf0;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_02c052ac + 0x2c04ca8),3);
LAB_02c04cf0:
        (*(code *)*puVar2)(param_3,puVar2[1]);
        iVar4 = param_5 + param_4;
        if (iVar3 < iVar4) {
          if (iVar1 < 1) {
            return 1;
          }
          if (piVar9 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar5 = *piVar9;
          uVar8 = (uint)*(ushort *)(iVar5 + 0xb6);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
            do {
              if (piVar10[-1] == **(int **)(_UNK_02c052bc + 0x2c04d3c)) {
                puVar2 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xd0);
                goto LAB_02c04f0c;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 2;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02c052bc + 0x2c04d3c),2);
LAB_02c04f0c:
          iVar1 = (*(code *)*puVar2)(piVar9,iVar1,puVar2[1]);
          if (param_4 < iVar3) {
            piVar10 = *(int **)(_UNK_02c052c0 + 0x2c04f40);
            do {
              if (piVar9 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar5 = *piVar9;
              uVar8 = (uint)*(ushort *)(iVar5 + 0xb6);
              if (uVar8 != 0) {
                piVar11 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                do {
                  if (piVar11[-1] == **(int **)(_UNK_02c052c4 + 0x2c04f58)) {
                    puVar2 = (undefined4 *)(iVar5 + *piVar11 * 8 + 0xc0);
                    goto LAB_02c04fa0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar11 = piVar11 + 2;
                } while (uVar8 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02c052c4 + 0x2c04f58),0)
              ;
LAB_02c04fa0:
              uVar6 = (*(code *)*puVar2)(piVar9,param_4,puVar2[1]);
              if (param_1 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar5 = *param_1;
              uVar8 = (uint)*(ushort *)(iVar5 + 0xb6);
              if (uVar8 != 0) {
                piVar11 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                do {
                  if (piVar11[-1] == *piVar10) {
                    puVar2 = (undefined4 *)(iVar5 + *piVar11 * 8 + 200);
                    goto LAB_02c05014;
                  }
                  uVar8 = uVar8 - 1;
                  piVar11 = piVar11 + 2;
                } while (uVar8 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,1);
LAB_02c05014:
              uVar6 = (*(code *)*puVar2)(param_1,uVar6,puVar2[1]);
              iVar5 = *param_3;
              uVar8 = (uint)*(ushort *)(iVar5 + 0xb6);
              if (uVar8 != 0) {
                piVar11 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                do {
                  if (piVar11[-1] == **(int **)(_UNK_02c052c8 + 0x2c0503c)) {
                    puVar2 = (undefined4 *)(iVar5 + *piVar11 * 8 + 0xd0);
                    goto LAB_02c05084;
                  }
                  uVar8 = uVar8 - 1;
                  piVar11 = piVar11 + 2;
                } while (uVar8 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(param_3,**(int **)(_UNK_02c052c8 + 0x2c0503c),2);
LAB_02c05084:
              (*(code *)*puVar2)(param_3,uVar6,puVar2[1]);
              param_4 = param_4 + 1;
            } while (param_4 != iVar3);
            param_5 = iVar4 - iVar3;
            iVar4 = iVar1;
          }
          else {
            if (iVar3 - iVar1 == 0) {
              iVar4 = 0;
            }
            else {
              func_0x01458344(param_4 - iVar1);
              iVar4 = extraout_r1;
            }
            iVar4 = iVar4 + iVar1;
          }
          if (param_5 < 1) {
            return 1;
          }
          iVar5 = 0;
          do {
            iVar13 = iVar5 + iVar4;
            if (iVar3 <= iVar13) {
              func_0x01458344(iVar13 - iVar1,iVar3 - iVar1);
              iVar13 = extraout_r1_00 + iVar1;
            }
            if (piVar9 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar7 = *piVar9;
            uVar8 = (uint)*(ushort *)(iVar7 + 0xb6);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(int *)(iVar7 + 0x58) + 4);
              do {
                if (piVar10[-1] == **(int **)(_UNK_02c052cc + 0x2c05124)) {
                  puVar2 = (undefined4 *)(iVar7 + *piVar10 * 8 + 0xc0);
                  goto LAB_02c0516c;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar8 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02c052cc + 0x2c05124),0);
LAB_02c0516c:
            uVar6 = (*(code *)*puVar2)(piVar9,iVar13,puVar2[1]);
            if (param_1 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar13 = *param_1;
            uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(int *)(iVar13 + 0x58) + 4);
              do {
                if (piVar10[-1] == **(int **)(_UNK_02c052d0 + 0x2c051a0)) {
                  puVar2 = (undefined4 *)(iVar13 + *piVar10 * 8 + 200);
                  goto LAB_02c051e8;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar8 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c052d0 + 0x2c051a0),1);
LAB_02c051e8:
            uVar6 = (*(code *)*puVar2)(param_1,uVar6,puVar2[1]);
            iVar13 = *param_3;
            uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(int *)(iVar13 + 0x58) + 4);
              do {
                if (piVar10[-1] == **(int **)(_UNK_02c052d4 + 0x2c05210)) {
                  puVar2 = (undefined4 *)(iVar13 + *piVar10 * 8 + 0xd0);
                  goto LAB_02c05258;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar8 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_02c052d4 + 0x2c05210),2);
LAB_02c05258:
            (*(code *)*puVar2)(param_3,uVar6,puVar2[1]);
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_5);
        }
        else {
          if (iVar4 <= param_4) {
            return 1;
          }
          piVar10 = *(int **)(_UNK_02c052b0 + 0x2c04d90);
          do {
            if (piVar9 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar9;
            uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar11[-1] == **(int **)(_UNK_02c052b4 + 0x2c04dac)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
                  goto LAB_02c04df4;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 2;
              } while (uVar8 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_02c052b4 + 0x2c04dac),0);
LAB_02c04df4:
            uVar6 = (*(code *)*puVar2)(piVar9,param_4,puVar2[1]);
            if (param_1 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *param_1;
            uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar11[-1] == *piVar10) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 200);
                  goto LAB_02c04e68;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 2;
              } while (uVar8 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_1,*piVar10,1);
LAB_02c04e68:
            uVar6 = (*(code *)*puVar2)(param_1,uVar6,puVar2[1]);
            iVar1 = *param_3;
            uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar11[-1] == **(int **)(_UNK_02c052b8 + 0x2c04e90)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xd0);
                  goto LAB_02c04ed8;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 2;
              } while (uVar8 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_02c052b8 + 0x2c04e90),2);
LAB_02c04ed8:
            (*(code *)*puVar2)(param_3,uVar6,puVar2[1]);
            param_4 = param_4 + 1;
          } while (param_4 != iVar4);
        }
        uStack_28 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b76,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = func_0x02232d0c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return uStack_28;
}



// ===== FAT.BoardActivityUtility$$FillHighestLeveItemByCategory RVA 0x2bf52d8 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c052d8(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  
  pcVar7 = (char *)(_UNK_02c05704 + 0x2c052f8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c05708 + 0x2c0530c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0570c + 0x2c05318));
    func_0x01384978(*(undefined4 *)(_UNK_02c05710 + 0x2c05324));
    func_0x01384978(*(undefined4 *)(_UNK_02c05714 + 0x2c05330));
    func_0x01384978(*(undefined4 *)(_UNK_02c05718 + 0x2c0533c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0571c + 0x2c05348));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1537,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_1;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_02c05720 + 0x2c053dc)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_02c05424;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c05720 + 0x2c053dc),0);
LAB_02c05424:
    piVar5 = (int *)(*(code *)*puVar3)(param_1,puVar3[1]);
    piVar8 = *(int **)(_UNK_02c05724 + 0x2c05444);
LAB_02c05440:
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar8) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02c0549c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar5,*piVar8,0);
LAB_02c0549c:
    iVar1 = (*(code *)*puVar3)(piVar5,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_02c05728 + 0x2c054d0)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_02c05518;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02c05728 + 0x2c054d0),0);
LAB_02c05518:
      uVar2 = (*(code *)*puVar3)(piVar5,puVar3[1]);
      uVar2 = func_0x02c05738(uVar2,param_3);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_2 + 8);
      uVar4 = *(uint *)(param_2 + 0xc);
      piVar6 = *(int **)(_UNK_02c0572c + 0x2c05560);
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      iVar9 = *piVar6;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (uVar4 < *(uint *)(iVar1 + 0xc)) {
        *(uint *)(param_2 + 0xc) = uVar4 + 1;
        *(undefined4 *)(iVar1 + uVar4 * 4 + 0x10) = uVar2;
      }
      else {
        func_0x0325970c(param_2,uVar2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_02c05440;
    }
    uVar2 = 0;
    if (piVar5 != (int *)0x0) {
      iVar1 = *piVar5;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_02c05730 + 0x2c055c4)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_02c0560c;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02c05730 + 0x2c055c4),0);
LAB_02c0560c:
      uVar2 = (*(code *)*puVar3)(piVar5,puVar3[1]);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1537,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.BoardActivityUtility$$GetHighestLevelItemIdInCategory RVA 0x2bf5738 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c05738(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
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
  
  pcVar5 = (char *)(_UNK_02c058dc + 0x2c05750);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c058e0 + 0x2c05764));
    func_0x01384978(*(undefined4 *)(_UNK_02c058e4 + 0x2c05770));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1538,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1538,0);
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
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = func_0x01db1884(iVar1,param_1,0);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x44);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar3 + 0xc)) {
      uVar4 = 0;
      if (param_2 == 1) {
        iVar3 = *(int *)(iVar1 + 0x44);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar4 = func_0x0364c9b8(iVar3,*(int *)(iVar3 + 0xc) + -1,
                                **(undefined4 **)(_UNK_02c058e8 + 0x2c0584c));
      }
      iVar3 = *(int *)(iVar1 + 0x44);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      puVar6 = *(undefined4 **)(_UNK_02c058ec + 0x2c05884);
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        iVar7 = *(int *)(iVar1 + 0x44);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x0364c9b8(iVar7,iVar3,*puVar6);
        iVar7 = func_0x02c058f0();
        if (iVar7 != 0) {
          return uVar2;
        }
        iVar7 = func_0x02c05a40(uVar2);
        if (iVar7 != 0) {
          return uVar2;
        }
      }
    }
  }
  return uVar4;
}



// ===== FAT.BoardActivityUtility$$HasActiveItemInMainBoardAndInventory RVA 0x2bf58f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c058f0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  
  pcVar8 = (char *)(_UNK_02c05a34 + 0x2c05904);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c05a38 + 0x2c05918));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1539,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1539,0);
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
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5,0,0);
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01db7bcc(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0214da98(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_02c05a3c + 0x2c059d4)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xe0);
        goto LAB_02c05a1c;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02c05a3c + 0x2c059d4),4);
LAB_02c05a1c:
                    /* WARNING: Could not recover jumptable at 0x02c05a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  return;
}



// ===== FAT.BoardActivityUtility$$HasItemInMainBoardRewardTrack RVA 0x2bf5a40 =====

uint FUN_02c05a40(undefined4 param_1)

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
  
  iVar2 = func_0x0229f06c(0x153a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x153a,0);
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
  iVar2 = *(int *)(iVar2 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01db7b78(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x021451e0(iVar2,param_1,0);
  return ~uVar1 >> 0x1f;
}



// ===== FAT.BoardActivityUtility$$HasActiveItemInMainBoard RVA 0x2bf5aec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c05aec(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  
  pcVar8 = (char *)(_UNK_02c05c30 + 0x2c05b00);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c05c34 + 0x2c05b14));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b31,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b31,0);
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
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5,0,0);
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01db7bcc(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0214d864(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_02c05c38 + 0x2c05bd0)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xe0);
        goto LAB_02c05c18;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02c05c38 + 0x2c05bd0),4);
LAB_02c05c18:
                    /* WARNING: Could not recover jumptable at 0x02c05c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar2,param_1,puVar3[1]);
  return;
}



// ===== FAT.BoardActivityUtility$$IsSupportOutputType RVA 0x2bf5c3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c05c3c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
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
  
  pcVar8 = (char *)(_UNK_02c05d38 + 0x2c05c54);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c05d3c + 0x2c05c68));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b32,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b32,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    uVar7 = func_0x0245496c(&uStack_38,0,0);
    return uVar7;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02c05d40 + 0x2c05cd0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe0);
        goto LAB_02c05d20;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c05d40 + 0x2c05cd0),4);
LAB_02c05d20:
                    /* WARNING: Could not recover jumptable at 0x02c05d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*(code *)*puVar2)(param_1,param_2,puVar2[1]);
  return uVar7;
}



// ===== FAT.BoardActivityUtility$$IsSupportOutputMethod RVA 0x2bf5d44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c05d44(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
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
  
  pcVar8 = (char *)(_UNK_02c05e40 + 0x2c05d5c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c05e44 + 0x2c05d70));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5a9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5a9,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    uVar7 = func_0x0245496c(&uStack_38,0,0);
    return uVar7;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02c05e48 + 0x2c05dd8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe8);
        goto LAB_02c05e28;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c05e48 + 0x2c05dd8),5);
LAB_02c05e28:
                    /* WARNING: Could not recover jumptable at 0x02c05e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*(code *)*puVar2)(param_1,param_2,puVar2[1]);
  return uVar7;
}



// ===== FAT.BoardActivityUtility.<>c__DisplayClass0_0$$.ctor RVA 0x2bf5f70 =====

void FUN_02c05f70(void)

{
  return;
}



// ===== FAT.BoardActivityUtility.<>c__DisplayClass0_0$$<CollectAllBoardReward>b__0 RVA 0x2bf5f78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c05f78(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iStack_20;
  int iStack_1c;
  
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  pcVar6 = (char *)(_UNK_02c047b0 + 0x2c04580);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c047b4 + 0x2c04594),uVar4,uVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_02c047b8 + 0x2c045a0));
    *pcVar6 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x5c23,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c23,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_2,uVar4,uVar5,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02feb690(param_2,&iStack_1c,0,**(undefined4 **)(_UNK_02c047bc + 0x2c04624));
  if ((((iStack_1c == 0 || iVar1 == 0) || (iVar1 = func_0x0211d748(iStack_1c,0), iVar1 != 1)) ||
      (iStack_1c == 0)) || (iVar1 = func_0x0211dc48(iStack_1c,0), iVar1 == 0)) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(param_2,&iStack_20,0,**(undefined4 **)(_UNK_02c047c0 + 0x2c04660));
    iVar1 = iStack_20;
    if (iVar2 == 0) {
      return;
    }
    if (iStack_20 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021372e0(iVar1,0);
    if (iVar1 != 3) {
      return;
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0210e2d4(param_2,0);
    FUN_02c047c4(uVar4,uVar3,1,0xffffffff);
    iVar1 = iStack_20;
    if (iStack_20 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x02137218(iVar1,0);
    iVar1 = iStack_20;
    if (iStack_20 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0213727c(iVar1,0);
  }
  else {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0210e2d4(param_2,0);
    FUN_02c047c4(uVar4,uVar3,1,0xffffffff);
    iVar1 = iStack_1c;
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0211d680(iVar1,0);
    iVar1 = iStack_1c;
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0211d6e4(iVar1,0);
  }
  FUN_02c047c4(uVar5,uVar4,uVar3,0xffffffff);
  return;
}


