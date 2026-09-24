/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.FightBoardActivity$$get_World RVA 0x1a0ee90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a1ee90(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7eac,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7eac,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217a0d4 + 0x2179ff4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217a0d8 + 0x217a008),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a0dc + 0x217a0c4));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.FightBoardActivity$$get_Visual RVA 0x1a0eee4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a1eee4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7ead,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ead,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7f44 + 0x21c7e64);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c7f48 + 0x21c7e78),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7f4c + 0x21c7f34));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x8c);
}



// ===== FAT.FightBoardActivity$$get_StartPopup RVA 0x1a0ef38 =====

void FUN_01a1ef38(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x6c);
  *param_1 = uVar1;
  return;
}



// ===== FAT.FightBoardActivity$$get_EndPopup RVA 0x1a0ef4c =====

void FUN_01a1ef4c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x78);
  *param_1 = uVar1;
  return;
}



// ===== FAT.FightBoardActivity$$get_ConvertPopup RVA 0x1a0ef60 =====

void FUN_01a1ef60(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x84);
  *param_1 = uVar1;
  return;
}



// ===== FAT.FightBoardActivity$$get_BoardRes RVA 0x1a0ef74 =====

void FUN_01a1ef74(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  *param_1 = *(undefined4 *)(param_2 + 0x88);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FightBoardActivity$$get_LoadingRes RVA 0x1a0ef80 =====

void FUN_01a1ef80(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  *param_1 = *(undefined4 *)(param_2 + 0x90);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FightBoardActivity$$get_HelpRes RVA 0x1a0ef8c =====

void FUN_01a1ef8c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  *param_1 = *(undefined4 *)(param_2 + 0x98);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FightBoardActivity$$get_MilestoneRes RVA 0x1a0ef98 =====

void FUN_01a1ef98(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  *param_1 = *(undefined4 *)(param_2 + 0xa0);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FightBoardActivity$$get_MilestoneTipsRes RVA 0x1a0efa4 =====

void FUN_01a1efa4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xac);
  *param_1 = *(undefined4 *)(param_2 + 0xa8);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FightBoardActivity$$get_Feature RVA 0x1a0efb0 =====

undefined4 FUN_01a1efb0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x7eaf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7eaf,0);
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
  return 0x47;
}



// ===== FAT.FightBoardActivity$$FillBoardData RVA 0x1a0f004 =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a1f004(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int unaff_r4;
  char *pcVar11;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar12;
  undefined4 uVar13;
  undefined4 unaff_r7;
  undefined4 *puVar14;
  undefined4 *unaff_r8;
  int unaff_r9;
  uint uVar15;
  int unaff_r10;
  undefined4 *puVar16;
  undefined4 unaff_lr;
  undefined8 uVar17;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int aiStack_28 [4];
  
  iVar1 = func_0x0229f06c(0x7eb0,0);
  if (iVar1 == 0) {
    param_1 = FUN_01a1ee90(param_1);
    if (param_1 == 0) {
      return;
    }
    pcVar11 = (char *)(_UNK_0214881c + 0x2147b9c);
    if (*pcVar11 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02148820 + 0x2147bb0),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02148824 + 0x2147bbc));
      func_0x01384978(*(undefined4 *)(_UNK_02148828 + 0x2147bc8));
      func_0x01384978(*(undefined4 *)(_UNK_0214882c + 0x2147bd4));
      func_0x01384978(*(undefined4 *)(_UNK_02148830 + 0x2147be0));
      func_0x01384978(*(undefined4 *)(_UNK_02148834 + 0x2147bec));
      func_0x01384978(*(undefined4 *)(_UNK_02148838 + 0x2147bf8));
      func_0x01384978(*(undefined4 *)(_UNK_0214883c + 0x2147c04));
      func_0x01384978(*(undefined4 *)(_UNK_02148840 + 0x2147c10));
      func_0x01384978(*(undefined4 *)(_UNK_02148844 + 0x2147c1c));
      func_0x01384978(*(undefined4 *)(_UNK_02148848 + 0x2147c28));
      func_0x01384978(*(undefined4 *)(_UNK_0214884c + 0x2147c34));
      func_0x01384978(*(undefined4 *)(_UNK_02148850 + 0x2147c40));
      func_0x01384978(*(undefined4 *)(_UNK_02148854 + 0x2147c4c));
      func_0x01384978(*(undefined4 *)(_UNK_02148858 + 0x2147c58));
      func_0x01384978(*(undefined4 *)(_UNK_0214885c + 0x2147c64));
      func_0x01384978(*(undefined4 *)(_UNK_02148860 + 0x2147c70));
      func_0x01384978(*(undefined4 *)(_UNK_02148864 + 0x2147c7c));
      func_0x01384978(*(undefined4 *)(_UNK_02148868 + 0x2147c88));
      func_0x01384978(*(undefined4 *)(_UNK_0214886c + 0x2147c94));
      func_0x01384978(*(undefined4 *)(_UNK_02148870 + 0x2147ca0));
      func_0x01384978(*(undefined4 *)(_UNK_02148874 + 0x2147cac));
      func_0x01384978(*(undefined4 *)(_UNK_02148878 + 0x2147cb8));
      func_0x01384978(*(undefined4 *)(_UNK_0214887c + 0x2147cc4));
      func_0x01384978(*(undefined4 *)(_UNK_02148880 + 0x2147cd0));
      func_0x01384978(*(undefined4 *)(_UNK_02148884 + 0x2147cdc));
      func_0x01384978(*(undefined4 *)(_UNK_02148888 + 0x2147ce8));
      func_0x01384978(*(undefined4 *)(_UNK_0214888c + 0x2147cf4));
      func_0x01384978(*(undefined4 *)(_UNK_02148890 + 0x2147d00));
      func_0x01384978(*(undefined4 *)(_UNK_02148894 + 0x2147d0c));
      func_0x01384978(*(undefined4 *)(_UNK_02148898 + 0x2147d18));
      func_0x01384978(*(undefined4 *)(_UNK_0214889c + 0x2147d24));
      func_0x01384978(*(undefined4 *)(_UNK_021488a0 + 0x2147d30));
      func_0x01384978(*(undefined4 *)(_UNK_021488a4 + 0x2147d3c));
      func_0x01384978(*(undefined4 *)(_UNK_021488a8 + 0x2147d48));
      func_0x01384978(*(undefined4 *)(_UNK_021488ac + 0x2147d54));
      func_0x01384978(*(undefined4 *)(_UNK_021488b0 + 0x2147d60));
      func_0x01384978(*(undefined4 *)(_UNK_021488b4 + 0x2147d6c));
      *pcVar11 = '\x01';
    }
    uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_90 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_8c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_60 = 0;
    unaff_r8 = &uStack_38;
    uStack_78 = 0;
    aiStack_28[0] = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_38 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_48 = 0;
    uStack_84 = uStack_94;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    uStack_5c = uStack_94;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    uStack_34 = uStack_94;
    uStack_30 = uStack_90;
    uStack_2c = uStack_8c;
    iVar1 = func_0x0229f06c(0x5c6c,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar1 + 8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_2 + 0x38) = uVar13;
      uVar17 = func_0x02140d24(param_1);
      uVar17 = func_0x01458584((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),1000,0);
      *(undefined8 *)(param_2 + 0x30) = uVar17;
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_021488b8 + 0x2147e74)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_02147ebc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021488b8 + 0x2147e74),0);
LAB_02147ebc:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
      uVar13 = *(undefined4 *)(param_1 + 0x94);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_2 + 0x3c) = uVar13;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x021139b0(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02148958(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02139e7c(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0215ea7c(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01db6828(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02110804(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x020dc720(iVar1,aiStack_28,0);
      iVar1 = aiStack_28[0];
      iStack_b4 = param_2;
      if (iVar6 != 0) {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        func_0x0325a3b4(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488bc + 0x2147fe8));
        uStack_38 = uStack_b0;
        uStack_34 = uStack_ac;
        uStack_30 = uStack_a8;
        uStack_2c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488c0 + 0x2148004);
        puVar14 = *(undefined4 **)(_UNK_021488c4 + 0x214800c);
        while (iVar1 = func_0x03f597e0(unaff_r8,*puVar3), uVar7 = uStack_2c, iVar1 != 0) {
          iVar1 = *(int *)(param_2 + 0x6c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0364baf8(iVar1,uVar7,*puVar14);
        }
        func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_021488c8 + 0x2148050));
      }
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
      uVar17 = func_0x02140d24(param_1);
      uVar7 = *(uint *)(param_1 + 0x44);
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar13 = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_2 + 0x44) = uVar13;
      uVar17 = func_0x01458584((uint)uVar17 - uVar7,
                               (int)((ulonglong)uVar17 >> 0x20) -
                               (((int)uVar7 >> 0x1f) + (uint)((uint)uVar17 < uVar7)),1000,0);
      *(undefined8 *)(param_2 + 0x10) = uVar17;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0x10)) {
        iVar1 = *(int *)(param_1 + 0x6c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02454910(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488d0 + 0x21480dc));
        uVar7 = 0;
        uVar15 = 0;
        uStack_48 = uStack_b0;
        uStack_44 = uStack_ac;
        uStack_40 = uStack_a8;
        uStack_3c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488d4 + 0x2148104);
        while (iVar1 = func_0x03f5a2cc(&uStack_48,*puVar3), iVar1 != 0) {
          uVar4 = uStack_3c & 0x3f;
          uVar8 = uVar4 - 0x20;
          uVar5 = 1 << uVar4;
          if (-1 < (int)uVar8) {
            uVar5 = 0;
          }
          uVar7 = uVar5 | uVar7;
          uVar5 = 1 >> (0x20 - uVar4 & 0xff);
          if (-1 < (int)uVar8) {
            uVar5 = 1 << (uVar8 & 0xff);
          }
          uVar15 = uVar5 | uVar15;
        }
        func_0x03f5a2c8(&uStack_48,**(undefined4 **)(_UNK_021488dc + 0x214814c));
        if (iStack_b4 == 0) {
          func_0x01384bf0();
        }
        *(uint *)(param_2 + 0x48) = uVar7;
        *(uint *)(param_2 + 0x4c) = uVar15;
      }
      iVar1 = *(int *)(param_1 + 0x9c);
      iStack_b8 = param_1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488e4 + 0x2148190));
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      puVar14 = *(undefined4 **)(_UNK_021488e8 + 0x21481bc);
      puVar3 = *(undefined4 **)(_UNK_021488ec + 0x21481c4);
      while (iVar1 = func_0x03f9b324(&uStack_60,*puVar14), uVar7 = uStack_54, iVar1 != 0) {
        iVar1 = (int)uStack_50;
        iVar12 = *(int *)(iStack_b4 + 0x50);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_021488f4 + 0x21481ec));
        func_0x01797598(iVar6,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148a58(iVar1);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar6 + 0x10) = uVar13;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148aac(iVar1);
        *(undefined4 *)(iVar6 + 0xc) = uVar13;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar12,uVar7,iVar6,*puVar3);
      }
      func_0x03f9b464(&uStack_60,**(undefined4 **)(_UNK_021488f8 + 0x214826c));
      iVar1 = *(int *)(iStack_b8 + 0x98);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_02148900 + 0x214829c));
      uStack_78 = uStack_b0;
      uStack_74 = uStack_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      puVar3 = *(undefined4 **)(_UNK_02148904 + 0x21482c8);
      puVar14 = *(undefined4 **)(_UNK_02148908 + 0x21482d0);
      puVar16 = *(undefined4 **)(_UNK_0214890c + 0x21482d8);
      while (iVar1 = func_0x03f9b324(&uStack_78,*puVar3), uVar7 = uStack_6c, iVar1 != 0) {
        iVar1 = (int)uStack_68;
        uVar13 = func_0x01384be4(*puVar14);
        FUN_01798ae4(uVar13,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02148b00(iVar1,uVar13);
        iVar1 = *(int *)(iStack_b4 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar1,uVar7,uVar13,*puVar16);
      }
      func_0x03f9b464(&uStack_78,**(undefined4 **)(_UNK_02148914 + 0x2148354));
      iVar6 = iStack_b4;
      iVar1 = iStack_b8;
      uVar13 = **(undefined4 **)(_UNK_0214891c + 0x2148368);
      *(int *)(iStack_b8 + 0xa4) = iStack_b4;
      uVar13 = func_0x01384be4(uVar13);
      func_0x03ccb96c(uVar13,iVar1,**(undefined4 **)(_UNK_02148920 + 0x2148390),0);
      func_0x021475dc(iVar1,uVar13,0x7fffffff);
      iVar12 = *(int *)(iVar1 + 0x68);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_b0,iVar12,**(undefined4 **)(_UNK_02148924 + 0x21483d0));
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      puVar3 = *(undefined4 **)(_UNK_02148928 + 0x21483ec);
      puVar14 = *(undefined4 **)(_UNK_0214892c + 0x21483f4);
      while (iVar12 = func_0x03f5f428(&uStack_88,*puVar3), uVar7 = uStack_7c, iVar12 != 0) {
        iVar12 = *(int *)(iVar6 + 0x5c);
        if (uStack_7c == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x0210e5f4(uVar7,0);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x0364baf8(iVar12,uVar13,*puVar14);
      }
      func_0x03f5f424(&uStack_88,**(undefined4 **)(_UNK_02148934 + 0x2148454));
      iVar6 = *(int *)(iVar1 + 0x34);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x03d6476c(iVar6,**(undefined4 **)(_UNK_0214893c + 0x2148488));
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x0382ab5c(&uStack_98,iVar6,**(undefined4 **)(_UNK_02148940 + 0x21484b4));
      puVar3 = *(undefined4 **)(_UNK_02148944 + 0x21484c8);
      while (iVar6 = func_0x03f9b9f8(&uStack_98,*puVar3), iVar6 != 0) {
        if (uStack_8c != 0) {
          func_0x02148de8(iVar1);
        }
      }
      func_0x03f9b9f4(&uStack_98,**(undefined4 **)(_UNK_0214894c + 0x21484fc));
      return;
    }
    iVar1 = func_0x0229f13c(0x5c6c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2147e08;
    unaff_r4 = iVar1;
    unaff_r9 = param_2;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&iStack_b8;
  }
  else {
    iVar1 = func_0x0229f13c(0x7eb0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar6 = *(int *)(iVar1 + 0x10);
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
  if (iVar6 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar6,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 3;
  if (iVar1 == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar10);
  return;
}



// ===== FAT.FightBoardActivity$$SetBoardData RVA 0x1a0f07c =====

/* WARNING: Removing unreachable block (ram,0x01a1f60c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a1f07c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x7eb1,0);
  iVar8 = param_1;
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7eb1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  iVar1 = FUN_01a1ee90(param_1);
  if (iVar1 != 0) {
    return;
  }
  pcVar7 = (char *)(_UNK_01a1f724 + 0x1a1f10c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a1f728 + 0x1a1f120));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f72c + 0x1a1f12c));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f730 + 0x1a1f138));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f734 + 0x1a1f144));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f738 + 0x1a1f150));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f73c + 0x1a1f15c));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f740 + 0x1a1f168));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f744 + 0x1a1f174));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f748 + 0x1a1f180));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f74c + 0x1a1f18c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7eb2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7eb2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a1f750 + 0x1a1f1ec));
  func_0x02143488(iVar1,0);
  iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01a1f754 + 0x1a1f208));
  func_0x0214d6c8(iVar8,0,0,0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  func_0x0214e900(iVar8,iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02141f58(iVar1,iVar8,0);
  iVar9 = func_0x01c24918(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar9 + 0x4c);
  iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01a1f758 + 0x1a1f27c));
  func_0x01db7f44(iVar9,0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar9 + 8) = 6;
  *(int *)(iVar9 + 0xc) = iVar1;
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  func_0x01db7f4c(iVar10,iVar9,0);
  iVar9 = func_0x01c24918(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(param_1 + 0x5c);
  iVar9 = *(int *)(iVar9 + 0x4c);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar11 = *(undefined4 *)(iVar10 + 0x14);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uStack_48 = 0;
  uStack_44 = 0;
  func_0x01db8438(iVar9,iVar1,uVar11,param_2 == (int *)0x0);
  if (param_2 == (int *)0x0) {
    iVar9 = func_0x01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(param_1 + 0x5c);
    iVar9 = *(int *)(iVar9 + 0x40);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0x20);
    iStack_2c = iVar8;
    iStack_28 = iVar1;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    piVar5 = (int *)func_0x0364c2b4(iVar10,**(undefined4 **)(_UNK_01a1f75c + 0x1a1f3a0));
    piVar12 = *(int **)(_UNK_01a1f760 + 0x1a1f3bc);
    piVar13 = *(int **)(_UNK_01a1f764 + 0x1a1f3c4);
    do {
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar5;
      uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar4[-1] == *piVar12) {
            puVar2 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xc0);
            goto LAB_01a1f41c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar12,0);
LAB_01a1f41c:
      iVar10 = (*(code *)*puVar2)(piVar5,puVar2[1]);
      iVar1 = iStack_28;
      iVar8 = iStack_2c;
      if (iVar10 == 0) goto LAB_01a1f588;
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar5;
      uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01a1f768 + 0x1a1f450)) {
            puVar2 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xc0);
            goto LAB_01a1f498;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01a1f768 + 0x1a1f450),0);
LAB_01a1f498:
      uVar11 = (*(code *)*puVar2)(piVar5,puVar2[1]);
      uVar6 = FUN_01a1ee90(param_1);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdef00(iVar9,uVar6,0,0);
      iVar8 = *piVar13;
      if (*(int *)(iVar8 + 0x74) == 0) {
        func_0x01384ab4();
        iVar8 = *piVar13;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x27c);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = **(undefined4 **)(_UNK_01a1f76c + 0x1a1f510);
      uStack_34 = **(undefined4 **)(_UNK_01a1f770 + 0x1a1f51c);
      uStack_3c = 0x15b;
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uVar11 = func_0x01cdcbac(iVar9,uVar11,1,uVar6);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdf088(iVar9,uVar11,0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdefd0(iVar9,0);
    } while( true );
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0214a9e8(iVar1,param_2,0,0);
  goto LAB_01a1f614;
LAB_01a1f588:
  if (piVar5 != (int *)0x0) {
    iVar9 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_01a1f774 + 0x1a1f5ac)) {
          puVar2 = (undefined4 *)(iVar9 + *piVar12 * 8 + 0xc0);
          goto LAB_01a1f5f4;
        }
        uVar3 = uVar3 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01a1f774 + 0x1a1f5ac),0);
LAB_01a1f5f4:
    (*(code *)*puVar2)(piVar5,puVar2[1]);
  }
LAB_01a1f614:
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02142104(iVar1,param_1,0);
  *(int *)(param_1 + 0x40) = iVar1;
  *(int *)(param_1 + 0x44) = iVar8;
  pcVar7 = (char *)(_UNK_01a22658 + 0x1a22578);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a2265c + 0x1a2258c));
    *pcVar7 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x7eb3,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0x7eb3,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar1 = *(int *)(iVar8 + 8);
    uVar11 = *(undefined4 *)(iVar8 + 0xc);
    iVar8 = *(int *)(iVar8 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar8 == 0) {
      uVar6 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar1,uVar11,&uStack_30,uVar6);
    return;
  }
  iVar8 = func_0x01a23ef4(param_1);
  if (iVar8 == 0) {
    return;
  }
  iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01a22660 + 0x1a225f4));
  func_0x021552f4(iVar8,0);
  *(int *)(iVar8 + 0x14) = param_1;
  func_0x02155388(iVar8,0);
  *(int *)(param_1 + 0x48) = iVar8;
  iVar8 = func_0x01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x4c);
  param_2 = *(int **)(param_1 + 0x48);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),param_2,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x16b4,0);
  if (iVar1 == 0) {
    iVar8 = func_0x02f6252c(*(undefined4 *)(iVar8 + 0x34),param_2,
                            **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
    if (param_2 == (int *)0x0 || iVar8 == 0) {
      return;
    }
    iVar8 = *param_2;
    uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
          puVar2 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xd0);
          goto LAB_01dbba38;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(param_2,puVar2[1]);
    return;
  }
  iVar1 = func_0x0229f13c(0x16b4,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
SUB_02174108:
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar8,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar9 = *(int *)(iVar1 + 8);
  uVar11 = *(undefined4 *)(iVar1 + 0xc);
  iVar8 = *(int *)(iVar1 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar8 == 0) {
    uVar6 = 2;
  }
  func_0x0245495c(iVar9,uVar11,&uStack_38,uVar6,0,0);
  return;
}



// ===== FAT.FightBoardActivity$$InitWorld RVA 0x1a0f0f0 =====

/* WARNING: Removing unreachable block (ram,0x01a1f60c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a1f0f0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01a1f724 + 0x1a1f10c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a1f728 + 0x1a1f120));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f72c + 0x1a1f12c));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f730 + 0x1a1f138));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f734 + 0x1a1f144));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f738 + 0x1a1f150));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f73c + 0x1a1f15c));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f740 + 0x1a1f168));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f744 + 0x1a1f174));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f748 + 0x1a1f180));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f74c + 0x1a1f18c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7eb2,0);
  if (iVar1 != 0) {
    iVar2 = func_0x0229f13c(0x7eb2,0);
    iVar1 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a1f750 + 0x1a1f1ec));
  func_0x02143488(iVar2,0);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a1f754 + 0x1a1f208));
  func_0x0214d6c8(iVar1,0,0,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0214e900(iVar1,iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02141f58(iVar2,iVar1,0);
  iVar9 = func_0x01c24918(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar9 + 0x4c);
  iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01a1f758 + 0x1a1f27c));
  func_0x01db7f44(iVar9,0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar9 + 8) = 6;
  *(int *)(iVar9 + 0xc) = iVar2;
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  func_0x01db7f4c(iVar10,iVar9,0);
  iVar9 = func_0x01c24918(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(param_1 + 0x5c);
  iVar9 = *(int *)(iVar9 + 0x4c);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar11 = *(undefined4 *)(iVar10 + 0x14);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uStack_48 = 0;
  uStack_44 = 0;
  func_0x01db8438(iVar9,iVar2,uVar11,param_2 == (int *)0x0);
  if (param_2 == (int *)0x0) {
    iVar9 = func_0x01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(param_1 + 0x5c);
    iVar9 = *(int *)(iVar9 + 0x40);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0x20);
    iStack_2c = iVar1;
    iStack_28 = iVar2;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x0364c2b4(iVar10,**(undefined4 **)(_UNK_01a1f75c + 0x1a1f3a0));
    piVar12 = *(int **)(_UNK_01a1f760 + 0x1a1f3bc);
    piVar13 = *(int **)(_UNK_01a1f764 + 0x1a1f3c4);
    do {
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar6;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar12) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01a1f41c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar6,*piVar12,0);
LAB_01a1f41c:
      iVar10 = (*(code *)*puVar3)(piVar6,puVar3[1]);
      iVar2 = iStack_28;
      iVar1 = iStack_2c;
      if (iVar10 == 0) goto LAB_01a1f588;
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar6;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01a1f768 + 0x1a1f450)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01a1f498;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a1f768 + 0x1a1f450),0);
LAB_01a1f498:
      uVar11 = (*(code *)*puVar3)(piVar6,puVar3[1]);
      uVar7 = FUN_01a1ee90(param_1);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdef00(iVar9,uVar7,0,0);
      iVar1 = *piVar13;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar13;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x27c);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = **(undefined4 **)(_UNK_01a1f76c + 0x1a1f510);
      uStack_34 = **(undefined4 **)(_UNK_01a1f770 + 0x1a1f51c);
      uStack_3c = 0x15b;
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uVar11 = func_0x01cdcbac(iVar9,uVar11,1,uVar7);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdf088(iVar9,uVar11,0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdefd0(iVar9,0);
    } while( true );
  }
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0214a9e8(iVar2,param_2,0,0);
  goto LAB_01a1f614;
LAB_01a1f588:
  if (piVar6 != (int *)0x0) {
    iVar9 = *piVar6;
    uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_01a1f774 + 0x1a1f5ac)) {
          puVar3 = (undefined4 *)(iVar9 + *piVar12 * 8 + 0xc0);
          goto LAB_01a1f5f4;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a1f774 + 0x1a1f5ac),0);
LAB_01a1f5f4:
    (*(code *)*puVar3)(piVar6,puVar3[1]);
  }
LAB_01a1f614:
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02142104(iVar2,param_1,0);
  *(int *)(param_1 + 0x40) = iVar2;
  *(int *)(param_1 + 0x44) = iVar1;
  pcVar8 = (char *)(_UNK_01a22658 + 0x1a22578);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a2265c + 0x1a2258c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7eb3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7eb3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar2 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar2,uVar11,&uStack_30,uVar7);
    return;
  }
  iVar1 = func_0x01a23ef4(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a22660 + 0x1a225f4));
  func_0x021552f4(iVar1,0);
  *(int *)(iVar1 + 0x14) = param_1;
  func_0x02155388(iVar1,0);
  *(int *)(param_1 + 0x48) = iVar1;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  param_2 = *(int **)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),param_2,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x16b4,0);
  if (iVar2 == 0) {
    iVar1 = func_0x02f6252c(*(undefined4 *)(iVar1 + 0x34),param_2,
                            **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
    if (param_2 == (int *)0x0 || iVar1 == 0) {
      return;
    }
    iVar1 = *param_2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd0);
          goto LAB_01dbba38;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(param_2,puVar3[1]);
    return;
  }
  iVar2 = func_0x0229f13c(0x16b4,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
SUB_02174108:
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar9 = *(int *)(iVar2 + 8);
  uVar11 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar1 == 0) {
    uVar7 = 2;
  }
  func_0x0245495c(iVar9,uVar11,&uStack_38,uVar7,0,0);
  return;
}



// ===== FAT.FightBoardActivity$$BoardEntryAsset RVA 0x1a0f77c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a1f77c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01a1f844 + 0x1a1f794);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a1f848 + 0x1a1f7a8));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x7eb5,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = func_0x02b617fc(iVar1,0);
    func_0x02b63e8c(&uStack_18,**(undefined4 **)(_UNK_01a1f84c + 0x1a1f82c),&uStack_14,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7eb5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.FightBoardActivity$$FAT.Merge.ISpawnEffectWithTrail.AddTrail RVA 0x1a0f850 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a1f850(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_01a1f9ec + 0x1a1f870);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a1f9f0 + 0x1a1f884));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f9f4 + 0x1a1f890));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f9f8 + 0x1a1f89c));
    func_0x01384978(*(undefined4 *)(_UNK_01a1f9fc + 0x1a1f8a8));
    func_0x01384978(*(undefined4 *)(_UNK_01a1fa00 + 0x1a1f8b4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7eb6,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a1fa04 + 0x1a1f918));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_01a1fa08 + 0x1a1f940);
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(int *)(iVar1 + 0xc) = param_1;
    uVar3 = *puVar2;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    iVar4 = func_0x034aaa34(uVar3);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01ee906c(iVar4,4,0);
    iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01a1fa0c + 0x1a1f984));
    uVar6 = *(undefined4 *)(param_1 + 0xc0);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01a1fa10 + 0x1a1f99c));
    func_0x02450194(uVar5,iVar1,**(undefined4 **)(_UNK_01a1fa14 + 0x1a1f9b8),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0244a2c0(iVar4,uVar6,uVar3,uVar5,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7eb6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.FightBoardActivity.<>c__DisplayClass48_0$$.ctor RVA 0x1a0fa18 =====

void FUN_01a1fa18(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.FightBoardActivity$$.ctor RVA 0x1a0fa20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a1fa20(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
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
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01a1fd64 + 0x1a1fa3c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a1fd68 + 0x1a1fa50));
    func_0x01384978(*(undefined4 *)(_UNK_01a1fd6c + 0x1a1fa5c));
    func_0x01384978(*(undefined4 *)(_UNK_01a1fd70 + 0x1a1fa68));
    func_0x01384978(*(undefined4 *)(_UNK_01a1fd74 + 0x1a1fa74));
    func_0x01384978(*(undefined4 *)(_UNK_01a1fd78 + 0x1a1fa80));
    func_0x01384978(*(undefined4 *)(_UNK_01a1fd7c + 0x1a1fa8c));
    func_0x01384978(*(undefined4 *)(_UNK_01a1fd80 + 0x1a1fa98));
    *pcVar6 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a1fd84 + 0x1a1fac8));
  func_0x01a1fda0();
  puVar2 = *(undefined4 **)(_UNK_01a1fd88 + 0x1a1fae0);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450660(uVar1,**(undefined4 **)(_UNK_01a1fd8c + 0x1a1faf8));
  puVar2 = *(undefined4 **)(_UNK_01a1fd90 + 0x1a1fb0c);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  puVar7 = *(undefined4 **)(_UNK_01a1fd94 + 0x1a1fb24);
  func_0x0328e950(uVar1,*puVar7);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x0328e950(uVar1,*puVar7);
  piVar8 = *(int **)(_UNK_01a1fd98 + 0x1a1fb4c);
  iVar4 = *piVar8;
  iVar5 = *(int *)(iVar4 + 0x74);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  if (iVar5 == 0) {
    func_0x01384ab4();
    iVar4 = *piVar8;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x02b64854(&uStack_30,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x5d4),0);
  iVar4 = *piVar8;
  *(undefined4 *)(param_1 + 0x6c) = uStack_28;
  *(ulonglong *)(param_1 + 100) = CONCAT44(uStack_2c,uStack_30);
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x02b64854(&uStack_40,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x5d0),0);
  iVar4 = *piVar8;
  *(undefined4 *)(param_1 + 0x78) = uStack_38;
  *(ulonglong *)(param_1 + 0x70) = CONCAT44(uStack_3c,uStack_40);
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x02b64854(&uStack_50,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x5cc),0);
  iVar4 = *piVar8;
  *(undefined4 *)(param_1 + 0x84) = uStack_48;
  *(ulonglong *)(param_1 + 0x7c) = CONCAT44(uStack_4c,uStack_50);
  uStack_54 = 0;
  uStack_58 = 0;
  func_0x02b644a0(&uStack_58,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x5b8),0);
  uStack_5c = 0;
  *(undefined4 *)(param_1 + 0x88) = uStack_58;
  *(undefined4 *)(param_1 + 0x8c) = uStack_54;
  uStack_60 = 0;
  func_0x02b644a0(&uStack_60,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x5c0),0);
  uStack_64 = 0;
  *(undefined4 *)(param_1 + 0x90) = uStack_60;
  *(undefined4 *)(param_1 + 0x94) = uStack_5c;
  uStack_68 = 0;
  func_0x02b644a0(&uStack_68,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x5c4),0);
  uStack_6c = 0;
  *(undefined4 *)(param_1 + 0x98) = uStack_68;
  *(undefined4 *)(param_1 + 0x9c) = uStack_64;
  uStack_70 = 0;
  func_0x02b644a0(&uStack_70,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x5c8),0);
  uStack_74 = 0;
  *(undefined4 *)(param_1 + 0xa0) = uStack_70;
  *(undefined4 *)(param_1 + 0xa4) = uStack_6c;
  uStack_78 = 0;
  func_0x02b644a0(&uStack_78,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x5d8),0);
  *(undefined4 *)(param_1 + 0xa8) = uStack_78;
  *(undefined4 *)(param_1 + 0xac) = uStack_74;
  *(undefined4 *)(param_1 + 0xc0) = **(undefined4 **)(_UNK_01a1fd9c + 0x1a1fcf4);
  func_0x02b4dc04(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0xc);
  uVar1 = func_0x02b4429c(param_1,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x01cab1c0(iVar4,uVar1,0);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  func_0x01a1fe5c(param_1);
  return;
}



// ===== FAT.FightBoardActivity$$RefreshTheme RVA 0x1a0fe5c =====

void FUN_01a1fe5c(int param_1)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x7eff,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    uStack_28 = *(undefined8 *)(param_1 + 100);
    uStack_20 = *(undefined4 *)(param_1 + 0x6c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x58),param_1,0,0,0);
    iVar1 = *(int *)(param_1 + 0x58);
    uStack_28 = *(undefined8 *)(param_1 + 0x70);
    uStack_20 = *(undefined4 *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x34),param_1,0,0,0);
    iVar1 = *(int *)(param_1 + 0x58);
    uStack_28 = *(undefined8 *)(param_1 + 0x7c);
    uStack_20 = *(undefined4 *)(param_1 + 0x84);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x38),param_1,0,0,0);
    uStack_30 = *(undefined4 *)(param_1 + 0x88);
    uStack_2c = *(undefined4 *)(param_1 + 0x8c);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x24),0);
    uStack_30 = *(undefined4 *)(param_1 + 0x90);
    uStack_2c = *(undefined4 *)(param_1 + 0x94);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x4c),0);
    uStack_30 = *(undefined4 *)(param_1 + 0x98);
    uStack_2c = *(undefined4 *)(param_1 + 0x9c);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x44),0);
    uStack_30 = *(undefined4 *)(param_1 + 0xa0);
    uStack_2c = *(undefined4 *)(param_1 + 0xa4);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x54),0);
    iVar1 = *(int *)(param_1 + 0x58);
    uStack_30 = *(undefined4 *)(param_1 + 0xa8);
    uStack_2c = *(undefined4 *)(param_1 + 0xac);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x30),0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7eff,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.FightBoardActivity$$Open RVA 0x1a1006c =====

void FUN_01a2006c(int param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x7ebc,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x7ebd,0);
    if (iVar1 == 0) {
      uStack_18 = 0;
      uStack_14 = 0;
      func_0x02b57d14(param_1,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
                      *(undefined4 *)(param_1 + 0x88));
      return;
    }
    iVar1 = func_0x0229f13c(0x7ebd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7ebc,0);
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
  return;
}



// ===== FAT.FightBoardActivity$$EnterBoard RVA 0x1a100c4 =====

void FUN_01a200c4(int param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x7ebd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ebd,0);
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
  uStack_18 = 0;
  uStack_14 = 0;
  func_0x02b57d14(param_1,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
                  *(undefined4 *)(param_1 + 0x88));
  return;
}



// ===== FAT.FightBoardActivity$$LoadSetup RVA 0x1a10148 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a20148(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
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
  
  iVar1 = func_0x0229f06c(0x7ebf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ebf,0);
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
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = func_0x01c23c30(0,uVar2,0);
  *(undefined4 *)(param_1 + 0xb0) = uVar6;
  uVar6 = func_0x01c23c30(1,uVar2,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar6;
  uVar6 = func_0x01c23c30(2,uVar2,0);
  *(undefined4 *)(param_1 + 0xb8) = uVar6;
  uVar6 = func_0x01c23c30(3,uVar2,0);
  *(undefined4 *)(param_1 + 0xbc) = uVar6;
  func_0x01a20218(param_1);
  func_0x01a202ec(param_1);
  pcVar3 = (char *)(_UNK_01a20420 + 0x1a20358);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a20424 + 0x1a2036c));
    *pcVar3 = '\x01';
  }
  uVar7 = func_0x0229f06c(0x7ecc,0);
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 == 0) {
    iVar4 = *(int *)(param_1 + 0x5c);
    if (iVar4 != 0) {
      iVar1 = *(int *)(param_1 + 0x60);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0x30);
      iVar1 = *(int *)(iVar4 + 0x2c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      iVar4 = iVar1;
      if (0 < iVar1) {
        iVar4 = iVar5;
      }
      if (iVar4 < 1) {
        if (iVar5 < 1) {
          if (iVar1 < 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = 2;
          }
        }
        else {
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 3;
      }
      *(undefined4 *)(param_1 + 200) = uVar6;
      return;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x7ecc,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2);
  return;
}



// ===== FAT.FightBoardActivity$$LoadData RVA 0x1a10218 =====

void FUN_01a20218(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x7ec0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ec0,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0xb0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01cab224(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  func_0x01a21d08(param_1);
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  uVar5 = *(undefined4 *)(param_1 + 0x60);
  uVar4 = *(undefined4 *)(param_1 + 0xb4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01a223c0(iVar1,uVar4,uVar5,uVar2);
  return;
}



// ===== FAT.FightBoardActivity$$RefreshOutputType RVA 0x1a102ec =====

void FUN_01a202ec(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7eca,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7eca,0);
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
  *(undefined4 *)(param_1 + 0xc4) = 1;
  return;
}



// ===== FAT.FightBoardActivity$$RefreshOutputMethod RVA 0x1a10344 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a20344(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
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
  
  pcVar3 = (char *)(_UNK_01a20420 + 0x1a20358);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a20424 + 0x1a2036c));
    *pcVar3 = '\x01';
  }
  uVar7 = func_0x0229f06c(0x7ecc,0);
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 != 0) {
    iVar1 = func_0x0229f13c(0x7ecc,0);
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
  iVar4 = *(int *)(param_1 + 0x5c);
  if (iVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x60);
  }
  if (iVar4 != 0 && iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0x30);
    iVar1 = *(int *)(iVar4 + 0x2c);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0xc);
    iVar4 = iVar1;
    if (0 < iVar1) {
      iVar4 = iVar5;
    }
    if (iVar4 < 1) {
      if (iVar5 < 1) {
        if (iVar1 < 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 1;
      }
    }
    else {
      uVar6 = 3;
    }
    *(undefined4 *)(param_1 + 200) = uVar6;
    return;
  }
  return;
}



// ===== FAT.FightBoardActivity$$SaveSetup RVA 0x1a10428 =====

/* WARNING: Possible PIC construction at 0x01a204e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a20518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a20548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01a2051c) */
/* WARNING: Removing unreachable block (ram,0x01a20538) */
/* WARNING: Removing unreachable block (ram,0x01a2053c) */
/* WARNING: Removing unreachable block (ram,0x01a204ec) */
/* WARNING: Removing unreachable block (ram,0x01a20508) */
/* WARNING: Removing unreachable block (ram,0x01a2050c) */
/* WARNING: Removing unreachable block (ram,0x01a2054c) */
/* WARNING: Removing unreachable block (ram,0x01a20568) */
/* WARNING: Removing unreachable block (ram,0x01a2056c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a20428(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar4 = (char *)(_UNK_01a20580 + 0x1a20440);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a20584 + 0x1a20454));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7ece,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ece,0);
    if (iVar1 == 0) {
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
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar5 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0xb0),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_24 = *(int **)(_UNK_01a20588 + 0x1a204e8);
  iVar3 = *piStack_24;
  pcVar4 = (char *)(_UNK_03652bac + 0x3652b1c);
  iStack_30 = param_1;
  iStack_2c = iVar1;
  uStack_28 = uVar5;
  if (*pcVar4 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar4 = '\x01';
  }
  func_0x03031dbc(uVar5,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x80));
  func_0x036529a8(iVar1,*(int *)(iVar1 + 0xc) + 1,
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x3c));
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(uint *)(iVar1 + 0xc);
  *(uint *)(iVar1 + 0xc) = uVar6 + 1;
  if (iVar3 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar6) {
    func_0x02457d5c();
  }
  *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar5;
  return;
}



// ===== FAT.FightBoardActivity$$SetupFresh RVA 0x1a1058c =====

void FUN_01a2058c(int param_1)

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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x7ecf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ecf,0);
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
  func_0x01a2065c(param_1);
  func_0x01a20738(param_1);
  FUN_01a202ec(param_1);
  FUN_01a20344(param_1);
  FUN_01a1f0f0(param_1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xfc);
  uVar4 = *(undefined4 *)(param_1 + 0x6c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  func_0x01e7437c(iVar1,uVar4,0,0);
  return;
}



// ===== FAT.FightBoardActivity$$InitData RVA 0x1a1065c =====

void FUN_01a2065c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7ed0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ed0,0);
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
  uVar4 = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x3c);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01cf6408(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0xb0) = uVar4;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0xb0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01cab224(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  return;
}



// ===== FAT.FightBoardActivity$$EnterNextLevel RVA 0x1a10738 =====

void FUN_01a20738(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7ed1,0);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    func_0x01a21d08(param_1);
    iVar1 = func_0x0229f06c(0x7ed2,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x60);
      if (iVar1 != 0) {
        iVar3 = *(int *)(param_1 + 0x3c);
        uVar4 = *(undefined4 *)(iVar1 + 0x18);
        uVar2 = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0xb4) = uVar4;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x01a223c0(iVar3,uVar4,iVar1,uVar2);
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x7ed2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7ed1,0);
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
  return;
}



// ===== FAT.FightBoardActivity$$WhenEnd RVA 0x1a107a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a207a4(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01a209bc + 0x1a207bc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a209c0 + 0x1a207d0));
    func_0x01384978(*(undefined4 *)(_UNK_01a209c4 + 0x1a207dc));
    func_0x01384978(*(undefined4 *)(_UNK_01a209c8 + 0x1a207e8));
    func_0x01384978(*(undefined4 *)(_UNK_01a209cc + 0x1a207f4));
    func_0x01384978(*(undefined4 *)(_UNK_01a209d0 + 0x1a20800));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x7ed4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ed4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xfc);
  uVar4 = *(undefined4 *)(param_1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e7437c(iVar1,uVar4,0,0,0);
  if (*(int *)(**(int **)(_UNK_01a209d4 + 0x1a208b0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x028c8d78(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a7c0(&uStack_20,iVar1,&iStack_24,**(undefined4 **)(_UNK_01a209d8 + 0x1a208ec));
  iVar2 = func_0x01a209e4(param_1,iStack_24);
  iVar1 = iStack_24;
  if (iVar2 != 0) {
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *(undefined4 *)(param_1 + 0x84);
      iVar1 = *(int *)(iVar1 + 0xfc);
      uStack_30 = uStack_20;
      uStack_2c = uStack_1c;
      uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_01a209dc + 0x1a20958),&uStack_30);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(iVar1,uVar5,0,uVar4,0);
      goto LAB_01a209ac;
    }
  }
  func_0x03633b24(&uStack_20,**(undefined4 **)(_UNK_01a209e0 + 0x1a209a4));
LAB_01a209ac:
  func_0x01a210c0(param_1);
  return;
}



// ===== FAT.FightBoardActivity$$CollectAllBoardReward RVA 0x1a109e4 =====

/* WARNING: Removing unreachable block (ram,0x01a20e8c) */
/* WARNING: Removing unreachable block (ram,0x01a20e44) */
/* WARNING: Removing unreachable block (ram,0x01a20e50) */
/* WARNING: Removing unreachable block (ram,0x01a20ea8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a209e4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
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
  
  pcVar4 = (char *)(_UNK_01a21048 + 0x1a20a00);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a2104c + 0x1a20a14));
    func_0x01384978(*(undefined4 *)(_UNK_01a21050 + 0x1a20a20));
    func_0x01384978(*(undefined4 *)(_UNK_01a21054 + 0x1a20a2c));
    func_0x01384978(*(undefined4 *)(_UNK_01a21058 + 0x1a20a38));
    func_0x01384978(*(undefined4 *)(_UNK_01a2105c + 0x1a20a44));
    func_0x01384978(*(undefined4 *)(_UNK_01a21060 + 0x1a20a50));
    func_0x01384978(*(undefined4 *)(_UNK_01a21064 + 0x1a20a5c));
    func_0x01384978(*(undefined4 *)(_UNK_01a21068 + 0x1a20a68));
    func_0x01384978(*(undefined4 *)(_UNK_01a2106c + 0x1a20a74));
    func_0x01384978(*(undefined4 *)(_UNK_01a21070 + 0x1a20a80));
    func_0x01384978(*(undefined4 *)(_UNK_01a21074 + 0x1a20a8c));
    func_0x01384978(*(undefined4 *)(_UNK_01a21078 + 0x1a20a98));
    func_0x01384978(*(undefined4 *)(_UNK_01a2107c + 0x1a20aa4));
    func_0x01384978(*(undefined4 *)(_UNK_01a21080 + 0x1a20ab0));
    func_0x01384978(*(undefined4 *)(_UNK_01a21084 + 0x1a20abc));
    *pcVar4 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar5 = 0;
  uStack_50 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  iVar2 = func_0x0229f06c(0x7ed6,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a21088 + 0x1a20b48));
    func_0x0244f5a0(iVar2,0);
    iVar3 = FUN_01a1ee90(param_1);
    if (param_2 != 0 && iVar3 != 0) {
      piVar6 = *(int **)(_UNK_01a2108c + 0x1a20b78);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x028c8d78(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      puVar7 = *(undefined4 **)(_UNK_01a21090 + 0x1a20bc8);
      func_0x0302a45c(&uStack_30,iVar3,(undefined4 *)(iVar2 + 8),*puVar7);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x028c8d78(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a45c(&uStack_68,iVar3,(int *)(iVar2 + 0xc),*puVar7);
      uStack_34 = uStack_64;
      uStack_38 = uStack_68;
      iVar3 = FUN_01a1ee90(param_1);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01a21094 + 0x1a20c44));
      func_0x02450194(uVar5,iVar2,**(undefined4 **)(_UNK_01a21098 + 0x1a20c58),0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x021475dc(iVar3,uVar5,5,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar2 + 0xc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_68,iVar3,**(undefined4 **)(_UNK_01a2109c + 0x1a20cbc));
      uStack_50 = uStack_68;
      uStack_4c = uStack_64;
      uStack_48 = uStack_60;
      uStack_44 = uStack_5c;
      uStack_40 = uStack_58;
      while (iVar3 = func_0x01475638(&uStack_50,**(undefined4 **)(_UNK_01a210b4 + 0x1a20cf4)),
            uVar5 = uStack_44, iVar3 != 0) {
        uVar1 = (undefined4)uStack_40;
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar3 + 0x40);
        iVar3 = **(int **)(_UNK_01a210a0 + 0x1a20d2c);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = **(int **)(_UNK_01a210a4 + 0x1a20d4c);
        }
        uVar10 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x24);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x01cdcbac(iVar8,uVar5,uVar1,uVar10,0,0,0,0xb8,
                                **(undefined4 **)(_UNK_01a210a8 + 0x1a20d6c),
                                **(undefined4 **)(_UNK_01a210ac + 0x1a20d78),0);
        iVar8 = *(int *)(param_2 + 8);
        uVar9 = *(uint *)(param_2 + 0xc);
        piVar6 = *(int **)(_UNK_01a210b0 + 0x1a20dcc);
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        iVar3 = *piVar6;
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (uVar9 < *(uint *)(iVar8 + 0xc)) {
          *(uint *)(param_2 + 0xc) = uVar9 + 1;
          *(undefined4 *)(iVar8 + uVar9 * 4 + 0x10) = uVar5;
        }
        else {
          func_0x0328f170(param_2,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
        }
      }
      func_0x0245059c(&uStack_50,**(undefined4 **)(_UNK_01a210b8 + 0x1a20e28));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x02172d9c(*(undefined4 *)(iVar2 + 8),0);
      func_0x019b8b48(param_1,uVar5,0);
      uVar5 = 1;
      func_0x028c98a0(&uStack_38,0);
      func_0x028c98a0(&uStack_30,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7ed6,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x021734d8(iVar2,param_1,param_2,0);
  }
  return uVar5;
}



// ===== FAT.FightBoardActivity$$Cleanup RVA 0x1a110c0 =====

void FUN_01a210c0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7eda,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7eda,0);
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
  func_0x01a22664(param_1);
  iVar1 = FUN_01a1ee90(param_1);
  if (iVar1 != 0) {
    func_0x021421a8(iVar1,param_1,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar4 = FUN_01a1ee90(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



// ===== FAT.FightBoardActivity.<>c__DisplayClass55_0$$.ctor RVA 0x1a11184 =====

void FUN_01a21184(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.FightBoardActivity$$WhenReset RVA 0x1a1118c =====

void FUN_01a2118c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7edc,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x7eda,0);
    if (iVar1 == 0) {
      func_0x01a22664(param_1);
      iVar1 = FUN_01a1ee90(param_1);
      if (iVar1 != 0) {
        func_0x021421a8(iVar1,param_1,0);
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar4 = FUN_01a1ee90(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbc0ec(iVar1,uVar4,0);
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x7eda,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7edc,0);
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
  return;
}



// ===== FAT.FightBoardActivity$$TryPopup RVA 0x1a111e4 =====

void FUN_01a211e4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x7edd,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x6c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x01e7437c(param_2,uVar2,param_3,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7edd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.FightBoardActivity$$CanUseItem RVA 0x1a1127c =====

undefined4 FUN_01a2127c(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x7ede,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ede,0);
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar3 = func_0x0210e2d4(param_2,0);
  if (iVar1 == iVar3) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01a21334(iVar1);
    uVar4 = 0;
    if (0 < iVar1) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.FightBoardActivity$$TrySpawnItem RVA 0x1a11388 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a21388(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01a219ac + 0x1a213a8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a219b0 + 0x1a213c0));
    func_0x01384978(*(undefined4 *)(_UNK_01a219b4 + 0x1a213cc));
    func_0x01384978(*(undefined4 *)(_UNK_01a219b8 + 0x1a213d8));
    func_0x01384978(*(undefined4 *)(_UNK_01a219bc + 0x1a213e4));
    func_0x01384978(*(undefined4 *)(_UNK_01a219c0 + 0x1a213f0));
    func_0x01384978(*(undefined4 *)(_UNK_01a219c4 + 0x1a213fc));
    func_0x01384978(*(undefined4 *)(_UNK_01a219c8 + 0x1a21408));
    func_0x01384978(*(undefined4 *)(_UNK_01a219cc + 0x1a21414));
    func_0x01384978(*(undefined4 *)(_UNK_01a219d0 + 0x1a21420));
    func_0x01384978(*(undefined4 *)(_UNK_01a219d4 + 0x1a2142c));
    func_0x01384978(*(undefined4 *)(_UNK_01a219d8 + 0x1a21438));
    func_0x01384978(*(undefined4 *)(_UNK_01a219dc + 0x1a21444));
    func_0x01384978(*(undefined4 *)(_UNK_01a219e0 + 0x1a21450));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x7ee0,0);
  if (iVar3 == 0) {
    *param_4 = 0;
    *param_3 = 0xffffffff;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar3 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_01a219e4 + 0x1a214dc));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0211b24c(iVar3,0);
    if (iVar5 != 0) {
      iVar5 = func_0x01a21a14(param_1);
      iVar8 = *(int *)(param_1 + 0x5c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x24);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      if (*(int *)(**(int **)(_UNK_01a219e8 + 0x1a21544) + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (iVar8 + -1 < iVar5) {
        uStack_38 = 0x32;
        uVar4 = 0x32;
      }
      else {
        uStack_38 = 0x31;
        uVar4 = 0x31;
      }
      func_0x0204f2f0(&uStack_30,uVar4,0);
      uVar6 = uStack_28;
      uVar13 = uStack_2c;
      uVar4 = uStack_30;
      iVar5 = *(int *)(param_1 + 0x58);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar12 = *(undefined4 *)(iVar5 + 0x1c);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_30,param_2,0);
      uVar2 = uStack_2c;
      uVar1 = uStack_30;
      if (*(int *)(**(int **)(_UNK_01a219ec + 0x1a215d8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dd876c(&uStack_30,uVar1,uVar2,0);
      if (*(int *)(**(int **)(_UNK_01a219f0 + 0x1a21618) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207405c(uVar12,3,uStack_30,uStack_2c,uStack_28,uVar4,uVar13,uVar6,2,uStack_38,0,0,0,3,
                      0);
      iVar5 = *(int *)(param_1 + 0x58);
      iVar8 = *(int *)(param_1 + 0x3c);
      if (iVar5 == 0) {
        func_0x01384bf0();
        uVar4 = uRam00000020;
        iVar5 = *(int *)(param_1 + 0x58);
        iVar9 = iVar5;
        if (iVar5 == 0) {
          func_0x01384bf0();
          iVar9 = *(int *)(param_1 + 0x58);
          if (*(int *)(param_1 + 0x58) == 0) {
            func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
      else {
        uVar4 = *(undefined4 *)(iVar5 + 0x20);
        iVar9 = iVar5;
      }
      iVar9 = *(int *)(iVar9 + 0x18);
      uVar13 = *(undefined4 *)(iVar5 + 0x14);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      puVar10 = *(undefined4 **)(_UNK_01a219f4 + 0x1a216cc);
      uVar6 = func_0x0364c9b8(iVar9,0,*puVar10);
      iVar5 = *(int *)(param_1 + 0x58);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x18);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar12 = func_0x0364c9b8(iVar5,1,*puVar10);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x01a21a6c(iVar8,uVar4,uVar13,uVar6,uVar12);
      iVar5 = *(int *)(param_1 + 0x58);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(param_1 + 0x3c);
      uVar4 = *(undefined4 *)(iVar5 + 0x5c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x01a21b10(iVar8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(param_1 + 0x3c);
      iVar5 = *(int *)(iVar5 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x01a21b10(iVar8);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(param_1 + 0x3c);
      iVar8 = *(int *)(iVar8 + 0x10);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = func_0x01a21b10(iVar9);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      piVar14 = *(int **)(_UNK_01a219f8 + 0x1a217d0);
      uVar13 = *(undefined4 *)(iVar9 + 8);
      iVar9 = *piVar14;
      if (*(int *)(iVar9 + 0x74) == 0) {
        func_0x01384ab4();
        iVar9 = *piVar14;
      }
      iVar11 = *(int *)(*(int *)(iVar9 + 0x5c) + 4);
      if (iVar11 == 0) {
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x01384ab4();
          iVar9 = *piVar14;
        }
        uVar6 = **(undefined4 **)(iVar9 + 0x5c);
        iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01a219fc + 0x1a2181c));
        func_0x024506cc(iVar11,uVar6,**(undefined4 **)(_UNK_01a21a00 + 0x1a2183c),0);
        *(int *)(*(int *)(*piVar14 + 0x5c) + 4) = iVar11;
      }
      uVar13 = func_0x02f92598(uVar13,iVar11,**(undefined4 **)(_UNK_01a21a04 + 0x1a21860));
      iVar9 = *(int *)(param_1 + 0x5c);
      uVar6 = *(undefined4 *)(param_1 + 0x24);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x24);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x019b8840(param_1,uVar4,iVar5 - iVar8,uVar13,uVar6,*(undefined4 *)(iVar9 + 0xc),0);
      iVar5 = *(int *)(param_1 + 0x3c);
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar4 = FUN_01a21334(iVar5);
      *(undefined4 *)(param_1 + 0xb4) = uVar4;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0211b2b0(iVar3,0);
      func_0x01a21b64(param_1,uVar4);
      if (*(int *)(**(int **)(_UNK_01a21a08 + 0x1a21914) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_01a21a0c + 0x1a21930));
      iVar5 = *(int *)(param_1 + 0x3c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x01a21b10(iVar5);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar3,uVar4,**(undefined4 **)(_UNK_01a21a10 + 0x1a21970));
      uVar4 = 1;
      if (*(int *)(param_1 + 0xb4) < 1) {
        FUN_01a20738(param_1);
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x7ee0,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x022365c4(iVar3,param_1,param_2,param_3,param_4,0);
  }
  return uVar4;
}



// ===== FAT.FightBoardActivity$$GetCurrentMilestoneIndex RVA 0x1a11a14 =====

int FUN_01a21a14(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7ee1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ee1,0);
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
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  return *(int *)(param_1 + 0x24) + -1;
}



// ===== FAT.FightBoardActivity$$_BeginReward RVA 0x1a11b64 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x01a23428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a21b64(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar10 = (char *)(_UNK_01a21c78 + 0x1a21b7c);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a21c7c + 0x1a21b90));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7eed,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7eed,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = iStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar7,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar9) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar9,0);
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar9) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar9,0);
  }
  func_0x01a22700(param_1,param_2);
  pcVar10 = (char *)(_UNK_01a2343c + 0x1a22d0c);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a23440 + 0x1a22d20));
    func_0x01384978(*(undefined4 *)(_UNK_01a23444 + 0x1a22d2c));
    func_0x01384978(*(undefined4 *)(_UNK_01a23448 + 0x1a22d38));
    func_0x01384978(*(undefined4 *)(_UNK_01a2344c + 0x1a22d44));
    func_0x01384978(*(undefined4 *)(_UNK_01a23450 + 0x1a22d50));
    func_0x01384978(*(undefined4 *)(_UNK_01a23454 + 0x1a22d5c));
    func_0x01384978(*(undefined4 *)(_UNK_01a23458 + 0x1a22d68));
    func_0x01384978(*(undefined4 *)(_UNK_01a2345c + 0x1a22d74));
    func_0x01384978(*(undefined4 *)(_UNK_01a23460 + 0x1a22d80));
    func_0x01384978(*(undefined4 *)(_UNK_01a23464 + 0x1a22d8c));
    func_0x01384978(*(undefined4 *)(_UNK_01a23468 + 0x1a22d98));
    func_0x01384978(*(undefined4 *)(_UNK_01a2346c + 0x1a22da4));
    func_0x01384978(*(undefined4 *)(_UNK_01a23470 + 0x1a22db0));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7efd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7efd,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    iStack_4c = 0;
    func_0x0245495c(iVar9,uVar11,&uStack_30,uVar7);
    return;
  }
  if (0 < *(int *)(param_1 + 0xb4)) {
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar1 + 0x40);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar11 = func_0x01db7b78(iVar1,0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x01cdef00(iVar9,uVar11,0,0);
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  iStack_34 = param_1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_01a23474 + 0x1a22eb0));
  piVar14 = *(int **)(_UNK_01a23478 + 0x1a22ecc);
LAB_01a22ec8:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01a23490 + 0x1a22ee4)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_01a22f2c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a23490 + 0x1a22ee4),0);
LAB_01a22f2c:
  iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar1 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01a2347c + 0x1a22f60)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01a22fa8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a2347c + 0x1a22f60),0);
LAB_01a22fa8:
    uVar11 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_01a23480 + 0x1a22fc8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar11,0);
    uVar7 = uStack_2c;
    uVar11 = uStack_30;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar14;
    iVar1 = *(int *)(iVar1 + 0x40);
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar14;
    }
    uVar8 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x284);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_48 = **(undefined4 **)(_UNK_01a23484 + 0x1a23044);
    uStack_44 = **(undefined4 **)(_UNK_01a23488 + 0x1a23050);
    iStack_4c = 0x1af;
    uStack_40 = 0;
    uStack_50 = 0;
    uVar11 = func_0x01cdcbac(iVar1,uVar11,uVar7,uVar8,0,0);
    iVar1 = *(int *)(iStack_34 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar1 + 8);
    uVar5 = *(uint *)(iVar1 + 0xc);
    piVar6 = *(int **)(_UNK_01a2348c + 0x1a230b8);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar13 = *piVar6;
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar5 + 1;
      *(undefined4 *)(iVar9 + uVar5 * 4 + 0x10) = uVar11;
    }
    else {
      func_0x0328f170(iVar1,uVar11,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38))
      ;
    }
    goto LAB_01a22ec8;
  }
  iVar1 = 6;
  iVar9 = 0;
  do {
    iVar13 = iStack_34;
    if (piVar2 != (int *)0x0) {
      iVar4 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar14[-1] == **(int **)(_UNK_01a23494 + 0x1a23124)) {
            puVar3 = (undefined4 *)(iVar4 + *piVar14 * 8 + 0xc0);
            goto LAB_01a2316c;
          }
          uVar5 = uVar5 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a23494 + 0x1a23124),0);
LAB_01a2316c:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
    if (iVar9 != 0) {
      func_0x01384bec(iVar9);
    }
    if (iVar1 != 6 && iVar1 != 0) {
      return;
    }
    if (*(int *)(**(int **)(_UNK_01a23498 + 0x1a231a4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a2349c + 0x1a231c0));
    uVar11 = *(undefined4 *)(iVar13 + 0x54);
    uVar7 = *(undefined4 *)(iVar13 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a25f4(iVar1,uVar11,uVar7,**(undefined4 **)(_UNK_01a234a0 + 0x1a231f0));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01cdefd0(iVar1,0);
    iVar1 = *(int *)(iVar13 + 0x5c);
    piVar2 = *(int **)(iVar13 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar13 + 0x5c);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = iVar9;
    if (iVar9 != 0) {
LAB_01a23274:
      iVar1 = *(int *)(iVar1 + 0x24);
      iVar4 = *(int *)(iVar13 + 0x24);
      uVar7 = *(undefined4 *)(iVar9 + 0x1c);
      uStack_38 = uVar11;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar13 + 0x5c);
      iVar12 = *(int *)(iVar13 + 0x24);
      uVar11 = *(undefined4 *)(iVar13 + 0xbc);
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x24);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (iVar12 - *(int *)(iVar9 + 0xc) < 1) {
        iVar9 = 1;
      }
      else {
        iVar13 = *(int *)(iStack_34 + 0x5c);
        iVar9 = *(int *)(iStack_34 + 0x24);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(iVar13 + 0x24);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar9 = iVar9 - *(int *)(iVar13 + 0xc);
      }
      iVar13 = iStack_34;
      iVar12 = *(int *)(iStack_34 + 0x60);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = *(undefined4 *)(iVar12 + 0xc);
      uStack_44 = 0;
      uStack_50 = uVar11;
      iStack_4c = iVar9;
      func_0x019b89b0(iVar13,piVar2,uStack_38,uVar7,1,iVar4 == iVar1);
      return;
    }
    func_0x01384bf0();
    iVar1 = *(int *)(iVar13 + 0x5c);
    if (iVar1 != 0) goto LAB_01a23274;
    uVar15 = func_0x01384bf0();
    if ((int)((ulonglong)uVar15 >> 0x20) != 1) break;
    piVar14 = (int *)func_0x0145b008((int)uVar15);
    iVar9 = *piVar14;
    iVar1 = 0;
    func_0x0145b0f8();
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar14 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar14[-1] == **(int **)(_UNK_01a234a4 + 0x1a233c8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar14 * 8 + 0xc0);
          goto LAB_01a23410;
        }
        uVar5 = uVar5 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a234a4 + 0x1a233c8),0);
LAB_01a23410:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  func_0x01459844((int)uVar15);
  func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.FightBoardActivity$$LeaveBoard RVA 0x1a11c80 =====

void FUN_01a21c80(int param_1)

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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x7efe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7efe,0);
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
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  func_0x02b57fac(param_1,*(undefined4 *)(iVar1 + 0xc),0,0);
  return;
}



// ===== FAT.FightBoardActivity$$RefreshLevel RVA 0x1a11d08 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x01a22358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a21d08(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *unaff_r11;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01a2236c + 0x1a21d20);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a22370 + 0x1a21d34));
    func_0x01384978(*(undefined4 *)(_UNK_01a22374 + 0x1a21d40));
    func_0x01384978(*(undefined4 *)(_UNK_01a22378 + 0x1a21d4c));
    func_0x01384978(*(undefined4 *)(_UNK_01a2237c + 0x1a21d58));
    func_0x01384978(*(undefined4 *)(_UNK_01a22380 + 0x1a21d64));
    func_0x01384978(*(undefined4 *)(_UNK_01a22384 + 0x1a21d70));
    func_0x01384978(*(undefined4 *)(_UNK_01a22388 + 0x1a21d7c));
    func_0x01384978(*(undefined4 *)(_UNK_01a2238c + 0x1a21d88));
    func_0x01384978(*(undefined4 *)(_UNK_01a22390 + 0x1a21d94));
    func_0x01384978(*(undefined4 *)(_UNK_01a22394 + 0x1a21da0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7ec2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ec2,0);
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
    return;
  }
  iVar7 = *(int *)(param_1 + 0x5c);
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x24);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar7 + 0xc) < iVar1) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar1 + 0x48) == '\0') {
      iVar1 = *(int *)(param_1 + 0x5c);
      iVar7 = *(int *)(param_1 + 0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(uint *)(iVar1 + 0xc);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(param_1 + 0x5c);
      iVar1 = *(int *)(iVar1 + 0xc);
      iVar10 = iVar8;
      if (iVar8 == 0) {
        func_0x01384bf0();
        iVar10 = *(int *)(param_1 + 0x5c);
        if (iVar10 == 0) {
          uVar11 = func_0x01384bf0();
          if ((int)((ulonglong)uVar11 >> 0x20) != 1) {
            if (unaff_r11 != (int *)0x0) {
              iVar1 = *unaff_r11;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar4[-1] == **(int **)(_UNK_01a223bc + 0x1a222f8)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                    goto LAB_01a22340;
                  }
                  uVar3 = uVar3 - 1;
                  piVar4 = piVar4 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc();
LAB_01a22340:
              (*(code *)*puVar2)();
            }
            func_0x01459844((int)uVar11);
            func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          piVar4 = (int *)func_0x0145b008((int)uVar11);
          iVar7 = *piVar4;
          iVar1 = 0;
          func_0x0145b0f8();
          goto LAB_01a22200;
        }
      }
      iVar10 = *(int *)(iVar10 + 0x18);
      iVar8 = *(int *)(iVar8 + 0x18);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar9 = *(undefined4 *)(iVar10 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x01458344(iVar7 + ~uVar3,uVar9);
      uVar9 = func_0x0364c9b8(iVar8,extraout_r1,**(undefined4 **)(_UNK_01a2239c + 0x1a21fa0));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      goto LAB_01a21fc0;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b49350(iVar1,param_1,0,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar1 + 0x24);
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x0364c9b8(iVar7,iVar1 + -1,**(undefined4 **)(_UNK_01a22398 + 0x1a21eb8));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
LAB_01a21fc0:
    uVar9 = func_0x01cab288(iVar1,uVar9,0);
    *(undefined4 *)(param_1 + 0x60) = uVar9;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar7 = *(int *)(param_1 + 0x60);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar7 == 0) {
    return;
  }
  iVar1 = *(int *)(iVar7 + 0x14);
  iStack_34 = param_1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_r11 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_01a223a0 + 0x1a22020));
LAB_01a22030:
  if (unaff_r11 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *unaff_r11;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01a223b4 + 0x1a2204c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a22094;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(unaff_r11,**(int **)(_UNK_01a223b4 + 0x1a2204c),0);
LAB_01a22094:
  iVar1 = (*(code *)*puVar2)(unaff_r11,puVar2[1]);
  if (iVar1 != 0) {
    if (unaff_r11 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *unaff_r11;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01a223a4 + 0x1a220c8)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01a22110;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(unaff_r11,**(int **)(_UNK_01a223a4 + 0x1a220c8),0);
LAB_01a22110:
    uVar9 = (*(code *)*puVar2)(unaff_r11,puVar2[1]);
    if (*(int *)(**(int **)(_UNK_01a223a8 + 0x1a22130) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar9,0);
    uVar5 = uStack_2c;
    uVar9 = uStack_30;
    iVar1 = *(int *)(iStack_34 + 0x4c);
    uStack_2c = 0;
    uStack_30 = 0;
    func_0x038fd264(&uStack_30,uVar9,uVar5,**(undefined4 **)(_UNK_01a223ac + 0x1a22164));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = uStack_2c;
    uVar9 = uStack_30;
    iVar7 = *(int *)(iVar1 + 8);
    uVar3 = *(uint *)(iVar1 + 0xc);
    piVar4 = *(int **)(_UNK_01a223b0 + 0x1a221ac);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar10 = *piVar4;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    if (uVar3 < *(uint *)(iVar7 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar3 + 1;
      iVar7 = iVar7 + uVar3 * 8;
      *(undefined4 *)(iVar7 + 0x10) = uVar9;
      *(undefined4 *)(iVar7 + 0x14) = uVar5;
    }
    else {
      func_0x024501b4(iVar1,uVar9,uVar5,
                      *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
    }
    goto LAB_01a22030;
  }
  iVar1 = 9;
  iVar7 = 0;
LAB_01a22200:
  if (unaff_r11 != (int *)0x0) {
    iVar10 = *unaff_r11;
    uVar3 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01a223b8 + 0x1a22218)) {
          puVar2 = (undefined4 *)(iVar10 + *piVar4 * 8 + 0xc0);
          goto LAB_01a22260;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(unaff_r11,**(int **)(_UNK_01a223b8 + 0x1a22218),0);
LAB_01a22260:
    (*(code *)*puVar2)(unaff_r11,puVar2[1]);
  }
  if (iVar7 != 0) {
    func_0x01384bec(iVar7);
  }
  if (iVar1 == 9 || iVar1 == 0) {
    func_0x01a224f4(iStack_34);
  }
  return;
}



// ===== FAT.FightBoardActivity$$RefreshMonsterData RVA 0x1a1245c =====

void FUN_01a2245c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7ed2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ed2,0);
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
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x3c);
    uVar4 = *(undefined4 *)(iVar1 + 0x18);
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0xb4) = uVar4;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01a223c0(iVar3,uVar4,iVar1,uVar2);
  }
  return;
}



// ===== FAT.FightBoardActivity$$_SetBonusHandlerDirty RVA 0x1a124f4 =====

void FUN_01a224f4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7ec4,0);
  if (iVar1 == 0) {
    iVar3 = func_0x01a23ef4(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x48);
    }
    param_1 = iVar1;
    if (iVar3 == 0 || param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x5b3,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar1 = func_0x0229f13c(0x5b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7ec4,0);
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
  return;
}



// ===== FAT.FightBoardActivity$$_RefreshSpawnBonusHandler RVA 0x1a12564 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a22564(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
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
  
  pcVar7 = (char *)(_UNK_01a22658 + 0x1a22578);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a2265c + 0x1a2258c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7eb3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7eb3,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar5);
    return;
  }
  iVar1 = func_0x01a23ef4(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a22660 + 0x1a225f4));
  func_0x021552f4(iVar1,0);
  *(int *)(iVar1 + 0x14) = param_1;
  func_0x02155388(iVar1,0);
  *(int *)(param_1 + 0x48) = iVar1;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  piVar6 = *(int **)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar7 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x16b4,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0x16b4,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,piVar6,0);
    iVar9 = *(int *)(iVar8 + 8);
    uVar10 = *(undefined4 *)(iVar8 + 0xc);
    iVar1 = *(int *)(iVar8 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = func_0x02f6252c(*(undefined4 *)(iVar1 + 0x34),piVar6,
                          **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
  if (piVar6 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01dbba38;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FightBoardActivity$$_ClearSpawnBonusHandler RVA 0x1a12664 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a22664(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
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
  
  iVar1 = func_0x0229f06c(0x7edb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7edb,0);
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
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
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
    func_0x0245495c(iVar7,uVar10,&uStack_30,uVar5);
    return;
  }
  iVar1 = func_0x01a23ef4(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  piVar6 = *(int **)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01dbbb8c + 0x1dbba78);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbbb90 + 0x1dbba8c),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbbb94 + 0x1dbba98));
    *pcVar9 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x23f,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x23f,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,piVar6,0);
    iVar8 = *(int *)(iVar7 + 8);
    uVar10 = *(undefined4 *)(iVar7 + 0xc);
    iVar1 = *(int *)(iVar7 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = *(int *)(iVar1 + 0x34);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03290900(iVar1,piVar6,**(undefined4 **)(_UNK_01dbbb98 + 0x1dbbb08));
  if (piVar6 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbbb9c + 0x1dbbb30)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd8);
        goto LAB_01dbbb78;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbbb9c + 0x1dbbb30),3);
LAB_01dbbb78:
                    /* WARNING: Could not recover jumptable at 0x01dbbb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FightBoardActivity$$_BeginAttackReward RVA 0x1a12700 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a22700(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint in_fpscr;
  float fVar15;
  undefined4 uVar16;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar6 = (char *)(_UNK_01a22c78 + 0x1a22724);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a22c7c + 0x1a22738));
    func_0x01384978(*(undefined4 *)(_UNK_01a22c80 + 0x1a22744));
    func_0x01384978(*(undefined4 *)(_UNK_01a22c84 + 0x1a22750));
    func_0x01384978(*(undefined4 *)(_UNK_01a22c88 + 0x1a2275c));
    func_0x01384978(*(undefined4 *)(_UNK_01a22c8c + 0x1a22768));
    func_0x01384978(*(undefined4 *)(_UNK_01a22c90 + 0x1a22774));
    func_0x01384978(*(undefined4 *)(_UNK_01a22c94 + 0x1a22780));
    func_0x01384978(*(undefined4 *)(_UNK_01a22c98 + 0x1a2278c));
    func_0x01384978(*(undefined4 *)(_UNK_01a22c9c + 0x1a22798));
    func_0x01384978(*(undefined4 *)(_UNK_01a22ca0 + 0x1a227a4));
    func_0x01384978(*(undefined4 *)(_UNK_01a22ca4 + 0x1a227b0));
    func_0x01384978(*(undefined4 *)(_UNK_01a22ca8 + 0x1a227bc));
    func_0x01384978(*(undefined4 *)(_UNK_01a22cac + 0x1a227c8));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x7eee,0);
  if (iVar3 == 0) {
    iVar3 = func_0x020d80e4(0x19,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar3 + 0x1c) = param_1;
    iVar9 = FUN_01a21a14(param_1);
    iVar10 = *(int *)(param_1 + 0x5c);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0x24);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0xc);
    if (*(int *)(**(int **)(_UNK_01a22cb0 + 0x1a2287c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    if (iVar9 < iVar10) {
      uVar12 = 0x31;
    }
    else {
      uVar12 = 0x32;
    }
    func_0x0204f2f0(&uStack_4c,uVar12,0);
    uVar12 = uStack_4c;
    fVar2 = _UNK_01a22c74;
    fVar1 = _UNK_01a22c70;
    uVar4 = uStack_44;
    uVar16 = uStack_48;
    if (0 < param_2) {
      iVar9 = 0;
      piVar7 = *(int **)(_UNK_01a22cb4 + 0x1a228e0);
      iStack_50 = param_1;
      do {
        iVar10 = *piVar7;
        uVar13 = *(undefined4 *)(param_1 + 0x4c);
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x01384ab4();
          iVar10 = *piVar7;
        }
        iVar8 = *(int *)(*(int *)(iVar10 + 0x5c) + 8);
        if (iVar8 == 0) {
          if (*(int *)(iVar10 + 0x74) == 0) {
            func_0x01384ab4();
            piVar7 = *(int **)(_UNK_01a22cbc + 0x1a22944);
            iVar10 = *piVar7;
          }
          else {
            piVar7 = *(int **)(_UNK_01a22cb8 + 0x1a22934);
          }
          uVar11 = **(undefined4 **)(iVar10 + 0x5c);
          iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01a22cc0 + 0x1a22954));
          func_0x03a068fc(iVar8,uVar11,**(undefined4 **)(_UNK_01a22cc4 + 0x1a22974),0);
          *(int *)(*(int *)(*piVar7 + 0x5c) + 8) = iVar8;
          param_1 = iStack_50;
        }
        func_0x02fbd288(&uStack_4c,uVar13,iVar8,0,**(undefined4 **)(_UNK_01a22cc8 + 0x1a229b0));
        uVar13 = uStack_4c;
        if (*(int *)(**(int **)(_UNK_01a22ccc + 0x1a229c8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        fVar15 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
        fVar15 = fVar2 + fVar15 * fVar1;
        func_0x01dd7838(uVar13,uVar12,uVar16,uVar4,fVar15,0);
        iVar10 = *(int *)(param_1 + 0x40);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x02139cf4(iVar10,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x020e2888(iVar10,uVar13,0x12,iVar3,0);
        if (iVar10 == 0) {
          if (*(int *)(**(int **)(_UNK_01a22cd0 + 0x1a22aac) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dd7dfc(0);
          iVar10 = func_0x01c24918(0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          piVar7 = *(int **)(_UNK_01a22cd4 + 0x1a22ae8);
          iVar8 = *(int *)(iVar10 + 0x40);
          iVar10 = *piVar7;
          if (*(int *)(iVar10 + 0x74) == 0) {
            func_0x01384ab4();
            iVar10 = *piVar7;
          }
          uVar11 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x280);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          uVar13 = func_0x01cdcbac(iVar8,uVar13,1,uVar11,0,0,0,0x18a,
                                   **(undefined4 **)(_UNK_01a22cd8 + 0x1a22b28),
                                   **(undefined4 **)(_UNK_01a22cdc + 0x1a22b34),0);
          iVar10 = *(int *)(iStack_50 + 0x50);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar10 + 8);
          uVar5 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_01a22ce0 + 0x1a22b94);
          *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
          iVar14 = *piVar7;
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          if (uVar5 < *(uint *)(iVar8 + 0xc)) {
            *(uint *)(iVar10 + 0xc) = uVar5 + 1;
            *(undefined4 *)(iVar8 + uVar5 * 4 + 0x10) = uVar13;
          }
          else {
            func_0x0328f170(iVar10,uVar13,
                            *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
          }
          piVar7 = *(int **)(_UNK_01a22ce4 + 0x1a22bf0);
          param_1 = iStack_50;
        }
        else {
          iVar10 = func_0x03668dfc(**(undefined4 **)(_UNK_01a22ce8 + 0x1a22a60));
          uVar13 = func_0x01a234a8(param_1,fVar15);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          func_0x01c36290(iVar10,uVar13,0);
          piVar7 = *(int **)(_UNK_01a22cec + 0x1a22aa0);
        }
        iVar9 = iVar9 + 1;
      } while (param_2 != iVar9);
    }
    iVar3 = *(int *)(param_1 + 0x50);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar3 + 0xc)) {
      iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01a22cf0 + 0x1a22c24));
      uVar12 = func_0x01a23570(param_1,uVar12,uVar16,uVar4);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01c36290(iVar3,uVar12,0);
    }
    return;
  }
  iVar3 = func_0x0229f13c(0x7eee,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0245494c(&iStack_50,0,param_2,0);
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&stack0xffffffc8,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&stack0xffffffc8,param_1,0);
  func_0x01485238(&stack0xffffffc8,param_2,0);
  iVar9 = *(int *)(iVar3 + 8);
  uVar12 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar9,uVar12,&stack0xffffffc8,uVar4,0,0);
  return;
}



// ===== FAT.FightBoardActivity$$_BeginLevelReward RVA 0x1a12cf4 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x01a23428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a22cf4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01a2343c + 0x1a22d0c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a23440 + 0x1a22d20));
    func_0x01384978(*(undefined4 *)(_UNK_01a23444 + 0x1a22d2c));
    func_0x01384978(*(undefined4 *)(_UNK_01a23448 + 0x1a22d38));
    func_0x01384978(*(undefined4 *)(_UNK_01a2344c + 0x1a22d44));
    func_0x01384978(*(undefined4 *)(_UNK_01a23450 + 0x1a22d50));
    func_0x01384978(*(undefined4 *)(_UNK_01a23454 + 0x1a22d5c));
    func_0x01384978(*(undefined4 *)(_UNK_01a23458 + 0x1a22d68));
    func_0x01384978(*(undefined4 *)(_UNK_01a2345c + 0x1a22d74));
    func_0x01384978(*(undefined4 *)(_UNK_01a23460 + 0x1a22d80));
    func_0x01384978(*(undefined4 *)(_UNK_01a23464 + 0x1a22d8c));
    func_0x01384978(*(undefined4 *)(_UNK_01a23468 + 0x1a22d98));
    func_0x01384978(*(undefined4 *)(_UNK_01a2346c + 0x1a22da4));
    func_0x01384978(*(undefined4 *)(_UNK_01a23470 + 0x1a22db0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7efd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7efd,0);
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
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_30,uVar7,0,0);
    return;
  }
  if (0 < *(int *)(param_1 + 0xb4)) {
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar1 + 0x40);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar11 = func_0x01db7b78(iVar1,0);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  func_0x01cdef00(iVar10,uVar11,0,0);
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  iStack_34 = param_1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_01a23474 + 0x1a22eb0));
  piVar14 = *(int **)(_UNK_01a23478 + 0x1a22ecc);
LAB_01a22ec8:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01a23490 + 0x1a22ee4)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_01a22f2c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a23490 + 0x1a22ee4),0);
LAB_01a22f2c:
  iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar1 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01a2347c + 0x1a22f60)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_01a22fa8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a2347c + 0x1a22f60),0);
LAB_01a22fa8:
    uVar11 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_01a23480 + 0x1a22fc8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar11,0);
    uVar7 = uStack_2c;
    uVar11 = uStack_30;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *piVar14;
    iVar1 = *(int *)(iVar1 + 0x40);
    if (*(int *)(iVar10 + 0x74) == 0) {
      func_0x01384ab4();
      iVar10 = *piVar14;
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x284);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_48 = **(undefined4 **)(_UNK_01a23484 + 0x1a23044);
    uStack_44 = **(undefined4 **)(_UNK_01a23488 + 0x1a23050);
    uStack_40 = 0;
    uVar11 = func_0x01cdcbac(iVar1,uVar11,uVar7,uVar9,0,0,0,0x1af);
    iVar1 = *(int *)(iStack_34 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar1 + 8);
    uVar5 = *(uint *)(iVar1 + 0xc);
    piVar6 = *(int **)(_UNK_01a2348c + 0x1a230b8);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar13 = *piVar6;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar10 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar5 + 1;
      *(undefined4 *)(iVar10 + uVar5 * 4 + 0x10) = uVar11;
    }
    else {
      func_0x0328f170(iVar1,uVar11,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38))
      ;
    }
    goto LAB_01a22ec8;
  }
  iVar1 = 6;
  iVar10 = 0;
  do {
    iVar13 = iStack_34;
    if (piVar2 != (int *)0x0) {
      iVar4 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar14[-1] == **(int **)(_UNK_01a23494 + 0x1a23124)) {
            puVar3 = (undefined4 *)(iVar4 + *piVar14 * 8 + 0xc0);
            goto LAB_01a2316c;
          }
          uVar5 = uVar5 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a23494 + 0x1a23124),0);
LAB_01a2316c:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
    if (iVar10 != 0) {
      func_0x01384bec(iVar10);
    }
    if (iVar1 != 6 && iVar1 != 0) {
      return;
    }
    if (*(int *)(**(int **)(_UNK_01a23498 + 0x1a231a4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a2349c + 0x1a231c0));
    uVar11 = *(undefined4 *)(iVar13 + 0x54);
    uVar7 = *(undefined4 *)(iVar13 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a25f4(iVar1,uVar11,uVar7,**(undefined4 **)(_UNK_01a234a0 + 0x1a231f0));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01cdefd0(iVar1,0);
    iVar1 = *(int *)(iVar13 + 0x5c);
    piVar2 = *(int **)(iVar13 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar13 + 0x5c);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = iVar10;
    if (iVar10 != 0) {
LAB_01a23274:
      iVar1 = *(int *)(iVar1 + 0x24);
      iVar4 = *(int *)(iVar13 + 0x24);
      uVar7 = *(undefined4 *)(iVar10 + 0x1c);
      uStack_38 = uVar11;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar13 + 0x5c);
      iVar12 = *(int *)(iVar13 + 0x24);
      uVar11 = *(undefined4 *)(iVar13 + 0xbc);
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar10 + 0x24);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      if (iVar12 - *(int *)(iVar10 + 0xc) < 1) {
        iVar10 = 1;
      }
      else {
        iVar13 = *(int *)(iStack_34 + 0x5c);
        iVar10 = *(int *)(iStack_34 + 0x24);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(iVar13 + 0x24);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar10 = iVar10 - *(int *)(iVar13 + 0xc);
      }
      iVar13 = iStack_34;
      iVar12 = *(int *)(iStack_34 + 0x60);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = *(undefined4 *)(iVar12 + 0xc);
      uStack_44 = 0;
      func_0x019b89b0(iVar13,piVar2,uStack_38,uVar7,1,iVar4 == iVar1,uVar11,iVar10);
      return;
    }
    func_0x01384bf0();
    iVar1 = *(int *)(iVar13 + 0x5c);
    if (iVar1 != 0) goto LAB_01a23274;
    uVar15 = func_0x01384bf0();
    if ((int)((ulonglong)uVar15 >> 0x20) != 1) break;
    piVar14 = (int *)func_0x0145b008((int)uVar15);
    iVar10 = *piVar14;
    iVar1 = 0;
    func_0x0145b0f8();
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar14 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar14[-1] == **(int **)(_UNK_01a234a4 + 0x1a233c8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar14 * 8 + 0xc0);
          goto LAB_01a23410;
        }
        uVar5 = uVar5 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a234a4 + 0x1a233c8),0);
LAB_01a23410:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  func_0x01459844((int)uVar15);
  func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.FightBoardActivity$$CoPlaySound RVA 0x1a134a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a234a8(undefined4 param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01a23564 + 0x1a234c4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a23568 + 0x1a234d8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7eef,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7eef,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217a5a0 + 0x217a4ac);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217a5a4 + 0x217a4c0),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,param_2,0);
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
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0217a5a8 + 0x217a590));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a2356c + 0x1a23540));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ===== FAT.FightBoardActivity$$CoDelayReward RVA 0x1a13570 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a23570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01a23640 + 0x1a23590);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a23644 + 0x1a235a8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7ef6,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a23648 + 0x1a23610));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    *(undefined4 *)(iVar1 + 0x1c) = param_4;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x7ef6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02249f64(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar1;
}



// ===== FAT.FightBoardActivity.<CoPlaySound>d__72$$.ctor RVA 0x1a1364c =====

void FUN_01a2364c(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.FightBoardActivity.<CoDelayReward>d__73$$.ctor RVA 0x1a13668 =====

void FUN_01a23668(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.FightBoardActivity$$Exit RVA 0x1a13684 =====

void FUN_01a23684(int param_1)

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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x7f03,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x7efe,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x90);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_18 = 0;
      func_0x02b57fac(param_1,*(undefined4 *)(iVar1 + 0xc),0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x7efe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7f03,0);
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
  return;
}



// ===== FAT.FightBoardActivity$$GetMilestoneText RVA 0x1a136dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a236dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01a238bc + 0x1a236f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a238c0 + 0x1a23704));
    func_0x01384978(*(undefined4 *)(_UNK_01a238c4 + 0x1a23710));
    func_0x01384978(*(undefined4 *)(_UNK_01a238c8 + 0x1a2371c));
    func_0x01384978(*(undefined4 *)(_UNK_01a238cc + 0x1a23728));
    func_0x01384978(*(undefined4 *)(_UNK_01a238d0 + 0x1a23734));
    func_0x01384978(*(undefined4 *)(_UNK_01a238d4 + 0x1a23740));
    func_0x01384978(*(undefined4 *)(_UNK_01a238d8 + 0x1a2374c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7f04,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7f04,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
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
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return;
  }
  if (*(int *)(**(int **)(_UNK_01a238dc + 0x1a237a4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar6 = func_0x028c1350(**(undefined4 **)(_UNK_01a238e0 + 0x1a237c4),0);
  iVar5 = *(int *)(param_1 + 0x5c);
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x24);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar7 = **(undefined4 **)(_UNK_01a238e4 + 0x1a23800);
  uVar2 = **(undefined4 **)(_UNK_01a238e8 + 0x1a2380c);
  if (*(int *)(iVar5 + 0xc) < iVar1 + -1) {
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24) + -1;
  }
  iVar5 = *(int *)(param_1 + 0x5c);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x24);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(iVar5 + 0xc);
  if (*(int *)(**(int **)(_UNK_01a238ec + 0x1a23874) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar2 = func_0x01a32f1c(uVar2,iVar1,uVar3,**(undefined4 **)(_UNK_01a238f0 + 0x1a2389c));
  (*(code *)&SUB_046719a8)(uVar6,uVar7,uVar2,0);
  return;
}



// ===== FAT.FightBoardActivity$$GetFightLevels RVA 0x1a138f4 =====

/* WARNING: Removing unreachable block (ram,0x01a23c38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a238f4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01a23d1c + 0x1a2390c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a23d20 + 0x1a23920));
    func_0x01384978(*(undefined4 *)(_UNK_01a23d24 + 0x1a2392c));
    func_0x01384978(*(undefined4 *)(_UNK_01a23d28 + 0x1a23938));
    func_0x01384978(*(undefined4 *)(_UNK_01a23d2c + 0x1a23944));
    func_0x01384978(*(undefined4 *)(_UNK_01a23d30 + 0x1a23950));
    func_0x01384978(*(undefined4 *)(_UNK_01a23d34 + 0x1a2395c));
    func_0x01384978(*(undefined4 *)(_UNK_01a23d38 + 0x1a23968));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7f05,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7f05,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_02256f90 + 0x2256eb0);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02256f94 + 0x2256ec4),param_1,0);
      *pcVar7 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02256f98 + 0x2256f80));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a23d3c + 0x1a239c4));
  func_0x0328e950(iVar1,**(undefined4 **)(_UNK_01a23d40 + 0x1a239d8));
  iVar8 = *(int *)(param_1 + 0x5c);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x24);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar8,**(undefined4 **)(_UNK_01a23d44 + 0x1a23a0c));
  piVar10 = *(int **)(_UNK_01a23d48 + 0x1a23a24);
  piVar12 = *(int **)(_UNK_01a23d4c + 0x1a23a2c);
LAB_01a23a28:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
        goto LAB_01a23a84;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01a23a84:
  iVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar8 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01a23d50 + 0x1a23ab8)) {
          puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
          goto LAB_01a23b00;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a23d50 + 0x1a23ab8),0);
LAB_01a23b00:
    uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    iVar8 = func_0x01c24918(0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar8 + 0xc);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x01cab288(iVar8,uVar9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar4 = *(uint *)(iVar1 + 0xc);
    iVar11 = *piVar12;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (uVar4 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar4 + 1;
      *(undefined4 *)(iVar8 + uVar4 * 4 + 0x10) = uVar9;
    }
    else {
      func_0x0328f170(iVar1,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
    }
    goto LAB_01a23a28;
  }
  if (piVar2 != (int *)0x0) {
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01a23d54 + 0x1a23bd8)) {
          puVar3 = (undefined4 *)(iVar8 + *piVar10 * 8 + 0xc0);
          goto LAB_01a23c20;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a23d54 + 0x1a23bd8),0);
LAB_01a23c20:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  return iVar1;
}



// ===== FAT.FightBoardActivity$$CheckIsShowRedPoint RVA 0x1a13d5c =====

undefined4 FUN_01a23d5c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x7f06,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7f06,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_28 = uStack_40;
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_38,uVar2,1,0);
    uVar3 = func_0x0245498c(&uStack_38,0,0);
    *param_2 = uVar3;
    uVar3 = func_0x0245496c(&uStack_38,1,0);
    return uVar3;
  }
  *param_2 = 0;
  iVar1 = func_0x02b48934(param_1,0);
  if ((iVar1 != 0) && (iVar1 = FUN_01a1ee90(param_1), iVar1 != 0)) {
    iVar1 = FUN_01a1ee90(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02141d1c(iVar1,0);
    uVar3 = 1;
    *param_2 = uVar2;
  }
  return uVar3;
}



// ===== FAT.FightBoardActivity$$SetHasCycleHint RVA 0x1a13e10 =====

void FUN_01a23e10(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x7f07,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7f07,0);
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
    func_0x01485228(&uStack_38,param_2,0);
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
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  return;
}



// ===== FAT.FightBoardActivity$$CanShowCycleHint RVA 0x1a13e78 =====

uint FUN_01a23e78(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7f08,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7f08,0);
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
  return (uint)(*(int *)(param_1 + 0xb8) == 0);
}



// ===== FAT.FightBoardActivity$$get_OutputType RVA 0x1a13ed4 =====

undefined4 FUN_01a23ed4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc4);
}



// ===== FAT.FightBoardActivity$$set_OutputType RVA 0x1a13edc =====

void FUN_01a23edc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc4) = param_2;
  return;
}



// ===== FAT.FightBoardActivity$$get_OutputMethod RVA 0x1a13ee4 =====

undefined4 FUN_01a23ee4(int param_1)

{
  return *(undefined4 *)(param_1 + 200);
}



// ===== FAT.FightBoardActivity$$set_OutputMethod RVA 0x1a13eec =====

void FUN_01a23eec(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 200) = param_2;
  return;
}



// ===== FAT.FightBoardActivity$$_IsEnergyMethod RVA 0x1a13ef4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a23ef4(int *param_1)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x7eb4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7eb4,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4);
    uVar7 = func_0x0245496c(&uStack_30,0,0);
    return uVar7;
  }
  pcVar8 = (char *)(_UNK_02c05e40 + 0x2c05d5c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c05e44 + 0x2c05d70),1,0);
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
    func_0x0245494c(&uStack_50,0,1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,1,0);
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
  uVar7 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
  return uVar7;
}



// ===== FAT.FightBoardActivity$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x1a13f7c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a23f7c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01a242b8 + 0x1a23f9c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a242bc + 0x1a23fb4));
    func_0x01384978(*(undefined4 *)(_UNK_01a242c0 + 0x1a23fc0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7f09,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7f09,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  if (param_1[0x17] == 0) {
    return 0;
  }
  uVar2 = func_0x02b449f8(param_1,0);
  iVar1 = func_0x01e4b758(param_2,uVar2,0);
  piVar10 = *(int **)(_UNK_01a242c4 + 0x1a24058);
  iVar3 = *piVar10;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar10;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01e4b23c(iVar3,param_2,0);
  if (iVar3 == 0) {
LAB_01a240f0:
    iVar4 = param_1[0x17];
    iVar3 = iVar4;
    if (iVar4 == 0) {
      func_0x01384bf0();
      iVar3 = param_1[0x17];
      if (iVar3 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    uVar9 = *(undefined4 *)(iVar3 + 0x28);
    uVar2 = *(undefined4 *)(iVar4 + 0x2c);
    iVar3 = *param_1;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01a242c8 + 0x1a2411c)) {
          puVar5 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xf0);
          goto LAB_01a24170;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01a242c8 + 0x1a2411c),6);
LAB_01a24170:
    iVar3 = (*(code *)*puVar5)(param_1,param_2,uVar2,uVar9,puVar5[1]);
    uVar2 = 1;
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    iVar3 = *piVar10;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar10;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar3 = func_0x01e4b2b0(iVar3,param_2,0);
    iVar4 = func_0x02b449f8(param_1,0);
    if (iVar3 != iVar4) goto LAB_01a240f0;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar3 = func_0x01e4b23c(0,param_2,0);
    if (iVar3 != 0) {
      func_0x01384bf0();
      goto LAB_01a241e4;
    }
  }
  else {
    iVar3 = func_0x01e4b23c(iVar1,param_2,0);
    if (iVar3 != 0) {
LAB_01a241e4:
      uVar9 = 0;
      iVar3 = func_0x01e4b2b0(iVar1,param_2,0);
      iVar4 = func_0x02b449f8(param_1,0);
      if (iVar3 == iVar4) goto LAB_01a24294;
    }
  }
  iVar3 = *piVar10;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar10;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4b3b8(&uStack_2c,iVar3,param_2,0);
  uVar9 = func_0x02b449f8(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4ba84(iVar1,param_2,uVar9,uStack_28,uStack_2c,0);
  uVar9 = 1;
LAB_01a24294:
  iVar1 = func_0x01f2a218(0);
  if (iVar1 != 0) {
    uVar2 = uVar9;
  }
  return uVar2;
}



// ===== FAT.FightBoardActivity$$FAT.IBoardActivityOutput.IsValidForOrder RVA 0x1a142cc =====

void FUN_01a242cc(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x7f0a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7f0a,0);
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
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a2432c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  return;
}



// ===== FAT.FightBoardActivity$$FAT.IBoardActivityOutput.GetFlyType RVA 0x1a14330 =====

undefined4 FUN_01a24330(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x7f0b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7f0b,0);
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
  return 0x30;
}



// ===== FAT.FightBoardActivity$$FAT.IBoardActivityOutput.GetReasonString RVA 0x1a14384 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a24384(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_01a24424 + 0x1a24398);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a24428 + 0x1a243ac));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7f0c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7f0c,0);
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
  piVar3 = *(int **)(_UNK_01a2442c + 0x1a24404);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x27c);
}



// ===== FAT.FightBoardActivity$$FAT.IBoardActivityOutput.TrackOrderGetItem RVA 0x1a14430 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a24430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01a2457c + 0x1a24450);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a24580 + 0x1a24468));
    func_0x01384978(*(undefined4 *)(_UNK_01a24584 + 0x1a24474));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7f0d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dbb000(iVar1,0);
    uVar4 = 0;
    if (iVar1 != 0) {
      iVar1 = func_0x02139cf4(iVar1,0);
      uVar4 = 0;
      if (iVar1 != 0) {
        uStack_24 = 0;
        uStack_28 = 0;
        func_0x03507d38(&uStack_28,*(undefined4 *)(iVar1 + 8),
                        **(undefined4 **)(_UNK_01a24588 + 0x1a24530));
        uVar4 = uStack_24;
      }
    }
    uVar2 = func_0x02157e88(param_2,0);
    func_0x019b8dd0(param_1,uVar4,param_2,uVar2,param_3,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7f0d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.FightBoardActivity$$<>iFixBaseProxy_get_Visual RVA 0x1a1458c =====

undefined4 FUN_01a2458c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.FightBoardActivity$$<>iFixBaseProxy_SetupFresh RVA 0x1a14594 =====

void FUN_01a24594(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1f0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f0,0);
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



// ===== FAT.FightBoardActivity$$<>iFixBaseProxy_WhenEnd RVA 0x1a1459c =====

void FUN_01a2459c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1a2,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1a2,0);
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



// ===== FAT.FightBoardActivity$$<>iFixBaseProxy_WhenReset RVA 0x1a145a4 =====

void FUN_01a245a4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x13ac,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x13ac,0);
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



// ===== FAT.FightBoardActivity$$<>iFixBaseProxy_TryPopup RVA 0x1a145ac =====

void FUN_01a245ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x1aa2,0,param_3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1aa2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.FightBoardActivity.<>c$$.cctor RVA 0x1a145b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a245b4(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01a2460c + 0x1a245c4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a24610 + 0x1a245d8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01a24614 + 0x1a245ec);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.FightBoardActivity.<>c$$.ctor RVA 0x1a14618 =====

void FUN_01a24618(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.FightBoardActivity.<>c$$<TrySpawnItem>b__59_0 RVA 0x1a14620 =====

uint FUN_01a24620(undefined4 param_1,undefined4 param_2,uint param_3)

{
  return param_3 & 1;
}



// ===== FAT.FightBoardActivity.<>c$$<_BeginAttackReward>b__71_0 RVA 0x1a14628 =====

undefined4 FUN_01a24628(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}



// ===== FAT.FightBoardActivity.<>c__DisplayClass48_0$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__0 RVA 0x1a14630 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a24630(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_01a2494c + 0x1a2464c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a24950 + 0x1a24660));
    func_0x01384978(*(undefined4 *)(_UNK_01a24954 + 0x1a2466c));
    func_0x01384978(*(undefined4 *)(_UNK_01a24958 + 0x1a24678));
    func_0x01384978(*(undefined4 *)(_UNK_01a2495c + 0x1a24684));
    func_0x01384978(*(undefined4 *)(_UNK_01a24960 + 0x1a24690));
    func_0x01384978(*(undefined4 *)(_UNK_01a24964 + 0x1a2469c));
    func_0x01384978(*(undefined4 *)(_UNK_01a24968 + 0x1a246a8));
    func_0x01384978(*(undefined4 *)(_UNK_01a2496c + 0x1a246b4));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a24970 + 0x1a246c8));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 8) = param_2;
  *(int *)(iVar1 + 0x14) = param_1;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(param_2,0,0);
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x024504c0(iVar3,0);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0244fc34(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_2c,iVar4,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar3,uStack_2c,uStack_28,uStack_24,0);
  iVar3 = func_0x02fd6f60(*(undefined4 *)(iVar1 + 8),**(undefined4 **)(_UNK_01a24974 + 0x1a247a4));
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar4 + 0xc0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0266fcac(iVar3,uVar5,0x40800000,0);
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x024504c0(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02450178(iVar3,**(undefined4 **)(_UNK_01a24978 + 0x1a24824),0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0244ffd4(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar3,1,0);
  iVar3 = func_0x02cebcfc(*(undefined4 *)(param_1 + 0x10),0);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    iVar3 = iVar4;
    if (iVar4 == 0) {
      func_0x01384bf0();
      iVar3 = *(int *)(param_1 + 0x10);
    }
    puVar6 = *(undefined4 **)(_UNK_01a2497c + 0x1a248a0);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar4 + 0x44);
    uVar5 = func_0x01384be4(*puVar6);
    func_0x02ce3d80(uVar5,iVar1,**(undefined4 **)(_UNK_01a24980 + 0x1a248c4),0);
    func_0x0309eb60(iVar3,uVar5,**(undefined4 **)(_UNK_01a24984 + 0x1a248dc));
    iVar4 = *(int *)(param_1 + 0x10);
    iVar3 = iVar4;
    if (iVar4 == 0) {
      func_0x01384bf0();
      iVar3 = *(int *)(param_1 + 0x10);
    }
    uVar5 = *puVar6;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar4 + 0x4c);
    uVar5 = func_0x01384be4(uVar5);
    func_0x02ce3d80(uVar5,iVar1,**(undefined4 **)(_UNK_01a24988 + 0x1a24924),0);
    func_0x0309ead4(iVar3,uVar5,**(undefined4 **)(_UNK_01a2498c + 0x1a2493c));
  }
  return;
}



// ===== FAT.FightBoardActivity.<>c__DisplayClass48_1$$.ctor RVA 0x1a14990 =====

void FUN_01a24990(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.FightBoardActivity.<>c__DisplayClass48_1$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__1 RVA 0x1a14998 =====

void FUN_01a24998(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450114(iVar1,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,1,0);
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024504c0(iVar1,0);
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0244fc34(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_24,iVar2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar1,uStack_24,uStack_20,uStack_1c,0);
  return;
}



// ===== FAT.FightBoardActivity.<>c__DisplayClass48_1$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__2 RVA 0x1a14aa4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a24aa4(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_01a24bb8 + 0x1a24ab8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a24bbc + 0x1a24acc));
    func_0x01384978(*(undefined4 *)(_UNK_01a24bc0 + 0x1a24ad8));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(**(int **)(_UNK_01a24bc4 + 0x1a24b08) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar3,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024504c0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450178(iVar1,**(undefined4 **)(_UNK_01a24bc8 + 0x1a24b70),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,0,0);
  return;
}



// ===== FAT.FightBoardActivity.<>c__DisplayClass55_0$$<CollectAllBoardReward>b__0 RVA 0x1a14bcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a24bcc(int param_1,int param_2)

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
  pcVar6 = (char *)(_UNK_02172c2c + 0x2172a00);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02172c30 + 0x2172a14),uVar4,uVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_02172c34 + 0x2172a20));
    *pcVar6 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x6029,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6029,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_2,uVar4,uVar5,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02feb690(param_2,&iStack_1c,0,**(undefined4 **)(_UNK_02172c38 + 0x2172aa4));
  iVar1 = iStack_1c;
  if (iVar2 != 0) {
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0211d748(iVar1,0);
    if (((iVar1 == 1) && (iStack_1c != 0)) && (iVar1 = func_0x0211dc48(iStack_1c,0), iVar1 != 0)) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0210e2d4(param_2,0);
      func_0x02172c40(uVar4,uVar3,1);
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
      goto LAB_02172c14;
    }
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02feb690(param_2,&iStack_20,0,**(undefined4 **)(_UNK_02172c3c + 0x2172b7c));
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
  func_0x02172c40(uVar4,uVar3,1);
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
LAB_02172c14:
  func_0x02172c40(uVar5,uVar4,uVar3);
  return;
}



// ===== FAT.FightBoardActivity.<CoDelayReward>d__73$$System.IDisposable.Dispose RVA 0x1a14be4 =====

void FUN_01a24be4(void)

{
  return;
}



// ===== FAT.FightBoardActivity.<CoDelayReward>d__73$$MoveNext RVA 0x1a14be8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a24be8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar3 = (char *)(_UNK_01a24cec + 0x1a24c00);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a24cf0 + 0x1a24c14));
    func_0x01384978(*(undefined4 *)(_UNK_01a24cf4 + 0x1a24c20));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar5 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar5 + 0x50);
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    if (*(int *)(**(int **)(_UNK_01a24cfc + 0x1a24ca4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar4 = 0;
    func_0x020718d0(uVar2,uVar6,uVar7,uVar8,0,0,0);
  }
  else {
    uVar4 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_01a24cf8 + 0x1a24c50);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar2 = func_0x01384be4(*puVar1);
      func_0x0245031c(uVar2,0x3ed70a3d,0);
      uVar4 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar4;
}



// ===== FAT.FightBoardActivity.<CoDelayReward>d__73$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1a14d00 =====

undefined4 FUN_01a24d00(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.FightBoardActivity.<CoDelayReward>d__73$$System.Collections.IEnumerator.Reset RVA 0x1a14d08 =====

undefined4 FUN_01a24d08(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam01a24d44 + 0x1a24d18));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam01a24d48 + 0x1a24d34));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.FightBoardActivity.<CoDelayReward>d__73$$System.Collections.IEnumerator.get_Current RVA 0x1a14d4c =====

undefined4 FUN_01a24d4c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.FightBoardActivity.<CoPlaySound>d__72$$System.IDisposable.Dispose RVA 0x1a14d54 =====

void FUN_01a24d54(void)

{
  return;
}



// ===== FAT.FightBoardActivity.<CoPlaySound>d__72$$MoveNext RVA 0x1a14d58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a24d58(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(_UNK_01a24e3c + 0x1a24d6c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a24e40 + 0x1a24d80));
    func_0x01384978(*(undefined4 *)(_UNK_01a24e44 + 0x1a24d8c));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
    func_0x01bf3284(iVar3,**(undefined4 **)(_UNK_01a24e4c + 0x1a24e2c),0);
  }
  else {
    uVar5 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_01a24e48 + 0x1a24dbc);
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar2 = func_0x01384be4(*puVar1);
      func_0x0245031c(uVar2,uVar5,0);
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar5;
}



// ===== FAT.FightBoardActivity.<CoPlaySound>d__72$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1a14e50 =====

undefined4 FUN_01a24e50(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.FightBoardActivity.<CoPlaySound>d__72$$System.Collections.IEnumerator.Reset RVA 0x1a14e58 =====

undefined4 FUN_01a24e58(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam01a24e94 + 0x1a24e68));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam01a24e98 + 0x1a24e84));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.FightBoardActivity.<CoPlaySound>d__72$$System.Collections.IEnumerator.get_Current RVA 0x1a14e9c =====

undefined4 FUN_01a24e9c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


