/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.WishBoardItemSpawnBonusHandler$$.ctor RVA 0x2a9acf8 =====

void FUN_02aaacf8(int param_1,undefined4 param_2)

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
  
  func_0x021552f4(param_1,0);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  iVar1 = func_0x0229f06c(0x5b3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b3,0);
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
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// ===== FAT.WishBoardItemSpawnBonusHandler$$IsValid RVA 0x2a9d4e8 =====

undefined4 FUN_02aad4e8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
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
  
  iVar1 = func_0x0229f06c(0x6f5a,0);
  if (iVar1 == 0) {
    param_1 = (int *)param_1[5];
    if (param_1 == (int *)0x0) {
      return 0;
    }
    uVar4 = 0;
    iVar1 = func_0x0229f06c(0x128,0);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      if (iVar1 != 0) {
        uVar6 = func_0x02b4cec4(param_1);
        iVar1 = (int)((ulonglong)uVar6 >> 0x20);
        bVar5 = (int)uVar6 != 0;
        uVar4 = 0;
        if ((int)-(iVar1 + (uint)bVar5) < 0 != (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar5)))
        {
          uVar4 = 1;
        }
      }
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0x128,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6f5a,0);
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



// ===== FAT.WishBoardItemSpawnBonusHandler$$GetActivityCostId RVA 0x2a9d554 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aad554(int param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_02aad628 + 0x2aad56c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aad62c + 0x2aad580));
    func_0x01384978(*(undefined4 *)(_UNK_02aad630 + 0x2aad58c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f5b,0);
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0xb4);
    }
    uStack_14 = 0;
    if (iVar3 != 0 && iVar1 != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 0x24),
                      **(undefined4 **)(_UNK_02aad634 + 0x2aad600));
    }
    return uStack_14;
  }
  iVar1 = func_0x0229f13c(0x6f5b,0);
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
  uVar5 = func_0x0245498c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.WishBoardItemSpawnBonusHandler$$EnsureOutputMap RVA 0x2a9d638 =====

/* WARNING: Removing unreachable block (ram,0x02156cd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aad638(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 uVar12;
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
  
  pcVar10 = (char *)(_UNK_02aad79c + 0x2aad64c);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aad7a0 + 0x2aad660));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x6f5c,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x6f5c,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar3 + 8);
    uVar12 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar3 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar9,uVar12,&uStack_30,uVar8,0,0);
    return;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (iVar3 == 0) {
    func_0x01384bf0();
    iVar3 = *(int *)(param_1 + 0x14);
    iVar9 = iRam000000dc;
    if (iVar3 != 0) goto joined_r0x02aad6f8;
    func_0x01384bf0();
    iVar3 = 0;
  }
  else {
    iVar9 = *(int *)(iVar3 + 0xdc);
joined_r0x02aad6f8:
    if (iVar9 != 2) {
      if (*(int *)(iVar3 + 0xdc) != 1) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = FUN_02a9ea20(iVar3);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      piVar5 = *(int **)(iVar3 + 0x58);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      if (piVar5[3] == 0) {
        return;
      }
      piVar11 = *(int **)(param_1 + 0x10);
      goto SUB_021568f0;
    }
  }
  iVar3 = FUN_02aaad20(iVar3);
  piVar11 = *(int **)(param_1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  piVar5 = *(int **)(iVar3 + 0x18);
SUB_021568f0:
  pcVar10 = (char *)(_UNK_02156db8 + 0x2156910);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02156dbc + 0x2156924),piVar11,piVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_02156dc0 + 0x2156930));
    func_0x01384978(*(undefined4 *)(_UNK_02156dc4 + 0x215693c));
    func_0x01384978(*(undefined4 *)(_UNK_02156dc8 + 0x2156948));
    func_0x01384978(*(undefined4 *)(_UNK_02156dcc + 0x2156954));
    func_0x01384978(*(undefined4 *)(_UNK_02156dd0 + 0x2156960));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x6f5d,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x6f5d,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = 0;
    func_0x02174858(iVar3,param_1,piVar11,piVar5);
    return;
  }
  if (piVar11 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar11;
  uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_02156dd4 + 0x21569d4)) {
        puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xd8);
        goto LAB_02156a1c;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02156dd4 + 0x21569d4),3);
LAB_02156a1c:
  (*(code *)*puVar2)(piVar11,puVar2[1]);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar5;
  uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_02156dd8 + 0x2156a48)) {
        puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
        goto LAB_02156a90;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02156dd8 + 0x2156a48),0);
LAB_02156a90:
  piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
  piVar6 = *(int **)(_UNK_02156ddc + 0x2156ab4);
  do {
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar6) {
          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_02156b0c;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar6,0);
LAB_02156b0c:
    iVar3 = (*(code *)*puVar2)(piVar5,puVar2[1]);
    if (iVar3 == 0) break;
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02156de0 + 0x2156b40)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_02156b88;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02156de0 + 0x2156b40),0);
LAB_02156b88:
    uVar12 = (*(code *)*puVar2)(piVar5,puVar2[1]);
    if (*(int *)(**(int **)(_UNK_02156de4 + 0x2156ba8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar12,0);
    uVar1 = uStack_28;
    uVar8 = uStack_2c;
    uVar12 = uStack_30;
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02156de8 + 0x2156bf0)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xd0);
          goto LAB_02156c38;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02156de8 + 0x2156bf0),2);
LAB_02156c38:
    uStack_38 = puVar2[1];
    (*(code *)*puVar2)(piVar11,uVar12,uVar8,uVar1);
  } while( true );
  if (piVar5 == (int *)0x0) {
    return;
  }
  iVar3 = *piVar5;
  uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar4 != 0) {
    piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar11[-1] == **(int **)(_UNK_02156dec + 0x2156c78)) {
        puVar2 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xc0);
        goto LAB_02156cc0;
      }
      uVar4 = uVar4 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02156dec + 0x2156c78),0);
LAB_02156cc0:
  (*(code *)*puVar2)(piVar5,puVar2[1]);
  return;
}



// ===== FAT.WishBoardItemSpawnBonusHandler$$GetRewardReason RVA 0x2a9d7a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02aad7a4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02aad844 + 0x2aad7b8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aad848 + 0x2aad7cc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f5e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f5e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_0221b1d4 + 0x221b0f4);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0221b1d8 + 0x221b108),param_1,0);
      *pcVar5 = '\x01';
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
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0221b1dc + 0x221b1c4));
    return uVar6;
  }
  piVar3 = *(int **)(_UNK_02aad84c + 0x2aad824);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x2b8);
}



// ===== FAT.WishBoardItemSpawnBonusHandler$$GetFlyType RVA 0x2a9d850 =====

undefined4 FUN_02aad850(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x6f5f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6f5f,0);
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
  return 0x33;
}



// ===== FAT.WishBoardItemSpawnBonusHandler$$OnItemSpawned RVA 0x2a9d8a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02aad8a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02aada80 + 0x2aad8c4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02aada84 + 0x2aad8dc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6f60,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
      uStack_28 = FUN_02a9eaac(0);
      func_0x01384bf0();
    }
    else {
      uStack_28 = FUN_02a9eaac(iVar1);
    }
    iVar2 = FUN_02a9ea20(iVar1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_02a9ea20(iVar1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar8 = *(undefined4 *)(iVar2 + 0x24);
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01dbb000(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02139cf4(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar2 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = FUN_02aaa0d8(iVar1);
    uVar4 = func_0x02157e88(param_2,0);
    func_0x019bade0(iVar1,uStack_28 + 1,uVar7,uVar8,uVar6,1,uVar3,param_2,uVar4,param_3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x6f60,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.WishBoardItemSpawnBonusHandler$$<>iFixBaseProxy_OnItemSpawned RVA 0x2a9da88 =====

void FUN_02aada88(void)

{
  func_0x02155d3c();
  return;
}


