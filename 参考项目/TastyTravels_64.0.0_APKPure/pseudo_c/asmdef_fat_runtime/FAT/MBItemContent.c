/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBItemContent$$get_Holder RVA 0x1e03720 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e13720(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f81,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f81,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022397c0 + 0x22396e0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022397c4 + 0x22396f4),param_1,0);
      *pcVar4 = '\x01';
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022397c8 + 0x22397b0));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== FAT.MBItemContent$$get_isInBox RVA 0x1e03774 =====

undefined1 FUN_01e13774(int param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



// ===== FAT.MBItemContent$$set_isInBox RVA 0x1e0377c =====

void FUN_01e1377c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== FAT.MBItemContent$$get_hasNewTip RVA 0x1e03784 =====

undefined1 FUN_01e13784(int param_1)

{
  return *(undefined1 *)(param_1 + 0x31);
}



// ===== FAT.MBItemContent$$set_hasNewTip RVA 0x1e0378c =====

void FUN_01e1378c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x31) = param_2;
  return;
}



// ===== FAT.MBItemContent$$SetData RVA 0x1e03794 =====

/* WARNING: Possible PIC construction at 0x01e144b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e144f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e1452c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e14648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e14034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e1424c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e14288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e142c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e13f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e13da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e13ddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e13da4) */
/* WARNING: Removing unreachable block (ram,0x01e13db0) */
/* WARNING: Removing unreachable block (ram,0x01e13db4) */
/* WARNING: Removing unreachable block (ram,0x01e13dcc) */
/* WARNING: Removing unreachable block (ram,0x01e13dd0) */
/* WARNING: Removing unreachable block (ram,0x01e13f70) */
/* WARNING: Removing unreachable block (ram,0x01e13f88) */
/* WARNING: Removing unreachable block (ram,0x01e13f9c) */
/* WARNING: Removing unreachable block (ram,0x01e13fac) */
/* WARNING: Removing unreachable block (ram,0x01e13fb4) */
/* WARNING: Removing unreachable block (ram,0x01e13fc4) */
/* WARNING: Removing unreachable block (ram,0x01e13fc8) */
/* WARNING: Removing unreachable block (ram,0x01e13fe4) */
/* WARNING: Removing unreachable block (ram,0x01e13fe8) */
/* WARNING: Removing unreachable block (ram,0x01e14004) */
/* WARNING: Removing unreachable block (ram,0x01e14008) */
/* WARNING: Removing unreachable block (ram,0x01e14024) */
/* WARNING: Removing unreachable block (ram,0x01e14028) */
/* WARNING: Removing unreachable block (ram,0x01e142c8) */
/* WARNING: Removing unreachable block (ram,0x01e142d4) */
/* WARNING: Removing unreachable block (ram,0x01e142d8) */
/* WARNING: Removing unreachable block (ram,0x01e142f4) */
/* WARNING: Removing unreachable block (ram,0x01e14308) */
/* WARNING: Removing unreachable block (ram,0x01e14348) */
/* WARNING: Removing unreachable block (ram,0x01e1434c) */
/* WARNING: Removing unreachable block (ram,0x01e1428c) */
/* WARNING: Removing unreachable block (ram,0x01e14298) */
/* WARNING: Removing unreachable block (ram,0x01e1429c) */
/* WARNING: Removing unreachable block (ram,0x01e142b4) */
/* WARNING: Removing unreachable block (ram,0x01e142b8) */
/* WARNING: Removing unreachable block (ram,0x01e14250) */
/* WARNING: Removing unreachable block (ram,0x01e1425c) */
/* WARNING: Removing unreachable block (ram,0x01e14260) */
/* WARNING: Removing unreachable block (ram,0x01e14278) */
/* WARNING: Removing unreachable block (ram,0x01e1427c) */
/* WARNING: Removing unreachable block (ram,0x01e14038) */
/* WARNING: Removing unreachable block (ram,0x01e14044) */
/* WARNING: Removing unreachable block (ram,0x01e14048) */
/* WARNING: Removing unreachable block (ram,0x01e14060) */
/* WARNING: Removing unreachable block (ram,0x01e14064) */
/* WARNING: Removing unreachable block (ram,0x01e1464c) */
/* WARNING: Removing unreachable block (ram,0x01e14658) */
/* WARNING: Removing unreachable block (ram,0x01e1465c) */
/* WARNING: Removing unreachable block (ram,0x01e14674) */
/* WARNING: Removing unreachable block (ram,0x01e14678) */
/* WARNING: Removing unreachable block (ram,0x01e14030) */
/* WARNING: Removing unreachable block (ram,0x01e14530) */
/* WARNING: Removing unreachable block (ram,0x01e1453c) */
/* WARNING: Removing unreachable block (ram,0x01e14540) */
/* WARNING: Removing unreachable block (ram,0x01e1455c) */
/* WARNING: Removing unreachable block (ram,0x01e14570) */
/* WARNING: Removing unreachable block (ram,0x01e14590) */
/* WARNING: Removing unreachable block (ram,0x01e14594) */
/* WARNING: Removing unreachable block (ram,0x01e145ac) */
/* WARNING: Removing unreachable block (ram,0x01e144f4) */
/* WARNING: Removing unreachable block (ram,0x01e14500) */
/* WARNING: Removing unreachable block (ram,0x01e14504) */
/* WARNING: Removing unreachable block (ram,0x01e1451c) */
/* WARNING: Removing unreachable block (ram,0x01e14520) */
/* WARNING: Removing unreachable block (ram,0x01e144b8) */
/* WARNING: Removing unreachable block (ram,0x01e144c4) */
/* WARNING: Removing unreachable block (ram,0x01e144c8) */
/* WARNING: Removing unreachable block (ram,0x01e144e0) */
/* WARNING: Removing unreachable block (ram,0x01e144e4) */
/* WARNING: Removing unreachable block (ram,0x01e13de0) */
/* WARNING: Removing unreachable block (ram,0x01e145b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e13794(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
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
  
  iVar1 = func_0x0229f06c(0x15fa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x15fa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02174108:
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
    iVar11 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_38,uVar8,0,0);
    return;
  }
  *(int *)(param_1 + 0x2c) = param_2;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x0210e2d4(iVar1,0);
  param_2 = *(int *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar12;
  *(undefined2 *)(param_1 + 0x30) = 0;
  pcVar9 = (char *)(_UNK_01e14688 + 0x1e1384c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1468c + 0x1e13860));
    func_0x01384978(*(undefined4 *)(_UNK_01e14690 + 0x1e1386c));
    func_0x01384978(*(undefined4 *)(_UNK_01e14694 + 0x1e13878));
    func_0x01384978(*(undefined4 *)(_UNK_01e14698 + 0x1e13884));
    func_0x01384978(*(undefined4 *)(_UNK_01e1469c + 0x1e13890));
    func_0x01384978(*(undefined4 *)(_UNK_01e146a0 + 0x1e1389c));
    func_0x01384978(*(undefined4 *)(_UNK_01e146a4 + 0x1e138a8));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x15fe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x15fe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x02f67194(iVar1,**(undefined4 **)(_UNK_01e146a8 + 0x1e13918));
  *(undefined4 *)(param_1 + 0x40) = uVar12;
  func_0x01e15060(param_1);
  piVar2 = (int *)func_0x021566f4(0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x0210e2d4(param_2,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar10 = *(int **)(_UNK_01e146ac + 0x1e13970);
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar11 = *piVar10;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar11) {
        puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x108);
        goto LAB_01e139b8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar11,9);
LAB_01e139b8:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar12,puVar3[1]);
  piVar2 = (int *)func_0x021566f4(0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x0210e2d4(param_2,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar11 = *piVar2;
  iVar5 = *piVar10;
  uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
  if (uVar6 != 0) {
    piVar10 = (int *)(*(int *)(iVar11 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar5) {
        puVar3 = (undefined4 *)(iVar11 + *piVar10 * 8 + 0x100);
        goto LAB_01e13a54;
      }
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar5,8);
LAB_01e13a54:
  iVar11 = (*(code *)*puVar3)(piVar2,uVar12,puVar3[1]);
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = 0;
  uStack_30 = 0x3f800000;
  func_0x0267b750(iVar5,0x3f800000,0x3f800000,0x3f800000);
  piVar2 = *(int **)(param_1 + 0x1c);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)(*piVar2 + 0x17c);
  uStack_30 = 0x3f800000;
  (**(code **)(*piVar2 + 0x178))(piVar2,0x3f800000,0x3f800000,0x3f800000);
  iVar5 = *(int *)(param_1 + 0x1c);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0244fc34(iVar5,0);
  pcVar9 = (char *)(_UNK_01e146b0 + 0x1e13b04);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e146b4 + 0x1e13b18));
    *pcVar9 = '\x01';
  }
  iVar4 = *(int *)(**(int **)(_UNK_01e146b8 + 0x1e13b30) + 0x5c);
  uVar8 = *(undefined4 *)(iVar4 + 0xc);
  uVar13 = *(undefined4 *)(iVar4 + 0x10);
  uVar12 = *(undefined4 *)(iVar4 + 0x14);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uStack_30 = 0;
  func_0x024503a4(iVar5,uVar8,uVar13,uVar12);
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar5 = func_0x0210cd28(0,0);
    if (iVar5 != 0) {
      func_0x01384bf0();
      goto LAB_01e13ba0;
    }
LAB_01e13c80:
    func_0x01384bf0();
  }
  else {
    iVar5 = func_0x0210cd28(param_2,0);
    if (iVar5 != 0) {
LAB_01e13ba0:
      iVar5 = func_0x0210cd28(param_2,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar5 + 8) == 1) {
        iVar5 = *(int *)(param_1 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        piVar2 = (int *)func_0x0244fc34(iVar5,0);
        iVar5 = *(int *)(param_1 + 0x1c);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        piVar10 = (int *)func_0x0244fc34(iVar5,0);
        if (*(int *)(**(int **)(_UNK_01e146bc + 0x1e13c18) + 0x74) == 0) {
          func_0x01384ab4();
        }
        piVar7 = (int *)0x0;
        if ((piVar2 != (int *)0x0) &&
           (piVar7 = piVar2, *piVar2 != **(int **)(_UNK_01e146c0 + 0x1e13c38))) {
          piVar7 = (int *)0x0;
        }
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else if (*piVar10 != **(int **)(_UNK_01e146c0 + 0x1e13c38)) {
          piVar10 = (int *)0x0;
        }
        func_0x02084218(piVar7,piVar10,0);
      }
      if (param_2 == 0) goto LAB_01e13c80;
    }
  }
  iVar5 = func_0x02116a38(param_2,0);
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x0267b574(iVar4,0);
  if (iVar5 == 0) {
    func_0x020598b8(uVar12,0);
  }
  else {
    func_0x020593f0();
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar5 = func_0x0211015c(0,0);
    if (iVar5 != 0) goto LAB_01e13d30;
    func_0x01384bf0();
    iVar5 = func_0x02116a38(0,0);
    if (iVar5 != 0) goto LAB_01e13e04;
    func_0x01384bf0();
    iVar5 = func_0x0210e250(0,6,0,0);
    if (iVar5 != 0) goto LAB_01e1409c;
    func_0x01384bf0();
  }
  else {
    iVar5 = func_0x0211015c(param_2,0);
    if (iVar5 != 0) {
LAB_01e13d30:
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02450404(iVar1,1,0);
      func_0x01e15184(param_1,param_2);
      func_0x01e154e8(param_1,param_2);
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar12 = 1;
      goto SUB_0244ffe4;
    }
    iVar5 = func_0x02116a38(param_2,0);
    if (iVar5 != 0) {
LAB_01e13e04:
      iVar5 = *(int *)(param_1 + 0x14);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x02450404(iVar5,0,0);
      iVar5 = *(int *)(param_1 + 0x1c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar12 = 0;
      func_0x02450404(iVar5,1,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (iVar1 != 0) {
        uVar12 = *(undefined4 *)(iVar1 + 0x38);
      }
      func_0x01e156bc(param_1,*(undefined4 *)(iVar11 + 0x1c),uVar12);
      piVar2 = *(int **)(_UNK_01e146c4 + 0x1e13e78);
      iVar1 = *(int *)(param_1 + 0x1c);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar9 = (char *)(_UNK_01e146c8 + 0x1e13e98);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e146cc + 0x1e13eac));
        *pcVar9 = '\x01';
      }
      iVar11 = *piVar2;
      if (*(int *)(iVar11 + 0x74) == 0) {
        func_0x01384ab4();
        iVar11 = *piVar2;
      }
      uVar12 = *(undefined4 *)(*(int *)(iVar11 + 0x5c) + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x024524ec(iVar1,uVar12,0);
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      iVar11 = *(int *)(param_1 + 0x1c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      uVar12 = *(undefined4 *)(iVar11 + 0x80);
      if (*(int *)(**(int **)(_UNK_01e146d0 + 0x1e13f2c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar12 = func_0x0145b1cc(uVar12,0,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      goto SUB_0244ffe4;
    }
    iVar5 = func_0x0210e250(param_2,6,0,0);
    if (iVar5 != 0) {
LAB_01e1409c:
      iVar5 = *(int *)(param_1 + 0x14);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x02450404(iVar5,0,0);
      iVar5 = *(int *)(param_1 + 0x1c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar12 = 0;
      func_0x02450404(iVar5,1,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (iVar1 != 0) {
        uVar12 = *(undefined4 *)(iVar1 + 0x38);
      }
      func_0x01e156bc(param_1,*(undefined4 *)(iVar11 + 0x1c),uVar12);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_01e146dc + 0x1e14120));
      iVar11 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0211e720(iVar1,0);
      piVar2 = *(int **)(_UNK_01e146e0 + 0x1e14158);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (iVar1 == 0) {
        pcVar9 = (char *)(_UNK_01e146e4 + 0x1e141b0);
        if (*pcVar9 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e146e8 + 0x1e141c4));
          *pcVar9 = '\x01';
        }
        iVar1 = *piVar2;
        iVar5 = 0x3c;
      }
      else {
        pcVar9 = (char *)(_UNK_01e146ec + 0x1e1417c);
        if (*pcVar9 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e146f0 + 0x1e14190));
          *pcVar9 = '\x01';
        }
        iVar1 = *piVar2;
        iVar5 = 0x38;
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar2;
      }
      uVar12 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + iVar5);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x024524ec(iVar11,uVar12,0);
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar12 = 1;
      goto SUB_0244ffe4;
    }
  }
  iVar5 = func_0x0210e250(param_2,5,0,0);
  if (iVar5 == 0) {
    if (*(int *)(**(int **)(_UNK_01e14718 + 0x1e145c4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar12 = 0;
    iVar5 = func_0x01dda1cc(param_2,0);
    *(byte *)(param_1 + 0x31) = (byte)((uint)(iVar5 << 0x17) >> 0x1f);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 != 0) {
      uVar12 = *(undefined4 *)(iVar1 + 0x38);
    }
    func_0x01e156bc(param_1,*(undefined4 *)(iVar11 + 0x1c),uVar12);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x02450404(iVar5,0,0);
    iVar5 = *(int *)(param_1 + 0x1c);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 0;
    func_0x02450404(iVar5,1,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 != 0) {
      uVar12 = *(undefined4 *)(iVar1 + 0x38);
    }
    func_0x01e156bc(param_1,*(undefined4 *)(iVar11 + 0x1c),uVar12);
    piVar2 = *(int **)(_UNK_01e14700 + 0x1e143fc);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar9 = (char *)(_UNK_01e14704 + 0x1e1441c);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e14708 + 0x1e14430));
      *pcVar9 = '\x01';
    }
    iVar11 = *piVar2;
    if (*(int *)(iVar11 + 0x74) == 0) {
      func_0x01384ab4();
      iVar11 = *piVar2;
    }
    uVar12 = *(undefined4 *)(*(int *)(iVar11 + 0x5c) + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024524ec(iVar1,uVar12,0);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 1;
  }
SUB_0244ffe4:
  (*(code *)&UNK_05189da8)(iVar1,uVar12,0);
  return;
}



// ===== FAT.MBItemContent$$_RefreshRes RVA 0x1e03830 =====

/* WARNING: Possible PIC construction at 0x01e144b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e144f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e1452c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e14648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e14034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e1424c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e14288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e142c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e13f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e13da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e13ddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e13da4) */
/* WARNING: Removing unreachable block (ram,0x01e13db0) */
/* WARNING: Removing unreachable block (ram,0x01e13db4) */
/* WARNING: Removing unreachable block (ram,0x01e13dcc) */
/* WARNING: Removing unreachable block (ram,0x01e13dd0) */
/* WARNING: Removing unreachable block (ram,0x01e13f70) */
/* WARNING: Removing unreachable block (ram,0x01e13f88) */
/* WARNING: Removing unreachable block (ram,0x01e13f9c) */
/* WARNING: Removing unreachable block (ram,0x01e13fac) */
/* WARNING: Removing unreachable block (ram,0x01e13fb4) */
/* WARNING: Removing unreachable block (ram,0x01e13fc4) */
/* WARNING: Removing unreachable block (ram,0x01e13fc8) */
/* WARNING: Removing unreachable block (ram,0x01e13fe4) */
/* WARNING: Removing unreachable block (ram,0x01e13fe8) */
/* WARNING: Removing unreachable block (ram,0x01e14004) */
/* WARNING: Removing unreachable block (ram,0x01e14008) */
/* WARNING: Removing unreachable block (ram,0x01e14024) */
/* WARNING: Removing unreachable block (ram,0x01e14028) */
/* WARNING: Removing unreachable block (ram,0x01e142c8) */
/* WARNING: Removing unreachable block (ram,0x01e142d4) */
/* WARNING: Removing unreachable block (ram,0x01e142d8) */
/* WARNING: Removing unreachable block (ram,0x01e142f4) */
/* WARNING: Removing unreachable block (ram,0x01e14308) */
/* WARNING: Removing unreachable block (ram,0x01e14348) */
/* WARNING: Removing unreachable block (ram,0x01e1434c) */
/* WARNING: Removing unreachable block (ram,0x01e1428c) */
/* WARNING: Removing unreachable block (ram,0x01e14298) */
/* WARNING: Removing unreachable block (ram,0x01e1429c) */
/* WARNING: Removing unreachable block (ram,0x01e142b4) */
/* WARNING: Removing unreachable block (ram,0x01e142b8) */
/* WARNING: Removing unreachable block (ram,0x01e14250) */
/* WARNING: Removing unreachable block (ram,0x01e1425c) */
/* WARNING: Removing unreachable block (ram,0x01e14260) */
/* WARNING: Removing unreachable block (ram,0x01e14278) */
/* WARNING: Removing unreachable block (ram,0x01e1427c) */
/* WARNING: Removing unreachable block (ram,0x01e14038) */
/* WARNING: Removing unreachable block (ram,0x01e14044) */
/* WARNING: Removing unreachable block (ram,0x01e14048) */
/* WARNING: Removing unreachable block (ram,0x01e14060) */
/* WARNING: Removing unreachable block (ram,0x01e14064) */
/* WARNING: Removing unreachable block (ram,0x01e1464c) */
/* WARNING: Removing unreachable block (ram,0x01e14658) */
/* WARNING: Removing unreachable block (ram,0x01e1465c) */
/* WARNING: Removing unreachable block (ram,0x01e14674) */
/* WARNING: Removing unreachable block (ram,0x01e14678) */
/* WARNING: Removing unreachable block (ram,0x01e14030) */
/* WARNING: Removing unreachable block (ram,0x01e14530) */
/* WARNING: Removing unreachable block (ram,0x01e1453c) */
/* WARNING: Removing unreachable block (ram,0x01e14540) */
/* WARNING: Removing unreachable block (ram,0x01e1455c) */
/* WARNING: Removing unreachable block (ram,0x01e14570) */
/* WARNING: Removing unreachable block (ram,0x01e14590) */
/* WARNING: Removing unreachable block (ram,0x01e14594) */
/* WARNING: Removing unreachable block (ram,0x01e145ac) */
/* WARNING: Removing unreachable block (ram,0x01e144f4) */
/* WARNING: Removing unreachable block (ram,0x01e14500) */
/* WARNING: Removing unreachable block (ram,0x01e14504) */
/* WARNING: Removing unreachable block (ram,0x01e1451c) */
/* WARNING: Removing unreachable block (ram,0x01e14520) */
/* WARNING: Removing unreachable block (ram,0x01e144b8) */
/* WARNING: Removing unreachable block (ram,0x01e144c4) */
/* WARNING: Removing unreachable block (ram,0x01e144c8) */
/* WARNING: Removing unreachable block (ram,0x01e144e0) */
/* WARNING: Removing unreachable block (ram,0x01e144e4) */
/* WARNING: Removing unreachable block (ram,0x01e13de0) */
/* WARNING: Removing unreachable block (ram,0x01e145b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e13830(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
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
  
  pcVar9 = (char *)(_UNK_01e14688 + 0x1e1384c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1468c + 0x1e13860));
    func_0x01384978(*(undefined4 *)(_UNK_01e14690 + 0x1e1386c));
    func_0x01384978(*(undefined4 *)(_UNK_01e14694 + 0x1e13878));
    func_0x01384978(*(undefined4 *)(_UNK_01e14698 + 0x1e13884));
    func_0x01384978(*(undefined4 *)(_UNK_01e1469c + 0x1e13890));
    func_0x01384978(*(undefined4 *)(_UNK_01e146a0 + 0x1e1389c));
    func_0x01384978(*(undefined4 *)(_UNK_01e146a4 + 0x1e138a8));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x15fe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x15fe,0);
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
    iVar11 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_38,uVar8,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x02f67194(iVar1,**(undefined4 **)(_UNK_01e146a8 + 0x1e13918));
  *(undefined4 *)(param_1 + 0x40) = uVar12;
  func_0x01e15060(param_1);
  piVar2 = (int *)func_0x021566f4(0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x0210e2d4(param_2,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar10 = *(int **)(_UNK_01e146ac + 0x1e13970);
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar11 = *piVar10;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar11) {
        puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x108);
        goto LAB_01e139b8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar11,9);
LAB_01e139b8:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar12,puVar3[1]);
  piVar2 = (int *)func_0x021566f4(0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x0210e2d4(param_2,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar11 = *piVar2;
  iVar5 = *piVar10;
  uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
  if (uVar6 != 0) {
    piVar10 = (int *)(*(int *)(iVar11 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar5) {
        puVar3 = (undefined4 *)(iVar11 + *piVar10 * 8 + 0x100);
        goto LAB_01e13a54;
      }
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar5,8);
LAB_01e13a54:
  iVar11 = (*(code *)*puVar3)(piVar2,uVar12,puVar3[1]);
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = 0;
  uStack_30 = 0x3f800000;
  func_0x0267b750(iVar5,0x3f800000,0x3f800000,0x3f800000);
  piVar2 = *(int **)(param_1 + 0x1c);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)(*piVar2 + 0x17c);
  uStack_30 = 0x3f800000;
  (**(code **)(*piVar2 + 0x178))(piVar2,0x3f800000,0x3f800000,0x3f800000);
  iVar5 = *(int *)(param_1 + 0x1c);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0244fc34(iVar5,0);
  pcVar9 = (char *)(_UNK_01e146b0 + 0x1e13b04);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e146b4 + 0x1e13b18));
    *pcVar9 = '\x01';
  }
  iVar4 = *(int *)(**(int **)(_UNK_01e146b8 + 0x1e13b30) + 0x5c);
  uVar8 = *(undefined4 *)(iVar4 + 0xc);
  uVar13 = *(undefined4 *)(iVar4 + 0x10);
  uVar12 = *(undefined4 *)(iVar4 + 0x14);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uStack_30 = 0;
  func_0x024503a4(iVar5,uVar8,uVar13,uVar12);
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar5 = func_0x0210cd28(0,0);
    if (iVar5 != 0) {
      func_0x01384bf0();
      goto LAB_01e13ba0;
    }
LAB_01e13c80:
    func_0x01384bf0();
  }
  else {
    iVar5 = func_0x0210cd28(param_2,0);
    if (iVar5 != 0) {
LAB_01e13ba0:
      iVar5 = func_0x0210cd28(param_2,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar5 + 8) == 1) {
        iVar5 = *(int *)(param_1 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        piVar2 = (int *)func_0x0244fc34(iVar5,0);
        iVar5 = *(int *)(param_1 + 0x1c);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        piVar10 = (int *)func_0x0244fc34(iVar5,0);
        if (*(int *)(**(int **)(_UNK_01e146bc + 0x1e13c18) + 0x74) == 0) {
          func_0x01384ab4();
        }
        piVar7 = (int *)0x0;
        if ((piVar2 != (int *)0x0) &&
           (piVar7 = piVar2, *piVar2 != **(int **)(_UNK_01e146c0 + 0x1e13c38))) {
          piVar7 = (int *)0x0;
        }
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else if (*piVar10 != **(int **)(_UNK_01e146c0 + 0x1e13c38)) {
          piVar10 = (int *)0x0;
        }
        func_0x02084218(piVar7,piVar10,0);
      }
      if (param_2 == 0) goto LAB_01e13c80;
    }
  }
  iVar5 = func_0x02116a38(param_2,0);
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar12 = func_0x0267b574(iVar4,0);
  if (iVar5 == 0) {
    func_0x020598b8(uVar12,0);
  }
  else {
    func_0x020593f0();
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar5 = func_0x0211015c(0,0);
    if (iVar5 != 0) goto LAB_01e13d30;
    func_0x01384bf0();
    iVar5 = func_0x02116a38(0,0);
    if (iVar5 != 0) goto LAB_01e13e04;
    func_0x01384bf0();
    iVar5 = func_0x0210e250(0,6,0,0);
    if (iVar5 != 0) goto LAB_01e1409c;
    func_0x01384bf0();
  }
  else {
    iVar5 = func_0x0211015c(param_2,0);
    if (iVar5 != 0) {
LAB_01e13d30:
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02450404(iVar1,1,0);
      func_0x01e15184(param_1,param_2);
      func_0x01e154e8(param_1,param_2);
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar12 = 1;
      goto SUB_0244ffe4;
    }
    iVar5 = func_0x02116a38(param_2,0);
    if (iVar5 != 0) {
LAB_01e13e04:
      iVar5 = *(int *)(param_1 + 0x14);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x02450404(iVar5,0,0);
      iVar5 = *(int *)(param_1 + 0x1c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar12 = 0;
      func_0x02450404(iVar5,1,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (iVar1 != 0) {
        uVar12 = *(undefined4 *)(iVar1 + 0x38);
      }
      func_0x01e156bc(param_1,*(undefined4 *)(iVar11 + 0x1c),uVar12);
      piVar2 = *(int **)(_UNK_01e146c4 + 0x1e13e78);
      iVar1 = *(int *)(param_1 + 0x1c);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar9 = (char *)(_UNK_01e146c8 + 0x1e13e98);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e146cc + 0x1e13eac));
        *pcVar9 = '\x01';
      }
      iVar11 = *piVar2;
      if (*(int *)(iVar11 + 0x74) == 0) {
        func_0x01384ab4();
        iVar11 = *piVar2;
      }
      uVar12 = *(undefined4 *)(*(int *)(iVar11 + 0x5c) + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x024524ec(iVar1,uVar12,0);
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      iVar11 = *(int *)(param_1 + 0x1c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      uVar12 = *(undefined4 *)(iVar11 + 0x80);
      if (*(int *)(**(int **)(_UNK_01e146d0 + 0x1e13f2c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar12 = func_0x0145b1cc(uVar12,0,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      goto SUB_0244ffe4;
    }
    iVar5 = func_0x0210e250(param_2,6,0,0);
    if (iVar5 != 0) {
LAB_01e1409c:
      iVar5 = *(int *)(param_1 + 0x14);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x02450404(iVar5,0,0);
      iVar5 = *(int *)(param_1 + 0x1c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar12 = 0;
      func_0x02450404(iVar5,1,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (iVar1 != 0) {
        uVar12 = *(undefined4 *)(iVar1 + 0x38);
      }
      func_0x01e156bc(param_1,*(undefined4 *)(iVar11 + 0x1c),uVar12);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_01e146dc + 0x1e14120));
      iVar11 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0211e720(iVar1,0);
      piVar2 = *(int **)(_UNK_01e146e0 + 0x1e14158);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (iVar1 == 0) {
        pcVar9 = (char *)(_UNK_01e146e4 + 0x1e141b0);
        if (*pcVar9 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e146e8 + 0x1e141c4));
          *pcVar9 = '\x01';
        }
        iVar1 = *piVar2;
        iVar5 = 0x3c;
      }
      else {
        pcVar9 = (char *)(_UNK_01e146ec + 0x1e1417c);
        if (*pcVar9 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e146f0 + 0x1e14190));
          *pcVar9 = '\x01';
        }
        iVar1 = *piVar2;
        iVar5 = 0x38;
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar2;
      }
      uVar12 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + iVar5);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x024524ec(iVar11,uVar12,0);
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar12 = 1;
      goto SUB_0244ffe4;
    }
  }
  iVar5 = func_0x0210e250(param_2,5,0,0);
  if (iVar5 == 0) {
    if (*(int *)(**(int **)(_UNK_01e14718 + 0x1e145c4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar12 = 0;
    iVar5 = func_0x01dda1cc(param_2,0);
    *(byte *)(param_1 + 0x31) = (byte)((uint)(iVar5 << 0x17) >> 0x1f);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 != 0) {
      uVar12 = *(undefined4 *)(iVar1 + 0x38);
    }
    func_0x01e156bc(param_1,*(undefined4 *)(iVar11 + 0x1c),uVar12);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x02450404(iVar5,0,0);
    iVar5 = *(int *)(param_1 + 0x1c);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 0;
    func_0x02450404(iVar5,1,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 != 0) {
      uVar12 = *(undefined4 *)(iVar1 + 0x38);
    }
    func_0x01e156bc(param_1,*(undefined4 *)(iVar11 + 0x1c),uVar12);
    piVar2 = *(int **)(_UNK_01e14700 + 0x1e143fc);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar9 = (char *)(_UNK_01e14704 + 0x1e1441c);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e14708 + 0x1e14430));
      *pcVar9 = '\x01';
    }
    iVar11 = *piVar2;
    if (*(int *)(iVar11 + 0x74) == 0) {
      func_0x01384ab4();
      iVar11 = *piVar2;
    }
    uVar12 = *(undefined4 *)(*(int *)(iVar11 + 0x5c) + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024524ec(iVar1,uVar12,0);
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 1;
  }
SUB_0244ffe4:
  (*(code *)&UNK_05189da8)(iVar1,uVar12,0);
  return;
}



// ===== FAT.MBItemContent$$ClearData RVA 0x1e0471c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1471c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01e14844 + 0x1e14730);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e14848 + 0x1e14744));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5d95,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5d95,0);
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
  func_0x01e14850(param_1);
  piVar4 = *(int **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar4 + 0xe8))(piVar4,*(undefined4 *)(*piVar4 + 0xec));
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e148c0(iVar1);
  piVar4 = *(int **)(_UNK_01e1484c + 0x1e147ec);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar6,0,0);
  if (iVar1 == 0) {
    return;
  }
  piVar4 = *(int **)(param_1 + 0x18);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x01e14840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0xe8))(piVar4,*(undefined4 *)(*piVar4 + 0xec));
  return;
}



// ===== FAT.MBItemContent$$StopDelayShowPopTip RVA 0x1e04850 =====

void FUN_01e14850(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5d96,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5d96,0);
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
  if (*(int *)(param_1 + 0x3c) != 0) {
    func_0x02450608(param_1,*(int *)(param_1 + 0x3c),0);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}



// ===== FAT.MBItemContent$$CoDelayShowPopTip RVA 0x1e049bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e149bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01e14a98 + 0x1e149e0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e14a9c + 0x1e149f8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa092,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e14aa0 + 0x1e14a64));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x14) = param_3;
    *(undefined4 *)(iVar1 + 0x18) = param_4;
    *(undefined4 *)(iVar1 + 0x1c) = param_1;
    *(undefined4 *)(iVar1 + 0x10) = param_2;
  }
  else {
    iVar1 = func_0x0229f13c(0xa092,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0228ba38(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar1;
}



// ===== FAT.MBItemContent.<CoDelayShowPopTip>d__26$$.ctor RVA 0x1e04aa4 =====

void FUN_01e14aa4(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MBItemContent$$ResolveNewItemTip RVA 0x1e04ac0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e14ac0(int param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar8 = (char *)(_UNK_01e15018 + 0x1e14ae4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1501c + 0x1e14af8));
    func_0x01384978(*(undefined4 *)(_UNK_01e15020 + 0x1e14b04));
    func_0x01384978(*(undefined4 *)(_UNK_01e15024 + 0x1e14b10));
    func_0x01384978(*(undefined4 *)(_UNK_01e15028 + 0x1e14b1c));
    func_0x01384978(*(undefined4 *)(_UNK_01e1502c + 0x1e14b28));
    func_0x01384978(*(undefined4 *)(_UNK_01e15030 + 0x1e14b34));
    func_0x01384978(*(undefined4 *)(_UNK_01e15034 + 0x1e14b40));
    func_0x01384978(*(undefined4 *)(_UNK_01e15038 + 0x1e14b4c));
    *pcVar8 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_44 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_40 = uStack_4c;
  uStack_3c = uStack_48;
  iVar2 = func_0x0229f06c(0xa099,0);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x31) != '\0') {
      iVar2 = *(int *)(param_1 + 0x2c);
      *(undefined1 *)(param_1 + 0x31) = 0;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_78,iVar2,0);
      uVar1 = uStack_74;
      uVar3 = uStack_78;
      FUN_01e14850(param_1);
      if (param_2 <= 0.0) {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (*(int *)(**(int **)(_UNK_01e1503c + 0x1e14c80) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x01dd876c(&uStack_78,uVar3,uVar1,0);
        iVar9 = **(int **)(_UNK_01e15040 + 0x1e14cb4);
        iVar10 = *(int *)(iVar9 + 0x1c);
        if (iVar10 == 0) {
          func_0x0140024c(iVar9);
          iVar10 = *(int *)(iVar9 + 0x1c);
        }
        iVar10 = *(int *)(iVar10 + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x014001f0();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar10 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x014001f0();
        }
        uVar3 = **(undefined4 **)(iVar10 + 0x5c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01ca1770(iVar2,2,uStack_78,uStack_74,uStack_70,uVar3,0);
      }
      else {
        uVar3 = FUN_01e149bc(param_1,param_2,uVar3,uVar1);
        uVar3 = func_0x02450640(param_1,uVar3,0);
        *(undefined4 *)(param_1 + 0x3c) = uVar3;
      }
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(param_1 + 0x2c);
      iVar2 = *(int *)(iVar2 + 0xc0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(iVar10 + 0x30);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01aa60d8(iVar2,uVar3,0);
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(param_1 + 0x2c);
      iVar2 = *(int *)(iVar2 + 0xc4);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(iVar10 + 0x30);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01ab8070(iVar2,uVar3,0);
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(param_1 + 0x2c);
      iVar2 = *(int *)(iVar2 + 200);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(iVar10 + 0x30);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01a6b8e4(iVar2,uVar3,0);
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0xd8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03cd6fc4(&uStack_50,iVar2,**(undefined4 **)(_UNK_01e15044 + 0x1e14e80));
      piVar11 = *(int **)(_UNK_01e15048 + 0x1e14ea0);
      while (iVar2 = func_0x01473bf8(&uStack_50,**(undefined4 **)(_UNK_01e15050 + 0x1e14ea8)),
            iVar2 != 0) {
        uStack_58 = uStack_3c;
        uStack_60 = uStack_44;
        uStack_5c = uStack_40;
        func_0x01483df8(&uStack_60,&uStack_68,&uStack_6c,
                        **(undefined4 **)(_UNK_01e1504c + 0x1e14ecc));
        piVar4 = (int *)func_0x01384ab8(uStack_6c,*piVar11);
        if (piVar4 != (int *)0x0) {
          iVar2 = *piVar4;
          iVar10 = *piVar11;
          uVar3 = *(undefined4 *)(param_1 + 0x2c);
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar7[-1] == iVar10) {
                puVar5 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xd0);
                goto LAB_01e14f50;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar4,iVar10,2);
LAB_01e14f50:
          (*(code *)*puVar5)(piVar4,uVar3,puVar5[1]);
        }
      }
      func_0x0245081c(&uStack_50,**(undefined4 **)(_UNK_01e15054 + 0x1e14f74));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa099,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0218670c(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBItemContent$$_ClearCoverState RVA 0x1e05060 =====

/* WARNING: Possible PIC construction at 0x01e15128: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e15060(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01e15178 + 0x1e15074);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1517c + 0x1e15088));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x15ff,0);
  if (iVar1 == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x40);
    if (*(int *)(**(int **)(_UNK_01e15180 + 0x1e150e0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar6,0,0);
    if (iVar1 == 0) {
      piVar4 = *(int **)(param_1 + 0x1c);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar4 + 0x1c8))(piVar4,0,*(undefined4 *)(*piVar4 + 0x1cc));
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    (*(code *)&UNK_051861e0)(iVar1,0,0);
    return;
  }
  iVar1 = func_0x0229f13c(0x15ff,0);
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



// ===== FAT.MBItemContent$$_TrySetLockCoverRes RVA 0x1e05184 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e15184(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01e154d0 + 0x1e151a0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e154d4 + 0x1e151b4));
    func_0x01384978(*(undefined4 *)(_UNK_01e154d8 + 0x1e151c0));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x1606,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1606,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  piVar8 = *(int **)(_UNK_01e154dc + 0x1e15220);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar8;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x4c);
  if (iVar2 != 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x40);
    if (*(int *)(**(int **)(_UNK_01e154e0 + 0x1e15250) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar6 = func_0x0145b1cc(uVar7,0,0);
    if (iVar6 != 0) {
      iVar6 = *(int *)(param_1 + 0x40);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x02450404(iVar6,1,0);
      piVar9 = *(int **)(param_1 + 0x1c);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar7 = func_0x01dd7740(0);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar9 + 0x1c8))(piVar9,uVar7,*(undefined4 *)(*piVar9 + 0x1cc));
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&iStack_30,param_2,0);
      iVar1 = iStack_2c;
      iVar6 = iStack_30;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0210cd28(param_2,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x020da680(&iStack_30,iVar3,0);
      iVar3 = *(int *)(param_1 + 0x40);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0267b03c(iVar3,iStack_30,iStack_2c,0);
      iVar3 = *(int *)(param_1 + 0x40);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 0;
      func_0x0267b118(iVar3,iStack_30 * iVar1 + iVar6,0);
      piVar8 = *(int **)(param_1 + 0x1c);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x02116cdc(param_2,0);
      if (iVar6 == 0) {
        if (*(int *)(**(int **)(_UNK_01e154e4 + 0x1e153bc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar7 = func_0x01dd7740(0);
      }
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar8 + 0x1c8))(piVar8,uVar7,*(undefined4 *)(*piVar8 + 0x1cc));
      goto LAB_01e15498;
    }
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar2 = func_0x02116cdc(0,0);
    if (iVar2 == 0) goto LAB_01e15470;
    func_0x01384bf0();
LAB_01e1543c:
    uVar7 = func_0x02116eb4(param_2,0);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x01ddb214(uVar7,0);
  }
  else {
    iVar2 = func_0x02116cdc(param_2,0);
    if (iVar2 != 0) goto LAB_01e1543c;
LAB_01e15470:
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x01ddb174(0);
  }
  if (iVar2 == 0) {
    func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_01e15498:
  uVar7 = *(undefined4 *)(iVar2 + 8);
  uVar4 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0267c498(iVar2,uVar7,uVar4,0);
  return;
}



// ===== FAT.MBItemContent$$_TrySetUnlockLevel RVA 0x1e054e8 =====

/* WARNING: Possible PIC construction at 0x01e1569c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e156a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e154e8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
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
  
  pcVar4 = (char *)(_UNK_01e156a8 + 0x1e15504);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e156ac + 0x1e15518));
    func_0x01384978(*(undefined4 *)(_UNK_01e156b0 + 0x1e15524));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x160e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x160e,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02116cdc(0,0);
    piVar5 = *(int **)(param_1 + 0x24);
    if (iVar1 != 0) goto LAB_01e155b8;
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02116cdc(param_2,0);
    piVar5 = *(int **)(param_1 + 0x24);
    if (iVar1 != 0) {
LAB_01e155b8:
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(piVar5,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = 0;
      goto SUB_0244ffe4;
    }
  }
  func_0x02116e50(param_2,0);
  uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_01e156b4 + 0x1e15614),&stack0xffffffec);
  uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_01e156b8 + 0x1e15638),uVar6,0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar5 + 0x2d0))(piVar5,uVar6,*(undefined4 *)(*piVar5 + 0x2d4));
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 1;
SUB_0244ffe4:
  (*(code *)&UNK_05189da8)(iVar1,uVar6,0);
  return;
}



// ===== FAT.MBItemContent$$_SetMainContent RVA 0x1e056bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e156bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  
  pcVar6 = (char *)(_UNK_01e15870 + 0x1e156dc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e15874 + 0x1e156f0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1610,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01489db8(param_3,0);
    if (iVar1 == 0) {
      iVar4 = *(int *)(param_1 + 0x2c);
      iVar1 = *(int *)(param_1 + 0x20);
      uVar5 = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x38) = 2;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(param_1 + 0x10);
      uVar8 = *(undefined4 *)(iVar4 + 0x30);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0244fc34(iVar7,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e1587c(iVar1,uVar5,uVar8,uVar2);
    }
    else {
      iVar1 = func_0x01489db8(param_2,0);
      if (iVar1 == 0) {
        piVar3 = *(int **)(_UNK_01e15878 + 0x1e157f8);
        *(undefined4 *)(param_1 + 0x38) = 1;
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x025550ec(param_2,0);
        iVar4 = *(int *)(param_1 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(iVar1 + 8);
        uVar8 = *(undefined4 *)(iVar1 + 0xc);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0267c498(iVar4,uVar5,uVar8,0);
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        uVar8 = *(undefined4 *)(param_1 + 0x34);
        iVar1 = func_0x0229f06c(0x1611,0,1,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0x1611,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x021d0378(iVar1,uVar5,uVar8,1,0);
        }
        return;
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1610,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBItemContent$$TrySetSweepMaskIcon RVA 0x1e059f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e159f8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
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
  
  pcVar6 = (char *)(_UNK_01e15c40 + 0x1e15a0c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e15c44 + 0x1e15a20));
    func_0x01384978(*(undefined4 *)(_UNK_01e15c48 + 0x1e15a2c));
    func_0x01384978(*(undefined4 *)(_UNK_01e15c4c + 0x1e15a38));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x96d3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96d3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  piVar8 = *(int **)(_UNK_01e15c50 + 0x1e15a90);
  iVar1 = param_1[0xb];
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0244fb8c(iVar1,0,0);
  if (iVar1 == 0) {
    iVar1 = param_1[6];
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0244fb8c(iVar1,0,0);
    if (iVar1 == 0) {
      piVar8 = (int *)func_0x021566f4(0);
      iVar1 = param_1[0xb];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x0210e2d4(iVar1,0);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01e15c54 + 0x1e15b44)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0x100);
            goto LAB_01e15b8c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01e15c54 + 0x1e15b44),8);
LAB_01e15b8c:
      iVar1 = (*(code *)*puVar2)(piVar8,uVar9,puVar2[1]);
      if (iVar1 != 0) {
        piVar8 = *(int **)(iVar1 + 0x1c);
      }
      if (iVar1 != 0 && piVar8 != (int *)0x0) {
        if (*(int *)(**(int **)(_UNK_01e15c58 + 0x1e15bc0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        piVar8 = (int *)func_0x025550ec(piVar8,0);
        if (piVar8 != (int *)0x0) {
          iVar1 = param_1[6];
          iVar10 = piVar8[2];
          iVar7 = piVar8[3];
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0267c310(iVar1,iVar10,iVar7,0);
          if (iVar1 == 0) {
            param_1 = (int *)param_1[6];
            if (param_1 == (int *)0x0) {
              func_0x01384bf0();
            }
            pcVar6 = (char *)(_UNK_0267ca90 + 0x267c9c8);
            if (*pcVar6 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_0267ca94 + 0x267c9dc),piVar8,0);
              *pcVar6 = '\x01';
            }
            iVar1 = func_0x0229f06c(0x42a,0);
            if (iVar1 == 0) {
              if (piVar8 == (int *)0x0) {
                iVar1 = **(int **)(_UNK_0267ca98 + 0x267ca60);
                iVar10 = 0;
                iVar7 = iVar1;
              }
              else {
                iVar10 = piVar8[3];
                iVar1 = **(int **)(_UNK_0267ca9c + 0x267ca4c);
                iVar7 = piVar8[2];
                if (piVar8[2] == 0) {
                  iVar7 = iVar1;
                }
              }
              if (iVar10 != 0) {
                iVar1 = iVar10;
              }
              if (param_1 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar10 = func_0x0229f06c(0x42b,0);
              if (iVar10 != 0) {
                iVar10 = func_0x0229f13c(0x42b,0);
                if (iVar10 == 0) {
                  func_0x01384bf0();
                }
                uStack_20 = 0;
                func_0x02174858(iVar10,param_1,iVar7,iVar1);
                return;
              }
              func_0x0267c530(param_1);
              param_1[0xc] = iVar7;
              *(undefined1 *)(param_1 + 0x10) = 1;
              param_1[0xd] = iVar1;
              func_0x0267c77c(param_1);
              pcVar6 = (char *)(_UNK_0267bec0 + 0x267bd74);
              if (*pcVar6 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_0267bec4 + 0x267bd88));
                func_0x01384978(*(undefined4 *)(_UNK_0267bec8 + 0x267bd94));
                *pcVar6 = '\x01';
              }
              iVar1 = func_0x0229f06c(0x434,0);
              if (iVar1 == 0) {
                func_0x0267cf20(param_1);
                iVar1 = func_0x0467229c(param_1[0xe],0);
                if (iVar1 == 0) {
                  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_0267becc + 0x267be3c));
                  iVar7 = param_1[0xe];
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  uVar9 = func_0x028c7930(iVar1,iVar7,0);
                  if (*(int *)(**(int **)(_UNK_0267bed0 + 0x267be74) + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  iVar1 = func_0x0145b1cc(uVar9,0,0);
                  if (iVar1 != 0) {
                    func_0x0267d3c8(param_1,uVar9);
                  }
                }
                else if ((param_1[10] != 0) && (iVar1 = func_0x028bc4d8(param_1[10],0), iVar1 != 0))
                {
                  if ((char)param_1[0xb] == '\0') {
                    func_0x0267dc58(param_1);
                  }
                  else {
                    func_0x0267d570(param_1);
                  }
                }
                iVar1 = func_0x0229f06c(0x430,0);
                if (iVar1 == 0) {
                  piVar4 = (int *)param_1[8];
                  if (piVar4 == (int *)0x0) {
                    return;
                  }
                  iVar1 = func_0x0229f06c(0x431,0);
                  if (iVar1 == 0) {
                    if (param_1 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar1 = func_0x0267b814(param_1);
                    if (iVar1 == 0) {
                      return;
                    }
                    uVar9 = (**(code **)(*piVar4 + 0xe8))(piVar4,*(undefined4 *)(*piVar4 + 0xec));
                    /* WARNING: Could not recover jumptable at 0x0267cf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(*piVar4 + 0x100))(piVar4,uVar9,*(undefined4 *)(*piVar4 + 0x104));
                    return;
                  }
                  iVar1 = func_0x0229f13c(0x431,0);
                  piVar8 = param_1;
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
              uVar9 = *(undefined4 *)(iVar1 + 0xc);
              iVar1 = *(int *)(iVar1 + 0x10);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              uVar5 = 2;
              if (iVar1 == 0) {
                uVar5 = 1;
              }
              uStack_50 = 0;
              uStack_4c = 0;
              func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5);
              return;
            }
            iVar1 = func_0x0229f13c(0x42a,0);
            piVar4 = param_1;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
SUB_02174108:
            uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_38 = 0;
            uStack_28 = 0;
            func_0x0245494c(&uStack_50,0,piVar8,0);
            uStack_38 = uStack_50;
            uStack_34 = uStack_4c;
            uStack_30 = uStack_48;
            uStack_2c = uStack_44;
            uStack_28 = uStack_40;
            if (*(int *)(iVar1 + 0x10) != 0) {
              func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
            }
            func_0x01485278(&uStack_38,piVar4,0);
            func_0x01485278(&uStack_38,piVar8,0);
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
            func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
            return;
          }
        }
      }
    }
  }
  return;
}



// ===== FAT.MBItemContent$$SetBornFromRewardList RVA 0x1e05c5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e15c5c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_01e15d2c + 0x1e15c70);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e15d30 + 0x1e15c84));
    func_0x01384978(*(undefined4 *)(_UNK_01e15d34 + 0x1e15c90));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ff0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ff0,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3);
    return;
  }
  iVar5 = *(int *)(param_1 + 0x20);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e15d38 + 0x1e15ce8));
  func_0x03ccb96c(iVar1,0,**(undefined4 **)(_UNK_01e15d3c + 0x1e15d08),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_01e15e1c + 0x1e15d58);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e15e20 + 0x1e15d6c));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9ff3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9ff3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar5,0);
    func_0x01485278(&uStack_38,iVar1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  uVar6 = *(undefined4 *)(iVar5 + 0x10);
  if (*(int *)(**(int **)(_UNK_01e15e24 + 0x1e15dc8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0145b1cc(uVar6,0,0);
  if (iVar2 == 0) {
    *(int *)(iVar5 + 0x18) = iVar1;
  }
  else if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01e15e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))
              (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar5 + 0x10),
               *(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.MBItemContent$$SetResAction RVA 0x1e05e28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e15e28(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0xa09b,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e15e1c + 0x1e15d58);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e15e20 + 0x1e15d6c));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x9ff3,0);
    if (iVar1 == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      if (*(int *)(**(int **)(_UNK_01e15e24 + 0x1e15dc8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(uVar5,0,0);
      if (iVar1 == 0) {
        *(int *)(param_1 + 0x18) = param_2;
      }
      else if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01e15e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_2 + 0xc))
                  (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x10),
                   *(undefined4 *)(param_2 + 0x14));
        return;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x9ff3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa09b,0);
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
  return;
}



// ===== FAT.MBItemContent$$ApplyFilter RVA 0x1e05e9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e15e9c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
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
  
  pcVar6 = (char *)(_UNK_01e15f78 + 0x1e15eb8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e15f7c + 0x1e15ecc));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x167e,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x167e,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  if (param_2 == 0) {
    piVar7 = *(int **)(_UNK_01e15f80 + 0x1e15f3c);
    iVar3 = *piVar7;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar7;
    }
    uVar8 = **(undefined4 **)(iVar3 + 0x5c);
  }
  else {
    uVar8 = 0x3f800000;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0229f06c(0x167f,0);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x44) = uVar8;
    uStack_38 = uVar8;
    if (*(int *)(param_1 + 0x38) == 1) {
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0267b6ac(&uStack_30,iVar3,0);
      uVar2 = uStack_28;
      uVar1 = uStack_2c;
      uVar4 = uStack_30;
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = 0;
      func_0x0267b750(iVar3,uVar4,uVar1,uVar2);
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0267b6ac(&uStack_30,iVar3,0);
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = 0;
      uStack_38 = uVar8;
      func_0x0267b750(iVar3,uStack_30,uStack_2c,uStack_28);
    }
    else if (*(int *)(param_1 + 0x38) == 2) {
      param_1 = *(int *)(param_1 + 0x20);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      pcVar6 = (char *)(_UNK_01e16350 + 0x1e1623c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e16354 + 0x1e16250));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x1681,0);
      if (iVar3 == 0) {
        uVar8 = *(undefined4 *)(param_1 + 0x28);
        if (*(int *)(**(int **)(_UNK_01e16358 + 0x1e162b0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = func_0x0145b1cc(uVar8,0,0);
        if (iVar3 != 0) {
          piVar7 = *(int **)(param_1 + 0x28);
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          (**(code **)(*piVar7 + 0x170))(&uStack_30,piVar7,*(undefined4 *)(*piVar7 + 0x174));
          piVar7 = *(int **)(param_1 + 0x28);
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          uStack_34 = *(undefined4 *)(*piVar7 + 0x17c);
          (**(code **)(*piVar7 + 0x178))(piVar7,uStack_30,uStack_2c,uStack_28);
        }
        return;
      }
      iVar3 = func_0x0229f13c(0x1681,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_0218670c;
    }
    return;
  }
  iVar3 = func_0x0229f13c(0x167f,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
SUB_0218670c:
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,uVar8,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485258(&uStack_38,uVar8,0);
  iVar5 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar5,uVar8,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.MBItemContent$$_SetAlpha RVA 0x1e05f84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e15f84(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
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
  
  iVar2 = func_0x0229f06c(0x167f,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x167f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
SUB_0218670c:
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x44) = param_2;
  uStack_38 = param_2;
  if (*(int *)(param_1 + 0x38) == 1) {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0267b6ac(&uStack_30,iVar2,0);
    uVar1 = uStack_28;
    uVar3 = uStack_2c;
    uVar7 = uStack_30;
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = 0;
    func_0x0267b750(iVar2,uVar7,uVar3,uVar1);
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0267b6ac(&uStack_30,iVar2,0);
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = 0;
    uStack_38 = param_2;
    func_0x0267b750(iVar2,uStack_30,uStack_2c,uStack_28);
  }
  else if (*(int *)(param_1 + 0x38) == 2) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01e16350 + 0x1e1623c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e16354 + 0x1e16250));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x1681,0);
    if (iVar2 == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x28);
      if (*(int *)(**(int **)(_UNK_01e16358 + 0x1e162b0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0145b1cc(uVar7,0,0);
      if (iVar2 != 0) {
        piVar6 = *(int **)(param_1 + 0x28);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar6 + 0x170))(&uStack_30,piVar6,*(undefined4 *)(*piVar6 + 0x174));
        piVar6 = *(int **)(param_1 + 0x28);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)(*piVar6 + 0x17c);
        (**(code **)(*piVar6 + 0x178))(piVar6,uStack_30,uStack_2c,uStack_28);
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x1681,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto SUB_0218670c;
  }
  return;
}



// ===== FAT.MBItemContent$$RemoveFilter RVA 0x1e060d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e160d4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
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
  
  iVar2 = func_0x0229f06c(0x5da5,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5da5,0);
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
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
    return;
  }
  iVar2 = func_0x0229f06c(0x167f,0);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
    if (*(int *)(param_1 + 0x38) == 1) {
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0267b6ac(&uStack_30,iVar2,0);
      uVar1 = uStack_28;
      uVar3 = uStack_2c;
      uVar7 = uStack_30;
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0x3f800000;
      uStack_34 = 0;
      func_0x0267b750(iVar2,uVar7,uVar3,uVar1);
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0267b6ac(&uStack_30,iVar2,0);
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0x3f800000;
      uStack_34 = 0;
      func_0x0267b750(iVar2,uStack_30,uStack_2c,uStack_28);
    }
    else if (*(int *)(param_1 + 0x38) == 2) {
      param_1 = *(int *)(param_1 + 0x20);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      pcVar5 = (char *)(_UNK_01e16350 + 0x1e1623c);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e16354 + 0x1e16250));
        *pcVar5 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x1681,0);
      if (iVar2 == 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x28);
        if (*(int *)(**(int **)(_UNK_01e16358 + 0x1e162b0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0145b1cc(uVar7,0,0);
        if (iVar2 != 0) {
          piVar6 = *(int **)(param_1 + 0x28);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          (**(code **)(*piVar6 + 0x170))(&uStack_30,piVar6,*(undefined4 *)(*piVar6 + 0x174));
          piVar6 = *(int **)(param_1 + 0x28);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          uStack_34 = *(undefined4 *)(*piVar6 + 0x17c);
          uStack_38 = 0x3f800000;
          (**(code **)(*piVar6 + 0x178))(piVar6,uStack_30,uStack_2c,uStack_28);
        }
        return;
      }
      iVar2 = func_0x0229f13c(0x1681,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      goto SUB_0218670c;
    }
    return;
  }
  iVar2 = func_0x0229f13c(0x167f,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
SUB_0218670c:
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0x3f800000,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485258(&uStack_38,0x3f800000,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
  return;
}



// ===== FAT.MBItemContent$$get_CurAlpha RVA 0x1e06130 =====

undefined4 FUN_01e16130(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.MBItemContent$$set_CurAlpha RVA 0x1e06138 =====

void FUN_01e16138(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// ===== FAT.MBItemContent$$TweenSetAlpha RVA 0x1e06140 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e16140(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
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
  
  pcVar5 = (char *)(_UNK_01e16214 + 0x1e16158);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e16218 + 0x1e1616c));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x8182,0);
  if (iVar2 == 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
    if (*(int *)(**(int **)(_UNK_01e1621c + 0x1e161c8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244fb8c(uVar7,0,0);
    if (iVar2 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x34) < 1) {
      return;
    }
    iVar2 = func_0x0229f06c(0x167f,0);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x44) = param_2;
      uStack_38 = param_2;
      if (*(int *)(param_1 + 0x38) == 1) {
        iVar2 = *(int *)(param_1 + 0x10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0267b6ac(&uStack_30,iVar2,0);
        uVar1 = uStack_28;
        uVar3 = uStack_2c;
        uVar7 = uStack_30;
        iVar2 = *(int *)(param_1 + 0x10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = 0;
        func_0x0267b750(iVar2,uVar7,uVar3,uVar1);
        iVar2 = *(int *)(param_1 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0267b6ac(&uStack_30,iVar2,0);
        iVar2 = *(int *)(param_1 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = 0;
        uStack_38 = param_2;
        func_0x0267b750(iVar2,uStack_30,uStack_2c,uStack_28);
      }
      else if (*(int *)(param_1 + 0x38) == 2) {
        param_1 = *(int *)(param_1 + 0x20);
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        pcVar5 = (char *)(_UNK_01e16350 + 0x1e1623c);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e16354 + 0x1e16250));
          *pcVar5 = '\x01';
        }
        iVar2 = func_0x0229f06c(0x1681,0);
        if (iVar2 == 0) {
          uVar7 = *(undefined4 *)(param_1 + 0x28);
          if (*(int *)(**(int **)(_UNK_01e16358 + 0x1e162b0) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar2 = func_0x0145b1cc(uVar7,0,0);
          if (iVar2 != 0) {
            piVar6 = *(int **)(param_1 + 0x28);
            if (piVar6 == (int *)0x0) {
              func_0x01384bf0();
            }
            (**(code **)(*piVar6 + 0x170))(&uStack_30,piVar6,*(undefined4 *)(*piVar6 + 0x174));
            piVar6 = *(int **)(param_1 + 0x28);
            if (piVar6 == (int *)0x0) {
              func_0x01384bf0();
            }
            uStack_34 = *(undefined4 *)(*piVar6 + 0x17c);
            (**(code **)(*piVar6 + 0x178))(piVar6,uStack_30,uStack_2c,uStack_28);
          }
          return;
        }
        iVar2 = func_0x0229f13c(0x1681,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        goto SUB_0218670c;
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x167f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8182,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
SUB_0218670c:
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485258(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
  return;
}



// ===== FAT.MBItemContent$$.ctor RVA 0x1e0635c =====

void FUN_01e1635c(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.MBItemContent$$.cctor RVA 0x1e0636c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1636c(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01e163b4 + 0x1e1637c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e163b8 + 0x1e16390));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_01e163bc + 0x1e163a8) + 0x5c) = 0x3f000000;
  return;
}



// ===== FAT.MBItemContent.<CoDelayShowPopTip>d__26$$System.IDisposable.Dispose RVA 0x1e063c0 =====

void FUN_01e163c0(void)

{
  return;
}



// ===== FAT.MBItemContent.<CoDelayShowPopTip>d__26$$MoveNext RVA 0x1e063c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e163c4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01e1657c + 0x1e163dc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e16580 + 0x1e163f0));
    func_0x01384978(*(undefined4 *)(_UNK_01e16584 + 0x1e163fc));
    func_0x01384978(*(undefined4 *)(_UNK_01e16588 + 0x1e16408));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar8 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (*(int *)(**(int **)(_UNK_01e16590 + 0x1e16494) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dd876c(&uStack_2c,uVar2,uVar6,0);
    iVar7 = **(int **)(_UNK_01e16594 + 0x1e164d0);
    iVar4 = *(int *)(iVar7 + 0x1c);
    if (iVar4 == 0) {
      func_0x0140024c(iVar7);
      iVar4 = *(int *)(iVar7 + 0x1c);
    }
    iVar4 = *(int *)(iVar4 + 8);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x014001f0();
    }
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x014001f0();
    }
    uVar2 = **(undefined4 **)(iVar4 + 0x5c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 0;
    func_0x01ca1770(iVar3,2,uStack_2c,uStack_28,uStack_24,uVar2,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar8 + 0x3c) = 0;
  }
  else {
    uVar6 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_01e1658c + 0x1e16438);
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar2 = func_0x01384be4(*puVar1);
      func_0x0245031c(uVar2,uVar6,0);
      uVar6 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar6;
}



// ===== FAT.MBItemContent.<CoDelayShowPopTip>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1e06598 =====

undefined4 FUN_01e16598(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBItemContent.<CoDelayShowPopTip>d__26$$System.Collections.IEnumerator.Reset RVA 0x1e065a0 =====

undefined4 FUN_01e165a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam01e165dc + 0x1e165b0));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam01e165e0 + 0x1e165cc));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.MBItemContent.<CoDelayShowPopTip>d__26$$System.Collections.IEnumerator.get_Current RVA 0x1e065e4 =====

undefined4 FUN_01e165e4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


