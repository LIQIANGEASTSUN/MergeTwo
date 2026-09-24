/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MiniBoardMultiBonusHandler$$RefreshOutputsInfo RVA 0x214a4a8 =====

/* WARNING: Removing unreachable block (ram,0x02156cd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215a4a8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
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
  
  iVar3 = func_0x0229f06c(0x7aab,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x7aab,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar3 + 8);
    uVar12 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar3 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_38,uVar9,0,0);
    return;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01ca8db0(iVar3,param_2,0);
  if (iVar3 == 0) {
    return;
  }
  piVar6 = *(int **)(iVar3 + 0x18);
  piVar4 = *(int **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  pcVar10 = (char *)(_UNK_02156db8 + 0x2156910);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02156dbc + 0x2156924));
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
    func_0x02174858(iVar3,param_1,piVar4,piVar6);
    return;
  }
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar4;
  uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_02156dd4 + 0x21569d4)) {
        puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xd8);
        goto LAB_02156a1c;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_02156dd4 + 0x21569d4),3);
LAB_02156a1c:
  (*(code *)*puVar2)(piVar4,puVar2[1]);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar6;
  uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_02156dd8 + 0x2156a48)) {
        puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
        goto LAB_02156a90;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02156dd8 + 0x2156a48),0);
LAB_02156a90:
  piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
  piVar7 = *(int **)(_UNK_02156ddc + 0x2156ab4);
  do {
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_02156b0c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,*piVar7,0);
LAB_02156b0c:
    iVar3 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    if (iVar3 == 0) break;
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02156de0 + 0x2156b40)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_02156b88;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02156de0 + 0x2156b40),0);
LAB_02156b88:
    uVar12 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    if (*(int *)(**(int **)(_UNK_02156de4 + 0x2156ba8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar12,0);
    uVar1 = uStack_28;
    uVar9 = uStack_2c;
    uVar12 = uStack_30;
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar4;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_02156de8 + 0x2156bf0)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xd0);
          goto LAB_02156c38;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_02156de8 + 0x2156bf0),2);
LAB_02156c38:
    uStack_38 = puVar2[1];
    (*(code *)*puVar2)(piVar4,uVar12,uVar9,uVar1);
  } while( true );
  if (piVar6 != (int *)0x0) {
    iVar3 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar4 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_02156dec + 0x2156c78)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar4 * 8 + 0xc0);
          goto LAB_02156cc0;
        }
        uVar5 = uVar5 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02156dec + 0x2156c78),0);
LAB_02156cc0:
    (*(code *)*puVar2)(piVar6,puVar2[1]);
  }
  return;
}



// ===== FAT.Merge.MiniBoardMultiBonusHandler$$IsValid RVA 0x214a558 =====

uint FUN_0215a558(int param_1)

{
  int iVar1;
  uint uVar2;
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
  
  iVar1 = func_0x0229f06c(0xb4ab,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4ab,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)(0 < *(int *)(param_1 + 0x14));
}



// ===== FAT.Merge.MiniBoardMultiBonusHandler$$GetActivityCostId RVA 0x214a5bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215a5bc(undefined4 param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_0215a6b4 + 0x215a5d4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215a6b8 + 0x215a5e8));
    func_0x01384978(*(undefined4 *)(_UNK_0215a6bc + 0x215a5f4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4ac,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 8);
    uStack_14 = 0;
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0x3c);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 0x1c),
                      **(undefined4 **)(_UNK_0215a6c0 + 0x215a690));
    }
    return uStack_14;
  }
  iVar1 = func_0x0229f13c(0xb4ac,0);
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
  uVar5 = func_0x0245498c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.Merge.MiniBoardMultiBonusHandler$$EnsureOutputMap RVA 0x214a6c4 =====

void FUN_0215a6c4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4ad,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb4ad,0);
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



// ===== FAT.Merge.MiniBoardMultiBonusHandler$$GetRewardReason RVA 0x214a710 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215a710(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_0215a7b0 + 0x215a724);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215a7b4 + 0x215a738));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4ae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4ae,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0221b1d4 + 0x221b0f4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0221b1d8 + 0x221b108),param_1,0);
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
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0221b1dc + 0x221b1c4));
    return uVar6;
  }
  piVar3 = *(int **)(_UNK_0215a7b8 + 0x215a790);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x124);
}



// ===== FAT.Merge.MiniBoardMultiBonusHandler$$GetFlyType RVA 0x214a7bc =====

undefined4 FUN_0215a7bc(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4af,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4af,0);
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
  return 0x1b;
}



// ===== FAT.Merge.MiniBoardMultiBonusHandler$$OnUnRegister RVA 0x214a810 =====

void FUN_0215a810(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4b0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4b0,0);
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
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// ===== FAT.Merge.MiniBoardMultiBonusHandler$$OnItemSpawned RVA 0x214a868 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215a868(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_0215a9ec + 0x215a888);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215a9f0 + 0x215a8a0));
    func_0x01384978(*(undefined4 *)(_UNK_0215a9f4 + 0x215a8ac));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4b1,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar1 + 8);
    if (param_4 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    if ((*(int *)(param_4 + 0x10) != 0) &&
       (iVar1 = FUN_0210cd28(*(int *)(param_4 + 0x10),0), iVar1 != 0)) {
      uStack_24 = 0;
      uStack_28 = 0;
      func_0x03507d38(&uStack_28,*(undefined4 *)(iVar1 + 8),
                      **(undefined4 **)(_UNK_0215a9f8 + 0x215a968));
      uVar4 = uStack_24;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ab51b8(iVar1,0);
    uVar2 = FUN_02157e88(param_2);
    func_0x019af894(uVar5,uVar4,iVar1 + 1,param_2,param_3,uVar2,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xb4b1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.MiniBoardMultiBonusHandler$$.ctor RVA 0x214a9fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_021552f4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02155374 + 0x2155308);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02155378 + 0x215531c));
    func_0x01384978(*(undefined4 *)(_UNK_0215537c + 0x2155328));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_02155380 + 0x2155340);
  *(undefined1 *)(param_1 + 0xc) = 1;
  uVar2 = func_0x01384be4(*puVar1);
  func_0x02450578(uVar2,**(undefined4 **)(_UNK_02155384 + 0x2155358));
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.MiniBoardMultiBonusHandler$$<>iFixBaseProxy_OnUnRegister RVA 0x214aa00 =====

void thunk_FUN_021565f0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb46a,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb46a,0);
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



// ===== FAT.Merge.MiniBoardMultiBonusHandler$$<>iFixBaseProxy_OnItemSpawned RVA 0x214aa04 =====

void FUN_0215aa04(void)

{
  FUN_02155d3c();
  return;
}


