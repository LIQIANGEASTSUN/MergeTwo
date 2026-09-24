/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MineTokenSpawnBonusHandler$$.ctor RVA 0x214871c =====

void FUN_0215871c(int param_1,undefined4 param_2)

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
  
  FUN_021552f4();
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



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$Serialize RVA 0x214873c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215873c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_021588e4 + 0x215875c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021588e8 + 0x2158770));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81dd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81dd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
    return;
  }
  uVar2 = func_0x01c23578(param_3,*(undefined4 *)(param_1 + 0x24),0);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  piVar8 = *(int **)(_UNK_021588ec + 0x21587fc);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar4 = *piVar8;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd0);
        goto LAB_02158844;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,iVar4,2);
LAB_02158844:
  (*(code *)*puVar3)(param_2,uVar2,puVar3[1]);
  uVar2 = func_0x01c23578(param_3 + 1,*(undefined4 *)(param_1 + 0x20),0);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  iVar4 = *piVar8;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xd0);
        goto LAB_021588c8;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,iVar4,2);
LAB_021588c8:
                    /* WARNING: Could not recover jumptable at 0x021588e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_2,uVar2,puVar3[1]);
  return;
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$Deserialize RVA 0x21488f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021588f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_02158abc + 0x2158910);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02158ac0 + 0x2158924));
    func_0x01384978(*(undefined4 *)(_UNK_02158ac4 + 0x2158930));
    func_0x01384978(*(undefined4 *)(_UNK_02158ac8 + 0x215893c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x81df,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01c23c30(param_3,param_2,0);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    uVar2 = func_0x01c23c30(param_3 + 1,param_2,0);
    puVar5 = *(undefined4 **)(_UNK_02158acc + 0x21589c4);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    piVar3 = (int *)func_0x01384a00(*puVar5,2);
    uStack_1c = *(undefined4 *)(param_1 + 0x24);
    puVar5 = *(undefined4 **)(_UNK_02158ad0 + 0x21589e8);
    iVar1 = func_0x01384abc(*puVar5,&uStack_1c);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar2 = func_0x01384c10();
      func_0x01384aa0(uVar2,0);
    }
    if (piVar3[3] == 0) {
      func_0x01384bf4();
    }
    piVar3[4] = iVar1;
    uStack_20 = *(undefined4 *)(param_1 + 0x20);
    iVar1 = func_0x01384abc(*puVar5,&uStack_20);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar2 = func_0x01384c10();
      func_0x01384aa0(uVar2,0);
    }
    if ((uint)piVar3[3] < 2) {
      func_0x01384bf4();
    }
    piVar3[5] = iVar1;
    func_0x02158ad8(param_1,**(undefined4 **)(_UNK_02158ad4 + 0x2158aac),piVar3);
  }
  else {
    iVar1 = func_0x0229f13c(0x81df,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$_LogInfo RVA 0x2148ad8 =====

void FUN_02158ad8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x81e0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x81e0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$IsValid RVA 0x2148b40 =====

undefined4 FUN_02158b40(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb49b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb49b,0);
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
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  piVar2 = *(int **)(param_1 + 0x14);
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02158ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*piVar2 + 0x108))(piVar2,*(undefined4 *)(*piVar2 + 0x10c));
    return uVar5;
  }
  return 0;
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$IsValidForContext RVA 0x2148bb4 =====

undefined4 FUN_02158bb4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb49c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb49c,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  return 1;
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$GetActivityCostId RVA 0x2148c10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02158c10(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02158cf0 + 0x2158c28);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02158cf4 + 0x2158c3c));
    func_0x01384978(*(undefined4 *)(_UNK_02158cf8 + 0x2158c48));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb49d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb49d,0);
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
  uStack_14 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = func_0x01a635a8(*(int *)(param_1 + 0x14),0);
    uStack_14 = 0;
    if (iVar1 != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 0x18),
                      **(undefined4 **)(_UNK_02158cfc + 0x2158cc8));
    }
  }
  return uStack_14;
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$EnsureOutputMap RVA 0x2148d00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02158d00(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar7 = (char *)(_UNK_02159574 + 0x2158d18);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02159578 + 0x2158d2c));
    func_0x01384978(*(undefined4 *)(_UNK_0215957c + 0x2158d38));
    func_0x01384978(*(undefined4 *)(_UNK_02159580 + 0x2158d44));
    func_0x01384978(*(undefined4 *)(_UNK_02159584 + 0x2158d50));
    func_0x01384978(*(undefined4 *)(_UNK_02159588 + 0x2158d5c));
    func_0x01384978(*(undefined4 *)(_UNK_0215958c + 0x2158d68));
    func_0x01384978(*(undefined4 *)(_UNK_02159590 + 0x2158d74));
    func_0x01384978(*(undefined4 *)(_UNK_02159594 + 0x2158d80));
    func_0x01384978(*(undefined4 *)(_UNK_02159598 + 0x2158d8c));
    func_0x01384978(*(undefined4 *)(_UNK_0215959c + 0x2158d98));
    func_0x01384978(*(undefined4 *)(_UNK_021595a0 + 0x2158da4));
    func_0x01384978(*(undefined4 *)(_UNK_021595a4 + 0x2158db0));
    func_0x01384978(*(undefined4 *)(_UNK_021595a8 + 0x2158dbc));
    func_0x01384978(*(undefined4 *)(_UNK_021595ac + 0x2158dc8));
    func_0x01384978(*(undefined4 *)(_UNK_021595b0 + 0x2158dd4));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar3 = func_0x0229f06c(0xb49e,0);
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      iVar9 = *(int *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0xc) = 0;
      iVar3 = iVar9;
      if (iVar9 == 0) {
        func_0x01384bf0();
        iVar3 = *(int *)(param_1 + 0x10);
      }
      iVar6 = *(int *)(iVar9 + 0x10);
      *(undefined4 *)(iVar9 + 0xc) = 0;
      puVar11 = (undefined4 *)(param_1 + 0x18);
      *puVar11 = 0;
      iVar8 = *(int *)(param_1 + 0x14);
      *(int *)(iVar9 + 0x10) = iVar6 + 1;
      puVar10 = (undefined4 *)(param_1 + 0x1c);
      *puVar10 = 0;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x01a66b38(iVar8,iVar3,0);
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01a66fe8(iVar3,puVar11,puVar10,0);
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01a67118(&uStack_60,iVar3,0);
      *(undefined4 *)(param_1 + 0x28) = uStack_60;
      *(undefined4 *)(param_1 + 0x2c) = uStack_5c;
      if (*(int *)(param_1 + 0x20) == 0) {
        uVar4 = func_0x021595fc();
        *(undefined4 *)(param_1 + 0x20) = uVar4;
      }
      iVar9 = **(int **)(_UNK_021595b4 + 0x2158f24);
      iVar3 = *(int *)(iVar9 + 0x1c);
      if (iVar3 == 0) {
        func_0x0140024c(iVar9);
        iVar3 = *(int *)(iVar9 + 0x1c);
      }
      iVar3 = *(int *)(iVar3 + 8);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x014001f0();
      }
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x014001f0();
      }
      FUN_02158ad8(param_1,**(undefined4 **)(_UNK_021595b8 + 0x2158f90),
                   **(undefined4 **)(iVar3 + 0x5c));
      piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_021595bc + 0x2158fac),1);
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_44 = *(undefined4 *)(iVar3 + 0xc);
      puVar12 = *(undefined4 **)(_UNK_021595c0 + 0x2158fd4);
      iVar3 = func_0x01384abc(*puVar12,&uStack_44);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar3 != 0) &&
         (iVar9 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar9 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if (piVar5[3] == 0) {
        func_0x01384bf4();
      }
      piVar5[4] = iVar3;
      FUN_02158ad8(param_1,**(undefined4 **)(_UNK_021595c4 + 0x2159040),piVar5);
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0245100c(&uStack_60,iVar3,**(undefined4 **)(_UNK_021595c8 + 0x215906c));
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      while (iVar3 = func_0x03f4d7a4(&uStack_40,**(undefined4 **)(_UNK_021595d4 + 0x2159098)),
            uVar4 = uStack_34, iVar3 != 0) {
        uVar1 = (undefined4)uStack_30;
        uVar2 = uStack_30._4_4_;
        piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_021595cc + 0x21590c0),3);
        uStack_60 = uVar4;
        iVar3 = func_0x01384abc(*puVar12,&uStack_60);
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar3 != 0) &&
           (iVar9 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar9 == 0)) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if (piVar5[3] == 0) {
          func_0x01384bf4();
        }
        piVar5[4] = iVar3;
        uStack_44 = uVar1;
        iVar3 = func_0x01384abc(*puVar12,&uStack_44);
        if ((iVar3 != 0) &&
           (iVar9 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar9 == 0)) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if ((uint)piVar5[3] < 2) {
          func_0x01384bf4();
        }
        piVar5[5] = iVar3;
        uStack_64 = uVar2;
        iVar3 = func_0x01384abc(*puVar12,&uStack_64);
        if ((iVar3 != 0) &&
           (iVar9 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar9 == 0)) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if ((uint)piVar5[3] < 3) {
          func_0x01384bf4();
        }
        piVar5[6] = iVar3;
        FUN_02158ad8(param_1,**(undefined4 **)(_UNK_021595d0 + 0x21591e4),piVar5);
      }
      func_0x03f4d7a0(&uStack_40,**(undefined4 **)(_UNK_021595d8 + 0x2159200));
      piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_021595e0 + 0x2159218),2);
      uStack_60 = *puVar11;
      iVar3 = func_0x01384abc(*puVar12,&uStack_60);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar3 != 0) &&
         (iVar9 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar9 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if (piVar5[3] == 0) {
        func_0x01384bf4();
      }
      piVar5[4] = iVar3;
      uStack_44 = *puVar10;
      iVar3 = func_0x01384abc(*puVar12,&uStack_44);
      if ((iVar3 != 0) &&
         (iVar9 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar9 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar5[3] < 2) {
        func_0x01384bf4();
      }
      piVar5[5] = iVar3;
      FUN_02158ad8(param_1,**(undefined4 **)(_UNK_021595e4 + 0x21592f4),piVar5);
      piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_021595e8 + 0x215930c),3);
      uStack_64 = *(undefined4 *)(param_1 + 0x28);
      iVar3 = func_0x01384abc(*puVar12,&uStack_64);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar3 != 0) &&
         (iVar9 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar9 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if (piVar5[3] == 0) {
        func_0x01384bf4();
      }
      piVar5[4] = iVar3;
      uStack_68 = *(undefined4 *)(param_1 + 0x2c);
      iVar3 = func_0x01384abc(*puVar12,&uStack_68);
      if ((iVar3 != 0) &&
         (iVar9 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar9 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar5[3] < 2) {
        func_0x01384bf4();
      }
      piVar5[5] = iVar3;
      uStack_6c = *(undefined4 *)(param_1 + 0x20);
      iVar3 = func_0x01384abc(*puVar12,&uStack_6c);
      if ((iVar3 != 0) &&
         (iVar9 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar9 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar5[3] < 3) {
        func_0x01384bf4();
      }
      piVar5[6] = iVar3;
      FUN_02158ad8(param_1,**(undefined4 **)(_UNK_021595ec + 0x2159438),piVar5);
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar9 = **(int **)(_UNK_021595f0 + 0x2159468);
        iVar3 = *(int *)(iVar9 + 0x1c);
        if (iVar3 == 0) {
          func_0x0140024c(iVar9);
          iVar3 = *(int *)(iVar9 + 0x1c);
        }
        iVar3 = *(int *)(iVar3 + 8);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x014001f0();
        }
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x014001f0();
        }
        FUN_02158ad8(param_1,**(undefined4 **)(_UNK_021595f4 + 0x21594cc),
                     **(undefined4 **)(iVar3 + 0x5c));
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0xb49e,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar3,param_1,0);
  }
  return;
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$_RandInRange RVA 0x21495fc =====

int FUN_021595fc(int param_1,int param_2)

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
  
  iVar3 = 0;
  iVar1 = func_0x0229f06c(0xb49f,0);
  if (iVar1 != 0) {
    iVar3 = func_0x0229f13c(0xb49f,0);
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
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar1 = *(int *)(iVar3 + 8);
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar3 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar1,uVar4,&uStack_38,uVar2,0,0);
    iVar3 = func_0x0245498c(&uStack_38,0,0);
    return iVar3;
  }
  iVar1 = param_1;
  if (param_1 < 1) {
    iVar1 = param_2 + -1;
  }
  if (iVar1 < 0 == (param_1 < 1 && SBORROW4(param_2,1))) {
    iVar3 = param_2;
    if (param_2 < param_1) {
      iVar3 = param_1;
      param_1 = param_2;
    }
    if (param_1 != iVar3) {
      iVar3 = (*(code *)&UNK_051844bc)(param_1,iVar3 + 1,0);
      return iVar3;
    }
  }
  return iVar3;
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$GetRewardReason RVA 0x2149694 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02159694(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_02159734 + 0x21596a8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02159738 + 0x21596bc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4a0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4a0,0);
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
  piVar3 = *(int **)(_UNK_0215973c + 0x2159714);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x14c);
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$GetFlyType RVA 0x2149740 =====

undefined4 FUN_02159740(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4a1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4a1,0);
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
  return 0x21;
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$TryProcessPity RVA 0x2149794 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02159794(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_02159cd0 + 0x21597b4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02159cd4 + 0x21597cc));
    func_0x01384978(*(undefined4 *)(_UNK_02159cd8 + 0x21597d8));
    func_0x01384978(*(undefined4 *)(_UNK_02159cdc + 0x21597e4));
    func_0x01384978(*(undefined4 *)(_UNK_02159ce0 + 0x21597f0));
    func_0x01384978(*(undefined4 *)(_UNK_02159ce4 + 0x21597fc));
    func_0x01384978(*(undefined4 *)(_UNK_02159ce8 + 0x2159808));
    func_0x01384978(*(undefined4 *)(_UNK_02159cec + 0x2159814));
    *pcVar6 = '\x01';
  }
  bVar1 = false;
  iVar2 = func_0x0229f06c(0xb4a2,0);
  if (iVar2 == 0) {
    iVar2 = param_1[6];
    if (0 < iVar2) {
      iVar2 = param_1[7];
    }
    if ((0 < iVar2) && (bVar1 = false, 0 < param_1[8])) {
      bVar1 = true;
    }
    (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    puVar8 = *(undefined4 **)(_UNK_02159cf0 + 0x21598bc);
    piVar4 = (int *)func_0x01384a00(*puVar8,4);
    iStack_28 = param_1[9];
    puVar7 = *(undefined4 **)(_UNK_02159cf4 + 0x21598d4);
    iVar2 = func_0x01384abc(*puVar7,&iStack_28);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar2 != 0) && (iVar5 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)
       ) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if (piVar4[3] == 0) {
      func_0x01384bf4();
    }
    piVar4[4] = iVar2;
    iStack_2c = param_1[8];
    iVar2 = func_0x01384abc(*puVar7,&iStack_2c);
    if ((iVar2 != 0) && (iVar5 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)
       ) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if ((uint)piVar4[3] < 2) {
      func_0x01384bf4();
    }
    piVar4[5] = iVar2;
    iVar2 = param_1[4];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_30 = *(int *)(iVar2 + 0xc);
    iVar2 = func_0x01384abc(*puVar7,&iStack_30);
    if ((iVar2 != 0) && (iVar5 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)
       ) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if ((uint)piVar4[3] < 3) {
      func_0x01384bf4();
    }
    piVar4[6] = iVar2;
    iStack_34 = CONCAT31(iStack_34._1_3_,bVar1);
    iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_02159cf8 + 0x2159a00),&iStack_34);
    if ((iVar2 != 0) && (iVar5 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)
       ) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if ((uint)piVar4[3] < 4) {
      func_0x01384bf4();
    }
    piVar4[7] = iVar2;
    FUN_02158ad8(param_1,**(undefined4 **)(_UNK_02159cfc + 0x2159a5c),piVar4);
    uVar3 = 0;
    if ((bVar1) && (param_1[8] <= param_1[9])) {
      uVar3 = *puVar8;
      *param_3 = param_1[6];
      *param_4 = param_1[7];
      piVar4 = (int *)func_0x01384a00(uVar3,2);
      iStack_28 = *param_3;
      iVar2 = func_0x01384abc(*puVar7,&iStack_28);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar2 != 0) &&
         (iVar5 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if (piVar4[3] == 0) {
        func_0x01384bf4();
      }
      piVar4[4] = iVar2;
      iStack_2c = *param_4;
      iVar2 = func_0x01384abc(*puVar7,&iStack_2c);
      if ((iVar2 != 0) &&
         (iVar5 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if ((uint)piVar4[3] < 2) {
        func_0x01384bf4();
      }
      piVar4[5] = iVar2;
      FUN_02158ad8(param_1,**(undefined4 **)(_UNK_02159d00 + 0x2159b6c),piVar4);
      iVar2 = FUN_021595fc(param_1[10],param_1[0xb]);
      uVar3 = *puVar8;
      param_1[8] = iVar2;
      piVar4 = (int *)func_0x01384a00(uVar3,3);
      iStack_30 = param_1[8];
      iVar2 = func_0x01384abc(*puVar7,&iStack_30);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar2 != 0) &&
         (iVar5 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if (piVar4[3] == 0) {
        func_0x01384bf4();
      }
      piVar4[4] = iVar2;
      iStack_34 = param_1[10];
      iVar2 = func_0x01384abc(*puVar7,&iStack_34);
      if ((iVar2 != 0) &&
         (iVar5 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if ((uint)piVar4[3] < 2) {
        func_0x01384bf4();
      }
      piVar4[5] = iVar2;
      iStack_38 = param_1[0xb];
      iVar2 = func_0x01384abc(*puVar7,&iStack_38);
      if ((iVar2 != 0) &&
         (iVar5 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if ((uint)piVar4[3] < 3) {
        func_0x01384bf4();
      }
      piVar4[6] = iVar2;
      FUN_02158ad8(param_1,**(undefined4 **)(_UNK_02159d04 + 0x2159cbc),piVar4);
      uVar3 = 1;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb4a2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0229da30(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return uVar3;
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$OnAfterSpawn RVA 0x2149d08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02159d08(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_02159f80 + 0x2159d28);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02159f84 + 0x2159d3c));
    func_0x01384978(*(undefined4 *)(_UNK_02159f88 + 0x2159d48));
    func_0x01384978(*(undefined4 *)(_UNK_02159f8c + 0x2159d54));
    func_0x01384978(*(undefined4 *)(_UNK_02159f90 + 0x2159d60));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4a3,0);
  if (iVar1 == 0) {
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (0 < iVar1) {
        iVar1 = *(int *)(param_1 + 0x20);
      }
      if (0 < iVar1) {
        if (param_2 == 0) {
          puVar2 = *(undefined4 **)(_UNK_02159fa0 + 0x2159e8c);
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
          piVar3 = (int *)func_0x01384a00(*puVar2,2);
          uStack_20 = *(undefined4 *)(param_1 + 0x24);
          puVar2 = *(undefined4 **)(_UNK_02159fa4 + 0x2159eac);
          iVar1 = func_0x01384abc(*puVar2,&uStack_20);
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar1 != 0) &&
             (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if (piVar3[3] == 0) {
            func_0x01384bf4();
          }
          piVar3[4] = iVar1;
          uStack_24 = *(undefined4 *)(param_1 + 0x20);
          iVar1 = func_0x01384abc(*puVar2,&uStack_24);
          if ((iVar1 != 0) &&
             (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if ((uint)piVar3[3] < 2) {
            func_0x01384bf4();
          }
          piVar3[5] = iVar1;
          puVar2 = *(undefined4 **)(_UNK_02159fa8 + 0x2159f6c);
        }
        else {
          puVar2 = *(undefined4 **)(_UNK_02159f94 + 0x2159df0);
          *(undefined4 *)(param_1 + 0x24) = 0;
          piVar3 = (int *)func_0x01384a00(*puVar2,1);
          uStack_1c = *(undefined4 *)(param_1 + 0x20);
          iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02159f98 + 0x2159e10),&uStack_1c);
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar1 != 0) &&
             (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if (piVar3[3] == 0) {
            func_0x01384bf4();
          }
          piVar3[4] = iVar1;
          puVar2 = *(undefined4 **)(_UNK_02159f9c + 0x2159e78);
        }
        FUN_02158ad8(param_1,*puVar2,piVar3);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4a3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c9080(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$<>iFixBaseProxy_IsValidForContext RVA 0x2149fac =====

undefined4 thunk_FUN_02156548(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb46c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb46c,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  return 1;
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$<>iFixBaseProxy_TryProcessPity RVA 0x2149fb0 =====

void FUN_02159fb0(void)

{
  FUN_02155c48();
  return;
}



// ===== FAT.Merge.MineTokenSpawnBonusHandler$$<>iFixBaseProxy_OnAfterSpawn RVA 0x2149fc4 =====

void thunk_FUN_02155cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xb472,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb472,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c9080(iVar1,param_1,param_2,param_3,0);
  }
  return;
}


