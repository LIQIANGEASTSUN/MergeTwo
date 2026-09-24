/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.FestBoardActivity$$get_World RVA 0x19ebba8 =====

undefined4 FUN_019fbba8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.FestBoardActivity$$set_World RVA 0x19ebbb0 =====

void FUN_019fbbb0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.FestBoardActivity$$get_WorldTracer RVA 0x19ebbb8 =====

undefined4 FUN_019fbbb8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.FestBoardActivity$$set_WorldTracer RVA 0x19ebbc0 =====

void FUN_019fbbc0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== FAT.FestBoardActivity$$get_Feature RVA 0x19ebbc8 =====

undefined4 FUN_019fbbc8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.FestBoardActivity$$SetBoardData RVA 0x19ebbd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fbbd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar1 = func_0x0229f06c(0x7d03,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d03,0);
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
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x5c);
  }
  if (param_2 != 0 && iVar1 != 0) {
    func_0x019fbcb8(param_1,*(undefined4 *)(iVar1 + 0x14),0);
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0214a9e8(iVar1,param_2,0,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    iVar7 = *(int *)(param_1 + 100);
    uVar8 = *(undefined4 *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_020dc9ec + 0x20dc804);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_020dc9f0 + 0x20dc818),iVar7,uVar8,0);
      func_0x01384978(*(undefined4 *)(_UNK_020dc9f4 + 0x20dc824));
      func_0x01384978(*(undefined4 *)(_UNK_020dc9f8 + 0x20dc830));
      func_0x01384978(*(undefined4 *)(_UNK_020dc9fc + 0x20dc83c));
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar2 = func_0x0229f06c(0x57b,0);
    if (iVar2 == 0) {
      func_0x020da680(&uStack_38,iVar1);
      iVar2 = *(int *)(iVar1 + 0x70);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_30,iVar2,**(undefined4 **)(_UNK_020dca00 + 0x20dc8d4));
      puVar6 = *(undefined4 **)(_UNK_020dca04 + 0x20dc8ec);
      while (iVar3 = func_0x03f5f428(&uStack_30,*puVar6), iVar2 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        func_0x0210c12c(iVar2,iStack_34,iVar7 - iStack_34,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210c518(iVar2,uVar8,0);
      }
      func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_020dca08 + 0x20dc94c));
      func_0x020dca14(iVar1);
    }
    else {
      iVar2 = func_0x0229f13c(0x57b,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_40 = 0;
      func_0x02179a68(iVar2,iVar1,iVar7,uVar8);
    }
    return;
  }
  return;
}



// ===== FAT.FestBoardActivity$$InitWorld RVA 0x19ebcb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fbcb8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  pcVar6 = (char *)(_UNK_019fbfa0 + 0x19fbcd8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fbfa4 + 0x19fbcec));
    func_0x01384978(*(undefined4 *)(_UNK_019fbfa8 + 0x19fbcf8));
    func_0x01384978(*(undefined4 *)(_UNK_019fbfac + 0x19fbd04));
    func_0x01384978(*(undefined4 *)(_UNK_019fbfb0 + 0x19fbd10));
    func_0x01384978(*(undefined4 *)(_UNK_019fbfb4 + 0x19fbd1c));
    func_0x01384978(*(undefined4 *)(_UNK_019fbfb8 + 0x19fbd28));
    func_0x01384978(*(undefined4 *)(_UNK_019fbfbc + 0x19fbd34));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d04,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_019fbfc0 + 0x19fbd98));
    func_0x02143488(uVar2,0);
    puVar3 = *(undefined4 **)(_UNK_019fbfc4 + 0x19fbdb4);
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    uVar2 = func_0x01384be4(*puVar3);
    func_0x024500b4(uVar2,param_1,**(undefined4 **)(_UNK_019fbfc8 + 0x19fbdd4),0);
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_019fbfcc + 0x19fbde8));
    func_0x0214d6c8(uVar4,uVar2,0,0);
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar1 + 0x4c);
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_019fbfd0 + 0x19fbe28));
    func_0x01db7f44(iVar1,0);
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = 0xe;
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x01db7f4c(iVar7,iVar1,0);
    iVar1 = *(int *)(param_1 + 0x40);
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0214e900(iVar1,uVar2,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02141f58(iVar1,uVar2,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbe654(iVar1,param_1,uVar2,param_2,param_3,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02142104(iVar1,param_1,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    if (iVar1 != 0) {
      uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_019fbfd4 + 0x19fbf5c));
      func_0x02450548(uVar2,param_1,**(undefined4 **)(_UNK_019fbfd8 + 0x19fbf78),0);
      pcVar6 = (char *)(_UNK_020d8524 + 0x20d8498);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_020d8528 + 0x20d84ac),uVar2,0);
        *pcVar6 = '\x01';
      }
      puVar3 = *(undefined4 **)(_UNK_020d852c + 0x20d84c4);
      iVar7 = *(int *)(iVar1 + 0xc);
      do {
        iVar8 = 0;
        iVar5 = func_0x024507e8(iVar7,uVar2,0);
        if (iVar5 != 0) {
          uVar4 = *puVar3;
          iVar8 = func_0x01384ab8(iVar5,uVar4);
          if (iVar8 == 0) {
            func_0x01384fb4(iVar5,uVar4);
            iVar8 = 0;
          }
        }
        iVar5 = func_0x0138b0ec((int *)(iVar1 + 0xc),iVar8,iVar7);
        bVar9 = iVar7 != iVar5;
        iVar7 = iVar5;
      } while (bVar9);
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d04,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f950(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.FestBoardActivity$$FillBoardData RVA 0x19ebfdc =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fbfdc(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x7d0d,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x3c);
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
    iVar1 = func_0x0229f13c(0x7d0d,0);
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



// ===== FAT.FestBoardActivity$$ClearBoardData RVA 0x19ec050 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fc050(int param_1)

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
  
  pcVar3 = (char *)(_UNK_019fc1a0 + 0x19fc064);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fc1a4 + 0x19fc078));
    func_0x01384978(*(undefined4 *)(_UNK_019fc1a8 + 0x19fc084));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d0e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d0e,0);
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
  if (*(int *)(param_1 + 0x3c) != 0) {
    func_0x021421a8(*(int *)(param_1 + 0x3c),param_1,0);
    if ((*(int *)(param_1 + 0x3c) != 0) &&
       (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0), iVar1 != 0)) {
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_019fc1ac + 0x19fc114));
      func_0x02450548(uVar5,param_1,**(undefined4 **)(_UNK_019fc1b0 + 0x19fc130),0);
      func_0x020d8530(iVar1,uVar5,0);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar1,uVar5,0);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// ===== FAT.FestBoardActivity$$OnBoardItemChange RVA 0x19ec1b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fc1b4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
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
  
  iVar1 = func_0x0229f06c(0x7d06,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x48) != 0) {
      func_0x02c06e70(*(int *)(param_1 + 0x48),0);
    }
    param_1 = *(int *)(param_1 + 0x4c);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x785a,0);
    if (iVar1 == 0) {
      pcVar7 = (char *)(_UNK_02c062e4 + 0x2c061d4);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02c062e8 + 0x2c061e8));
        *pcVar7 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x785b,0);
      if (iVar1 == 0) {
        piVar8 = *(int **)(param_1 + 8);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar8;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_02c062ec + 0x2c06254)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
              goto LAB_02c0629c;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02c062ec + 0x2c06254),1);
LAB_02c0629c:
        iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
        if (iVar1 == 0) {
          return;
        }
        if (*(char *)(param_1 + 0x14) != '\0') {
          return;
        }
        iVar1 = func_0x02c067c8(param_1);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0x14) = 1;
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        return;
      }
      iVar1 = func_0x0229f13c(0x785b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x785a,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d06,0);
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
  return;
}



// ===== FAT.FestBoardActivity$$OnItemMerge RVA 0x19ec230 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fc230(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x0229f06c(0x7d09,0);
  if (iVar1 == 0) {
    pcVar2 = (char *)(_UNK_019fc480 + 0x19fc2cc);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_019fc484 + 0x19fc2e0));
      func_0x01384978(*(undefined4 *)(_UNK_019fc488 + 0x19fc2ec));
      func_0x01384978(*(undefined4 *)(_UNK_019fc48c + 0x19fc2f8));
      func_0x01384978(*(undefined4 *)(_UNK_019fc490 + 0x19fc304));
      *pcVar2 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x7d0a,0);
    if (iVar1 == 0) {
      if (param_4 != 0) {
        iVar1 = *(int *)(param_1 + 0x50);
        uVar3 = *(undefined4 *)(param_1 + 0x68);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0245054c(iVar1,uVar3,&stack0xffffffe0,
                                **(undefined4 **)(_UNK_019fc494 + 0x19fc390));
        if (iVar1 != 0) {
          iVar1 = func_0x02116990(param_4,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0x10) == 0) {
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
            if ((*(int *)(param_1 + 0x3c) != 0) &&
               (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0), iVar1 != 0)) {
              func_0x020dc7e4(iVar1,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),0
                             );
            }
            if (*(int *)(param_1 + 0x48) != 0) {
              func_0x02c06e70(*(int *)(param_1 + 0x48),0);
            }
            if (*(int *)(**(int **)(_UNK_019fc498 + 0x19fc430) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_019fc49c + 0x19fc44c));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x0349eb38(iVar1,param_4,**(undefined4 **)(_UNK_019fc4a0 + 0x19fc470));
          }
        }
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x7d0a,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02174108(iVar1,param_1,param_4,0);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x7d09,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
  return;
}



// ===== FAT.FestBoardActivity$$TryAutoUnlockCloudByItem RVA 0x19ec2b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fc2b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_019fc480 + 0x19fc2cc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fc484 + 0x19fc2e0));
    func_0x01384978(*(undefined4 *)(_UNK_019fc488 + 0x19fc2ec));
    func_0x01384978(*(undefined4 *)(_UNK_019fc48c + 0x19fc2f8));
    func_0x01384978(*(undefined4 *)(_UNK_019fc490 + 0x19fc304));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x7d0a,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1 + 0x50);
      uVar4 = *(undefined4 *)(param_1 + 0x68);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0245054c(iVar1,uVar4,&iStack_20,**(undefined4 **)(_UNK_019fc494 + 0x19fc390));
      iVar1 = iStack_20;
      if ((iVar2 != 0) && (iStack_1c == 0)) {
        iVar2 = func_0x02116990(param_2,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (iVar1 == *(int *)(iVar2 + 0x10)) {
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
          if ((*(int *)(param_1 + 0x3c) != 0) &&
             (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0), iVar1 != 0)) {
            func_0x020dc7e4(iVar1,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),0);
          }
          if (*(int *)(param_1 + 0x48) != 0) {
            func_0x02c06e70(*(int *)(param_1 + 0x48),0);
          }
          if (*(int *)(**(int **)(_UNK_019fc498 + 0x19fc430) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_019fc49c + 0x19fc44c));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0349eb38(iVar1,param_2,**(undefined4 **)(_UNK_019fc4a0 + 0x19fc470));
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d0a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.FestBoardActivity$$ActivityUpdate RVA 0x19ec4a4 =====

void FUN_019fc4a4(int param_1,float param_2)

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
  
  iVar1 = func_0x0229f06c(0x7d0f,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x4c);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x78a6,0,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x14) != '\0') {
        param_2 = *(float *)(param_1 + 0x10) + param_2;
        *(float *)(param_1 + 0x10) = param_2;
        if (param_2 <= 1.0) {
          return;
        }
        func_0x02c06384(param_1);
        *(undefined1 *)(param_1 + 0x14) = 0;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x78a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d0f,0);
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
  func_0x01485258(&uStack_38,param_2,0);
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



// ===== FAT.FestBoardActivity$$InitBoardMoveHandler RVA 0x19ec518 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fc518(int param_1)

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
  
  pcVar3 = (char *)(_UNK_019fc5d0 + 0x19fc530);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fc5d4 + 0x19fc544));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d10,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d10,0);
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
  uVar2 = *(undefined4 *)(param_1 + 100);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_019fc5d8 + 0x19fc5a4));
  uStack_20 = 0;
  func_0x02c06bbc(uVar5,param_1,2,uVar2);
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  return;
}



// ===== FAT.FestBoardActivity$$GetMoveNeedRowCount RVA 0x19ec5dc =====

undefined4 FUN_019fc5dc(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x7d11,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d11,0);
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
  return 0;
}



// ===== FAT.FestBoardActivity$$GetMoveCountByRowId RVA 0x19ec638 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019fc638(undefined4 param_1,undefined4 param_2)

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
  undefined4 uStack_18;
  
  pcVar4 = (char *)(_UNK_019fc714 + 0x19fc654);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fc718 + 0x19fc668));
    func_0x01384978(*(undefined4 *)(_UNK_019fc71c + 0x19fc674));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d12,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d12,0);
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
    uVar5 = func_0x0245498c(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = func_0x01834f00(param_2,0);
  if (iVar1 != 0) {
    uStack_18 = 0;
    func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 0x18),
                    **(undefined4 **)(_UNK_019fc720 + 0x19fc6ec));
  }
  return 0;
}



// ===== FAT.FestBoardActivity$$FAT.IBoardMoveAdapter.GetBoard RVA 0x19ec724 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_019fc724(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
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
  
  iVar2 = func_0x0229f06c(0x7d13,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0xf];
    }
    param_1 = piVar1;
    if (iVar2 == 0 || param_1 == (int *)0x0) {
      return 0;
    }
    iVar2 = func_0x0229f06c(0x142,0);
    if (iVar2 == 0) {
      return param_1[0x13];
    }
    iVar2 = func_0x0229f13c(0x142,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7d13,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar5 = (char *)(_UNK_0217a7a0 + 0x217a6c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0217a7a4 + 0x217a6d4),param_1,0);
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
  iVar2 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a7a8 + 0x217a790));
  return iVar2;
}



// ===== FAT.FestBoardActivity$$OnDepthIndexUpdate RVA 0x19ec7a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fc7a4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar1 = func_0x0229f06c(0x7d14,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d14,0);
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
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 100) = param_2;
  if ((*(int *)(param_1 + 0x3c) != 0) &&
     (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0), iVar1 != 0)) {
    iVar7 = *(int *)(param_1 + 100);
    uVar8 = *(undefined4 *)(param_1 + 0x68);
    pcVar5 = (char *)(_UNK_020dc9ec + 0x20dc804);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_020dc9f0 + 0x20dc818),iVar7,uVar8,0);
      func_0x01384978(*(undefined4 *)(_UNK_020dc9f4 + 0x20dc824));
      func_0x01384978(*(undefined4 *)(_UNK_020dc9f8 + 0x20dc830));
      func_0x01384978(*(undefined4 *)(_UNK_020dc9fc + 0x20dc83c));
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar2 = func_0x0229f06c(0x57b,0);
    if (iVar2 == 0) {
      func_0x020da680(&uStack_38,iVar1);
      iVar2 = *(int *)(iVar1 + 0x70);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_30,iVar2,**(undefined4 **)(_UNK_020dca00 + 0x20dc8d4));
      puVar6 = *(undefined4 **)(_UNK_020dca04 + 0x20dc8ec);
      while (iVar3 = func_0x03f5f428(&uStack_30,*puVar6), iVar2 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        func_0x0210c12c(iVar2,iStack_34,iVar7 - iStack_34,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210c518(iVar2,uVar8,0);
      }
      func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_020dca08 + 0x20dc94c));
      func_0x020dca14(iVar1);
    }
    else {
      iVar2 = func_0x0229f13c(0x57b,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_40 = 0;
      func_0x02179a68(iVar2,iVar1,iVar7,uVar8);
    }
    return;
  }
  return;
}



// ===== FAT.FestBoardActivity$$GetRowConfIdList RVA 0x19ec830 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019fc830(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x7d15,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d15,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02235f34 + 0x2235e40);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02235f38 + 0x2235e54),param_1,param_2,0);
      *pcVar5 = '\x01';
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
    uVar4 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02235f3c + 0x2235f24));
    return uVar4;
  }
  iVar1 = func_0x01833c10(param_2,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x14);
  }
  return uVar4;
}



// ===== FAT.FestBoardActivity$$GetRowConfStr RVA 0x19ec8a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_019fc8a4(undefined4 param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_019fc950 + 0x19fc8bc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fc954 + 0x19fc8d0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d16,0);
  if (iVar1 == 0) {
    iVar3 = func_0x01834f00(param_2,0);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x14);
    }
    if (iVar3 == 0 || iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_019fc958 + 0x19fc944) + 0x5c);
    }
    return iVar1;
  }
  iVar1 = func_0x0229f13c(0x7d16,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_02198f18 + 0x2198e24);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02198f1c + 0x2198e38),param_1,param_2,0);
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
  iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02198f20 + 0x2198f08));
  return iVar1;
}



// ===== FAT.FestBoardActivity$$GetCycleStartRowId RVA 0x19ec95c =====

undefined4 FUN_019fc95c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x7d17,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d17,0);
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
  return 0;
}



// ===== FAT.FestBoardActivity$$InitBoardExtremeHandler RVA 0x19ec9b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fc9b8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_019fca58 + 0x19fc9cc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fca5c + 0x19fc9e0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d18,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d18,0);
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
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_019fca60 + 0x19fca38));
  func_0x02c05f90(uVar5,param_1,2,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  return;
}



// ===== FAT.FestBoardActivity$$CanCheckExtreme RVA 0x19eca64 =====

uint FUN_019fca64(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d19,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d19,0);
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
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar2 = func_0x02c07260(*(int *)(param_1 + 0x48),0);
    return uVar2 ^ 1;
  }
  return 1;
}



// ===== FAT.FestBoardActivity$$FAT.IBoardExtremeAdapter.GetBoard RVA 0x19ecad4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_019fcad4(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
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
  
  iVar2 = func_0x0229f06c(0x7d1a,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0xf];
    }
    param_1 = piVar1;
    if (iVar2 == 0 || param_1 == (int *)0x0) {
      return 0;
    }
    iVar2 = func_0x0229f06c(0x142,0);
    if (iVar2 == 0) {
      return param_1[0x13];
    }
    iVar2 = func_0x0229f13c(0x142,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7d1a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar5 = (char *)(_UNK_0217a7a0 + 0x217a6c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0217a7a4 + 0x217a6d4),param_1,0);
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
  iVar2 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a7a8 + 0x217a790));
  return iVar2;
}



// ===== FAT.FestBoardActivity$$CheckBoardExtremeCase RVA 0x19ecb54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fcb54(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
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
  
  iVar1 = func_0x0229f06c(0x7d1b,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x4c);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x78a4,0);
    if (iVar1 == 0) {
      pcVar7 = (char *)(_UNK_02c062e4 + 0x2c061d4);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02c062e8 + 0x2c061e8));
        *pcVar7 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x785b,0);
      if (iVar1 == 0) {
        piVar8 = *(int **)(param_1 + 8);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar8;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_02c062ec + 0x2c06254)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
              goto LAB_02c0629c;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02c062ec + 0x2c06254),1);
LAB_02c0629c:
        iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
        if (iVar1 == 0) {
          return;
        }
        if (*(char *)(param_1 + 0x14) != '\0') {
          return;
        }
        iVar1 = func_0x02c067c8(param_1);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0x14) = 1;
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        return;
      }
      iVar1 = func_0x0229f13c(0x785b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x78a4,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d1b,0);
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
  return;
}



// ===== FAT.FestBoardActivity$$InitBoardConfig RVA 0x19ecbbc =====

/* WARNING: Removing unreachable block (ram,0x019fd03c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fcbbc(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_019fd118 + 0x19fcbd4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fd11c + 0x19fcbe8));
    func_0x01384978(*(undefined4 *)(_UNK_019fd120 + 0x19fcbf4));
    func_0x01384978(*(undefined4 *)(_UNK_019fd124 + 0x19fcc00));
    func_0x01384978(*(undefined4 *)(_UNK_019fd128 + 0x19fcc0c));
    func_0x01384978(*(undefined4 *)(_UNK_019fd12c + 0x19fcc18));
    func_0x01384978(*(undefined4 *)(_UNK_019fd130 + 0x19fcc24));
    func_0x01384978(*(undefined4 *)(_UNK_019fd134 + 0x19fcc30));
    func_0x01384978(*(undefined4 *)(_UNK_019fd138 + 0x19fcc3c));
    func_0x01384978(*(undefined4 *)(_UNK_019fd13c + 0x19fcc48));
    func_0x01384978(*(undefined4 *)(_UNK_019fd140 + 0x19fcc54));
    func_0x01384978(*(undefined4 *)(_UNK_019fd144 + 0x19fcc60));
    func_0x01384978(*(undefined4 *)(_UNK_019fd148 + 0x19fcc6c));
    func_0x01384978(*(undefined4 *)(_UNK_019fd14c + 0x19fcc78));
    func_0x01384978(*(undefined4 *)(_UNK_019fd150 + 0x19fcc84));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d1c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d1c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
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
    func_0x0245495c(iVar6,uVar7,&iStack_30,uVar4,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02450550(iVar1,**(undefined4 **)(_UNK_019fd154 + 0x19fccf0));
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    return;
  }
  iVar6 = 0;
  puVar10 = *(undefined4 **)(_UNK_019fd158 + 0x19fcd1c);
  piVar12 = *(int **)(_UNK_019fd15c + 0x19fcd24);
  puVar13 = *(undefined4 **)(_UNK_019fd160 + 0x19fcd2c);
  while( true ) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar6) break;
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x03653d1c(iVar1,iVar6,*puVar10);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&iStack_30,uVar7,0);
    uVar7 = uStack_2c;
    iVar1 = iStack_30;
    if (0 < iStack_30) {
      iVar8 = *(int *)(param_1 + 0x50);
      uStack_2c = 0;
      iStack_30 = 0;
      func_0x038fd264(&iStack_30,iVar1,uVar7,**(undefined4 **)(_UNK_019fd164 + 0x19fcdc8));
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = *puVar13;
      func_0x02450554(iVar8,iVar6,iStack_30,uStack_2c);
    }
    iVar1 = *(int *)(param_1 + 0x5c);
    iVar6 = iVar6 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_019fd168 + 0x19fce24));
    func_0x02450558(iVar1,**(undefined4 **)(_UNK_019fd16c + 0x19fce38));
    *(int *)(param_1 + 0x54) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = 0;
    }
  }
  func_0x0245055c(iVar1,**(undefined4 **)(_UNK_019fd170 + 0x19fce60));
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar12 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_019fd174 + 0x19fce94));
  piVar9 = *(int **)(_UNK_019fd178 + 0x19fceac);
  piVar11 = *(int **)(_UNK_019fd17c + 0x19fceb4);
  puVar10 = *(undefined4 **)(_UNK_019fd180 + 0x19fcebc);
  do {
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar12;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == *piVar9) {
          puVar13 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_019fcf14;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar12,*piVar9,0);
LAB_019fcf14:
    iVar1 = (*(code *)*puVar13)(piVar12,puVar13[1]);
    if (iVar1 == 0) break;
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar12;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == *piVar11) {
          puVar13 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_019fcf88;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar12,*piVar11,0);
LAB_019fcf88:
    uVar7 = (*(code *)*puVar13)(piVar12,puVar13[1]);
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450560(iVar1,uVar7,*puVar10);
  } while( true );
  if (piVar12 != (int *)0x0) {
    iVar1 = *piVar12;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_019fd184 + 0x19fcfdc)) {
          puVar10 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_019fd024;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar2 != 0);
    }
    puVar10 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_019fd184 + 0x19fcfdc),0);
LAB_019fd024:
    (*(code *)*puVar10)(piVar12,puVar10[1]);
  }
  return;
}



// ===== FAT.FestBoardActivity$$IsScoreItem RVA 0x19ed18c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019fd18c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint extraout_r1;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_019fd234 + 0x19fd1a4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fd238 + 0x19fd1b8));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d1d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d1d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
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
    uVar9 = func_0x0245496c(&uStack_38,0,0);
    return uVar9;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    return 0;
  }
  iStack_28 = **(int **)(_UNK_019fd23c + 0x19fd220);
  if (*(int *)(iVar1 + 8) != 0) {
    iVar7 = func_0x04222a4c(iVar1,param_2,
                            *(undefined4 *)(*(int *)(*(int *)(iStack_28 + 0x10) + 0x60) + 0x58));
    iVar12 = *(int *)(iVar1 + 8);
    iVar10 = *(int *)(iVar1 + 0xc);
    iStack_2c = iVar1;
    if (iVar12 == 0) {
      func_0x02457d50();
      func_0x02457d50();
    }
    uVar11 = *(uint *)(iVar12 + 0xc);
    func_0x02457e94(iVar7,uVar11);
    if (uVar11 <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar11 = *(int *)(iVar12 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar11) {
      iVar1 = 0;
      iStack_30 = iVar7;
      do {
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar11) {
          func_0x02457d5c();
        }
        iVar12 = iVar10 + uVar11 * 0xc;
        if (*(int *)(iVar12 + 0x10) == iVar7) {
          piVar13 = *(int **)(iStack_2c + 0x1c);
          if (*(uint *)(iVar10 + 0xc) <= uVar11) {
            func_0x02457d5c();
          }
          uVar9 = *(undefined4 *)(iVar12 + 0x18);
          if (piVar13 == (int *)0x0) {
            func_0x02457d50();
          }
          iVar7 = *(int *)(*(int *)(*(int *)(iStack_28 + 0x10) + 0x60) + 0x10);
          if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
            iVar7 = func_0x02457d84(iVar7);
          }
          iVar2 = *piVar13;
          uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar4 != 0) {
            piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar6[-1] == iVar7) {
                puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
                goto LAB_0421f510;
              }
              uVar4 = uVar4 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined4 *)func_0x02457d88(piVar13,iVar7,0);
LAB_0421f510:
          iVar2 = (*(code *)*puVar3)(piVar13,uVar9,param_2,puVar3[1]);
          iVar7 = iStack_30;
          if (iVar2 != 0) {
            return 1;
          }
        }
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if ((int)*(uint *)(iVar10 + 0xc) <= iVar1) {
          func_0x02457d6c(*(undefined4 *)(_UNK_0421f5c4 + 0x421f590));
          uVar9 = func_0x02457d58();
          uVar5 = func_0x02457d6c(*(undefined4 *)(_UNK_0421f5c8 + 0x421f5a4));
          func_0x04824950(uVar9,uVar5,0);
          func_0x02457d90(uVar9,iStack_28);
          func_0x02457d94();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar11) {
          func_0x02457d5c();
        }
        uVar11 = *(uint *)(iVar12 + 0x14);
        iVar1 = iVar1 + 1;
      } while (uVar11 < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.FestBoardActivity$$IsSpinActiveItem RVA 0x19ed240 =====

uint FUN_019fd240(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x7d1e,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x5c) != 0) {
      uVar4 = (uint)(*(int *)(*(int *)(param_1 + 0x5c) + 0x5c) == param_2);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x7d1e,0);
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
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.FestBoardActivity$$CanUseItem RVA 0x19ed2b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_019fd2b8(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_019fd424 + 0x19fd2d4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fd428 + 0x19fd2e8));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x7d1f,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1 + 0x5c);
    }
    if (param_2 != 0 && iVar1 != 0) {
      iVar1 = func_0x02116990(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(param_1 + 0x50);
      uVar5 = *(undefined4 *)(param_1 + 0x68);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0245054c(iVar4,uVar5,&iStack_20,**(undefined4 **)(_UNK_019fd42c + 0x19fd3ac));
      if ((iVar4 == 0) || (iStack_20 != iVar1)) {
        iVar4 = FUN_019fd18c(param_1,iVar1);
        if (iVar4 == 0) {
          iVar4 = func_0x019fd4d8(param_1,iVar1);
          uVar3 = 1;
          if (iVar4 == 0) {
            uVar3 = FUN_019fd240(param_1,iVar1);
          }
        }
        else {
          uVar3 = func_0x019fd430(param_1);
        }
      }
      else {
        uVar3 = (uint)(iStack_1c == 1);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d1f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar3;
}



// ===== FAT.FestBoardActivity$$CheckCanAddScore RVA 0x19ed430 =====

undefined4 FUN_019fd430(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x7d20,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d20,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar1 = func_0x01a043d4(param_1);
    uVar3 = 1;
    if (iVar1 == 0) {
      iVar1 = func_0x01a0429c(param_1);
      uVar3 = 0;
      if (0 < iVar1) {
        iVar1 = func_0x01a0443c(param_1,iVar1 + -1);
        uVar3 = 0;
        if (*(int *)(param_1 + 0x6c) < iVar1) {
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}



// ===== FAT.FestBoardActivity$$CanUnlockBuildingWithItem RVA 0x19ed4d8 =====

uint FUN_019fd4d8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x7d22,0);
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x78);
    iVar1 = func_0x01a0463c(param_1);
    if ((iVar3 + 1 < iVar1) && (iVar1 = func_0x01a046d8(param_1), iVar1 != 0)) {
      uVar4 = (uint)(*(int *)(iVar1 + 0x20) == param_2);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x7d22,0);
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
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.FestBoardActivity$$TrySpawnItem RVA 0x19ed56c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019fd56c(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  int iStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_019fd7ac + 0x19fd58c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fd7b0 + 0x19fd5a4));
    func_0x01384978(*(undefined4 *)(_UNK_019fd7b4 + 0x19fd5b0));
    *pcVar4 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x7d25,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d25,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x022365c4(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  *param_4 = 0;
  *param_3 = 0xffffffff;
  if (param_2 == 0) {
    return 0;
  }
  bVar6 = *(int *)(param_1 + 0x3c) != 0;
  iVar1 = 0;
  if (bVar6) {
    iVar1 = *(int *)(param_1 + 0x5c);
  }
  if (!bVar6 || iVar1 == 0) {
    return 0;
  }
  iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_019fd7b8 + 0x19fd660));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0211b24c(iVar1,0);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = func_0x02116990(param_2,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar3 + 0x10);
  iVar3 = FUN_019fd240(param_1,iVar5);
  if ((iVar3 != 0) && (iVar3 = func_0x019fd7c0(param_1), iVar3 == 0)) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0245054c(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_019fd7bc + 0x19fd6fc));
  if (iVar3 == 0) {
LAB_019fd720:
    iVar3 = FUN_019fd4d8(param_1,iVar5);
    if ((iVar3 == 0) && (iVar3 = FUN_019fd240(param_1,iVar5), iVar3 == 0)) goto LAB_019fd794;
  }
  else {
    iVar3 = iStack_28;
    if (iStack_28 == iVar5) {
      iVar3 = iStack_24;
    }
    if (iStack_28 != iVar5 || iVar3 != 1) goto LAB_019fd720;
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02139cf4(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x020dd560(iVar3,param_2,0x13,0);
  if (iVar3 == 0) {
    return 0;
  }
LAB_019fd794:
  func_0x019fd884(param_1,param_2,iVar1);
  return 1;
}



// ===== FAT.FestBoardActivity$$CanSpin RVA 0x19ed7c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_019fd7c0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  pcVar4 = (char *)(_UNK_019fd87c + 0x19fd7d4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fd880 + 0x19fd7e8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d26,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d26,0);
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
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar5 = func_0x01a026b8(param_1);
  iVar1 = 0;
  if (iVar5 != 0) {
    iVar1 = *(int *)(param_1 + 0xa4);
  }
  if (iVar5 != 0 && iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0xc);
    iVar1 = iVar5;
    if (0 < iVar5) {
      iVar1 = *(int *)(param_1 + 0x7c);
    }
    if (0 < iVar1) {
      return (uint)(*(int *)(param_1 + 0x80) < iVar5);
    }
  }
  return 0;
}



// ===== FAT.FestBoardActivity$$_OnUseItem RVA 0x19ed884 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fd884(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int aiStack_30 [3];
  
  pcVar7 = (char *)(_UNK_019fdc64 + 0x19fd8a4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fdc68 + 0x19fd8b8));
    func_0x01384978(*(undefined4 *)(_UNK_019fdc6c + 0x19fd8c4));
    func_0x01384978(*(undefined4 *)(_UNK_019fdc70 + 0x19fd8d0));
    func_0x01384978(*(undefined4 *)(_UNK_019fdc74 + 0x19fd8dc));
    func_0x01384978(*(undefined4 *)(_UNK_019fdc78 + 0x19fd8e8));
    func_0x01384978(*(undefined4 *)(_UNK_019fdc7c + 0x19fd8f4));
    func_0x01384978(*(undefined4 *)(_UNK_019fdc80 + 0x19fd900));
    func_0x01384978(*(undefined4 *)(_UNK_019fdc84 + 0x19fd90c));
    *pcVar7 = '\x01';
  }
  aiStack_30[1] = 0;
  aiStack_30[0] = 0;
  iVar4 = func_0x0229f06c(0x7d32,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x7d32,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar4,param_1,param_2,param_3,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02116990(param_2,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(param_1 + 0x50);
  uVar9 = *(undefined4 *)(param_1 + 0x68);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = func_0x0245054c(iVar8,uVar9,aiStack_30,**(undefined4 **)(_UNK_019fdc88 + 0x19fd9c4));
  if ((iVar8 == 0) || (aiStack_30[0] != iVar4)) {
    iVar8 = FUN_019fd18c(param_1,iVar4);
    if (iVar8 != 0) {
      iVar4 = FUN_019fd430(param_1);
      if (iVar4 == 0) {
        return;
      }
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x0211b2b0(param_3,0);
      func_0x019fdcac(param_1,uVar9);
      if (*(int *)(**(int **)(_UNK_019fdc98 + 0x19fdab4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0204f2f0(&uStack_3c,0x52,0);
      uVar3 = uStack_34;
      uVar1 = uStack_38;
      uVar10 = uStack_3c;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_3c,param_2,0);
      uVar2 = uStack_38;
      uVar6 = uStack_3c;
      if (*(int *)(**(int **)(_UNK_019fdc9c + 0x19fdb0c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dd876c(&uStack_3c,uVar6,uVar2,0);
      uVar6 = func_0x019fdde8(param_1);
      if (*(int *)(**(int **)(_UNK_019fdca0 + 0x19fdb60) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207405c(uVar6,uVar9,uStack_3c,uStack_38,uStack_34,uVar10,uVar1,uVar3,2,0x52,0,0,0,3,0)
      ;
      return;
    }
    iVar8 = FUN_019fd4d8(param_1,iVar4);
    if (iVar8 == 0) {
      iVar4 = FUN_019fd240(param_1,iVar4);
      if (iVar4 == 0) {
        return;
      }
      func_0x019fe4bc(param_1,param_2);
      return;
    }
    iVar4 = func_0x019fde4c(param_1,iVar4);
    if (iVar4 == 0) {
      return;
    }
    if (*(int *)(**(int **)(_UNK_019fdca4 + 0x19fdbf0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar5 = *(undefined4 **)(_UNK_019fdca8 + 0x19fdc0c);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x3c);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02139cf4(iVar4,0);
    uVar10 = *(undefined4 *)(param_1 + 100);
    uVar9 = *(undefined4 *)(param_1 + 0x68);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x020dc7e4(iVar4,uVar10,uVar9,0);
    if (*(int *)(**(int **)(_UNK_019fdc8c + 0x19fda40) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar5 = *(undefined4 **)(_UNK_019fdc90 + 0x19fda5c);
  }
  iVar4 = func_0x0300d558(*puVar5);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0349eb38(iVar4,param_2,**(undefined4 **)(_UNK_019fdc94 + 0x19fdc30));
  return;
}



// ===== FAT.FestBoardActivity$$AddMilestoneScore RVA 0x19edcac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fdcac(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_019fddd4 + 0x19fdcc4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fddd8 + 0x19fdcd8));
    func_0x01384978(*(undefined4 *)(_UNK_019fdddc + 0x19fdce4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5de,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5de,0);
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
  if (param_2 < 1) {
    return;
  }
  iVar1 = func_0x01a03a00(param_1,*(undefined4 *)(param_1 + 0x6c));
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + param_2;
  iVar4 = func_0x01a03a00(param_1);
  if (iVar1 < iVar4) {
    do {
      func_0x01a03aec(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar4 != iVar1);
    if (*(int *)(**(int **)(_UNK_019fdde0 + 0x19fdd90) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_019fdde4 + 0x19fddac));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x3f,0);
    if (iVar4 == 0) {
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar4 = func_0x0229f13c(0x3f,0);
    if (iVar4 == 0) {
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar1,0);
    iVar3 = *(int *)(iVar4 + 8);
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar6,&uStack_30,uVar2);
    return;
  }
  return;
}



// ===== FAT.FestBoardActivity$$get_ScoreTokenId RVA 0x19edde8 =====

undefined4 FUN_019fdde8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x7d33,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d33,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x58);
  }
  return uVar3;
}



// ===== FAT.FestBoardActivity$$TryUnlockBuildingWithItem RVA 0x19ede4c =====

/* WARNING: Removing unreachable block (ram,0x019fe440) */
/* WARNING: Removing unreachable block (ram,0x019fe458) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019fde4c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int unaff_r8;
  int *unaff_r10;
  undefined1 uVar14;
  undefined8 uVar15;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(iRam019fe454 + 0x19fde68);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam019fe458 + 0x19fde7c));
    func_0x01384978(*(undefined4 *)(iRam019fe45c + 0x19fde88));
    func_0x01384978(*(undefined4 *)(iRam019fe460 + 0x19fde94));
    func_0x01384978(*(undefined4 *)(iRam019fe464 + 0x19fdea0));
    func_0x01384978(*(undefined4 *)(iRam019fe468 + 0x19fdeac));
    func_0x01384978(*(undefined4 *)(iRam019fe46c + 0x19fdeb8));
    func_0x01384978(*(undefined4 *)(iRam019fe470 + 0x19fdec4));
    func_0x01384978(*(undefined4 *)(iRam019fe474 + 0x19fded0));
    func_0x01384978(*(undefined4 *)(iRam019fe478 + 0x19fdedc));
    func_0x01384978(*(undefined4 *)(iRam019fe47c + 0x19fdee8));
    func_0x01384978(*(undefined4 *)(iRam019fe480 + 0x19fdef4));
    func_0x01384978(*(undefined4 *)(iRam019fe484 + 0x19fdf00));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d34,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d34,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    uStack_34 = iStack_4c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485238(&iStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    uStack_58 = 0;
    iStack_54 = 0;
    func_0x0245495c(iVar9,uVar11,&iStack_38,uVar5);
    uVar11 = func_0x0245496c(&iStack_38,0,0);
    return uVar11;
  }
  iVar1 = FUN_019fd4d8(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  iVar1 = func_0x01a002f8(param_1);
  iVar9 = func_0x01a0463c(param_1);
  iVar10 = *(int *)(param_1 + 0x5c);
  iVar12 = *(int *)(param_1 + 0x78);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar11 = *(undefined4 *)(iVar10 + 0x20);
  func_0x019fe804(param_1);
  iStack_38 = *(int *)(param_1 + 100);
  uStack_34 = 0;
  func_0x02313adc(param_1,iVar12 + 1,iVar9,uVar11);
  uVar11 = 1;
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x94);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(iRam019fe488 + 0x19fdff8));
    func_0x0328e950(iVar1,**(undefined4 **)(iRam019fe48c + 0x19fe00c));
    *(int *)(param_1 + 0x94) = iVar1;
    if (iVar1 == 0) {
      uVar15 = func_0x01384bf0();
      uVar5 = (undefined4)uVar15;
      if ((int)((ulonglong)uVar15 >> 0x20) != 1) {
        if (unaff_r10 != (int *)0x0) {
          iVar1 = *unaff_r10;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              iVar9 = piVar4[-1];
              if (iVar9 == **(int **)(iRam019fe4b8 + 0x19fe3e0)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                goto LAB_019fe428;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc();
LAB_019fe428:
          (*(code *)*puVar2)();
        }
        uVar14 = 1;
        func_0x01459844(uVar5);
        uVar15 = func_0x01062280();
        uVar8 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        if ((bool)uVar14) {
          uVar11 = 0xf3bfffff;
        }
        uStack_64 = 0;
        pcVar6 = (char *)(_UNK_019fe7b8 + 0x19fe4d8);
        iStack_60 = iVar9;
        iStack_5c = uVar5;
        uStack_58 = uVar11;
        iStack_54 = unaff_r8;
        iStack_50 = param_1;
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_019fe7bc + 0x19fe4ec));
          func_0x01384978(*(undefined4 *)(_UNK_019fe7c0 + 0x19fe4f8));
          func_0x01384978(*(undefined4 *)(_UNK_019fe7c4 + 0x19fe504));
          func_0x01384978(*(undefined4 *)(_UNK_019fe7c8 + 0x19fe510));
          func_0x01384978(*(undefined4 *)(_UNK_019fe7cc + 0x19fe51c));
          func_0x01384978(*(undefined4 *)(_UNK_019fe7d0 + 0x19fe528));
          func_0x01384978(*(undefined4 *)(_UNK_019fe7d4 + 0x19fe534));
          func_0x01384978(*(undefined4 *)(_UNK_019fe7d8 + 0x19fe540));
          func_0x01384978(*(undefined4 *)(_UNK_019fe7dc + 0x19fe54c));
          func_0x01384978(*(undefined4 *)(_UNK_019fe7e0 + 0x19fe558));
          *pcVar6 = '\x01';
        }
        iVar9 = func_0x0229f06c(0x7d38,0);
        if (iVar9 != 0) {
          iVar9 = func_0x0229f13c(0x7d38,0);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          iStack_4c = iStack_50;
          iStack_50 = iStack_54;
          iStack_54 = uStack_58;
          uStack_58 = iStack_5c;
          iStack_5c = iStack_60;
          iStack_60 = uStack_64;
          uStack_74 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_70 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_6c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          iStack_78 = 0;
          uStack_68 = 0;
          func_0x0245494c(&iStack_90,0,uVar8,0);
          iStack_78 = iStack_90;
          uStack_74 = uStack_8c;
          uStack_70 = uStack_88;
          uStack_6c = uStack_84;
          uStack_68 = uStack_80;
          if (*(int *)(iVar9 + 0x10) != 0) {
            func_0x01485278(&iStack_78,*(int *)(iVar9 + 0x10),0);
          }
          func_0x01485278(&iStack_78,iVar1,0);
          func_0x01485278(&iStack_78,uVar8,0);
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(undefined4 *)(iVar9 + 0xc);
          iVar1 = *(int *)(iVar9 + 0x10);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uVar5 = 3;
          if (iVar1 == 0) {
            uVar5 = 2;
          }
          uVar11 = func_0x0245495c(iVar10,uVar11,&iStack_78,uVar5,0,0);
          return uVar11;
        }
        iVar9 = FUN_019fd7c0(iVar1);
        uVar11 = 0;
        if (iVar9 != 0) {
          iVar9 = *(int *)(iVar1 + 0xa4);
          uVar11 = *(undefined4 *)(iVar1 + 0x80);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          uVar11 = func_0x03259410(iVar9,uVar11,**(undefined4 **)(_UNK_019fe7e4 + 0x19fe5e0));
          iVar9 = func_0x01835d34(uVar11,0);
          if (iVar9 != 0) {
            iVar10 = *(int *)(iVar1 + 0x5c);
            iVar12 = *(int *)(iVar1 + 0x8c) + 1;
            *(int *)(iVar1 + 0x8c) = iVar12;
            *(undefined4 *)(iVar1 + 0x90) = uVar11;
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar10 = *(int *)(iVar10 + 0x60);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar7 = *(int *)(iVar1 + 0x5c);
            iVar10 = *(int *)(iVar10 + 0xc);
            uStack_6c = *(undefined4 *)(iVar1 + 0x8c);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = *(int *)(iVar7 + 0x60);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar13 = *(int *)(iVar1 + 0x5c);
            uVar11 = *(undefined4 *)(iVar7 + 0xc);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            uVar5 = *(undefined4 *)(iVar13 + 0x20);
            uStack_84 = func_0x019fe804(iVar1);
            uStack_7c = *(undefined4 *)(iVar9 + 0x14);
            uStack_88 = (uint)(iVar10 <= iVar12);
            uStack_80 = *(undefined4 *)(iVar1 + 100);
            iStack_78 = *(int *)(iVar1 + 0x88) + 1;
            uStack_74 = 0;
            func_0x02313c5c(iVar1,uStack_6c,uVar11,uVar5);
            iVar10 = *(int *)(iVar1 + 0xa4);
            iVar9 = *(int *)(iVar1 + 0x80) + 1;
            *(int *)(iVar1 + 0x80) = iVar9;
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            if (*(int *)(iVar10 + 0xc) <= iVar9) {
              func_0x01a027e8(iVar1);
            }
            if (*(int *)(**(int **)(_UNK_019fe7f8 + 0x19fe6f8) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_019fe7fc + 0x19fe714));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 8);
            if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar11 = (**(code **)(iVar1 + 0xc))
                                 (*(undefined4 *)(iVar1 + 0x20),uVar8,*(undefined4 *)(iVar1 + 0x14))
              ;
              return uVar11;
            }
            return 0;
          }
          uStack_68 = uVar11;
          uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_019fe7e8 + 0x19fe758),&uStack_68);
          uVar11 = func_0x0244f690(**(undefined4 **)(_UNK_019fe7ec + 0x19fe774),
                                   **(undefined4 **)(_UNK_019fe7f0 + 0x19fe780),uVar11,0);
          if (*(int *)(**(int **)(_UNK_019fe7f4 + 0x19fe794) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar11 = func_0x028c2944(uVar11,0);
        }
        return uVar11;
      }
      piVar4 = (int *)func_0x0145b008(uVar5);
      iVar1 = *piVar4;
      func_0x0145b0f8();
      goto LAB_019fe2e0;
    }
  }
  iVar9 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar9) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar9,0);
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_r10 = (int *)func_0x03653608(iVar1,**(undefined4 **)(iRam019fe490 + 0x19fe07c));
LAB_019fe08c:
  if (unaff_r10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *unaff_r10;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(iRam019fe4b0 + 0x19fe0a8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_019fe0f0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(unaff_r10,**(int **)(iRam019fe4b0 + 0x19fe0a8),0);
LAB_019fe0f0:
  iVar1 = (*(code *)*puVar2)(unaff_r10,puVar2[1]);
  if (iVar1 != 0) {
    if (unaff_r10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *unaff_r10;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(iRam019fe494 + 0x19fe124)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_019fe16c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(unaff_r10,**(int **)(iRam019fe494 + 0x19fe124),0);
LAB_019fe16c:
    uVar11 = (*(code *)*puVar2)(unaff_r10,puVar2[1]);
    if (*(int *)(**(int **)(iRam019fe498 + 0x19fe18c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02565a88(uVar11,0);
    iVar9 = func_0x01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar11 = *(undefined4 *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = **(int **)(iRam019fe49c + 0x19fe1e0);
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = **(int **)(iRam019fe4a0 + 0x19fe204);
    }
    uVar8 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1b4);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = **(undefined4 **)(iRam019fe4a4 + 0x19fe224);
    uStack_2c = **(undefined4 **)(iRam019fe4a8 + 0x19fe230);
    uStack_34 = 0x47e;
    uStack_28 = 0;
    iStack_38 = 0;
    uVar11 = func_0x01cdcbac(iVar9,uVar11,uVar5,uVar8);
    iVar1 = *(int *)(param_1 + 0x94);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar1 + 8);
    uVar3 = *(uint *)(iVar1 + 0xc);
    piVar4 = *(int **)(iRam019fe4ac + 0x19fe294);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar10 = *piVar4;
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    if (uVar3 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar3 + 1;
      *(undefined4 *)(iVar9 + uVar3 * 4 + 0x10) = uVar11;
    }
    else {
      func_0x0328f170(iVar1,uVar11,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38))
      ;
    }
    goto LAB_019fe08c;
  }
  iVar1 = 0;
LAB_019fe2e0:
  if (unaff_r10 != (int *)0x0) {
    iVar9 = *unaff_r10;
    uVar3 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(iRam019fe4b4 + 0x19fe2fc)) {
          puVar2 = (undefined4 *)(iVar9 + *piVar4 * 8 + 0xc0);
          goto LAB_019fe344;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(unaff_r10,**(int **)(iRam019fe4b4 + 0x19fe2fc),0);
LAB_019fe344:
    (*(code *)*puVar2)(unaff_r10,puVar2[1]);
  }
  if (iVar1 != 0) {
    func_0x01384bec(iVar1);
  }
  return 1;
}



// ===== FAT.FestBoardActivity$$SpinOnce RVA 0x19ee4bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019fe4bc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_019fe7b8 + 0x19fe4d8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fe7bc + 0x19fe4ec));
    func_0x01384978(*(undefined4 *)(_UNK_019fe7c0 + 0x19fe4f8));
    func_0x01384978(*(undefined4 *)(_UNK_019fe7c4 + 0x19fe504));
    func_0x01384978(*(undefined4 *)(_UNK_019fe7c8 + 0x19fe510));
    func_0x01384978(*(undefined4 *)(_UNK_019fe7cc + 0x19fe51c));
    func_0x01384978(*(undefined4 *)(_UNK_019fe7d0 + 0x19fe528));
    func_0x01384978(*(undefined4 *)(_UNK_019fe7d4 + 0x19fe534));
    func_0x01384978(*(undefined4 *)(_UNK_019fe7d8 + 0x19fe540));
    func_0x01384978(*(undefined4 *)(_UNK_019fe7dc + 0x19fe54c));
    func_0x01384978(*(undefined4 *)(_UNK_019fe7e0 + 0x19fe558));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d38,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d38,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
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
    func_0x0245495c(iVar4,uVar6,&iStack_38,uVar2,0,0);
    return;
  }
  iVar1 = FUN_019fd7c0(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0xa4);
    uVar6 = *(undefined4 *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x03259410(iVar1,uVar6,**(undefined4 **)(_UNK_019fe7e4 + 0x19fe5e0));
    iVar1 = func_0x01835d34(uVar6,0);
    if (iVar1 != 0) {
      iVar4 = *(int *)(param_1 + 0x5c);
      iVar8 = *(int *)(param_1 + 0x8c) + 1;
      *(int *)(param_1 + 0x8c) = iVar8;
      *(undefined4 *)(param_1 + 0x90) = uVar6;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x60);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(param_1 + 0x5c);
      iVar4 = *(int *)(iVar4 + 0xc);
      uStack_2c = *(undefined4 *)(param_1 + 0x8c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x60);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(param_1 + 0x5c);
      uVar6 = *(undefined4 *)(iVar3 + 0xc);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar2 = *(undefined4 *)(iVar7 + 0x20);
      uStack_44 = func_0x019fe804(param_1);
      uStack_3c = *(undefined4 *)(iVar1 + 0x14);
      uStack_48 = (uint)(iVar4 <= iVar8);
      uStack_40 = *(undefined4 *)(param_1 + 100);
      iStack_38 = *(int *)(param_1 + 0x88) + 1;
      uStack_34 = 0;
      func_0x02313c5c(param_1,uStack_2c,uVar6,uVar2);
      iVar4 = *(int *)(param_1 + 0xa4);
      iVar1 = *(int *)(param_1 + 0x80) + 1;
      *(int *)(param_1 + 0x80) = iVar1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar4 + 0xc) <= iVar1) {
        func_0x01a027e8(param_1);
      }
      if (*(int *)(**(int **)(_UNK_019fe7f8 + 0x19fe6f8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_019fe7fc + 0x19fe714));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      return;
    }
    uStack_28 = uVar6;
    uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_019fe7e8 + 0x19fe758),&uStack_28);
    uVar6 = func_0x0244f690(**(undefined4 **)(_UNK_019fe7ec + 0x19fe774),
                            **(undefined4 **)(_UNK_019fe7f0 + 0x19fe780),uVar6,0);
    if (*(int *)(**(int **)(_UNK_019fe7f4 + 0x19fe794) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar6,0);
  }
  return;
}



// ===== FAT.FestBoardActivity$$get_BoardId RVA 0x19ee804 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019fe804(int param_1)

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
  
  pcVar3 = (char *)(_UNK_019fe8e4 + 0x19fe81c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fe8e8 + 0x19fe830));
    func_0x01384978(*(undefined4 *)(_UNK_019fe8ec + 0x19fe83c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e5,0);
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
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0);
    uStack_14 = 0;
    if (iVar1 != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 8),
                      **(undefined4 **)(_UNK_019fe8f0 + 0x19fe8bc));
    }
  }
  return uStack_14;
}



// ===== FAT.FestBoardActivity$$UnlockCloudIsGetChessItem RVA 0x19ee8f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_019fe8f4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_019fe9c8 + 0x19fe90c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fe9cc + 0x19fe920));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  uStack_18 = 0;
  iVar1 = func_0x0229f06c(0x7d3b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    uVar3 = *(undefined4 *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0245054c(iVar1,uVar3,&uStack_18,**(undefined4 **)(_UNK_019fe9d0 + 0x19fe9a0));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (uint)(iStack_14 == 0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d3b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.FestBoardActivity$$GetCloudIdList RVA 0x19ee9d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_019fe9d4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
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
  
  pcVar3 = (char *)(_UNK_019fec80 + 0x19fe9ec);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019fec84 + 0x19fea00));
    func_0x01384978(*(undefined4 *)(_UNK_019fec88 + 0x19fea0c));
    func_0x01384978(*(undefined4 *)(_UNK_019fec8c + 0x19fea18));
    func_0x01384978(*(undefined4 *)(_UNK_019fec90 + 0x19fea24));
    func_0x01384978(*(undefined4 *)(_UNK_019fec94 + 0x19fea30));
    func_0x01384978(*(undefined4 *)(_UNK_019fec98 + 0x19fea3c));
    func_0x01384978(*(undefined4 *)(_UNK_019fec9c + 0x19fea48));
    func_0x01384978(*(undefined4 *)(_UNK_019feca0 + 0x19fea54));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0x7d3c,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_019feca4 + 0x19feac4));
    func_0x03258eb8(iVar2,**(undefined4 **)(_UNK_019feca8 + 0x19fead8));
    iVar4 = *(int *)(param_1 + 0x50);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02450568(iVar4,**(undefined4 **)(_UNK_019fecac + 0x19feafc));
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03824c6c(&uStack_50,iVar4,**(undefined4 **)(_UNK_019fecb0 + 0x19feb28));
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    puVar8 = *(undefined4 **)(_UNK_019fecb4 + 0x19feb54);
    piVar7 = *(int **)(_UNK_019fecb8 + 0x19feb5c);
    while (iVar4 = func_0x01474f48(&uStack_38,*puVar8), uVar1 = uStack_2c, iVar4 != 0) {
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar2 + 8);
      uVar5 = *(uint *)(iVar2 + 0xc);
      iVar6 = *piVar7;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (uVar5 < *(uint *)(iVar4 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar5 + 1;
        *(undefined4 *)(iVar4 + uVar5 * 4 + 0x10) = uVar1;
      }
      else {
        func_0x0325970c(iVar2,uVar1,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38))
        ;
      }
    }
    func_0x0245056c(&uStack_38,**(undefined4 **)(_UNK_019fecbc + 0x19febe8));
  }
  else {
    iVar2 = func_0x0229f13c(0x7d3c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x021a9e7c(iVar2,param_1,0);
  }
  return iVar2;
}



// ===== FAT.FestBoardActivity$$IsReadyToMove RVA 0x19eecc8 =====

uint FUN_019fecc8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d3d,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x48);
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x787b,0);
    if (iVar1 == 0) {
      return (uint)*(byte *)(param_1 + 0x18);
    }
    iVar1 = func_0x0229f13c(0x787b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d3d,0);
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
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.FestBoardActivity$$StartMoveUpBoard RVA 0x19eed34 =====

void FUN_019fed34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r6;
  undefined4 uVar4;
  bool bVar5;
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
  
  iVar1 = func_0x0229f06c(0x7d3e,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x48);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x787d,0);
    if (iVar1 == 0) {
      iVar1 = func_0x0229f06c(0x787e,0);
      if (iVar1 == 0) {
        bVar5 = *(char *)(param_1 + 0x18) != '\0';
        if (bVar5) {
          unaff_r6 = *(int *)(param_1 + 0x1c);
        }
        if (!bVar5 || unaff_r6 == -1) {
          return;
        }
        iVar1 = func_0x024508e0(0);
        if (unaff_r6 == iVar1) {
          return;
        }
        *(undefined1 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x20) = 1;
        iVar1 = *(int *)(param_1 + 0x24);
        if (iVar1 != 0) {
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        }
        *(undefined1 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
        return;
      }
      iVar1 = func_0x0229f13c(0x787e,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x787d,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d3e,0);
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



// ===== FAT.FestBoardActivity$$get_Valid RVA 0x19eed9c =====

undefined4 FUN_019fed9c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  iVar1 = func_0x0229f06c(0x7d3f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d3f,0);
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
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = (**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)(*piVar3 + 0x134));
  uVar5 = 0;
  if ((iVar1 != 0) && (uVar5 = 0, *(int *)(param_1 + 0x58) != 0)) {
    uVar5 = 1;
  }
  return uVar5;
}



// ===== FAT.FestBoardActivity$$get_EventConf RVA 0x19eee2c =====

undefined4 FUN_019fee2c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.FestBoardActivity$$set_EventConf RVA 0x19eee34 =====

void FUN_019fee34(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// ===== FAT.FestBoardActivity$$get_GroupConf RVA 0x19eee3c =====

undefined4 FUN_019fee3c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== FAT.FestBoardActivity$$set_GroupConf RVA 0x19eee44 =====

void FUN_019fee44(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}



// ===== FAT.FestBoardActivity$$get_BoardSkinId RVA 0x19eee4c =====

undefined4 FUN_019fee4c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x7d41,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d41,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x14);
  }
  return uVar3;
}



// ===== FAT.FestBoardActivity$$get_MainCategoryId RVA 0x19eeeb0 =====

undefined4 FUN_019feeb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x7d42,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d42,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38);
  }
  return uVar3;
}



// ===== FAT.FestBoardActivity$$get_UnlockCloudLevel RVA 0x19eef14 =====

undefined4 FUN_019fef14(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// ===== FAT.FestBoardActivity$$set_UnlockCloudLevel RVA 0x19eef1c =====

void FUN_019fef1c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}



// ===== FAT.FestBoardActivity$$set_MapRewardList RVA 0x19eef24 =====

void FUN_019fef24(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x94) = param_2;
  return;
}



// ===== FAT.FestBoardActivity$$get_MapRewardList RVA 0x19eef2c =====

undefined4 FUN_019fef2c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x94);
}



// ===== FAT.FestBoardActivity$$get_MapRewardClaimFlag RVA 0x19eef34 =====

undefined1 FUN_019fef34(int param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



// ===== FAT.FestBoardActivity$$set_MapRewardClaimFlag RVA 0x19eef3c =====

void FUN_019fef3c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x98) = param_2;
  return;
}



// ===== FAT.FestBoardActivity$$get_TokenNum RVA 0x19eef44 =====

undefined4 FUN_019fef44(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d43,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d43,0);
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
  return *(undefined4 *)(param_1 + 0x74);
}



// ===== FAT.FestBoardActivity$$set_TokenId RVA 0x19eef98 =====

void FUN_019fef98(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  return;
}



// ===== FAT.FestBoardActivity$$get_TokenId RVA 0x19eefa0 =====

undefined4 FUN_019fefa0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}



// ===== FAT.FestBoardActivity$$get_Score RVA 0x19eefa8 =====

undefined4 FUN_019fefa8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d44,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d44,0);
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
  return *(undefined4 *)(param_1 + 0x6c);
}



// ===== FAT.FestBoardActivity$$get_DisplayedScore RVA 0x19eeffc =====

undefined4 FUN_019feffc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d45,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d45,0);
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
  return *(undefined4 *)(param_1 + 0x70);
}



// ===== FAT.FestBoardActivity$$get_BuildingIndex RVA 0x19ef050 =====

undefined4 FUN_019ff050(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x236f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x236f,0);
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
  return *(undefined4 *)(param_1 + 0x78);
}



// ===== FAT.FestBoardActivity$$get_HasPendingSpinResult RVA 0x19ef0a4 =====

uint FUN_019ff0a4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d46,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d46,0);
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
  return (uint)(0 < *(int *)(param_1 + 0x90));
}



// ===== FAT.FestBoardActivity$$get_Visual RVA 0x19ef108 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019ff108(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d47,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d47,0);
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
  return *(undefined4 *)(param_1 + 0xb0);
}



// ===== FAT.FestBoardActivity$$get_VisualMain RVA 0x19ef15c =====

void FUN_019ff15c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xb0);
  *param_1 = *(undefined4 *)(param_2 + 0xac);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FestBoardActivity$$get_VisualMilestone RVA 0x19ef170 =====

void FUN_019ff170(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xb8);
  *param_1 = *(undefined4 *)(param_2 + 0xb4);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FestBoardActivity$$get_VisualMap RVA 0x19ef184 =====

void FUN_019ff184(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc0);
  *param_1 = *(undefined4 *)(param_2 + 0xbc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FestBoardActivity$$get_VisualLoading RVA 0x19ef198 =====

void FUN_019ff198(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 200);
  *param_1 = *(undefined4 *)(param_2 + 0xc4);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FestBoardActivity$$get_GuideRes RVA 0x19ef1ac =====

void FUN_019ff1ac(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xd0);
  *param_1 = *(undefined4 *)(param_2 + 0xcc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FestBoardActivity$$get_StartPopup RVA 0x19ef1c0 =====

void FUN_019ff1c0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xdc);
  *param_1 = uVar1;
  return;
}



// ===== FAT.FestBoardActivity$$get_EndPopup RVA 0x19ef1d4 =====

void FUN_019ff1d4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xe8);
  *param_1 = uVar1;
  return;
}



// ===== FAT.FestBoardActivity$$get_ConvertPopup RVA 0x19ef1e8 =====

void FUN_019ff1e8(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xf4);
  *param_1 = uVar1;
  return;
}



// ===== FAT.FestBoardActivity$$.ctor RVA 0x19ef1fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ff1fc(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
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
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_019ff514 + 0x19ff218);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019ff518 + 0x19ff22c));
    func_0x01384978(*(undefined4 *)(_UNK_019ff51c + 0x19ff238));
    func_0x01384978(*(undefined4 *)(_UNK_019ff520 + 0x19ff244));
    func_0x01384978(*(undefined4 *)(_UNK_019ff524 + 0x19ff250));
    func_0x01384978(*(undefined4 *)(_UNK_019ff528 + 0x19ff25c));
    func_0x01384978(*(undefined4 *)(_UNK_019ff52c + 0x19ff268));
    func_0x01384978(*(undefined4 *)(_UNK_019ff530 + 0x19ff274));
    *pcVar5 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_019ff534 + 0x19ff29c);
  *(undefined4 *)(param_1 + 0x44) = 0x99;
  uVar2 = func_0x01384be4(*puVar1);
  func_0x02450570(uVar2,**(undefined4 **)(_UNK_019ff538 + 0x19ff2b8));
  puVar1 = *(undefined4 **)(_UNK_019ff53c + 0x19ff2d0);
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar2 = func_0x01384be4(*puVar1);
  func_0x02450574(uVar2,**(undefined4 **)(_UNK_019ff540 + 0x19ff2ec));
  puVar1 = *(undefined4 **)(_UNK_019ff544 + 0x19ff300);
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  uVar2 = func_0x01384be4(*puVar1);
  func_0x03258eb8(uVar2,**(undefined4 **)(_UNK_019ff548 + 0x19ff318));
  piVar6 = *(int **)(_UNK_019ff54c + 0x19ff32c);
  iVar3 = *piVar6;
  iVar4 = *(int *)(iVar3 + 0x74);
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  if (iVar4 == 0) {
    func_0x01384ab4();
    iVar3 = *piVar6;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  func_0x02b644a0(&uStack_30,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa80),0);
  *(undefined4 *)(param_1 + 0xac) = uStack_30;
  *(undefined4 *)(param_1 + 0xb0) = uStack_2c;
  uStack_34 = 0;
  uStack_38 = 0;
  func_0x02b644a0(&uStack_38,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xa8c),0);
  *(undefined4 *)(param_1 + 0xb4) = uStack_38;
  *(undefined4 *)(param_1 + 0xb8) = uStack_34;
  uStack_3c = 0;
  uStack_40 = 0;
  func_0x02b644a0(&uStack_40,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xa94),0);
  *(undefined4 *)(param_1 + 0xbc) = uStack_40;
  *(undefined4 *)(param_1 + 0xc0) = uStack_3c;
  uStack_44 = 0;
  uStack_48 = 0;
  func_0x02b644a0(&uStack_48,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xa90),0);
  *(undefined4 *)(param_1 + 0xc4) = uStack_48;
  *(undefined4 *)(param_1 + 200) = uStack_44;
  uStack_4c = 0;
  uStack_50 = 0;
  func_0x02b644a0(&uStack_50,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xaa0),0);
  *(undefined4 *)(param_1 + 0xcc) = uStack_50;
  *(undefined4 *)(param_1 + 0xd0) = uStack_4c;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x02b64854(&uStack_60,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xa84),0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0xdc) = uStack_58;
  *(ulonglong *)(param_1 + 0xd4) = CONCAT44(uStack_5c,uStack_60);
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x02b64854(&uStack_70,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa88),0);
  iVar3 = *piVar6;
  *(undefined4 *)(param_1 + 0xe8) = uStack_68;
  *(ulonglong *)(param_1 + 0xe0) = CONCAT44(uStack_6c,uStack_70);
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x02b64854(&uStack_80,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa9c),0);
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf4) = uStack_78;
  *(ulonglong *)(param_1 + 0xec) = CONCAT44(uStack_7c,uStack_80);
  func_0x02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar2 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  uVar2 = func_0x017e85c4(uVar2,0);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  func_0x019ff550(param_1);
  return;
}



// ===== FAT.FestBoardActivity$$RefreshTheme RVA 0x19ef550 =====

void FUN_019ff550(int *param_1)

{
  int iVar1;
  int iStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  int iStack_28;
  int iStack_20;
  int iStack_1c;
  
  uStack_30 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x7d49,0);
  if (iVar1 == 0) {
    if (param_1[0x16] != 0) {
      iStack_20 = param_1[0x2b];
      iStack_1c = param_1[0x2c];
      func_0x02b64540(&iStack_20,*(undefined4 *)(param_1[0x16] + 0x3c),0);
      iVar1 = param_1[0x16];
      uStack_30 = *(undefined8 *)(param_1 + 0x35);
      iStack_28 = param_1[0x37];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x48),param_1,0,0,0);
      iVar1 = param_1[0x16];
      uStack_30 = *(undefined8 *)(param_1 + 0x38);
      iStack_28 = param_1[0x3a];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x1c),param_1,0,0,0);
      iVar1 = param_1[0x16];
      uStack_30 = *(undefined8 *)(param_1 + 0x3b);
      iStack_28 = param_1[0x3d];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x24),param_1,0,0,0);
      iVar1 = param_1[0x16];
      iStack_20 = param_1[0x2d];
      iStack_1c = param_1[0x2e];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x44),0);
      iStack_20 = param_1[0x2f];
      iStack_1c = param_1[0x30];
      iVar1 = param_1[0x16];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x40),0);
      iStack_20 = param_1[0x31];
      iStack_1c = param_1[0x32];
      iVar1 = param_1[0x16];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x38),0);
      (**(code **)(*param_1 + 0x128))(&iStack_38,param_1,*(undefined4 *)(*param_1 + 300));
      iVar1 = param_1[0x16];
      iStack_1c = uStack_34;
      iStack_20 = iStack_38;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_20,*(undefined4 *)(iVar1 + 0x30),0);
      func_0x019ff780(param_1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d49,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.FestBoardActivity$$CheckThemeConfig RVA 0x19ef780 =====

/* WARNING: Possible PIC construction at 0x019ff86c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ff894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ff8bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ff8e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ff90c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ff934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ff95c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x019ff938) */
/* WARNING: Removing unreachable block (ram,0x019ff944) */
/* WARNING: Removing unreachable block (ram,0x019ff948) */
/* WARNING: Removing unreachable block (ram,0x019ff910) */
/* WARNING: Removing unreachable block (ram,0x019ff91c) */
/* WARNING: Removing unreachable block (ram,0x019ff920) */
/* WARNING: Removing unreachable block (ram,0x019ff8e8) */
/* WARNING: Removing unreachable block (ram,0x019ff8f4) */
/* WARNING: Removing unreachable block (ram,0x019ff8f8) */
/* WARNING: Removing unreachable block (ram,0x019ff8c0) */
/* WARNING: Removing unreachable block (ram,0x019ff8cc) */
/* WARNING: Removing unreachable block (ram,0x019ff8d0) */
/* WARNING: Removing unreachable block (ram,0x019ff898) */
/* WARNING: Removing unreachable block (ram,0x019ff8a4) */
/* WARNING: Removing unreachable block (ram,0x019ff8a8) */
/* WARNING: Removing unreachable block (ram,0x019ff870) */
/* WARNING: Removing unreachable block (ram,0x019ff87c) */
/* WARNING: Removing unreachable block (ram,0x019ff880) */
/* WARNING: Removing unreachable block (ram,0x019ff960) */
/* WARNING: Removing unreachable block (ram,0x019ff96c) */
/* WARNING: Removing unreachable block (ram,0x019ff970) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ff780(int param_1)

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
  int iStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_019ff98c + 0x19ff794);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019ff990 + 0x19ff7a8));
    func_0x01384978(*(undefined4 *)(_UNK_019ff994 + 0x19ff7b4));
    func_0x01384978(*(undefined4 *)(_UNK_019ff998 + 0x19ff7c0));
    func_0x01384978(*(undefined4 *)(_UNK_019ff99c + 0x19ff7cc));
    func_0x01384978(*(undefined4 *)(_UNK_019ff9a0 + 0x19ff7d8));
    func_0x01384978(*(undefined4 *)(_UNK_019ff9a4 + 0x19ff7e4));
    func_0x01384978(*(undefined4 *)(_UNK_019ff9a8 + 0x19ff7f0));
    func_0x01384978(*(undefined4 *)(_UNK_019ff9ac + 0x19ff7fc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d51,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d51,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    iStack_24 = uStack_3c;
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0x3c);
  uVar5 = **(undefined4 **)(_UNK_019ff9b0 + 0x19ff864);
  pcVar3 = (char *)(_UNK_019ffb14 + 0x19ff9f0);
  iStack_28 = param_1;
  iStack_24 = iVar1;
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019ffb18 + 0x19ffa04));
    func_0x01384978(*(undefined4 *)(_UNK_019ffb1c + 0x19ffa10));
    func_0x01384978(*(undefined4 *)(_UNK_019ffb20 + 0x19ffa1c));
    func_0x01384978(*(undefined4 *)(_UNK_019ffb24 + 0x19ffa28));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d52,0);
  if (iVar1 == 0) {
    if (iVar4 < 1) {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_2c = *(undefined4 *)(iVar1 + 0xc);
      uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_019ffb28 + 0x19ffaa8),&uStack_2c);
      uStack_30 = 0;
      uVar5 = func_0x02450228(**(undefined4 **)(_UNK_019ffb2c + 0x19ffac8),
                              **(undefined4 **)(_UNK_019ffb30 + 0x19ffad4),uVar5,uVar2);
      if (*(int *)(**(int **)(_UNK_019ffb34 + 0x19ffaf0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar5,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d52,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 0;
    func_0x0217ab90(iVar1,param_1,iVar4,uVar5);
  }
  return;
}



// ===== FAT.FestBoardActivity$$CheckTheme RVA 0x19ef9d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ff9d0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_019ffb14 + 0x19ff9f0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019ffb18 + 0x19ffa04));
    func_0x01384978(*(undefined4 *)(_UNK_019ffb1c + 0x19ffa10));
    func_0x01384978(*(undefined4 *)(_UNK_019ffb20 + 0x19ffa1c));
    func_0x01384978(*(undefined4 *)(_UNK_019ffb24 + 0x19ffa28));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d52,0);
  if (iVar1 == 0) {
    if (param_2 < 1) {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = *(undefined4 *)(iVar1 + 0xc);
      uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_019ffb28 + 0x19ffaa8),&uStack_1c);
      uVar2 = func_0x02450228(**(undefined4 **)(_UNK_019ffb2c + 0x19ffac8),
                              **(undefined4 **)(_UNK_019ffb30 + 0x19ffad4),param_3,uVar2,0);
      if (*(int *)(**(int **)(_UNK_019ffb34 + 0x19ffaf0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar2,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d52,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.FestBoardActivity$$InitGroupConfig RVA 0x19efb38 =====

/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ffb38(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  char *pcVar5;
  int iVar6;
  int unaff_r6;
  undefined4 uVar7;
  int unaff_r7;
  undefined4 unaff_r8;
  int *unaff_r9;
  undefined4 unaff_r10;
  int unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_019ffc8c + 0x19ffb4c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019ffc90 + 0x19ffb60));
    func_0x01384978(*(undefined4 *)(_UNK_019ffc94 + 0x19ffb6c));
    func_0x01384978(*(undefined4 *)(_UNK_019ffc98 + 0x19ffb78));
    func_0x01384978(*(undefined4 *)(_UNK_019ffc9c + 0x19ffb84));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d53,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d53,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    iStack_20 = iStack_38;
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
  if (*(int *)(param_1 + 0x60) < 1) {
    if (*(int *)(**(int **)(_UNK_019ffca0 + 0x19ffc3c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar2 = *(int **)(_UNK_019ffca4 + 0x19ffc58);
  }
  else {
    iVar1 = func_0x018340cc(*(int *)(param_1 + 0x60),0);
    *(int *)(param_1 + 0x5c) = iVar1;
    if (iVar1 != 0) {
      iVar6 = *(int *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar1 + 0x6c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar6 + 0xc) = 0;
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      FUN_019fcbbc(param_1);
      *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
      return;
    }
    if (*(int *)(**(int **)(_UNK_019ffca8 + 0x19ffc64) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar2 = *(int **)(_UNK_019ffcac + 0x19ffc80);
  }
  param_1 = *piVar2;
  pcVar5 = (char *)(_UNK_028c29e4 + 0x28c2958);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c29e8 + 0x28c296c),0);
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x46,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x46,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  if (*(int *)(**(int **)(_UNK_028c29ec + 0x28c29c4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar5 = (char *)(_UNK_028c2868 + 0x28c26ec);
  iStack_20 = unaff_r4;
  iStack_1c = unaff_r5;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14,0);
  if (iVar1 != 0) {
    iVar3 = func_0x0229f13c(0x14,0);
    iVar1 = iStack_20;
    iVar6 = iStack_1c;
    if (iVar3 == 0) {
      func_0x01384bf0();
      iVar1 = iStack_20;
      iVar6 = iStack_1c;
    }
    goto LAB_02174038;
  }
  piVar2 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar2;
  }
  if (**(int **)(iVar1 + 0x5c) < 1) {
LAB_028c2848:
    iVar6 = param_1;
    param_1 = iStack_20;
    iVar3 = iStack_1c;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      param_1 = iStack_20;
      iVar3 = iStack_1c;
    }
  }
  else {
    if (param_1 == 0) {
      func_0x01384bf0();
      iVar1 = *piVar2;
    }
    iVar6 = *(int *)(param_1 + 8);
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar2;
    }
    iVar3 = **(int **)(iVar1 + 0x5c);
    if (iVar6 <= iVar3) goto LAB_028c2848;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = **(int **)(*piVar2 + 0x5c);
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 < 1) {
      return;
    }
    unaff_r6 = 0;
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    unaff_r7 = func_0x04673af4(param_1,0,iVar3,0);
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = 0x28c2824;
    iVar6 = unaff_r7;
    unaff_r8 = 4;
    unaff_r9 = piVar2;
    register0x00000054 = (BADSPACEBASE *)&iStack_20;
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r6;
  *(int *)((int)register0x00000054 + -0xc) = iVar3;
  *(int *)((int)register0x00000054 + -0x10) = param_1;
  pcVar5 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x15,0);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_028c31a0 + _UNK_028c31ac))();
    return;
  }
  iVar3 = func_0x0229f13c(0x15,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  unaff_r6 = *(int *)((int)register0x00000054 + -8);
  unaff_lr = *(int *)((int)register0x00000054 + -4);
  param_1 = iVar6;
  iVar1 = *(int *)((int)register0x00000054 + -0x10);
  iVar6 = *(int *)((int)register0x00000054 + -0xc);
LAB_02174038:
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = iVar6;
  *(int *)((int)register0x00000054 + -0x20) = iVar1;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_1,0);
  iVar1 = *(int *)(iVar3 + 0x10);
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
  if (iVar1 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar1,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),4,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = *(int *)(iVar3 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar7,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  return;
}



// ===== FAT.FestBoardActivity$$SaveSetup RVA 0x19efcb0 =====

/* WARNING: Possible PIC construction at 0x019ffd78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ffda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ffdd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ffe08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ffe38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ffe68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ffe98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ffec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019ffef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019fff28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019fff58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019fff88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x019fffb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a0001c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a0004c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01a00020) */
/* WARNING: Removing unreachable block (ram,0x01a0003c) */
/* WARNING: Removing unreachable block (ram,0x01a00040) */
/* WARNING: Removing unreachable block (ram,0x019fffbc) */
/* WARNING: Removing unreachable block (ram,0x019ffff0) */
/* WARNING: Removing unreachable block (ram,0x01a0000c) */
/* WARNING: Removing unreachable block (ram,0x01a00010) */
/* WARNING: Removing unreachable block (ram,0x019fffc8) */
/* WARNING: Removing unreachable block (ram,0x019fff8c) */
/* WARNING: Removing unreachable block (ram,0x019fffa8) */
/* WARNING: Removing unreachable block (ram,0x019fffac) */
/* WARNING: Removing unreachable block (ram,0x019fff5c) */
/* WARNING: Removing unreachable block (ram,0x019fff78) */
/* WARNING: Removing unreachable block (ram,0x019fff7c) */
/* WARNING: Removing unreachable block (ram,0x019fff2c) */
/* WARNING: Removing unreachable block (ram,0x019fff48) */
/* WARNING: Removing unreachable block (ram,0x019fff4c) */
/* WARNING: Removing unreachable block (ram,0x019ffefc) */
/* WARNING: Removing unreachable block (ram,0x019fff18) */
/* WARNING: Removing unreachable block (ram,0x019fff1c) */
/* WARNING: Removing unreachable block (ram,0x019ffecc) */
/* WARNING: Removing unreachable block (ram,0x019ffee8) */
/* WARNING: Removing unreachable block (ram,0x019ffeec) */
/* WARNING: Removing unreachable block (ram,0x019ffe9c) */
/* WARNING: Removing unreachable block (ram,0x019ffeb8) */
/* WARNING: Removing unreachable block (ram,0x019ffebc) */
/* WARNING: Removing unreachable block (ram,0x019ffe6c) */
/* WARNING: Removing unreachable block (ram,0x019ffe88) */
/* WARNING: Removing unreachable block (ram,0x019ffe8c) */
/* WARNING: Removing unreachable block (ram,0x019ffe3c) */
/* WARNING: Removing unreachable block (ram,0x019ffe58) */
/* WARNING: Removing unreachable block (ram,0x019ffe5c) */
/* WARNING: Removing unreachable block (ram,0x019ffe0c) */
/* WARNING: Removing unreachable block (ram,0x019ffe28) */
/* WARNING: Removing unreachable block (ram,0x019ffe2c) */
/* WARNING: Removing unreachable block (ram,0x019ffddc) */
/* WARNING: Removing unreachable block (ram,0x019ffdf8) */
/* WARNING: Removing unreachable block (ram,0x019ffdfc) */
/* WARNING: Removing unreachable block (ram,0x019ffdac) */
/* WARNING: Removing unreachable block (ram,0x019ffdc8) */
/* WARNING: Removing unreachable block (ram,0x019ffdcc) */
/* WARNING: Removing unreachable block (ram,0x019ffd7c) */
/* WARNING: Removing unreachable block (ram,0x019ffd98) */
/* WARNING: Removing unreachable block (ram,0x019ffd9c) */
/* WARNING: Removing unreachable block (ram,0x01a00050) */
/* WARNING: Removing unreachable block (ram,0x01a0006c) */
/* WARNING: Removing unreachable block (ram,0x01a00070) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ffcb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar4 = (char *)(_UNK_01a00088 + 0x19ffccc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a0008c + 0x19ffce0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d56,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d56,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    piStack_2c = (int *)uStack_44;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
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
    func_0x0245495c(iVar3,uVar5,&iStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar5 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0x60),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_2c = *(int **)(_UNK_01a00090 + 0x19ffd78);
  iVar3 = *piStack_2c;
  pcVar4 = (char *)(_UNK_03652bac + 0x3652b1c);
  iStack_38 = iVar1;
  iStack_34 = param_1;
  uStack_30 = uVar5;
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



// ===== FAT.FestBoardActivity$$LoadSetup RVA 0x19f0094 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a00094(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01a002ec + 0x1a000b0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a002f0 + 0x1a000c4));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7d57,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7d57,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = func_0x01c23c30(0,uVar3,0);
  *(undefined4 *)(param_1 + 0x60) = uVar6;
  uVar6 = func_0x01c23c30(1,uVar3,0);
  *(undefined4 *)(param_1 + 0x68) = uVar6;
  uVar6 = func_0x01c23c30(2,uVar3,0);
  *(undefined4 *)(param_1 + 100) = uVar6;
  uVar6 = func_0x01c23c30(3,uVar3,0);
  *(undefined4 *)(param_1 + 0x74) = uVar6;
  uVar6 = func_0x01c23c30(4,uVar3,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  uVar6 = func_0x01c23c30(5,uVar3,0);
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  uVar6 = func_0x01c23c30(6,uVar3,0);
  *(undefined4 *)(param_1 + 0x78) = uVar6;
  uVar6 = func_0x01c23c30(7,uVar3,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  uVar6 = func_0x01c23c30(8,uVar3,0);
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  uVar6 = func_0x01c23c30(9,uVar3,0);
  *(undefined4 *)(param_1 + 0x84) = uVar6;
  uVar6 = func_0x01c23c30(10,uVar3,0);
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  uVar6 = func_0x01c23c30(0xb,uVar3,0);
  *(undefined4 *)(param_1 + 0x8c) = uVar6;
  uVar6 = func_0x01c23c30(0xc,uVar3,0);
  *(undefined4 *)(param_1 + 0x90) = uVar6;
  FUN_019ffb38(param_1);
  iVar2 = func_0x018340cc(*(undefined4 *)(param_1 + 0x60),0);
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x18))) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a002f4 + 0x1a00260));
    func_0x02bf44e8(iVar2,0);
    *(int *)(param_1 + 0x10c) = iVar2;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0xf;
    uStack_1c = 0;
    func_0x02bf061c(iVar2,uVar3,0xd,0xe);
  }
  uVar1 = func_0x01a002f8(param_1);
  *(undefined1 *)(param_1 + 0x98) = uVar1;
  func_0x01a00374(param_1);
  FUN_019fc518(param_1);
  FUN_019fc9b8(param_1);
  func_0x01a004c8(param_1);
  func_0x01a00848(param_1,0);
  uVar6 = *(undefined4 *)(param_1 + 0x6c);
  iVar2 = func_0x0229f06c(0x7d60,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7d60,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,uVar6,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  return;
}



// ===== FAT.FestBoardActivity$$IsAllBuildingCompleted RVA 0x19f02f8 =====

undefined4 FUN_01a002f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x7d35,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d35,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  iVar1 = func_0x01a0463c(param_1);
  if ((iVar1 != 0) && (uVar3 = 0, iVar1 + -1 <= *(int *)(param_1 + 0x78))) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.FestBoardActivity$$ClampSpinStage RVA 0x19f0374 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a00374(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_01a004b8 + 0x1a00388);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a004bc + 0x1a0039c));
    func_0x01384978(*(undefined4 *)(_UNK_01a004c0 + 0x1a003a8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d3a,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    if (1 < iVar1) {
      iVar5 = *(int *)(param_1 + 0x9c);
      if (iVar5 < 1) {
        iVar1 = 0;
        puVar7 = *(undefined4 **)(_UNK_01a004c4 + 0x1a0041c);
        while( true ) {
          iVar5 = *(int *)(param_1 + 0x5c);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar5 + 0x60);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar5 + 0xc) <= iVar1) break;
          iVar5 = *(int *)(param_1 + 0x5c);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar5 + 0x60);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar6 = func_0x0364c9b8(iVar5,iVar1,*puVar7);
          iVar5 = func_0x01835d34(uVar6,0);
          if (iVar5 != 0) {
            iVar2 = *(int *)(iVar5 + 0x18);
            if (*(int *)(iVar5 + 0x18) < *(int *)(param_1 + 0x9c)) {
              iVar2 = *(int *)(param_1 + 0x9c);
            }
            *(int *)(param_1 + 0x9c) = iVar2;
          }
          iVar1 = iVar1 + 1;
        }
        iVar1 = *(int *)(param_1 + 0x7c);
        iVar5 = *(int *)(param_1 + 0x9c);
      }
      if (iVar5 < iVar1) {
        *(undefined4 *)(param_1 + 0x7c) = 1;
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x7d3a,0);
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
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.FestBoardActivity$$InitTokenOutput RVA 0x19f04c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a004c8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
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
  
  pcVar4 = (char *)(_UNK_01a0080c + 0x1a004e0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a00810 + 0x1a004f4));
    func_0x01384978(*(undefined4 *)(_UNK_01a00814 + 0x1a00500));
    func_0x01384978(*(undefined4 *)(_UNK_01a00818 + 0x1a0050c));
    func_0x01384978(*(undefined4 *)(_UNK_01a0081c + 0x1a00518));
    func_0x01384978(*(undefined4 *)(_UNK_01a00820 + 0x1a00524));
    func_0x01384978(*(undefined4 *)(_UNK_01a00824 + 0x1a00530));
    func_0x01384978(*(undefined4 *)(_UNK_01a00828 + 0x1a0053c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d59,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d59,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
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
    func_0x0245495c(iVar5,uVar8,&uStack_30,uVar3);
    return;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    func_0x01a050b4(param_1);
    func_0x01a0510c(param_1);
    iVar1 = func_0x01a051e0(param_1);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0xfc) == 0) {
        uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01a0082c + 0x1a005d0));
        func_0x021576d4(uVar8,param_1,0);
        *(undefined4 *)(param_1 + 0xfc) = uVar8;
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar8 = *(undefined4 *)(param_1 + 0xfc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbb930(iVar1,uVar8,0);
    }
    iVar1 = func_0x01a05244(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x100);
      if (iVar1 == 0) {
        iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a00830 + 0x1a0064c));
        func_0x02afb3e0(iVar1,0);
        *(int *)(param_1 + 0x100) = iVar1;
      }
      iVar5 = *(int *)(param_1 + 0x5c);
      uVar3 = *(undefined4 *)(param_1 + 0x74);
      uVar8 = *(undefined4 *)(param_1 + 0xa8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      piVar9 = *(int **)(_UNK_01a00834 + 0x1a00684);
      uVar7 = *(undefined4 *)(iVar5 + 0x28);
      iVar5 = *piVar9;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x01384ab4();
        iVar5 = *piVar9;
      }
      uVar10 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x1c0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_40 = **(undefined4 **)(_UNK_01a00838 + 0x1a006c8);
      uStack_3c = 1;
      uStack_34 = 0x3f;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_48 = uVar7;
      uStack_44 = uVar10;
      func_0x02af6c48(iVar1,uVar3,param_1,uVar8);
    }
    if (*(int *)(param_1 + 0x104) == 0) {
      uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01a0083c + 0x1a00718));
      func_0x02450578(uVar8,**(undefined4 **)(_UNK_01a00840 + 0x1a0072c));
      *(undefined4 *)(param_1 + 0x104) = uVar8;
    }
    iVar1 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0x18)) {
      iVar1 = *(int *)(param_1 + 0x10c);
      if (iVar1 == 0) {
        iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a00844 + 0x1a00774));
        func_0x02bf44e8(iVar1,0);
        *(int *)(param_1 + 0x10c) = iVar1;
      }
      iVar5 = *(int *)(param_1 + 0x5c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar8 = *(undefined4 *)(iVar5 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02befbb0(iVar1,uVar8,param_1,0);
      iVar1 = *(int *)(param_1 + 0x10c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02bf02d0(iVar1,0);
      uVar8 = *(undefined4 *)(param_1 + 0x74);
      iVar1 = *(int *)(param_1 + 0x10c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      pcVar4 = (char *)(_UNK_02befe10 + 0x2befcf4);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02befe14 + 0x2befd08),uVar8,0);
        *pcVar4 = '\x01';
      }
      iVar5 = func_0x0229f06c(0x5ca,0);
      if (iVar5 != 0) {
        iVar5 = func_0x0229f13c(0x5ca,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
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
        if (*(int *)(iVar5 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,uVar8,0);
        iVar6 = *(int *)(iVar5 + 8);
        uVar8 = *(undefined4 *)(iVar5 + 0xc);
        iVar1 = *(int *)(iVar5 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar3 = 3;
        if (iVar1 == 0) {
          uVar3 = 2;
        }
        func_0x0245495c(iVar6,uVar8,&uStack_38,uVar3,0,0);
        return;
      }
      iVar5 = func_0x02beec64(iVar1);
      if (iVar5 != 0) {
        iVar5 = *(int *)(iVar1 + 8);
        uVar11 = *(uint *)(iVar1 + 0x14);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x14);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar1 + 0x14);
        iVar5 = *(int *)(iVar5 + 0xc);
        if (iVar6 + 1 < iVar5) {
          do {
            iVar6 = iVar6 + 1;
            iVar2 = func_0x02befe18(iVar1,iVar6,uVar8);
            if (iVar2 == 0) {
              iVar6 = *(int *)(iVar1 + 0x14);
              break;
            }
            *(int *)(iVar1 + 0x14) = iVar6;
          } while (iVar5 + -1 != iVar6);
        }
        if ((int)uVar11 < iVar6) {
          iVar5 = *(int *)(iVar1 + 0x20);
          if (0x7fffffff < (*(uint *)(iVar1 + 0x10) & uVar11)) {
            *(int *)(iVar1 + 0x10) = iVar6;
          }
          if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02befe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x14));
            return;
          }
        }
      }
      return;
    }
  }
  return;
}



// ===== FAT.FestBoardActivity$$InitHandbookAgent RVA 0x19f0848 =====

/* WARNING: Removing unreachable block (ram,0x02b61b38) */
/* WARNING: Removing unreachable block (ram,0x02b61b44) */
/* WARNING: Removing unreachable block (ram,0x02b61b48) */
/* WARNING: Removing unreachable block (ram,0x01a00a50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a00848(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  int iVar5;
  int unaff_r6;
  char *pcVar6;
  undefined4 uVar7;
  int unaff_r7;
  int iVar8;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_lr;
  bool bVar9;
  int *piVar10;
  undefined8 uVar11;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(iRam01a00a4c + 0x1a00864);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam01a00a50 + 0x1a00878));
    func_0x01384978(*(undefined4 *)(iRam01a00a54 + 0x1a00884));
    func_0x01384978(*(undefined4 *)(iRam01a00a58 + 0x1a00890));
    func_0x01384978(*(undefined4 *)(iRam01a00a5c + 0x1a0089c));
    func_0x01384978(*(undefined4 *)(iRam01a00a60 + 0x1a008a8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d5e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d5e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    iStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485228(&iStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    iVar1 = func_0x0245495c(iVar5,uVar7,&iStack_38,uVar4,0,0);
    return iVar1;
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xf8) == 0) {
      iVar8 = *(int *)(param_1 + 0x5c);
      iVar5 = iVar8;
      if (iVar8 == 0) {
        func_0x01384bf0();
        iVar5 = *(int *)(param_1 + 0x5c);
        bVar9 = iVar5 == 0;
        if (bVar9) {
          uVar11 = func_0x01384bf0();
          if (bVar9) {
            param_1 = -0xca01;
          }
          unaff_r7 = 0;
          iStack_2c = 0x1a00a4c;
          piVar10 = &iStack_38;
          iStack_38 = param_1;
          iStack_34 = param_2;
          iStack_30 = iVar1;
          iVar1 = func_0x0229f06c(0x7d60,0);
          if (iVar1 == 0) {
            *(int *)((int)uVar11 + 0x70) = (int)((ulonglong)uVar11 >> 0x20);
            return 0;
          }
          iVar1 = func_0x0229f13c(0x7d60,0);
          unaff_r4 = iStack_38;
          unaff_r5 = iStack_34;
          unaff_r6 = iStack_30;
          unaff_lr = iStack_2c;
          if (iVar1 == 0) {
            func_0x01384bf0();
            unaff_r4 = iStack_38;
            unaff_r5 = iStack_34;
            unaff_r6 = iStack_30;
            unaff_lr = iStack_2c;
          }
          goto SUB_021773c4;
        }
      }
      uVar7 = *(undefined4 *)(iVar5 + 0x34);
      uVar4 = *(undefined4 *)(iVar8 + 0x30);
      if (*(int *)(**(int **)(iRam01a00a64 + 0x1a0095c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar7 = func_0x02565a88(uVar7,0);
      iVar1 = func_0x01384be4(**(undefined4 **)(iRam01a00a68 + 0x1a00994));
      uStack_24 = 0;
      uStack_28 = uVar7;
      func_0x02bf5bd8(iVar1,param_1,uVar4,param_2);
      puVar2 = *(undefined4 **)(iRam01a00a6c + 0x1a009bc);
      *(int *)(param_1 + 0xf8) = iVar1;
      uVar7 = func_0x01384be4(*puVar2);
      func_0x024501dc(uVar7,param_1,**(undefined4 **)(iRam01a00a70 + 0x1a009dc),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02bf51c0(iVar1,uVar7,0);
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if ((iVar1 != 0) && (iVar5 = *(int *)(iVar1 + 0x2c), 0 < iVar5)) {
      iVar8 = *(int *)(param_1 + 0xf8);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar10 = (int *)&stack0xfffffff0;
      pcVar6 = (char *)(_UNK_02bf66f0 + 0x2bf6634);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02bf66f4 + 0x2bf6648),iVar5,0);
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x5c08,0);
      if (iVar1 == 0) {
        if (0 < iVar5) {
          puVar2 = *(undefined4 **)(_UNK_02bf66f8 + 0x2bf66ac);
          *(int *)(iVar8 + 0x20) = iVar5;
          iVar1 = func_0x01384be4(*puVar2);
          func_0x02b635c4(iVar1,0);
          iVar5 = *(int *)(iVar8 + 0x20);
          *(int *)(iVar8 + 0x24) = iVar1;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          pcVar6 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
          if (*pcVar6 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84),iVar5,0,0);
            func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
            func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
            func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
            *pcVar6 = '\x01';
          }
          iVar8 = func_0x0229f06c(0x305,0);
          if (iVar8 == 0) {
            iVar3 = 0;
            iVar8 = func_0x01822f2c(iVar5,0);
            *(int *)(iVar1 + 8) = iVar8;
            if (iVar8 == 0) {
              if (0 < iVar5) {
                uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),
                                        &stack0xffffffe4);
                iVar3 = 0;
                uVar7 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                                        **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar7,0);
                if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x028c2944(uVar7,0);
              }
            }
            else {
              uVar7 = func_0x017d2c28(*(undefined4 *)(iVar8 + 0x1c),0);
              iVar3 = 1;
              *(undefined4 *)(iVar1 + 0xc) = uVar7;
            }
          }
          else {
            iVar8 = func_0x0229f13c(0x305,0);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x021846e8(iVar8,iVar1,iVar5,0);
          }
          return iVar3;
        }
        return 0;
      }
      iVar1 = func_0x0229f13c(0x5c08,0);
      uVar11 = CONCAT44(iVar5,iVar8);
      if (iVar1 == 0) {
        func_0x01384bf0();
        uVar11 = CONCAT44(iVar5,iVar8);
      }
SUB_021773c4:
      uVar7 = (undefined4)((ulonglong)uVar11 >> 0x20);
      piVar10[3] = unaff_lr;
      piVar10[2] = unaff_r10;
      piVar10[1] = unaff_r9;
      *piVar10 = unaff_r8;
      piVar10[-1] = unaff_r7;
      piVar10[-2] = unaff_r6;
      piVar10[-3] = unaff_r5;
      piVar10[-4] = unaff_r4;
      piVar10[-10] = 0;
      piVar10[-9] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      piVar10[-8] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      piVar10[-7] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      piVar10[-6] = 0;
      func_0x0245494c(piVar10 + -0x10,0,uVar7,0);
      iVar5 = *(int *)(iVar1 + 0x10);
      piVar10[-10] = piVar10[-0x10];
      piVar10[-9] = piVar10[-0xf];
      piVar10[-8] = piVar10[-0xe];
      piVar10[-7] = piVar10[-0xd];
      piVar10[-6] = piVar10[-0xc];
      if (iVar5 != 0) {
        func_0x01485278(piVar10 + -10,iVar5,0);
      }
      func_0x01485278(piVar10 + -10,(int)uVar11,0);
      func_0x01485238(piVar10 + -10,uVar7,0);
      iVar5 = *(int *)(iVar1 + 8);
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 3;
      if (iVar1 == 0) {
        uVar4 = 2;
      }
      piVar10[-0x12] = 0;
      piVar10[-0x11] = 0;
      iVar1 = func_0x0245495c(iVar5,uVar7,piVar10 + -10,uVar4);
      return iVar1;
    }
  }
  return iVar1;
}



// ===== FAT.FestBoardActivity$$SetDisplayScore RVA 0x19f0a74 =====

void FUN_01a00a74(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x7d60,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d60,0);
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
  *(undefined4 *)(param_1 + 0x70) = param_2;
  return;
}



// ===== FAT.FestBoardActivity$$SetupFresh RVA 0x19f0ad0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a00ad0(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01a00d38 + 0x1a00ae8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a00d3c + 0x1a00afc));
    func_0x01384978(*(undefined4 *)(_UNK_01a00d40 + 0x1a00b08));
    func_0x01384978(*(undefined4 *)(_UNK_01a00d44 + 0x1a00b14));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  uStack_20 = 0;
  iVar3 = func_0x0229f06c(0x7d61,0);
  uVar2 = _UNK_01a00d30;
  uVar1 = _UNK_01a00d28;
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x58) != 0) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x78) = uVar1;
      *(undefined8 *)(param_1 + 0x80) = uVar2;
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(param_1 + 0x58);
      iVar3 = *(int *)(iVar3 + 0x2c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(iVar5 + 0x20);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x01cf6408(iVar3,uVar6,0);
      *(undefined4 *)(param_1 + 0x60) = uVar6;
      FUN_019ffb38(param_1);
      if (*(int *)(param_1 + 0x5c) != 0) {
        FUN_019fbcb8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x14),1);
        uVar6 = 0;
        if (*(int *)(param_1 + 0x3c) != 0) {
          iVar3 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0);
          uVar6 = 0;
          if (iVar3 != 0) {
            func_0x020da680(&uStack_30,iVar3,0);
            uVar6 = uStack_2c;
            uStack_2c = 0;
            uStack_30 = 0;
            func_0x03507d38(&uStack_30,uVar6,**(undefined4 **)(_UNK_01a00d48 + 0x1a00c50));
            uVar6 = uStack_2c;
          }
        }
        *(undefined4 *)(param_1 + 100) = uVar6;
        if ((*(int *)(param_1 + 0x3c) != 0) &&
           (iVar3 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0), iVar3 != 0)) {
          func_0x020dc7e4(iVar3,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),0);
        }
      }
      FUN_019fc518(param_1);
      FUN_019fc9b8(param_1);
      FUN_01a004c8(param_1);
      FUN_01a00848(param_1,1);
      if (*(int *)(param_1 + 0x5c) != 0) {
        piVar7 = *(int **)(_UNK_01a00d4c + 0x1a00cd0);
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x2c);
        iVar3 = *piVar7;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        func_0x01a00d50(param_1,uVar6,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1c8));
      }
      uStack_20 = *(undefined4 *)(param_1 + 0xdc);
      uStack_28 = *(undefined8 *)(param_1 + 0xd4);
      func_0x02b64cc4(&uStack_28,0,0,0);
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x7d61,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar3,param_1,0);
  }
  return;
}



// ===== FAT.FestBoardActivity$$AddToken RVA 0x19f0d50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a00d50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_01a00e88 + 0x1a00d70);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a00e8c + 0x1a00d84));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5db,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (0x7fffffff - param_2 <= iVar1) {
      param_2 = 0x7fffffff - iVar1;
    }
    *(int *)(param_1 + 0x74) = param_2 + iVar1;
    if (*(int *)(param_1 + 0x10c) != 0) {
      func_0x02befcdc(*(int *)(param_1 + 0x10c),param_2 + iVar1,0);
    }
    piVar4 = *(int **)(_UNK_01a00e90 + 0x1a00e18);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    if (param_3 != *(int *)(*(int *)(iVar1 + 0x5c) + 0x1c0)) {
      iVar2 = func_0x01a05244(param_1);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = *(int *)(param_1 + 0x100);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        func_0x02af96e4(iVar1,*(undefined4 *)(param_1 + 0x74),0);
      }
      func_0x019a4b9c(*(undefined4 *)(param_1 + 0xa8),param_2,*(undefined4 *)(param_1 + 0x74),
                      param_3,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5db,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.FestBoardActivity$$ResEnumerate RVA 0x19f0e94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a00e94(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01a00f44 + 0x1a00ea8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a00f48 + 0x1a00ebc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d62,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d62,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021c7568 + 0x21c7488);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a00f4c + 0x1a00f14));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
  uVar5 = func_0x0245057c(0);
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$.ctor RVA 0x19f0f50 =====

void FUN_01a00f50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x0245057c(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.FestBoardActivity$$WhenActive RVA 0x19f0f78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a00f78(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  
  iVar1 = func_0x0229f06c(0x7d73,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d73,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  func_0x01a00fe8(param_1);
  if (param_2 != 0) {
    return;
  }
  iVar1 = func_0x0229f06c(0x7d75,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d75,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar4);
    return;
  }
  iVar1 = FUN_01a002f8(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01a04918(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_02b49454 + 0x2b49370);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),param_1,0,0);
    *pcVar7 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x19d,0);
  if (iVar5 == 0) {
    func_0x02b41428(iVar1,param_1,0);
    func_0x02b43478(iVar1,param_1);
    puVar3 = *(undefined4 **)(_UNK_02b4945c + 0x2b49408);
    *(undefined1 *)(iVar1 + 0x34) = 1;
    iVar5 = func_0x03668dfc(*puVar3);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x01c36988(iVar5,0);
    if (iVar5 != 0) {
      pcVar7 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
        func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
        *pcVar7 = '\x01';
      }
      iVar5 = func_0x0229f06c(0x1a9,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar1 + 0xc);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x03cd675c(iVar5,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
        if (0 < iVar5) {
          func_0x02b4558c(iVar1);
        }
        func_0x02b45d7c(iVar1,1);
        func_0x02b46034(iVar1);
        func_0x02b46318(iVar1);
        func_0x02b4639c(iVar1,0);
        func_0x02b467e4(iVar1,0);
        if (*(char *)(iVar1 + 0x34) != '\0') {
          piVar2 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
          *(undefined1 *)(iVar1 + 0x34) = 0;
          if (*(int *)(*piVar2 + 0x74) == 0) {
            func_0x01384ab4();
          }
          param_1 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0229f06c(0x3f,0);
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 8);
            if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(iVar1 + 0xc))
                        (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
              return;
            }
            return;
          }
          iVar1 = func_0x0229f13c(0x3f,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02173f80;
        }
      }
      else {
        iVar5 = func_0x0229f13c(0x1a9,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x0217f950(iVar5,iVar1,0,1);
      }
      return;
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x19d,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02175630(iVar5,iVar1,param_1,0);
  }
  return;
}



// ===== FAT.FestBoardActivity$$AddEventListener RVA 0x19f0fe8 =====

/* WARNING: Possible PIC construction at 0x028be4b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028be4bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a00fe8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
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
  
  pcVar5 = (char *)(_UNK_01a01100 + 0x1a00ffc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a01104 + 0x1a01010));
    func_0x01384978(*(undefined4 *)(_UNK_01a01108 + 0x1a0101c));
    func_0x01384978(*(undefined4 *)(_UNK_01a0110c + 0x1a01028));
    func_0x01384978(*(undefined4 *)(_UNK_01a01110 + 0x1a01034));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7d74,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7d74,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar4);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01a01114 + 0x1a0108c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01a01118 + 0x1a010a8));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01a0111c + 0x1a010bc));
  func_0x024500b4(uVar8,param_1,**(undefined4 **)(_UNK_01a01120 + 0x1a010d8),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_028be4f4 + 0x28be418);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028be4f8 + 0x28be42c),uVar8,0);
    *pcVar5 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x10cb,0);
  if (iVar6 == 0) {
    piVar3 = (int *)func_0x0487907c(*(undefined4 *)(iVar2 + 8),uVar8,0);
    if (piVar3 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 8) = 0;
      return;
    }
    iVar6 = **(int **)(_UNK_028be4fc + 0x28be4a8);
    if (*piVar3 == iVar6) {
      *(int **)(iVar2 + 8) = piVar3;
      if (*piVar3 == iVar6) {
        return;
      }
    }
    else {
      unaff_lr = 0x28be4bc;
      unaff_r4 = iVar2;
      register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
    }
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r4;
    func_0x0142996c((undefined1 *)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar3 + 0x20),
                    iVar6);
    uVar1 = *(uint *)((int)register0x00000054 + -0xc);
    if ((*(byte *)((int)register0x00000054 + -0x14) & 1) == 0) {
      uVar1 = (uint)((int)register0x00000054 + -0x14) | 1;
    }
    iVar2 = func_0x01419d2c(uVar1);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    func_0x01418ff0(iVar2,0);
    if ((*(byte *)((int)register0x00000054 + -0x14) & 1) != 0) {
      func_0x0148d9d4(*(undefined4 *)((int)register0x00000054 + -0xc));
    }
    return;
  }
  iVar6 = func_0x0229f13c(0x10cb,0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
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
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485278(&uStack_38,uVar8,0);
  iVar7 = *(int *)(iVar6 + 8);
  uVar8 = *(undefined4 *)(iVar6 + 0xc);
  iVar2 = *(int *)(iVar6 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.FestBoardActivity$$CheckEarlyFinish RVA 0x19f1124 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a01124(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  
  iVar1 = func_0x0229f06c(0x7d75,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d75,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = FUN_01a002f8(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01a04918(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_02b49454 + 0x2b49370);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),param_1,0,0);
    *pcVar7 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x19d,0);
  if (iVar5 == 0) {
    func_0x02b41428(iVar1,param_1,0);
    func_0x02b43478(iVar1,param_1);
    puVar3 = *(undefined4 **)(_UNK_02b4945c + 0x2b49408);
    *(undefined1 *)(iVar1 + 0x34) = 1;
    iVar5 = func_0x03668dfc(*puVar3);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x01c36988(iVar5,0);
    if (iVar5 != 0) {
      pcVar7 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
        func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
        *pcVar7 = '\x01';
      }
      iVar5 = func_0x0229f06c(0x1a9,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar1 + 0xc);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x03cd675c(iVar5,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
        if (0 < iVar5) {
          func_0x02b4558c(iVar1);
        }
        func_0x02b45d7c(iVar1,1);
        func_0x02b46034(iVar1);
        func_0x02b46318(iVar1);
        func_0x02b4639c(iVar1,0);
        func_0x02b467e4(iVar1,0);
        if (*(char *)(iVar1 + 0x34) != '\0') {
          piVar2 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
          *(undefined1 *)(iVar1 + 0x34) = 0;
          if (*(int *)(*piVar2 + 0x74) == 0) {
            func_0x01384ab4();
          }
          param_1 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0229f06c(0x3f,0);
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 8);
            if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(iVar1 + 0xc))
                        (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
              return;
            }
            return;
          }
          iVar1 = func_0x0229f13c(0x3f,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02173f80;
        }
      }
      else {
        iVar5 = func_0x0229f13c(0x1a9,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x0217f950(iVar5,iVar1,0,1);
      }
      return;
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x19d,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02175630(iVar5,iVar1,param_1,0);
  }
  return;
}



// ===== FAT.FestBoardActivity$$WhenReset RVA 0x19f11d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a011d4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01a012f0 + 0x1a011e8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a012f4 + 0x1a011fc));
    func_0x01384978(*(undefined4 *)(_UNK_01a012f8 + 0x1a01208));
    func_0x01384978(*(undefined4 *)(_UNK_01a012fc + 0x1a01214));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d77,0);
  if (iVar1 == 0) {
    func_0x01a01304(param_1);
    func_0x01a01440(param_1);
    if (*(int *)(param_1 + 0xa0) != 0) {
      func_0x0245058c(*(int *)(param_1 + 0xa0),**(undefined4 **)(_UNK_01a01300 + 0x1a01288));
    }
    iVar1 = *(int *)(param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0x98) = 0;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    }
    iVar1 = *(int *)(param_1 + 0x94);
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (0 < iVar4) {
        func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
      }
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    return;
  }
  iVar1 = func_0x0229f13c(0x7d77,0);
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



// ===== FAT.FestBoardActivity$$RemoveEventListener RVA 0x19f1304 =====

/* WARNING: Possible PIC construction at 0x028beb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028beb8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a01304(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_r4;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
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
  
  pcVar6 = (char *)(_UNK_01a0141c + 0x1a01318);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a01420 + 0x1a0132c));
    func_0x01384978(*(undefined4 *)(_UNK_01a01424 + 0x1a01338));
    func_0x01384978(*(undefined4 *)(_UNK_01a01428 + 0x1a01344));
    func_0x01384978(*(undefined4 *)(_UNK_01a0142c + 0x1a01350));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7d78,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7d78,0);
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01a01430 + 0x1a013a8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01a01434 + 0x1a013c4));
  iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01a01438 + 0x1a013d8));
  func_0x024500b4(iVar7,param_1,**(undefined4 **)(_UNK_01a0143c + 0x1a013f4),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_028bebc4 + 0x28beae0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028bebc8 + 0x28beaf4),iVar7,0);
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x10cd,0);
  if (iVar3 == 0) {
    if (iVar7 != 0) {
      piVar4 = (int *)func_0x0487929c(*(undefined4 *)(iVar2 + 8),iVar7,0);
      if (piVar4 != (int *)0x0) {
        iVar7 = **(int **)(_UNK_028bebcc + 0x28beb78);
        if (*piVar4 == iVar7) {
          *(int **)(iVar2 + 8) = piVar4;
          if (*piVar4 == iVar7) {
            return;
          }
        }
        else {
          unaff_lr = 0x28beb8c;
          unaff_r4 = iVar2;
          register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
        }
        *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
        *(int *)((int)register0x00000054 + -8) = unaff_r4;
        func_0x0142996c((undefined1 *)((int)register0x00000054 + -0x14),
                        *(undefined4 *)(*piVar4 + 0x20),iVar7);
        uVar1 = *(uint *)((int)register0x00000054 + -0xc);
        if ((*(byte *)((int)register0x00000054 + -0x14) & 1) == 0) {
          uVar1 = (uint)((int)register0x00000054 + -0x14) | 1;
        }
        iVar2 = func_0x01419d2c(uVar1);
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0;
        func_0x01418ff0(iVar2,0);
        if ((*(byte *)((int)register0x00000054 + -0x14) & 1) != 0) {
          func_0x0148d9d4(*(undefined4 *)((int)register0x00000054 + -0xc));
        }
        return;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    return;
  }
  iVar3 = func_0x0229f13c(0x10cd,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,iVar7,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485278(&uStack_38,iVar7,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
  return;
}



// ===== FAT.FestBoardActivity$$ClearTokenOutput RVA 0x19f1440 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a01440(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01a01554 + 0x1a01454);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a01558 + 0x1a01468));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d79,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xfc) != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar5 = *(undefined4 *)(param_1 + 0xfc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbba60(iVar1,uVar5,0);
    }
    if (*(int *)(param_1 + 0x100) != 0) {
      func_0x02af7520(*(int *)(param_1 + 0x100),0);
    }
    iVar1 = *(int *)(param_1 + 0x104);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    }
    *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
    if (*(int *)(param_1 + 0x10c) != 0) {
      func_0x02befc68(*(int *)(param_1 + 0x10c),0);
    }
    *(undefined4 *)(param_1 + 0x10c) = 0;
    return;
  }
  iVar1 = func_0x0229f13c(0x7d79,0);
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



// ===== FAT.FestBoardActivity$$WhenEnd RVA 0x19f155c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a0155c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  pcVar2 = (char *)(_UNK_01a01674 + 0x1a01574);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a01678 + 0x1a01588));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d7a,0);
  if (iVar1 == 0) {
    FUN_01a01304(param_1);
    func_0x01a01680(param_1);
    FUN_01a01440(param_1);
    if (*(int *)(param_1 + 0xf8) != 0) {
      func_0x02bf56a4(*(int *)(param_1 + 0xf8),0);
      iVar1 = *(int *)(param_1 + 0xf8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02bf6458(iVar1,0);
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    FUN_019fc050(param_1);
    if (*(int *)(param_1 + 0xa0) != 0) {
      func_0x0245058c(*(int *)(param_1 + 0xa0),**(undefined4 **)(_UNK_01a0167c + 0x1a01644));
    }
    uStack_20 = *(undefined8 *)(param_1 + 0xe0);
    uStack_18 = *(undefined4 *)(param_1 + 0xe8);
    func_0x02b64cc4(&uStack_20,0,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7d7a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.FestBoardActivity$$FillExpireRewardList RVA 0x19f1680 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a01680(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  int iStack_50;
  int iStack_48;
  int aiStack_44 [4];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01a01b04 + 0x1a01698);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a01b08 + 0x1a016ac));
    func_0x01384978(*(undefined4 *)(_UNK_01a01b0c + 0x1a016b8));
    func_0x01384978(*(undefined4 *)(_UNK_01a01b10 + 0x1a016c4));
    func_0x01384978(*(undefined4 *)(_UNK_01a01b14 + 0x1a016d0));
    func_0x01384978(*(undefined4 *)(_UNK_01a01b18 + 0x1a016dc));
    func_0x01384978(*(undefined4 *)(_UNK_01a01b1c + 0x1a016e8));
    func_0x01384978(*(undefined4 *)(_UNK_01a01b20 + 0x1a016f4));
    func_0x01384978(*(undefined4 *)(_UNK_01a01b24 + 0x1a01700));
    func_0x01384978(*(undefined4 *)(_UNK_01a01b28 + 0x1a0170c));
    func_0x01384978(*(undefined4 *)(_UNK_01a01b2c + 0x1a01718));
    *pcVar5 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = 0;
  aiStack_44[2] = 0;
  aiStack_44[1] = 0;
  aiStack_44[0] = 0;
  iStack_48 = 0;
  uStack_58 = 0;
  iStack_50 = 0;
  iVar1 = func_0x0229f06c(0x7d7b,0);
  if (iVar1 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = param_1[0x17];
    }
    if (iVar2 != 0 && iVar1 != 0) {
      piVar7 = *(int **)(_UNK_01a01b30 + 0x1a017c8);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x028c8d78(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_30,iVar1,&iStack_34,**(undefined4 **)(_UNK_01a01b34 + 0x1a01804));
      func_0x01a01b58(param_1,iStack_34);
      func_0x01a01e24(param_1,iStack_34);
      if (param_1[0x3e] != 0) {
        func_0x02bf7198(param_1[0x3e],iStack_34,0);
      }
      iVar1 = iStack_34;
      uVar8 = **(undefined4 **)(**(int **)(_UNK_01a01b38 + 0x1a01848) + 0x5c);
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = 0;
        iVar1 = func_0x028c8d78(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0302a45c(aiStack_44 + 1,iVar1,aiStack_44,**(undefined4 **)(_UNK_01a01b3c + 0x1a018b4)
                       );
        puVar10 = *(undefined4 **)(_UNK_01a01b40 + 0x1a018cc);
        while( true ) {
          iVar1 = iStack_34;
          if (iStack_34 == 0) {
            func_0x01384bf0();
          }
          iVar3 = iStack_34;
          if (*(int *)(iVar1 + 0xc) <= iVar2) break;
          if (iStack_34 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0328eea8(iVar3,iVar2,*puVar10);
          iVar1 = aiStack_44[0];
          if ((iVar3 != 0) && (iVar6 = *(int *)(iVar3 + 8), 0 < iVar6)) {
            if (aiStack_44[0] == 0) {
              func_0x01384bf0();
            }
            iVar4 = func_0x02450590(iVar1,iVar6,&iStack_48,
                                    **(undefined4 **)(_UNK_01a01b44 + 0x1a01938));
            iVar6 = aiStack_44[0];
            iVar1 = iStack_48;
            uVar8 = *(undefined4 *)(iVar3 + 8);
            if (iVar4 == 0) {
              uVar9 = *(undefined4 *)(iVar3 + 0x10);
              if (aiStack_44[0] == 0) {
                func_0x01384bf0();
              }
              func_0x0245025c(iVar6,uVar8,uVar9,**(undefined4 **)(_UNK_01a01b4c + 0x1a019a8));
            }
            else {
              iVar3 = *(int *)(iVar3 + 0x10);
              if (aiStack_44[0] == 0) {
                func_0x01384bf0();
              }
              func_0x0245025c(iVar6,uVar8,iVar3 + iVar1,**(undefined4 **)(_UNK_01a01b48 + 0x1a0197c)
                             );
            }
          }
          iVar2 = iVar2 + 1;
        }
        uVar8 = func_0x01a01e98(param_1,aiStack_44[0]);
        uStack_58 = *(undefined8 *)(param_1 + 0x3b);
        iStack_50 = param_1[0x3d];
        uStack_5c = uStack_2c;
        uStack_60 = uStack_30;
        uVar9 = func_0x01384abc(**(undefined4 **)(_UNK_01a01b50 + 0x1a019ec),&uStack_60);
        func_0x02b64cc4(&uStack_58,0,uVar9,0);
        func_0x028c98a0(aiStack_44 + 1,0);
      }
      func_0x02313f84(param_1,uVar8,0);
      iVar1 = iStack_34;
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) < 1) {
        func_0x03633b24(&uStack_30,**(undefined4 **)(_UNK_01a01b54 + 0x1a01a5c));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d7b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.FestBoardActivity$$FillExpireTokenReward RVA 0x19f1b58 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a01b58(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int aiStack_24 [3];
  
  pcVar2 = (char *)(_UNK_01a01df8 + 0x1a01b74);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a01dfc + 0x1a01b88));
    func_0x01384978(*(undefined4 *)(_UNK_01a01e00 + 0x1a01b94));
    func_0x01384978(*(undefined4 *)(_UNK_01a01e04 + 0x1a01ba0));
    func_0x01384978(*(undefined4 *)(_UNK_01a01e08 + 0x1a01bac));
    func_0x01384978(*(undefined4 *)(_UNK_01a01e0c + 0x1a01bb8));
    *pcVar2 = '\x01';
  }
  aiStack_24[2] = 0;
  aiStack_24[1] = 0;
  aiStack_24[0] = 0;
  iVar1 = func_0x0229f06c(0x7d7c,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1 + 0xa8);
      if (0 < iVar1) {
        iVar1 = *(int *)(param_1 + 0x74);
      }
      if (0 < iVar1) {
        iVar1 = *(int *)(param_1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0x24) != 0) {
          iVar1 = *(int *)(param_1 + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x24);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x03465bcc(iVar1,**(undefined4 **)(_UNK_01a01e10 + 0x1a01c84));
          if (0 < iVar1) {
            if (*(int *)(**(int **)(_UNK_01a01e14 + 0x1a01ca0) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = func_0x028c8d78(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x0302a45c(aiStack_24 + 1,iVar1,aiStack_24,
                            **(undefined4 **)(_UNK_01a01e18 + 0x1a01cdc));
            iVar1 = aiStack_24[0];
            uVar5 = *(undefined4 *)(param_1 + 0x74);
            uVar4 = *(undefined4 *)(param_1 + 0xa8);
            if (aiStack_24[0] == 0) {
              func_0x01384bf0();
            }
            func_0x0245025c(iVar1,uVar4,uVar5,**(undefined4 **)(_UNK_01a01e1c + 0x1a01d08));
            iVar1 = *(int *)(param_1 + 0x5c);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            piVar3 = *(int **)(_UNK_01a01e20 + 0x1a01d34);
            uVar4 = *(undefined4 *)(iVar1 + 0x24);
            iVar1 = *piVar3;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar3;
            }
            func_0x02b4aed4(uVar4,param_2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1b0),
                            aiStack_24[0],0);
            func_0x028c98a0(aiStack_24 + 1,0);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d7c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.FestBoardActivity$$FillExpireBoardReward RVA 0x19f1e24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a01e24(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uVar12 = func_0x0229f06c(0x7d7d,0);
  iVar1 = (int)((ulonglong)uVar12 >> 0x20);
  if ((int)uVar12 != 0) {
    iVar1 = func_0x0229f13c(0x7d7d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
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
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar6 = func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3);
    return uVar6;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  if (param_2 != 0 && iVar1 != 0) {
    pcVar5 = (char *)(_UNK_02c03dbc + 0x2c038b8);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02c03dc0 + 0x2c038cc),iVar1,0);
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
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar4 = func_0x0229f06c(0x5c20,0);
    if (iVar4 == 0) {
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02c03e04 + 0x2c03a08));
      func_0x02c05f70(iVar4,0);
      if (param_2 == 0 || iVar1 == 0) {
        uVar6 = **(undefined4 **)(_UNK_02c03e08 + 0x2c03a30);
      }
      else {
        piVar7 = *(int **)(_UNK_02c03e0c + 0x2c03a40);
        iVar2 = *piVar7;
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        iVar2 = **(int **)(iVar2 + 0x5c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        puVar10 = *(undefined4 **)(_UNK_02c03e10 + 0x2c03a78);
        uVar6 = func_0x0359c52c(iVar2,*puVar10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar2 = **(int **)(*piVar7 + 0x5c);
        *(undefined4 *)(iVar4 + 8) = uVar6;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar6 = func_0x0359c52c(iVar2,*puVar10);
        puVar10 = *(undefined4 **)(_UNK_02c03e14 + 0x2c03ac0);
        *(undefined4 *)(iVar4 + 0xc) = uVar6;
        uVar6 = func_0x01384be4(*puVar10);
        func_0x03ccb96c(uVar6,iVar4,**(undefined4 **)(_UNK_02c03e18 + 0x2c03ae4),0);
        func_0x021475dc(iVar1,uVar6,5,0);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar4 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x40);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x03d5a200(&uStack_58,iVar2,**(undefined4 **)(_UNK_02c03e1c + 0x2c03b44));
        uStack_30 = (ulonglong)uStack_48;
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        while (iVar2 = func_0x03f9975c(&uStack_40,**(undefined4 **)(_UNK_02c03e34 + 0x2c03b74)),
              uVar6 = uStack_34, iVar2 != 0) {
          uVar3 = (undefined4)uStack_30;
          iVar2 = **(int **)(_UNK_02c03e20 + 0x2c03b90);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = **(int **)(_UNK_02c03e24 + 0x2c03bb0);
          }
          uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x24);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar6 = func_0x01cdcbac(iVar1,uVar6,uVar3,uVar8,0,0,0,0x35,
                                  **(undefined4 **)(_UNK_02c03e28 + 0x2c03bd0),
                                  **(undefined4 **)(_UNK_02c03e2c + 0x2c03bdc),0);
          iVar2 = *(int *)(param_2 + 8);
          uVar9 = *(uint *)(param_2 + 0xc);
          piVar7 = *(int **)(_UNK_02c03e30 + 0x2c03c30);
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          iVar11 = *piVar7;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (uVar9 < *(uint *)(iVar2 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar9 + 1;
            *(undefined4 *)(iVar2 + uVar9 * 4 + 0x10) = uVar6;
          }
          else {
            func_0x0328f170(param_2,uVar6,
                            *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
          }
        }
        func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_02c03e38 + 0x2c03c84));
        piVar7 = *(int **)(_UNK_02c03e40 + 0x2c03ca0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar6 = func_0x02c03e4c(*(undefined4 *)(iVar4 + 8));
        iVar1 = *piVar7;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar7;
        }
        uVar3 = *(undefined4 *)(iVar4 + 8);
        iVar1 = **(int **)(iVar1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        puVar10 = *(undefined4 **)(_UNK_02c03e44 + 0x2c03cf4);
        func_0x0359c65c(iVar1,uVar3,*puVar10);
        uVar3 = *(undefined4 *)(iVar4 + 0xc);
        iVar1 = **(int **)(*piVar7 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0359c65c(iVar1,uVar3,*puVar10);
      }
    }
    else {
      iVar4 = func_0x0229f13c(0x5c20,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x02173d58(iVar4,param_2,iVar1,0);
    }
    return uVar6;
  }
  return 0;
}



// ===== FAT.FestBoardActivity$$ConvertRewardStatToString RVA 0x19f1e98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_01a01e98(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar5 = (char *)(_UNK_01a0244c + 0x1a01eb4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a02450 + 0x1a01ec8));
    func_0x01384978(*(undefined4 *)(_UNK_01a02454 + 0x1a01ed4));
    func_0x01384978(*(undefined4 *)(_UNK_01a02458 + 0x1a01ee0));
    func_0x01384978(*(undefined4 *)(_UNK_01a0245c + 0x1a01eec));
    func_0x01384978(*(undefined4 *)(_UNK_01a02460 + 0x1a01ef8));
    func_0x01384978(*(undefined4 *)(_UNK_01a02464 + 0x1a01f04));
    func_0x01384978(*(undefined4 *)(_UNK_01a02468 + 0x1a01f10));
    func_0x01384978(*(undefined4 *)(_UNK_01a0246c + 0x1a01f1c));
    func_0x01384978(*(undefined4 *)(_UNK_01a02470 + 0x1a01f28));
    func_0x01384978(*(undefined4 *)(_UNK_01a02474 + 0x1a01f34));
    func_0x01384978(*(undefined4 *)(_UNK_01a02478 + 0x1a01f40));
    func_0x01384978(*(undefined4 *)(_UNK_01a0247c + 0x1a01f4c));
    *pcVar5 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_4c = 0;
  iVar1 = func_0x0229f06c(0x7d7e,0);
  if (iVar1 == 0) {
    if ((param_2 == 0) ||
       (iVar1 = func_0x02450594(param_2,**(undefined4 **)(_UNK_01a02480 + 0x1a01fdc)), iVar1 == 0))
    {
      uVar2 = **(undefined4 **)(**(int **)(_UNK_01a02484 + 0x1a02374) + 0x5c);
    }
    else {
      if (*(int *)(**(int **)(_UNK_01a02488 + 0x1a01ff8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x024500c4(&uStack_68,0);
      uStack_30 = CONCAT44(uStack_64,uStack_68);
      uStack_28 = uStack_60;
      func_0x02450598(&uStack_68,param_2,**(undefined4 **)(_UNK_01a0248c + 0x1a0202c));
      uStack_48 = uStack_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      uStack_38 = uStack_58;
      piVar7 = *(int **)(_UNK_01a02490 + 0x1a02070);
      pcVar4 = (char *)(_UNK_01a02494 + 0x1a0207c);
      pcVar5 = (char *)(_UNK_01a02498 + 0x1a02080);
      while (iVar1 = func_0x01475638(&uStack_48,**(undefined4 **)(_UNK_01a024b4 + 0x1a02088)),
            iVar1 != 0) {
        uVar8 = uStack_3c;
        uVar2 = (undefined4)uStack_38;
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        if (0 < uStack_30._4_4_) {
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = **(int **)(_UNK_01a0249c + 0x1a020e8);
          if (*pcVar4 == '\0') {
            func_0x01384978(piVar7);
            *pcVar4 = '\x01';
          }
          if (*pcVar5 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01a024a0 + 0x1a0211c));
            *pcVar5 = '\x01';
          }
          if (iVar1 == 0) {
            uVar6 = 0;
            uVar3 = 0;
          }
          else {
            uVar3 = func_0x0148d698(iVar1,0);
            uVar6 = *(undefined4 *)(iVar1 + 8);
          }
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x019a7f14(&uStack_30,uVar3,uVar6,0);
        }
        uStack_4c = uVar8;
        iVar1 = func_0x014867c8(&uStack_4c,0);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        if (*pcVar4 == '\0') {
          func_0x01384978(piVar7);
          *pcVar4 = '\x01';
        }
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01a024a4 + 0x1a021d0));
          *pcVar5 = '\x01';
        }
        if (iVar1 == 0) {
          uVar3 = 0;
          uVar8 = 0;
        }
        else {
          uVar8 = func_0x0148d698(iVar1,0);
          uVar3 = *(undefined4 *)(iVar1 + 8);
        }
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x019a7f14(&uStack_30,uVar8,uVar3,0);
        iVar1 = **(int **)(_UNK_01a024a8 + 0x1a02234);
        if (*pcVar4 == '\0') {
          func_0x01384978(piVar7);
          *pcVar4 = '\x01';
        }
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01a024ac + 0x1a02268));
          *pcVar5 = '\x01';
        }
        if (iVar1 == 0) {
          uVar3 = 0;
          uVar8 = 0;
        }
        else {
          uVar8 = func_0x0148d698(iVar1,0);
          uVar3 = *(undefined4 *)(iVar1 + 8);
        }
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x019a7f14(&uStack_30,uVar8,uVar3,0);
        uStack_4c = uVar2;
        iVar1 = func_0x014867c8(&uStack_4c,0);
        if (*pcVar4 == '\0') {
          func_0x01384978(piVar7);
          *pcVar4 = '\x01';
        }
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01a024b0 + 0x1a0230c));
          *pcVar5 = '\x01';
        }
        if (iVar1 == 0) {
          uVar8 = 0;
          uVar2 = 0;
        }
        else {
          uVar2 = func_0x0148d698(iVar1,0);
          uVar8 = *(undefined4 *)(iVar1 + 8);
        }
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x019a7f14(&uStack_30,uVar2,uVar8,0);
      }
      func_0x0245059c(&uStack_48,**(undefined4 **)(_UNK_01a024b8 + 0x1a0238c));
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar2 = func_0x0148d6d8(&uStack_30,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d7e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02173d58(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.FestBoardActivity$$Open RVA 0x19f24c4 =====

void FUN_01a024c4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d7f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d7f,0);
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
  func_0x02b57d14(param_1,*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200),
                  *(undefined4 *)(param_1 + 0xac));
  return;
}



// ===== FAT.FestBoardActivity$$BoardEntryAsset RVA 0x19f2540 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a02540(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_01a0269c + 0x1a02558);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a026a0 + 0x1a0256c));
    func_0x01384978(*(undefined4 *)(_UNK_01a026a4 + 0x1a02578));
    func_0x01384978(*(undefined4 *)(_UNK_01a026a8 + 0x1a02584));
    *pcVar4 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x7d80,0);
  if (iVar1 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 8);
    }
    if ((iVar3 != 0 && iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
      iVar1 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03470a60(iVar1,**(undefined4 **)(_UNK_01a026b4 + 0x1a02684),&uStack_14,
                              **(undefined4 **)(_UNK_01a026b0 + 0x1a02678));
      if (iVar1 != 0) {
        return uStack_14;
      }
    }
    uVar2 = **(undefined4 **)(**(int **)(_UNK_01a026ac + 0x1a02608) + 0x5c);
  }
  else {
    iVar1 = func_0x0229f13c(0x7d80,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02173e78(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.FestBoardActivity$$EnsureSpinSequenceReady RVA 0x19f26b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a026b8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01a027dc + 0x1a026d0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a027e0 + 0x1a026e4));
    func_0x01384978(*(undefined4 *)(_UNK_01a027e4 + 0x1a026f0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d27,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d27,0);
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
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = func_0x01a031d8(param_1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xa4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x84);
    if (iVar1 < 1) {
      iVar1 = func_0x01a03128(param_1);
      *(int *)(param_1 + 0x84) = iVar1;
    }
    uVar5 = 1;
    if (((*(int *)(param_1 + 0xa4) != 0) && (*(int *)(*(int *)(param_1 + 0xa4) + 0xc) == 0)) &&
       (iVar1 = func_0x01a032b4(param_1,iVar1,*(undefined4 *)(param_1 + 0x7c)), iVar1 == 0)) {
      func_0x01a03904(param_1);
      uVar5 = 0;
    }
  }
  return uVar5;
}



// ===== FAT.FestBoardActivity$$EnterNextSpinRound RVA 0x19f27e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a027e8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01a028fc + 0x1a02800);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a02900 + 0x1a02814));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d39,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01a031d8(param_1);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      uVar5 = func_0x01a03128(param_1);
      iVar1 = *(int *)(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0x84) = uVar5;
      *(int *)(param_1 + 0x7c) = iVar1 + 1;
      FUN_01a00374(param_1);
      if (*(int *)(param_1 + 0x7c) < iVar1) {
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
      iVar1 = func_0x01a032b4(param_1,*(undefined4 *)(param_1 + 0x84),*(int *)(param_1 + 0x7c),
                              *(undefined4 *)(param_1 + 0xa4));
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0xa4);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar1 + 0x10);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(int *)(iVar1 + 0x10) = iVar4 + 1;
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x7d39,0);
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



// ===== FAT.FestBoardActivity$$TakeSpinResult RVA 0x19f2904 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a02904(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01a02e30 + 0x1a0291c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a02e34 + 0x1a02930));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e38 + 0x1a0293c));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e3c + 0x1a02948));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e40 + 0x1a02954));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e44 + 0x1a02960));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e48 + 0x1a0296c));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e4c + 0x1a02978));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e50 + 0x1a02984));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e54 + 0x1a02990));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e58 + 0x1a0299c));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e5c + 0x1a029a8));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e60 + 0x1a029b4));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e64 + 0x1a029c0));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e68 + 0x1a029cc));
    func_0x01384978(*(undefined4 *)(_UNK_01a02e6c + 0x1a029d8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d81,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d81,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_022561dc + 0x22560fc);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022561e0 + 0x2256110),param_1,0);
      *pcVar6 = '\x01';
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
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar5,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022561e4 + 0x22561cc));
    return iVar1;
  }
  if (*(int *)(param_1 + 0x90) < 1) {
    return 0;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    return 0;
  }
  iVar1 = func_0x01835d34(*(int *)(param_1 + 0x90),0);
  if (iVar1 == 0) {
    uStack_28 = *(undefined4 *)(param_1 + 0x90);
    uVar10 = func_0x01384abc(**(undefined4 **)(_UNK_01a02e70 + 0x1a02d14),&uStack_28);
    puVar9 = *(undefined4 **)(_UNK_01a02e74 + 0x1a02d30);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x5c);
    uVar10 = *(undefined4 *)(iVar1 + 0x14);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01868d38(*(undefined4 *)(iVar8 + 100),0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0364c54c(iVar1,uVar10,**(undefined4 **)(_UNK_01a02e88 + 0x1a02a9c));
      if (-1 < iVar1) {
        iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01a02e98 + 0x1a02abc));
        func_0x02012bb8(iVar8,0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        *(undefined1 *)(iVar8 + 8) = 1;
        *(int *)(iVar8 + 0xc) = iVar1;
        iVar1 = func_0x018691f4(uVar10,0);
        if (iVar1 != 0) {
          uVar10 = *(undefined4 *)(iVar1 + 0x14);
          if (*(int *)(**(int **)(_UNK_01a02e9c + 0x1a02b04) + 0x74) == 0) {
            func_0x01384ab4(**(int **)(_UNK_01a02e9c + 0x1a02b04));
          }
          iVar1 = func_0x02565c8c(uVar10,0);
          if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
            iVar11 = 0;
            puVar9 = *(undefined4 **)(_UNK_01a02ea0 + 0x1a02b50);
            piVar12 = *(int **)(_UNK_01a02ea4 + 0x1a02b58);
            do {
              iVar2 = func_0x0328eea8(iVar1,iVar11,*puVar9);
              if (iVar2 != 0) {
                iVar3 = *(int *)(iVar2 + 8);
                if (0 < iVar3) {
                  iVar3 = *(int *)(iVar2 + 0xc);
                }
                if (0 < iVar3) {
                  if (iVar8 == 0) {
                    func_0x01384bf0();
                  }
                  iVar14 = *(int *)(iVar8 + 0x18);
                  iVar3 = func_0x01c24918(0);
                  if (iVar3 == 0) {
                    func_0x01384bf0();
                  }
                  iVar4 = *piVar12;
                  uVar10 = *(undefined4 *)(iVar2 + 8);
                  uVar5 = *(undefined4 *)(iVar2 + 0xc);
                  iVar2 = *(int *)(iVar4 + 0x74);
                  iVar3 = *(int *)(iVar3 + 0x40);
                  if (iVar2 == 0) {
                    func_0x01384ab4(iVar4,0,uVar5);
                    iVar4 = **(int **)(_UNK_01a02ea8 + 0x1a02be8);
                    iVar2 = extraout_r1;
                  }
                  uVar13 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x1bc);
                  if (iVar3 == 0) {
                    uStack_30 = uVar10;
                    func_0x01384bf0(*(int *)(iVar4 + 0x5c),iVar2,uVar5);
                    uVar10 = uStack_30;
                  }
                  uStack_40 = **(undefined4 **)(_UNK_01a02eac + 0x1a02c20);
                  uStack_3c = **(undefined4 **)(_UNK_01a02eb0 + 0x1a02c2c);
                  uStack_44 = 0x228;
                  uStack_38 = 0;
                  uStack_48 = 0;
                  uVar10 = func_0x01cdcbac(iVar3,uVar10,uVar5,uVar13,0,0);
                  if (iVar14 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *(int *)(iVar14 + 8);
                  uVar7 = *(uint *)(iVar14 + 0xc);
                  piVar12 = *(int **)(_UNK_01a02eb4 + 0x1a02c8c);
                  *(int *)(iVar14 + 0x10) = *(int *)(iVar14 + 0x10) + 1;
                  iVar3 = *piVar12;
                  if (iVar2 == 0) {
                    uStack_30 = uVar10;
                    func_0x01384bf0();
                    uVar10 = uStack_30;
                  }
                  if (uVar7 < *(uint *)(iVar2 + 0xc)) {
                    *(uint *)(iVar14 + 0xc) = uVar7 + 1;
                    *(undefined4 *)(iVar2 + uVar7 * 4 + 0x10) = uVar10;
                  }
                  else {
                    func_0x0328f170(iVar14,uVar10,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  puVar9 = *(undefined4 **)(_UNK_01a02eb8 + 0x1a02ce4);
                  piVar12 = *(int **)(_UNK_01a02ebc + 0x1a02cec);
                }
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(iVar1 + 0xc));
          }
        }
        *(undefined4 *)(param_1 + 0x90) = 0;
        return iVar8;
      }
      puVar9 = *(undefined4 **)(_UNK_01a02e8c + 0x1a02dd0);
      uStack_28 = uVar10;
      uVar10 = func_0x01384abc(*puVar9,&uStack_28);
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_2c = *(undefined4 *)(iVar1 + 100);
      uVar5 = func_0x01384abc(*puVar9,&uStack_2c);
      uVar10 = func_0x02450228(**(undefined4 **)(_UNK_01a02e90 + 0x1a02e18),
                               **(undefined4 **)(_UNK_01a02e94 + 0x1a02e24),uVar10,uVar5,0);
      goto LAB_01a02d84;
    }
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = *(undefined4 *)(iVar1 + 100);
    uVar10 = func_0x01384abc(**(undefined4 **)(_UNK_01a02e80 + 0x1a02d50),&uStack_28);
    puVar9 = *(undefined4 **)(_UNK_01a02e84 + 0x1a02d6c);
  }
  uVar10 = func_0x0244f690(*puVar9,**(undefined4 **)(_UNK_01a02e78 + 0x1a02d80),uVar10,0);
LAB_01a02d84:
  if (*(int *)(**(int **)(_UNK_01a02e7c + 0x1a02d94) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar10,0);
  *(undefined4 *)(param_1 + 0x90) = 0;
  return 0;
}



// ===== FAT.FestBoardActivity$$ShowLastSpinPanel RVA 0x19f2ec0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a02ec0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
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
  
  pcVar5 = (char *)(_UNK_01a03014 + 0x1a02ed4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a03018 + 0x1a02ee8));
    func_0x01384978(*(undefined4 *)(_UNK_01a0301c + 0x1a02ef4));
    func_0x01384978(*(undefined4 *)(_UNK_01a03020 + 0x1a02f00));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d82,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d82,0);
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
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    iVar1 = func_0x0245495c(iVar7,uVar9,&uStack_30,uVar4);
    return iVar1;
  }
  if (*(int *)(param_1 + 0x90) < 1) {
    return *(int *)(param_1 + 0x90);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar1 + 0x80);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a03024 + 0x1a02f7c));
  func_0x02012bb0(iVar1,0);
  iVar10 = *(int *)(param_1 + 0x5c);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar9 = *(undefined4 *)(iVar10 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = *(undefined4 **)(_UNK_01a03028 + 0x1a02fc0);
  *(undefined1 *)(iVar1 + 0xc) = 1;
  *(undefined4 *)(iVar1 + 8) = uVar9;
  uVar9 = func_0x01384be4(*puVar2);
  func_0x0244fb00(uVar9,param_1,**(undefined4 **)(_UNK_01a0302c + 0x1a02fe4),0);
  *(undefined4 *)(iVar1 + 0x10) = uVar9;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_01cf20c0 + 0x1cf1e54);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf20c4 + 0x1cf1e68),iVar1,0);
    func_0x01384978(*(undefined4 *)(_UNK_01cf20c8 + 0x1cf1e74));
    func_0x01384978(*(undefined4 *)(_UNK_01cf20cc + 0x1cf1e80));
    *pcVar5 = '\x01';
  }
  iVar10 = func_0x0229f06c(0x81c,0);
  if (iVar10 != 0) {
    iVar10 = func_0x0229f13c(0x81c,0);
    if (iVar10 == 0) {
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
    if (*(int *)(iVar10 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar7,0);
    func_0x01485278(&uStack_38,iVar1,0);
    iVar7 = *(int *)(iVar10 + 8);
    uVar9 = *(undefined4 *)(iVar10 + 0xc);
    iVar1 = *(int *)(iVar10 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar4,0,0);
    iVar1 = func_0x0245496c(&uStack_38,0,0);
    return iVar1;
  }
  iVar10 = func_0x01c24918(0);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar10 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = *(undefined4 *)(iVar1 + 8);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  iVar8 = 0;
  iVar10 = func_0x01cd2fb8(iVar10,uVar9,0);
  if (iVar10 != 0) {
    iVar8 = func_0x01c24918(0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar8 + 0xc);
    uVar9 = *(undefined4 *)(iVar10 + 0x18);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar8 = 0;
    iVar10 = func_0x01cabc98(iVar6,uVar9,0);
    if (iVar10 != 0) {
      uVar9 = *(undefined4 *)(iVar10 + 0x18);
      if (*(int *)(**(int **)(_UNK_01cf20d0 + 0x1cf1f7c) + 0x74) == 0) {
        func_0x01384ab4(**(int **)(_UNK_01cf20d0 + 0x1cf1f7c));
      }
      uVar9 = func_0x025550ec(uVar9,0);
      iVar10 = *(int *)(iVar7 + 0x10);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      func_0x02b63cc4(iVar10,uVar9,0);
      puVar2 = *(undefined4 **)(_UNK_01cf20d4 + 0x1cf1fd0);
      iVar10 = func_0x034aaa34(*puVar2);
      iVar8 = *(int *)(iVar7 + 0x10);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar9 = *(undefined4 *)(iVar8 + 0xc);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar8 = 0;
      iVar10 = func_0x01eeaa54(iVar10,uVar9,0,0);
      if (iVar10 == 0) {
        iVar10 = func_0x034aaa34(*puVar2);
        iVar7 = *(int *)(iVar7 + 0x10);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar9 = *(undefined4 *)(iVar7 + 0xc);
        piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01cf20d8 + 0x1cf2044),1);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20));
        if (iVar7 == 0) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if (piVar3[3] == 0) {
          func_0x01384bf4();
        }
        piVar3[4] = iVar1;
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x01ee858c(iVar10,uVar9,piVar3,0);
        iVar8 = 1;
      }
    }
  }
  return iVar8;
}



// ===== FAT.FestBoardActivity$$CloseSpinPanel RVA 0x19f3030 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a03030(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_01a0311c + 0x1a03044);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a03120 + 0x1a03058));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d83,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d83,0);
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
    uVar6 = func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3);
    return uVar6;
  }
  uVar6 = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar1 + 0x80);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a03124 + 0x1a030cc));
  func_0x02012bb0(iVar1,0);
  if (*(int *)(param_1 + 0x5c) != 0) {
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 100);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 8) = uVar6;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_01cf4050 + 0x1cf3e54);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf4054 + 0x1cf3e68),iVar1,0);
    func_0x01384978(*(undefined4 *)(_UNK_01cf4058 + 0x1cf3e74));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7d84,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7d84,0);
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
    uVar6 = func_0x0245496c(&uStack_38,0,0);
    return uVar6;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(iVar1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 0;
  iVar1 = func_0x01cd2fb8(iVar2,uVar6,0);
  if (iVar1 != 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    uVar6 = *(undefined4 *)(iVar1 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    iVar1 = func_0x01cabc98(iVar2,uVar6,0);
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(iVar1 + 0x18);
      if (*(int *)(**(int **)(_UNK_01cf405c + 0x1cf3f70) + 0x74) == 0) {
        func_0x01384ab4(**(int **)(_UNK_01cf405c + 0x1cf3f70));
      }
      uVar6 = func_0x025550ec(uVar6,0);
      iVar1 = *(int *)(iVar5 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b63cc4(iVar1,uVar6,0);
      puVar7 = *(undefined4 **)(_UNK_01cf4060 + 0x1cf3fc4);
      iVar1 = func_0x034aaa34(*puVar7);
      iVar2 = *(int *)(iVar5 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01eeaa54(iVar1,uVar6,0,0);
      uVar3 = 1;
      if (iVar1 != 0) {
        iVar1 = func_0x034aaa34(*puVar7);
        iVar5 = *(int *)(iVar5 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar6 = *(undefined4 *)(iVar5 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01ee40f0(iVar1,uVar6,0);
      }
    }
  }
  return uVar3;
}



// ===== FAT.FestBoardActivity$$GenerateSpinRoundSeed RVA 0x19f3128 =====

/* WARNING: Removing unreachable block (ram,0x01cd607c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a03128(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  undefined4 auStack_1c [3];
  
  iVar1 = func_0x0229f06c(0x7d29,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d29,0);
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
    uVar5 = func_0x0245498c(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x7c);
  if ((iVar1 != 0) && (iVar4 = func_0x01cd51a8(iVar1,0), iVar4 != 0)) {
    pcVar6 = (char *)(_UNK_01cd6170 + 0x1cd5fd4);
    auStack_1c[0] = 1;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cd6174 + 0x1cd5fec),1,0x7fffffff,0);
      func_0x01384978(*(undefined4 *)(_UNK_01cd6178 + 0x1cd5ff8));
      func_0x01384978(*(undefined4 *)(_UNK_01cd617c + 0x1cd6004));
      func_0x01384978(*(undefined4 *)(_UNK_01cd6180 + 0x1cd6010));
      *pcVar6 = '\x01';
    }
    iVar4 = func_0x0229f06c(0xb0e,0);
    if (iVar4 == 0) {
      piVar2 = *(int **)(iVar1 + 0xc);
      if (piVar2 == (int *)0x0) {
        uVar5 = func_0x014867c8(auStack_1c,0);
        uVar5 = func_0x0244fb1c(**(undefined4 **)(_UNK_01cd6184 + 0x1cd6108),uVar5,0);
        if (*(int *)(**(int **)(_UNK_01cd6188 + 0x1cd611c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2944(uVar5,0);
        uVar5 = auStack_1c[0];
      }
      else {
        uVar5 = (**(code **)(*piVar2 + 0xf0))(piVar2,1,0x7fffffff,*(undefined4 *)(*piVar2 + 0xf4));
        func_0x01cd5af8(iVar1);
      }
    }
    else {
      iVar4 = func_0x0229f13c(0xb0e,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_30 = 0;
      uVar5 = func_0x02180128(iVar4,iVar1,1,0x7fffffff);
    }
    return uVar5;
  }
  uVar5 = (*(code *)&UNK_051844bc)(1,0x7fffffff,0);
  return uVar5;
}



// ===== FAT.FestBoardActivity$$IsSpinValid RVA 0x19f31d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a031d8(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  pcVar4 = (char *)(_UNK_01a032ac + 0x1a031ec);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a032b0 + 0x1a03200));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d28,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d28,0);
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
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar5 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  iVar1 = 0;
  if (iVar5 != 0) {
    iVar1 = param_1[0x17];
  }
  if ((((iVar5 != 0 && iVar1 != 0) && (0 < *(int *)(iVar1 + 100))) && (*(int *)(iVar1 + 0x60) != 0))
     && (0 < *(int *)(*(int *)(iVar1 + 0x60) + 0xc))) {
    return (uint)(param_1[0x1f] != 0);
  }
  return 0;
}



// ===== FAT.FestBoardActivity$$BuildSpinSequenceWithSeed RVA 0x19f32b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a032b4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01a03858 + 0x1a032d4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a0385c + 0x1a032ec));
    func_0x01384978(*(undefined4 *)(_UNK_01a03860 + 0x1a032f8));
    func_0x01384978(*(undefined4 *)(_UNK_01a03864 + 0x1a03304));
    func_0x01384978(*(undefined4 *)(_UNK_01a03868 + 0x1a03310));
    func_0x01384978(*(undefined4 *)(_UNK_01a0386c + 0x1a0331c));
    func_0x01384978(*(undefined4 *)(_UNK_01a03870 + 0x1a03328));
    func_0x01384978(*(undefined4 *)(_UNK_01a03874 + 0x1a03334));
    func_0x01384978(*(undefined4 *)(_UNK_01a03878 + 0x1a03340));
    func_0x01384978(*(undefined4 *)(_UNK_01a0387c + 0x1a0334c));
    func_0x01384978(*(undefined4 *)(_UNK_01a03880 + 0x1a03358));
    func_0x01384978(*(undefined4 *)(_UNK_01a03884 + 0x1a03364));
    func_0x01384978(*(undefined4 *)(_UNK_01a03888 + 0x1a03370));
    func_0x01384978(*(undefined4 *)(_UNK_01a0388c + 0x1a0337c));
    func_0x01384978(*(undefined4 *)(_UNK_01a03890 + 0x1a03388));
    func_0x01384978(*(undefined4 *)(_UNK_01a03894 + 0x1a03394));
    func_0x01384978(*(undefined4 *)(_UNK_01a03898 + 0x1a033a0));
    func_0x01384978(*(undefined4 *)(_UNK_01a0389c + 0x1a033ac));
    func_0x01384978(*(undefined4 *)(_UNK_01a038a0 + 0x1a033b8));
    func_0x01384978(*(undefined4 *)(_UNK_01a038a4 + 0x1a033c4));
    func_0x01384978(*(undefined4 *)(_UNK_01a038a8 + 0x1a033d0));
    func_0x01384978(*(undefined4 *)(_UNK_01a038ac + 0x1a033dc));
    *pcVar5 = '\x01';
  }
  uVar8 = 0;
  iVar1 = func_0x0229f06c(0x7d2a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a038b0 + 0x1a03448));
    func_0x0244f5a0(iVar1,0);
    iVar2 = FUN_01a031d8(param_1);
    if (((param_4 != 0) && (0 < param_3)) && (iVar2 != 0)) {
      iVar9 = 0;
      puVar3 = *(undefined4 **)(_UNK_01a038b4 + 0x1a03490);
      *(undefined4 *)(param_4 + 0xc) = 0;
      uVar8 = *puVar3;
      *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
      iVar2 = func_0x01384be4(uVar8);
      func_0x0328e950(iVar2,**(undefined4 **)(_UNK_01a038b8 + 0x1a034b4));
      puVar3 = *(undefined4 **)(_UNK_01a038bc + 0x1a034c8);
      while( true ) {
        iVar6 = *(int *)(param_1 + 0x5c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar6 + 0x60);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0xc) <= iVar9) break;
        iVar6 = *(int *)(param_1 + 0x5c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar6 + 0x60);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar8 = func_0x0364c9b8(iVar6,iVar9,*puVar3);
        iVar6 = func_0x01835d34(uVar8,0);
        if (iVar6 == 0) {
          uStack_28 = uVar8;
          uVar8 = func_0x01384abc(**(undefined4 **)(_UNK_01a038c0 + 0x1a035c0),&uStack_28);
          uVar8 = func_0x0244f690(**(undefined4 **)(_UNK_01a038c4 + 0x1a035dc),
                                  **(undefined4 **)(_UNK_01a038c8 + 0x1a035e8),uVar8,0);
          if (*(int *)(**(int **)(_UNK_01a038cc + 0x1a035fc) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2944(uVar8,0);
        }
        else if (*(int *)(iVar6 + 0x18) == param_3) {
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar2 + 8);
          uVar11 = *(uint *)(iVar2 + 0xc);
          piVar4 = *(int **)(_UNK_01a038d0 + 0x1a03580);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar10 = *piVar4;
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          if (uVar11 < *(uint *)(iVar7 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar11 + 1;
            *(int *)(iVar7 + uVar11 * 4 + 0x10) = iVar6;
          }
          else {
            func_0x0328f170(iVar2,iVar6,
                            *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
          }
          puVar3 = *(undefined4 **)(_UNK_01a038d4 + 0x1a03650);
        }
        iVar9 = iVar9 + 1;
      }
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0xc) < 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01a038d8 + 0x1a0367c));
        func_0x02c204a0(uVar8,param_2,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar1 + 8) = uVar8;
        uVar8 = 1;
        iVar9 = *(int *)(iVar2 + 0xc);
        if (0 < iVar9) {
          piVar4 = *(int **)(_UNK_01a038dc + 0x1a036bc);
          do {
            iVar6 = *piVar4;
            if (*(int *)(iVar6 + 0x74) == 0) {
              func_0x01384ab4();
              iVar6 = *piVar4;
            }
            iVar7 = *(int *)(*(int *)(iVar6 + 0x5c) + 4);
            if (iVar7 == 0) {
              if (*(int *)(iVar6 + 0x74) == 0) {
                func_0x01384ab4();
                iVar6 = *piVar4;
              }
              uVar8 = **(undefined4 **)(iVar6 + 0x5c);
              iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01a038e0 + 0x1a03704));
              func_0x02458024(iVar7,uVar8,**(undefined4 **)(_UNK_01a038e4 + 0x1a03724),0);
              *(int *)(*(int *)(*piVar4 + 0x5c) + 4) = iVar7;
            }
            iVar6 = *(int *)(iVar1 + 0xc);
            if (iVar6 == 0) {
              iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01a038e8 + 0x1a03754));
              func_0x024505a0(iVar6,iVar1,**(undefined4 **)(_UNK_01a038ec + 0x1a0376c),0);
              *(int *)(iVar1 + 0xc) = iVar6;
            }
            iVar6 = func_0x02fbbb84(iVar2,iVar7,iVar6,**(undefined4 **)(_UNK_01a038f0 + 0x1a03794));
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x03290900(iVar2,iVar6,**(undefined4 **)(_UNK_01a038f4 + 0x1a037bc));
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar7 = *(int *)(param_4 + 8);
            uVar11 = *(uint *)(param_4 + 0xc);
            iVar10 = **(int **)(_UNK_01a038f8 + 0x1a037dc);
            uVar8 = *(undefined4 *)(iVar6 + 0xc);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            if (uVar11 < *(uint *)(iVar7 + 0xc)) {
              *(uint *)(param_4 + 0xc) = uVar11 + 1;
              *(undefined4 *)(iVar7 + uVar11 * 4 + 0x10) = uVar8;
            }
            else {
              func_0x0325970c(param_4,uVar8,
                              *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
            }
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          uVar8 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d2a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x0217a980(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar8;
}



// ===== FAT.FestBoardActivity.<>c__DisplayClass156_0$$.ctor RVA 0x19f38fc =====

void FUN_01a038fc(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.FestBoardActivity$$SetSpineInvalidData RVA 0x19f3904 =====

/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a03904(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  char *pcVar5;
  int iVar6;
  int unaff_r6;
  undefined4 uVar7;
  int unaff_r7;
  undefined4 unaff_r8;
  int *unaff_r9;
  undefined4 unaff_r10;
  int unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_01a039e8 + 0x1a03918);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a039ec + 0x1a0392c));
    func_0x01384978(*(undefined4 *)(_UNK_01a039f0 + 0x1a03938));
    func_0x01384978(*(undefined4 *)(_UNK_01a039f4 + 0x1a03944));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d31,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d31,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    iStack_20 = iStack_38;
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
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  }
  piVar2 = *(int **)(_UNK_01a039f8 + 0x1a039bc);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  param_1 = **(int **)(_UNK_01a039fc + 0x1a039e0);
  pcVar5 = (char *)(_UNK_028c29e4 + 0x28c2958);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c29e8 + 0x28c296c),0);
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x46,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x46,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  if (*(int *)(**(int **)(_UNK_028c29ec + 0x28c29c4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar5 = (char *)(_UNK_028c2868 + 0x28c26ec);
  iStack_20 = unaff_r4;
  iStack_1c = unaff_r5;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14,0);
  if (iVar1 != 0) {
    iVar3 = func_0x0229f13c(0x14,0);
    iVar1 = iStack_20;
    iVar6 = iStack_1c;
    if (iVar3 == 0) {
      func_0x01384bf0();
      iVar1 = iStack_20;
      iVar6 = iStack_1c;
    }
    goto LAB_02174038;
  }
  piVar2 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar2;
  }
  if (**(int **)(iVar1 + 0x5c) < 1) {
LAB_028c2848:
    iVar6 = param_1;
    param_1 = iStack_20;
    iVar3 = iStack_1c;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      param_1 = iStack_20;
      iVar3 = iStack_1c;
    }
  }
  else {
    if (param_1 == 0) {
      func_0x01384bf0();
      iVar1 = *piVar2;
    }
    iVar6 = *(int *)(param_1 + 8);
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar2;
    }
    iVar3 = **(int **)(iVar1 + 0x5c);
    if (iVar6 <= iVar3) goto LAB_028c2848;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = **(int **)(*piVar2 + 0x5c);
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 < 1) {
      return;
    }
    unaff_r6 = 0;
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    unaff_r7 = func_0x04673af4(param_1,0,iVar3,0);
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = 0x28c2824;
    iVar6 = unaff_r7;
    unaff_r8 = 4;
    unaff_r9 = piVar2;
    register0x00000054 = (BADSPACEBASE *)&iStack_20;
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r6;
  *(int *)((int)register0x00000054 + -0xc) = iVar3;
  *(int *)((int)register0x00000054 + -0x10) = param_1;
  pcVar5 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x15,0);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_028c31a0 + _UNK_028c31ac))();
    return;
  }
  iVar3 = func_0x0229f13c(0x15,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  unaff_r6 = *(int *)((int)register0x00000054 + -8);
  unaff_lr = *(int *)((int)register0x00000054 + -4);
  param_1 = iVar6;
  iVar1 = *(int *)((int)register0x00000054 + -0x10);
  iVar6 = *(int *)((int)register0x00000054 + -0xc);
LAB_02174038:
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = iVar6;
  *(int *)((int)register0x00000054 + -0x20) = iVar1;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_1,0);
  iVar1 = *(int *)(iVar3 + 0x10);
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
  if (iVar1 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar1,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),4,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = *(int *)(iVar3 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar7,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  return;
}



// ===== FAT.FestBoardActivity$$GetMilestoneIndexByScore RVA 0x19f3a00 =====

int FUN_01a03a00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  iVar1 = func_0x0229f06c(0x5df,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5df,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = -1;
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar4 = func_0x01a0429c(param_1);
    iVar2 = func_0x01a043d4(param_1);
    if ((0 < iVar4) || (iVar2 != 0)) {
      if (param_2 < 1) {
        iVar1 = 0;
      }
      else {
        iVar7 = 0;
        iVar5 = 0;
        do {
          iVar1 = func_0x01a04168(param_1,iVar5);
          if (iVar1 == 0) {
            return iVar5;
          }
          iVar7 = *(int *)(iVar1 + 0x18) + iVar7;
          if (param_2 < iVar7) {
            return iVar5;
          }
          iVar5 = iVar5 + 1;
          iVar1 = iVar4;
        } while (iVar2 != 0 || iVar5 < iVar4);
      }
    }
  }
  return iVar1;
}



// ===== FAT.FestBoardActivity$$CommitMilestoneReward RVA 0x19f3aec =====

/* WARNING: Removing unreachable block (ram,0x01a03f58) */
/* WARNING: Removing unreachable block (ram,0x01a03f68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a03aec(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01a040fc + 0x1a03b08);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a04100 + 0x1a03b1c));
    func_0x01384978(*(undefined4 *)(_UNK_01a04104 + 0x1a03b28));
    func_0x01384978(*(undefined4 *)(_UNK_01a04108 + 0x1a03b34));
    func_0x01384978(*(undefined4 *)(_UNK_01a0410c + 0x1a03b40));
    func_0x01384978(*(undefined4 *)(_UNK_01a04110 + 0x1a03b4c));
    func_0x01384978(*(undefined4 *)(_UNK_01a04114 + 0x1a03b58));
    func_0x01384978(*(undefined4 *)(_UNK_01a04118 + 0x1a03b64));
    func_0x01384978(*(undefined4 *)(_UNK_01a0411c + 0x1a03b70));
    func_0x01384978(*(undefined4 *)(_UNK_01a04120 + 0x1a03b7c));
    func_0x01384978(*(undefined4 *)(_UNK_01a04124 + 0x1a03b88));
    func_0x01384978(*(undefined4 *)(_UNK_01a04128 + 0x1a03b94));
    func_0x01384978(*(undefined4 *)(_UNK_01a0412c + 0x1a03ba0));
    func_0x01384978(*(undefined4 *)(_UNK_01a04130 + 0x1a03bac));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar14 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar1 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar11,uVar14,&uStack_38,uVar9,0,0);
    return;
  }
  pcVar2 = (char *)func_0x01a04168(param_1,param_2);
  iVar1 = 0;
  if (pcVar2 != (char *)0x0) {
    iVar1 = *(int *)(pcVar2 + 0x14);
    pcVar10 = pcVar2;
  }
  if ((pcVar2 != (char *)0x0 && iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iStack_2c = param_1;
    iStack_28 = param_2;
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a04134 + 0x1a03c48));
    func_0x0328e950(iVar1,**(undefined4 **)(_UNK_01a04138 + 0x1a03c5c));
    iVar11 = *(int *)(pcVar10 + 0x14);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar11,**(undefined4 **)(_UNK_01a0413c + 0x1a03c80));
    piVar15 = *(int **)(_UNK_01a04140 + 0x1a03c9c);
LAB_01a03c98:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01a04158 + 0x1a03cb4)) {
          puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
          goto LAB_01a03cfc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01a04158 + 0x1a03cb4),0);
LAB_01a03cfc:
    iVar5 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    iVar11 = iStack_2c;
    if (iVar5 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01a04144 + 0x1a03d30)) {
            puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
            goto LAB_01a03d78;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01a04144 + 0x1a03d30),0);
LAB_01a03d78:
      uVar14 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (*(int *)(**(int **)(_UNK_01a04148 + 0x1a03d98) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar11 = func_0x02565a88(uVar14,0);
      iVar5 = func_0x01c24918(0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x40);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar15;
      uVar14 = *(undefined4 *)(iVar11 + 8);
      uVar9 = *(undefined4 *)(iVar11 + 0xc);
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x01384ab4();
        iVar6 = *piVar15;
      }
      uVar12 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x1b8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = **(undefined4 **)(_UNK_01a0414c + 0x1a03e20);
      uStack_34 = **(undefined4 **)(_UNK_01a04150 + 0x1a03e2c);
      uStack_3c = 0x321;
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uVar14 = func_0x01cdcbac(iVar5,uVar14,uVar9,uVar12);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar1 + 8);
      uVar7 = *(uint *)(iVar1 + 0xc);
      piVar8 = *(int **)(_UNK_01a04154 + 0x1a03e8c);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar5 = *piVar8;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (uVar7 < *(uint *)(iVar11 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar7 + 1;
        *(undefined4 *)(iVar11 + uVar7 * 4 + 0x10) = uVar14;
      }
      else {
        func_0x0328f170(iVar1,uVar14,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38)
                       );
      }
      goto LAB_01a03c98;
    }
    if (piVar3 != (int *)0x0) {
      iVar5 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar15[-1] == **(int **)(_UNK_01a0415c + 0x1a03ef8)) {
            puVar4 = (undefined4 *)(iVar5 + *piVar15 * 8 + 0xc0);
            goto LAB_01a03f40;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01a0415c + 0x1a03ef8),0);
LAB_01a03f40:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    iVar5 = iStack_28;
    iVar6 = *(int *)(iVar11 + 0xa0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x024505a4(iVar6,iVar5,iVar1,**(undefined4 **)(_UNK_01a04160 + 0x1a03f94));
    iVar1 = func_0x01a0429c(iVar11);
    iVar6 = func_0x01a0429c(iVar11);
    iVar13 = *(int *)(iVar11 + 0x5c);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar14 = *(undefined4 *)(iVar13 + 0x20);
    uStack_44 = FUN_019fe804(iVar11);
    uStack_40 = *(undefined4 *)(iVar11 + 100);
    uStack_3c = (uint)(iVar6 <= iVar5);
    uStack_48 = (uint)(iVar1 + -1 == iVar5);
    uStack_38 = 0;
    func_0x02313948(iVar11,iVar5 + 1,iVar1,uVar14);
  }
  return;
}



// ===== FAT.FestBoardActivity$$GetScoreMilestoneConfByIndex RVA 0x19f4168 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a04168(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar8 = (char *)(_UNK_01a04290 + 0x1a04180);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a04294 + 0x1a04194));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5e3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5e3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_0218fb6c + 0x218fa78);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218fb70 + 0x218fa8c),param_1,param_2,0);
      *pcVar8 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    auStack_28[0] = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0218fb74 + 0x218fb5c));
    return uVar9;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x5c) == 0)) {
    return 0;
  }
  iVar2 = func_0x01a0429c(param_1);
  if (param_2 < iVar2) {
    iVar2 = *(int *)(param_1 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x54);
  }
  else {
    iVar7 = func_0x01a04338(param_1);
    if (iVar7 < 1) {
      return 0;
    }
    func_0x01458344(param_2 - iVar2,iVar7);
    iVar2 = *(int *)(param_1 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    param_2 = extraout_r1;
  }
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x0364c9b8(iVar2,param_2,**(undefined4 **)(_UNK_01a04298 + 0x1a04274));
  pcVar8 = (char *)(_UNK_018358e8 + 0x183588c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_018358ec + 0x18358a0),0);
    func_0x01384978(*(undefined4 *)(_UNK_018358f0 + 0x18358ac));
    *pcVar8 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_018358f4 + 0x18358c0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar7 = **(int **)(_UNK_018358f8 + 0x18358dc);
  iVar2 = *(int *)(iVar7 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x02457d48();
  }
  iVar2 = *(int *)(iVar7 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
  if (piVar3 == (int *)0x0) {
    func_0x02457d50();
  }
  iVar2 = *(int *)(iVar7 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
  auStack_28[0] = 0;
  uStack_2c = 0;
  (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
  iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
  if (iVar2 != 0) {
    unaff_r4 = piVar3[0x11];
  }
  bVar1 = true;
  iVar5 = 0;
  if (iVar2 != 0 && unaff_r4 != 0) {
    iVar4 = func_0x03d66780(unaff_r4,uVar9,auStack_28,
                            *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
    uVar6 = auStack_28[0];
    bVar1 = false;
    iVar5 = unaff_r4;
    if (iVar4 != 0) {
      iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
      if (iVar2 == 0) {
        return auStack_28[0];
      }
      (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
      return auStack_28[0];
    }
  }
  if ((piVar3[0x12] == 0) ||
     (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
     iVar4 == 0)) {
    uStack_2c = 0;
    iVar4 = (**(code **)(*piVar3 + 0x1a0))(piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4))
    ;
    uVar6 = uStack_2c;
    if (iVar4 != 0) {
      if (iVar2 != 0) {
        if (bVar1) {
          if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1) ==
              0) {
            func_0x02457d84();
          }
          iVar5 = func_0x02457d58();
          func_0x03d63f04(iVar5,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74));
          piVar3[0x11] = iVar5;
        }
        if (iVar5 == 0) {
          func_0x02457d50();
        }
        func_0x03d6491c(iVar5,uVar9,uVar6,
                        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
      }
      iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
      if (iVar2 == 0) {
        return uVar6;
      }
      (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
      return uVar6;
    }
    iVar2 = piVar3[0x12];
    if (iVar2 == 0) {
      if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0) {
        func_0x02457d84();
      }
      iVar2 = func_0x02457d58();
      func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
      piVar3[0x12] = iVar2;
      if (iVar2 == 0) {
        func_0x02457d50();
        iVar2 = 0;
      }
    }
    func_0x04220004(iVar2,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
  }
  func_0x0369fb50(piVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
  return 0;
}



// ===== FAT.FestBoardActivity$$GetScoreMilestoneCount RVA 0x19f429c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a0429c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_01a04330 + 0x1a042b0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a04334 + 0x1a042c4));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5e0,0);
  if (iVar1 == 0) {
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0x54);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x5e0,0);
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
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar4,&uStack_30,uVar2,0,0);
  uVar4 = func_0x0245498c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.FestBoardActivity$$GetScoreCycleMilestoneCount RVA 0x19f4338 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a04338(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_01a043cc + 0x1a0434c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a043d0 + 0x1a04360));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5e2,0);
  if (iVar1 == 0) {
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0x4c);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x5e2,0);
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
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar4,&uStack_30,uVar2,0,0);
  uVar4 = func_0x0245498c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.FestBoardActivity$$HasCycleMilestone RVA 0x19f43d4 =====

uint FUN_01a043d4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e1,0);
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
  iVar1 = FUN_01a04338(param_1);
  return (uint)(0 < iVar1);
}



// ===== FAT.FestBoardActivity$$GetScoreMilestoneThreshold RVA 0x19f443c =====

int FUN_01a0443c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
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
  
  iVar4 = 0;
  iVar1 = func_0x0229f06c(0x7d21,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d21,0);
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
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  if ((-1 < param_2) && (*(int *)(param_1 + 0x5c) != 0)) {
    iVar4 = 0;
    iVar1 = 0;
    do {
      iVar2 = FUN_01a04168(param_1,iVar1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar4 = *(int *)(iVar2 + 0x18) + iVar4;
    } while (iVar1 <= param_2);
  }
  return iVar4;
}



// ===== FAT.FestBoardActivity$$IsAllScoreMilestoneCompleted RVA 0x19f44e8 =====

undefined4 FUN_01a044e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x7d85,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d85,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  if (((*(int *)(param_1 + 0x5c) != 0) && (iVar1 = FUN_01a043d4(param_1), iVar1 == 0)) &&
     (iVar1 = FUN_01a0429c(param_1), 0 < iVar1)) {
    iVar4 = FUN_01a03a00(param_1,*(undefined4 *)(param_1 + 0x6c));
    uVar3 = 0;
    if (iVar1 <= iVar4) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FAT.FestBoardActivity$$GetMilestoneRewardByIndex RVA 0x19f4588 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a04588(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 ****ppppuVar5;
  undefined4 ****ppppuVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int extraout_r2;
  undefined1 *extraout_r2_00;
  int extraout_r2_01;
  undefined4 uVar10;
  int *piVar11;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  code *pcVar12;
  int iVar13;
  char *pcVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  int unaff_r9;
  int iVar18;
  undefined1 uVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;
  int aiStack_a8 [6];
  int iStack_90;
  undefined1 *puStack_8c;
  int iStack_88;
  int iStack_84;
  undefined1 auStack_80 [4];
  undefined4 ***pppuStack_7c;
  int iStack_78;
  int iStack_74;
  char cStack_6d;
  int iStack_6c;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_50;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int aiStack_1c [2];
  
  pcVar14 = (char *)(_UNK_01a04630 + 0x1a045a0);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a04634 + 0x1a045b4));
    *pcVar14 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d86,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d86,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar14 = (char *)(_UNK_022562fc + 0x2256208);
    if (*pcVar14 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02256300 + 0x225621c),param_1,param_2,0);
      *pcVar14 = '\x01';
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    func_0x0245494c(&iStack_50,0);
    iStack_38 = iStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485238(&iStack_38,param_2,0);
    iVar13 = *(int *)(iVar1 + 8);
    uVar15 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar10 = 3;
    if (iVar1 == 0) {
      uVar10 = 2;
    }
    uStack_58 = 0;
    func_0x0245495c(iVar13,uVar15,&iStack_38,uVar10);
    iVar1 = func_0x02f5db90(&iStack_38,0,**(undefined4 **)(_UNK_02256304 + 0x22562ec));
    return iVar1;
  }
  if (param_2 < 0) {
    return 0;
  }
  iVar13 = **(int **)(_UNK_01a04638 + 0x1a0461c);
  piVar2 = *(int **)(param_1 + 0xa0);
  iVar1 = *(int *)(iVar13 + 0x1c);
  if (iVar1 == 0) {
    func_0x0140024c(iVar13);
    iVar1 = *(int *)(iVar13 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  uVar19 = piVar2 == (int *)0x0;
  aiStack_1c[0] = 0;
  if ((bool)uVar19) {
    func_0x01384988(*(undefined4 *)(iRam02f62dc0 + 0x2f62d8c));
    iVar13 = func_0x01384be4();
    uVar15 = func_0x01384988(*(undefined4 *)(iRam02f62dc4 + 0x2f62da0));
    func_0x04785e24(iVar13,uVar15,0);
    func_0x01384aa0(iVar13,iVar1);
    uVar22 = func_0x01384928();
    iVar18 = (int)((ulonglong)uVar22 >> 0x20);
    piVar2 = (int *)uVar22;
    iStack_30 = 0;
    bVar20 = false;
    if ((bool)uVar19) {
      iStack_30 = 0x940 - extraout_r3;
      bVar20 = iStack_30 == 0;
    }
    if (bVar20) {
      unaff_r9 = 0x4c0 - param_2;
    }
    iStack_38 = iVar13;
    iStack_34 = param_2;
    iStack_2c = iVar1;
    if (*(int *)(extraout_r3 + 0x1c) == 0) {
      func_0x0140024c(extraout_r3);
    }
    uVar19 = piVar2 == (int *)0x0;
    iStack_3c = 0;
    if ((bool)uVar19) {
      func_0x01384988(*(undefined4 *)(iRam02f62ee0 + 0x2f62eac));
      uVar15 = func_0x01384be4();
      uVar10 = func_0x01384988(*(undefined4 *)(iRam02f62ee4 + 0x2f62ec0));
      func_0x04785e24(uVar15,uVar10,0);
      func_0x01384aa0(uVar15,extraout_r3);
      uVar22 = func_0x01384928();
      ppppuVar5 = (undefined4 ****)((ulonglong)uVar22 >> 0x20);
      piVar2 = (int *)uVar22;
      iStack_5c = 0;
      bVar20 = false;
      if ((bool)uVar19) {
        iStack_5c = 0x1d00 - extraout_r3_00;
        bVar20 = iStack_5c == 0;
      }
      if (bVar20) {
        unaff_r9 = 0xb00 - iVar18;
      }
      iStack_6c = **(int **)(iRam02f6311c + 0x2f62f10);
      piVar11 = *(int **)(iStack_40 + 0x1c);
      puStack_8c = extraout_r2_00;
      iStack_84 = extraout_r3_00;
      pppuStack_7c = ppppuVar5;
      uStack_64 = uVar15;
      iStack_60 = iVar18;
      iStack_50 = unaff_r9;
      if (piVar11 == (int *)0x0) {
        func_0x0140024c(iStack_40);
        piVar11 = *(int **)(iStack_40 + 0x1c);
      }
      iVar18 = *(int *)(piVar11[1] + 0x84);
      iVar13 = *(int *)(piVar11[4] + 0x84);
      piVar17 = (int *)((int)&iStack_90 - (iVar18 + 7U & 0xfffffff8));
      uVar9 = iVar13 + 7U & 0xfffffff8;
      iStack_88 = (int)piVar17 - uVar9;
      iVar1 = iStack_88 - uVar9;
      func_0x0145894c(iVar1,iVar13);
      uVar19 = piVar2 == (int *)0x0;
      if (!(bool)uVar19) {
        ppppuVar6 = &pppuStack_7c;
        if (*(int *)(piVar11[1] + 0x14) < 0) {
          ppppuVar6 = ppppuVar5;
        }
        func_0x01458934(piVar17,ppppuVar6,iVar18);
        iVar18 = *piVar11;
        if ((*(ushort *)(iVar18 + 0xbd) & 1) == 0) {
          iVar18 = func_0x014001f0(iVar18);
          piVar11 = *(int **)(iStack_40 + 0x1c);
        }
        iVar4 = *piVar2;
        if (-1 < *(int *)(piVar11[1] + 0x14)) {
          piVar17 = (int *)*piVar17;
        }
        uVar9 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar11[-1] == iVar18) {
              iVar18 = iVar4 + *piVar11 * 8 + 200;
              goto LAB_02f63030;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        iVar18 = func_0x014002dc(piVar2,iVar18,1);
LAB_02f63030:
        iVar18 = *(int *)(iVar18 + 4);
        uVar15 = *(undefined4 *)(iVar18 + 4);
        pcVar12 = *(code **)(iVar18 + 8);
        iStack_78 = (int)piVar17;
        iStack_74 = iVar1;
        *(char **)(iVar1 + -8) = &cStack_6d;
        (*pcVar12)(uVar15,iVar18,piVar2,&iStack_78);
        iVar18 = iStack_88;
        if (cStack_6d == '\0') {
          puVar7 = auStack_80;
          if (*(int *)(*(int *)(*(int *)(iStack_40 + 0x1c) + 0x10) + 0x14) < 0) {
            puVar7 = puStack_8c;
          }
          func_0x01458934(iStack_88,puVar7,iVar13);
        }
        else {
          func_0x01458934(iStack_88,iVar1,iVar13);
        }
        func_0x01458934(iStack_84,iVar18,iVar13);
        uVar19 = **(int **)(iRam02f63120 + 0x2f630c8) == iStack_6c;
        if ((bool)uVar19) {
          return **(int **)(iRam02f63120 + 0x2f630c8);
        }
        func_0x0145b028();
      }
      func_0x01384988(*(undefined4 *)(iRam02f63124 + 0x2f630e8));
      iVar18 = func_0x01384be4();
      uVar15 = func_0x01384988(*(undefined4 *)(iRam02f63128 + 0x2f630fc));
      func_0x04785e24(iVar18,uVar15,0);
      func_0x01384aa0(iVar18,iStack_40);
      uVar22 = func_0x01384928();
      iVar8 = (int)((ulonglong)uVar22 >> 0x20);
      iVar4 = (int)uVar22;
      bVar20 = false;
      if ((bool)uVar19) {
        iVar18 = 0x800 - iVar8;
        bVar20 = iVar18 == 0;
      }
      bVar21 = false;
      if (bVar20) {
        iVar18 = 0x1a000 - iVar8;
        bVar21 = iVar18 == 0;
      }
      iVar16 = iVar1;
      if (bVar21) {
        iVar16 = 0xe000 - extraout_r3_01;
      }
      *(undefined4 *)(iVar1 + -4) = 0x2f6311c;
      *(undefined1 **)(iVar1 + -8) = &stack0xffffffb8;
      *(int *)(iVar1 + -0xc) = iVar13;
      *(int *)(iVar1 + -0x10) = iVar16;
      *(int **)(iVar1 + -0x14) = piVar2;
      *(int *)(iVar1 + -0x18) = iVar18;
      if (*(int *)(extraout_r2_01 + 0x1c) == 0) {
        func_0x0140024c(extraout_r2_01);
      }
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0361d11c(iVar4,*(undefined4 *)(*(int *)(extraout_r2_01 + 0x1c) + 4));
      iVar13 = *(int *)(*(int *)(extraout_r2_01 + 0x1c) + 8);
      if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
        iVar13 = func_0x014001f0();
      }
      iVar1 = func_0x01384a00(iVar13,iVar1 + 1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        func_0x01384bf4();
      }
      *(int *)(iVar1 + 0x10) = iVar8;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0361d300(iVar4,iVar1,1,*(undefined4 *)(*(int *)(extraout_r2_01 + 0x1c) + 0x10));
      if ((*(ushort *)(*(int *)(*(int *)(extraout_r2_01 + 0x1c) + 0x18) + 0xbd) & 1) == 0) {
        func_0x014001f0();
      }
      iVar13 = func_0x01384be4();
      func_0x03778aec(iVar13,iVar1,*(undefined4 *)(*(int *)(extraout_r2_01 + 0x1c) + 0x1c));
      return iVar13;
    }
    iVar1 = **(int **)(extraout_r3 + 0x1c);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0(iVar1);
    }
    iVar13 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar11[-1] == iVar1) {
          puVar3 = (undefined4 *)(iVar13 + *piVar11 * 8 + 200);
          goto LAB_02f62e70;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,1);
LAB_02f62e70:
    iVar13 = (*(code *)*puVar3)(piVar2,iVar18,&iStack_3c,puVar3[1]);
    iVar1 = extraout_r2;
    if (iVar13 != 0) {
      iVar1 = iStack_3c;
    }
    return iVar1;
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar13 = *piVar2;
  uVar9 = (uint)*(ushort *)(iVar13 + 0xb6);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(int *)(iVar13 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar13 + *piVar11 * 8 + 200);
        goto LAB_02f62d50;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,1);
LAB_02f62d50:
  iVar13 = (*(code *)*puVar3)(piVar2,param_2,aiStack_1c,puVar3[1]);
  iVar1 = 0;
  if (iVar13 != 0) {
    iVar1 = aiStack_1c[0];
  }
  return iVar1;
}



// ===== FAT.FestBoardActivity$$GetBuildingMilestoneCount RVA 0x19f463c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a0463c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_01a046d0 + 0x1a04650);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a046d4 + 0x1a04664));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x7d23,0);
  if (iVar1 == 0) {
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0x3c);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x7d23,0);
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
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar4,&uStack_30,uVar2,0,0);
  uVar4 = func_0x0245498c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.FestBoardActivity$$GetBuildingMilestoneByIndex RVA 0x19f46d8 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a046d8(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar8 = (char *)(_UNK_01a047b4 + 0x1a046f0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a047b8 + 0x1a04704));
    func_0x01384978(*(undefined4 *)(_UNK_01a047bc + 0x1a04710));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7d24,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7d24,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02256008 + 0x2255f14);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0225600c + 0x2255f28),param_1,param_2,0);
      *pcVar8 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    auStack_28[0] = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02256010 + 0x2255ff8));
    return uVar9;
  }
  if ((((*(int *)(param_1 + 0x5c) == 0) || (param_2 < 0)) ||
      (iVar2 = *(int *)(*(int *)(param_1 + 0x5c) + 0x3c), iVar2 == 0)) ||
     (*(int *)(iVar2 + 0xc) <= param_2)) {
    return 0;
  }
  uVar9 = func_0x0364c9b8(iVar2,param_2,**(undefined4 **)(_UNK_01a047c0 + 0x1a04798));
  pcVar8 = (char *)(_UNK_0183542c + 0x18353d0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01835430 + 0x18353e4),0);
    func_0x01384978(*(undefined4 *)(_UNK_01835434 + 0x18353f0));
    *pcVar8 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01835438 + 0x1835404) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar7 = **(int **)(_UNK_0183543c + 0x1835420);
  iVar2 = *(int *)(iVar7 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x02457d48();
  }
  iVar2 = *(int *)(iVar7 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
  if (piVar3 == (int *)0x0) {
    func_0x02457d50();
  }
  iVar2 = *(int *)(iVar7 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
  auStack_28[0] = 0;
  uStack_2c = 0;
  (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
  iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
  if (iVar2 != 0) {
    unaff_r4 = piVar3[0x11];
  }
  bVar1 = true;
  iVar5 = 0;
  if (iVar2 != 0 && unaff_r4 != 0) {
    iVar4 = func_0x03d66780(unaff_r4,uVar9,auStack_28,
                            *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
    uVar6 = auStack_28[0];
    bVar1 = false;
    iVar5 = unaff_r4;
    if (iVar4 != 0) {
      iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
      if (iVar2 == 0) {
        return auStack_28[0];
      }
      (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
      return auStack_28[0];
    }
  }
  if ((piVar3[0x12] == 0) ||
     (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
     iVar4 == 0)) {
    uStack_2c = 0;
    iVar4 = (**(code **)(*piVar3 + 0x1a0))(piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4))
    ;
    uVar6 = uStack_2c;
    if (iVar4 != 0) {
      if (iVar2 != 0) {
        if (bVar1) {
          if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1) ==
              0) {
            func_0x02457d84();
          }
          iVar5 = func_0x02457d58();
          func_0x03d63f04(iVar5,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74));
          piVar3[0x11] = iVar5;
        }
        if (iVar5 == 0) {
          func_0x02457d50();
        }
        func_0x03d6491c(iVar5,uVar9,uVar6,
                        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
      }
      iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
      if (iVar2 == 0) {
        return uVar6;
      }
      (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
      return uVar6;
    }
    iVar2 = piVar3[0x12];
    if (iVar2 == 0) {
      if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0) {
        func_0x02457d84();
      }
      iVar2 = func_0x02457d58();
      func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
      piVar3[0x12] = iVar2;
      if (iVar2 == 0) {
        func_0x02457d50();
        iVar2 = 0;
      }
    }
    func_0x04220004(iVar2,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
  }
  func_0x0369fb50(piVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
  return 0;
}



// ===== FAT.FestBoardActivity$$IsBuildingMilestoneUnlocked RVA 0x19f47c4 =====

undefined4 FUN_01a047c4(int param_1,int param_2)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x7d87,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d87,0);
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
  if ((-1 < param_2) && (uVar4 = 0, param_2 <= *(int *)(param_1 + 0x78))) {
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.FestBoardActivity$$GetCurrentBuildingIndex RVA 0x19f483c =====

undefined4 FUN_01a0483c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d88,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d88,0);
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
  return *(undefined4 *)(param_1 + 0x78);
}



// ===== FAT.FestBoardActivity$$CanUnlockBuildingMilestone RVA 0x19f4890 =====

uint FUN_01a04890(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  
  iVar1 = func_0x0229f06c(0x7d89,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d89,0);
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
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  if (*(int *)(param_1 + 0x78) + 1 == param_2) {
    iVar1 = FUN_01a0463c(param_1);
    return (uint)(param_2 < iVar1);
  }
  return 0;
}



// ===== FAT.FestBoardActivity$$IsEarlyFinishEnabled RVA 0x19f4918 =====

undefined4 FUN_01a04918(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x7d76,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d76,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (uVar3 = 0, *(char *)(*(int *)(param_1 + 0x58) + 0x34) != '\0')) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.FestBoardActivity$$MarkMapRewardClaimed RVA 0x19f4988 =====

void FUN_01a04988(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d8a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d8a,0);
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
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
}



// ===== FAT.FestBoardActivity$$OpenSpinInfo RVA 0x19f49e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a049e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
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
  
  pcVar5 = (char *)(_UNK_01a04ad8 + 0x1a049f4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a04adc + 0x1a04a08));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d8b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d8b,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    uVar8 = func_0x0245495c(iVar7,uVar8,&uStack_30,uVar4);
    return uVar8;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0x80);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a04ae0 + 0x1a04a78));
  func_0x02012bb0(iVar1,0);
  iVar7 = *(int *)(param_1 + 0x5c);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar8 = *(undefined4 *)(iVar7 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined1 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = uVar8;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_01cf20c0 + 0x1cf1e54);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cf20c4 + 0x1cf1e68),iVar1,0);
    func_0x01384978(*(undefined4 *)(_UNK_01cf20c8 + 0x1cf1e74));
    func_0x01384978(*(undefined4 *)(_UNK_01cf20cc + 0x1cf1e80));
    *pcVar5 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x81c,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x81c,0);
    if (iVar7 == 0) {
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
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar6,0);
    func_0x01485278(&uStack_38,iVar1,0);
    iVar6 = *(int *)(iVar7 + 8);
    uVar8 = *(undefined4 *)(iVar7 + 0xc);
    iVar1 = *(int *)(iVar7 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar4,0,0);
    uVar8 = func_0x0245496c(&uStack_38,0,0);
    return uVar8;
  }
  iVar7 = func_0x01c24918(0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar8 = *(undefined4 *)(iVar1 + 8);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar7 = func_0x01cd2fb8(iVar7,uVar8,0);
  if (iVar7 != 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    uVar8 = *(undefined4 *)(iVar7 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar7 = func_0x01cabc98(iVar2,uVar8,0);
    if (iVar7 != 0) {
      uVar8 = *(undefined4 *)(iVar7 + 0x18);
      if (*(int *)(**(int **)(_UNK_01cf20d0 + 0x1cf1f7c) + 0x74) == 0) {
        func_0x01384ab4(**(int **)(_UNK_01cf20d0 + 0x1cf1f7c));
      }
      uVar8 = func_0x025550ec(uVar8,0);
      iVar7 = *(int *)(iVar6 + 0x10);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x02b63cc4(iVar7,uVar8,0);
      puVar9 = *(undefined4 **)(_UNK_01cf20d4 + 0x1cf1fd0);
      iVar7 = func_0x034aaa34(*puVar9);
      iVar2 = *(int *)(iVar6 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar8 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 0;
      iVar7 = func_0x01eeaa54(iVar7,uVar8,0,0);
      if (iVar7 == 0) {
        iVar7 = func_0x034aaa34(*puVar9);
        iVar6 = *(int *)(iVar6 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar8 = *(undefined4 *)(iVar6 + 0xc);
        piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01cf20d8 + 0x1cf2044),1);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20));
        if (iVar6 == 0) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if (piVar3[3] == 0) {
          func_0x01384bf4();
        }
        piVar3[4] = iVar1;
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x01ee858c(iVar7,uVar8,piVar3,0);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}



// ===== FAT.FestBoardActivity$$JumpTask RVA 0x19f4ae4 =====

void FUN_01a04ae4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uStack_28;
  int iStack_20;
  
  iVar1 = func_0x0229f06c(0x7d8c,0);
  if (iVar1 == 0) {
    iStack_20 = param_1[0x37];
    uStack_28 = *(undefined8 *)(param_1 + 0x35);
    func_0x02b64d7c(&uStack_28,0);
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined4 *)(*param_1 + 0x1fc));
  }
  else {
    iVar1 = func_0x0229f13c(0x7d8c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.FestBoardActivity$$get_HandbookAgent RVA 0x19f4b80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a04b80(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d8d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d8d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02235380 + 0x22352a0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02235384 + 0x22352b4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02235388 + 0x2235370));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xf8);
}



// ===== FAT.FestBoardActivity$$FAT.IBoardActivityHandbook.CheckIsBoardItem RVA 0x19f4bd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a04bd4(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  
  iVar2 = func_0x0229f06c(0x7d8e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7d8e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
SUB_02179234:
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
    uVar3 = func_0x0245496c(&uStack_38,0,0);
    return uVar3;
  }
  iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (0 < param_2) {
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0x3e];
    }
    param_1 = piVar1;
    if (iVar2 != 0 && param_1 != (int *)0x0) {
      pcVar7 = (char *)(_UNK_02bf6bd0 + 0x2bf6b40);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02bf6bd4 + 0x2bf6b54),param_2,0);
        *pcVar7 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x5c43,0);
      if (iVar2 == 0) {
        iVar2 = param_1[3];
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 0xc) == 0) {
          uVar3 = 0;
        }
        else {
          iVar2 = func_0x030fe230(*(undefined4 *)(iVar2 + 8),param_2,0);
          uVar3 = (uint)(iVar2 != -1);
        }
        return uVar3;
      }
      iVar2 = func_0x0229f13c(0x5c43,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02179234;
    }
  }
  return 0;
}



// ===== FAT.FestBoardActivity$$FAT.IBoardActivityHandbook.OnNewItemUnlock RVA 0x19f4c6c =====

void FUN_01a04c6c(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d8f,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 == 0) {
      return;
    }
    if (param_1[0x43] != 0) {
      func_0x02befcdc(param_1[0x43],param_1[0x1d],0);
    }
    param_1 = (int *)param_1[0x3e];
    if (param_1 == (int *)0x0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x5c45,0);
    if (iVar1 == 0) {
      iVar1 = param_1[0xe];
      *(undefined1 *)(param_1 + 10) = 1;
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x02bf6b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x5c45,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d8f,0);
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



// ===== FAT.FestBoardActivity$$FAT.IBoardActivityHandbook.OnNewItemShow RVA 0x19f4d08 =====

void FUN_01a04d08(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
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
  
  iVar2 = func_0x0229f06c(0x7d90,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0x3e];
    }
    param_1 = piVar1;
    if (iVar2 == 0 || param_1 == (int *)0x0) {
      return;
    }
    iVar2 = func_0x0229f06c(0x5c48,0,0);
    if (iVar2 == 0) {
      iVar2 = param_1[0xf];
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02bf6aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar2 + 0xc))
                  (*(undefined4 *)(iVar2 + 0x20),param_2,*(undefined4 *)(iVar2 + 0x14));
        return;
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x5c48,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7d90,0);
    if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
  return;
}



// ===== FAT.FestBoardActivity$$CheckClaimBoardCategoryReward RVA 0x19f4d90 =====

/* WARNING: Possible PIC construction at 0x02bf69e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf69e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a04d90(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [7];
  char cStack_11;
  
  iVar1 = func_0x0229f06c(0x7d91,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xf8);
    if (param_1 == 0) {
      return 0;
    }
    pcVar6 = (char *)(_UNK_02bf6a28 + 0x2bf697c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6a2c + 0x2bf6990),param_2,0);
      *pcVar6 = '\x01';
    }
    cStack_11 = '\0';
    iVar1 = func_0x0229f06c(0x5c4a,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d50be8(iVar1,param_2,&cStack_11,**(undefined4 **)(_UNK_02bf6a30 + 0x2bf6a0c));
      return (uint)(cStack_11 == '\0');
    }
    iVar1 = func_0x0229f13c(0x5c4a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2bf69e4;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x7d91,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar3 = *(int *)(iVar1 + 0x10);
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
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  uVar2 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar2;
}



// ===== FAT.FestBoardActivity$$CheckClaimBoardHandBookAllReward RVA 0x19f4e08 =====

/* WARNING: Possible PIC construction at 0x02bf67ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf67b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a04e08(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 *puVar7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar1 = func_0x0229f06c(0x7d92,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xf8);
    if (param_1 == 0) {
      return 0;
    }
    pcVar5 = (char *)(_UNK_02bf6934 + 0x2bf6714);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6938 + 0x2bf6728),0);
      func_0x01384978(*(undefined4 *)(_UNK_02bf693c + 0x2bf6734));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6940 + 0x2bf6740));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6944 + 0x2bf674c));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6948 + 0x2bf6758));
      *pcVar5 = '\x01';
    }
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    unaff_r6 = 0;
    uStack_28 = 0;
    iVar1 = func_0x0229f06c(0x5c4c,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        iVar3 = *(int *)(param_1 + 0xc);
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = *(int *)(iVar3 + 0xc);
        }
        if (iVar3 != 0 && iVar1 != 0) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(param_1 + 0xc);
          iVar1 = *(int *)(iVar1 + 0x3c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x0325a3b4(&uStack_38,iVar3,**(undefined4 **)(_UNK_02bf694c + 0x2bf6818));
          uStack_28 = uStack_38;
          uStack_24 = uStack_34;
          uStack_20 = uStack_30;
          iStack_1c = iStack_2c;
          puVar7 = *(undefined4 **)(_UNK_02bf6950 + 0x2bf6834);
          do {
            do {
              iVar2 = func_0x03f597e0(&uStack_28,*puVar7);
              iVar3 = iStack_1c;
              if (iVar2 == 0) {
                iVar1 = 9;
                goto LAB_02bf6880;
              }
            } while (iStack_1c < 1);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x01cc4240(iVar1,iVar3,0);
          } while (iVar3 != 0);
          iVar1 = 8;
LAB_02bf6880:
          func_0x03f597dc(&uStack_28,**(undefined4 **)(_UNK_02bf6954 + 0x2bf688c));
          unaff_r6 = 0;
          if (iVar1 != 8) {
            unaff_r6 = 1;
          }
        }
      }
      return unaff_r6;
    }
    iVar1 = func_0x0229f13c(0x5c4c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2bf67b0;
    unaff_r4 = iVar1;
    unaff_r5 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_38;
  }
  else {
    iVar1 = func_0x0229f13c(0x7d92,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar3 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  uVar6 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
  return uVar6;
}



// ===== FAT.FestBoardActivity$$ProcessAllUnlockReward RVA 0x19f4e74 =====

/* WARNING: Removing unreachable block (ram,0x02bf91a0) */
/* WARNING: Removing unreachable block (ram,0x02bf91b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a04e74(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  int unaff_r11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x7d93,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xf8);
    if (param_1 == 0) {
      return 0;
    }
    pcVar5 = (char *)(iRam02bf9188 + 0x2bf8f60);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(iRam02bf918c + 0x2bf8f74),0);
      func_0x01384978(*(undefined4 *)(iRam02bf9190 + 0x2bf8f80));
      func_0x01384978(*(undefined4 *)(iRam02bf9194 + 0x2bf8f8c));
      func_0x01384978(*(undefined4 *)(iRam02bf9198 + 0x2bf8f98));
      func_0x01384978(*(undefined4 *)(iRam02bf919c + 0x2bf8fa4));
      func_0x01384978(*(undefined4 *)(iRam02bf91a0 + 0x2bf8fb0));
      *pcVar5 = '\x01';
    }
    uVar7 = 0;
    iVar1 = func_0x0229f06c(0x5c4e,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(param_1 + 0x18);
        iVar4 = *(int *)(iVar1 + 0x40);
        iVar1 = iVar8;
        if (iVar8 == 0) {
          func_0x01384bf0();
          iVar1 = *(int *)(param_1 + 0x18);
          bVar13 = iVar1 == 0;
          bVar12 = true;
          if (bVar13) {
            uVar15 = func_0x01384bf0();
            puVar2 = (undefined *)((ulonglong)uVar15 >> 0x20);
            bVar14 = bVar12;
            if (bVar13) {
              bVar14 = &UNK_01300000 < puVar2 || puVar2 + -0x1300000 < (undefined *)(uint)bVar12;
            }
            if (bVar13 && puVar2 == &UNK_01300000 + !bVar12) {
                    /* WARNING: Could not recover jumptable at 0x02bf919c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar7 = (*(code *)(unaff_r11 + 0x2200 + (uint)bVar14))();
              return uVar7;
            }
            pcVar5 = (char *)(_UNK_02bf93d4 + 0x2bf91d4);
            iStack_58 = param_1;
            iStack_54 = iVar4;
            if (*pcVar5 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_02bf93d8 + 0x2bf91e8));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93dc + 0x2bf91f4));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93e0 + 0x2bf9200));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93e4 + 0x2bf920c));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93e8 + 0x2bf9218));
              *pcVar5 = '\x01';
            }
            uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_68 = 0;
            iVar1 = func_0x0229f06c(0x7a91,0);
            if (iVar1 == 0) {
              iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_02bf93ec + 0x2bf927c));
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar7 = 0;
              if (*(char *)(iVar1 + 10) != '\0') {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x0325a3b4(&uStack_78,iVar1,**(undefined4 **)(_UNK_02bf93f0 + 0x2bf92c0));
                uStack_68 = uStack_78;
                uStack_64 = uStack_74;
                uStack_60 = uStack_70;
                uStack_5c = uStack_6c;
                puVar11 = *(undefined4 **)(_UNK_02bf93f4 + 0x2bf92dc);
                while (iVar1 = func_0x03f597e0(&uStack_68,*puVar11), uVar7 = uStack_5c, iVar1 != 0)
                {
                  iVar1 = func_0x01c24918(0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *(int *)(iVar1 + 0x3c);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x01cc14fc(iVar1,uVar7,1,0);
                }
                uVar7 = func_0x03f597dc(&uStack_68,**(undefined4 **)(_UNK_02bf93f8 + 0x2bf933c));
              }
            }
            else {
              iVar1 = func_0x0229f13c(0x7a91,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar7 = func_0x02173f80(iVar1,(int)uVar15,0);
            }
            return uVar7;
          }
        }
        piVar10 = *(int **)(iRam02bf91a4 + 0x2bf9058);
        uVar7 = *(undefined4 *)(iVar1 + 0xc);
        uVar3 = *(undefined4 *)(iVar8 + 8);
        iVar1 = *piVar10;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar10;
        }
        uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = **(undefined4 **)(iRam02bf91a8 + 0x2bf909c);
        uStack_2c = **(undefined4 **)(iRam02bf91ac + 0x2bf90a8);
        uStack_28 = 0;
        uVar7 = func_0x01cdcbac(iVar4,uVar3,uVar7,uVar9);
        iVar1 = func_0x01384be4(**(undefined4 **)(iRam02bf91b0 + 0x2bf90e4));
        func_0x0328e950(iVar1,**(undefined4 **)(iRam02bf91b4 + 0x2bf90f8));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar1 + 8);
        uVar6 = *(uint *)(iVar1 + 0xc);
        piVar10 = *(int **)(iRam02bf91b8 + 0x2bf912c);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar8 = *piVar10;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if (uVar6 < *(uint *)(iVar4 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar6 + 1;
          *(undefined4 *)(iVar4 + uVar6 * 4 + 0x10) = uVar7;
        }
        else {
          func_0x0328f170(iVar1,uVar7,
                          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
        }
        uVar7 = 1;
        *(int *)(param_1 + 0x1c) = iVar1;
      }
      return uVar7;
    }
    iVar1 = func_0x0229f13c(0x5c4e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d93,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
  uVar7 = func_0x0245496c(&uStack_30,0,0);
  return uVar7;
}



// ===== FAT.FestBoardActivity$$TrackHandbookRewardClaim RVA 0x19f4ee0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a04ee0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01a05050 + 0x1a04efc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a05054 + 0x1a04f10));
    func_0x01384978(*(undefined4 *)(_UNK_01a05058 + 0x1a04f1c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d5f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d5f,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dd0230(iVar1,param_2,0);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x44);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0364c54c(iVar4,param_2,**(undefined4 **)(_UNK_01a0505c + 0x1a04fd4));
    iVar7 = *(int *)(iVar1 + 0x44);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar7 = *(int *)(iVar7 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar3 + 0x20);
    uStack_34 = FUN_019fe804(param_1);
    uStack_2c = *(undefined4 *)(iVar1 + 0x10);
    uStack_30 = *(undefined4 *)(param_1 + 100);
    uStack_28 = 0;
    uStack_38 = (uint)(iVar4 + 1 == iVar7);
    func_0x02313df8(param_1,iVar4 + 1,iVar7,uVar6);
  }
  return;
}



// ===== FAT.FestBoardActivity$$get_TokenBoost RVA 0x19f5060 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a05060(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d94,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d94,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022327e0 + 0x2232700);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022327e4 + 0x2232714),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022327e8 + 0x22327d0));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x10c);
}



// ===== FAT.FestBoardActivity$$RefreshOutputType RVA 0x19f50b4 =====

void FUN_01a050b4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d5a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d5a,0);
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
  *(undefined4 *)(param_1 + 0x110) = 2;
  return;
}



// ===== FAT.FestBoardActivity$$RefreshOutputMethod RVA 0x19f510c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a0510c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
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
  
  pcVar4 = (char *)(_UNK_01a051d8 + 0x1a05120);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a051dc + 0x1a05134));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d5c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d5c,0);
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
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    return;
  }
  iVar5 = *(int *)(iVar1 + 0x28);
  if (*(int *)(iVar1 + 0x68) != 0) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x68) + 0xc);
    iVar1 = iVar5;
    if (0 < iVar5) {
      iVar1 = iVar2;
    }
    if (0 < iVar1) {
      uVar6 = 3;
      goto LAB_01a051d0;
    }
    if (0 < iVar2) {
      uVar6 = 1;
      goto LAB_01a051d0;
    }
  }
  if (iVar5 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
LAB_01a051d0:
  *(undefined4 *)(param_1 + 0x114) = uVar6;
  return;
}



// ===== FAT.FestBoardActivity$$IsEnergyMethod RVA 0x19f51e0 =====

uint FUN_01a051e0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb80,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb80,0);
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
  return (uint)((*(uint *)(param_1 + 0x114) & 0xfffffffd) == 1);
}



// ===== FAT.FestBoardActivity$$IsOrderMethod RVA 0x19f5244 =====

uint FUN_01a05244(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5dc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5dc,0);
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
  return (uint)((*(uint *)(param_1 + 0x114) & 0xfffffffe) == 2);
}



// ===== FAT.FestBoardActivity$$TryAddToken RVA 0x19f52a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a052a8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
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
  int iStack_28;
  undefined4 uStack_24;
  
  iVar2 = func_0x0229f06c(0x5d8,0);
  if (iVar2 == 0) {
    iVar2 = param_3;
    if (0 < param_3) {
      iVar2 = param_2;
    }
    if ((0 < iVar2) && (*(int *)(param_1 + 0x5c) != 0)) {
      if (*(int *)(param_1 + 0xa8) == param_2) {
        pcVar6 = (char *)(_UNK_01a00e88 + 0x1a00d70);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01a00e8c + 0x1a00d84));
          *pcVar6 = '\x01';
        }
        iVar2 = func_0x0229f06c(0x5db,0);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x74);
          if (0x7fffffff - param_3 <= iVar2) {
            param_3 = 0x7fffffff - iVar2;
          }
          *(int *)(param_1 + 0x74) = param_3 + iVar2;
          if (*(int *)(param_1 + 0x10c) != 0) {
            func_0x02befcdc(*(int *)(param_1 + 0x10c),param_3 + iVar2,0);
          }
          piVar7 = *(int **)(_UNK_01a00e90 + 0x1a00e18);
          iVar2 = *piVar7;
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          if (param_4 != *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c0)) {
            iVar1 = FUN_01a05244(param_1);
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = *(int *)(param_1 + 0x100);
            }
            if (iVar1 != 0 && iVar2 != 0) {
              func_0x02af96e4(iVar2,*(undefined4 *)(param_1 + 0x74),0);
            }
            func_0x019a4b9c(*(undefined4 *)(param_1 + 0xa8),param_3,*(undefined4 *)(param_1 + 0x74),
                            param_4);
          }
        }
        else {
          iVar2 = func_0x0229f13c(0x5db,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x0217ab90(iVar2,param_1,param_3,param_4);
        }
        return;
      }
      if (*(int *)(*(int *)(param_1 + 0x5c) + 0x58) == param_2) {
        pcVar6 = (char *)(_UNK_019fddd4 + 0x19fdcc4);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_019fddd8 + 0x19fdcd8));
          func_0x01384978(*(undefined4 *)(_UNK_019fdddc + 0x19fdce4));
          *pcVar6 = '\x01';
        }
        iVar2 = func_0x0229f06c(0x5de,0);
        if (iVar2 != 0) {
          iVar2 = func_0x0229f13c(0x5de,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          iStack_28 = 0;
          func_0x0245494c(&uStack_50,0,param_3,0);
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          iStack_28 = uStack_40;
          if (*(int *)(iVar2 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
          }
          func_0x01485278(&uStack_38,param_1,0);
          func_0x01485238(&uStack_38,param_3,0);
          iVar1 = *(int *)(iVar2 + 8);
          uVar5 = *(undefined4 *)(iVar2 + 0xc);
          iVar2 = *(int *)(iVar2 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar3 = 3;
          if (iVar2 == 0) {
            uVar3 = 2;
          }
          func_0x0245495c(iVar1,uVar5,&uStack_38,uVar3,0,0);
          return;
        }
        if (param_3 < 1) {
          return;
        }
        iVar2 = FUN_01a03a00(param_1,*(undefined4 *)(param_1 + 0x6c));
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + param_3;
        iVar1 = FUN_01a03a00(param_1);
        if (iVar1 <= iVar2) {
          return;
        }
        do {
          FUN_01a03aec(param_1,iVar2);
          iVar2 = iVar2 + 1;
        } while (iVar1 != iVar2);
        if (*(int *)(**(int **)(_UNK_019fdde0 + 0x19fdd90) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_019fdde4 + 0x19fddac));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0229f06c(0x3f,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0x3f,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_30 = 0;
          func_0x0245494c(&uStack_48,0,0);
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          iStack_28 = uStack_40;
          uStack_24 = uStack_3c;
          if (*(int *)(iVar1 + 0x10) != 0) {
            func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
          }
          func_0x01485278(&uStack_30,iVar2,0);
          iVar4 = *(int *)(iVar1 + 8);
          uVar5 = *(undefined4 *)(iVar1 + 0xc);
          iVar2 = *(int *)(iVar1 + 0x10);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar3 = 2;
          if (iVar2 == 0) {
            uVar3 = 1;
          }
          uStack_50 = 0;
          uStack_4c = 0;
          func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3);
          return;
        }
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
          return;
        }
        return;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5d8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    iStack_28 = param_4;
    func_0x02179974(iVar2,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.FestBoardActivity$$TryUseToken RVA 0x19f5374 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a05374(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_01a0545c + 0x1a05394);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a05460 + 0x1a053ac));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d95,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      uVar2 = 0;
    }
    else {
      piVar4 = *(int **)(_UNK_01a05464 + 0x1a0541c);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      uVar2 = func_0x01a05468(param_1,1,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1cc),param_2,
                              param_3,param_4);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d95,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021ed9d4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.FestBoardActivity$$_TryUseToken RVA 0x19f5468 =====

/* WARNING: Removing unreachable block (ram,0x01a05bc0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_01a05468(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  uint uVar12;
  int *piVar13;
  char *pcVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint in_fpscr;
  float fVar20;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  int aiStack_4c [5];
  
  pcVar14 = (char *)(_UNK_01a06268 + 0x1a05490);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a0626c + 0x1a054a8));
    func_0x01384978(*(undefined4 *)(_UNK_01a06270 + 0x1a054b4));
    func_0x01384978(*(undefined4 *)(_UNK_01a06274 + 0x1a054c0));
    func_0x01384978(*(undefined4 *)(_UNK_01a06278 + 0x1a054cc));
    func_0x01384978(*(undefined4 *)(_UNK_01a0627c + 0x1a054d8));
    func_0x01384978(*(undefined4 *)(_UNK_01a06280 + 0x1a054e4));
    func_0x01384978(*(undefined4 *)(_UNK_01a06284 + 0x1a054f0));
    func_0x01384978(*(undefined4 *)(_UNK_01a06288 + 0x1a054fc));
    func_0x01384978(*(undefined4 *)(_UNK_01a0628c + 0x1a05508));
    func_0x01384978(*(undefined4 *)(_UNK_01a06290 + 0x1a05514));
    func_0x01384978(*(undefined4 *)(_UNK_01a06294 + 0x1a05520));
    func_0x01384978(*(undefined4 *)(_UNK_01a06298 + 0x1a0552c));
    func_0x01384978(*(undefined4 *)(_UNK_01a0629c + 0x1a05538));
    func_0x01384978(*(undefined4 *)(_UNK_01a062a0 + 0x1a05544));
    func_0x01384978(*(undefined4 *)(_UNK_01a062a4 + 0x1a05550));
    func_0x01384978(*(undefined4 *)(_UNK_01a062a8 + 0x1a0555c));
    func_0x01384978(*(undefined4 *)(_UNK_01a062ac + 0x1a05568));
    func_0x01384978(*(undefined4 *)(_UNK_01a062b0 + 0x1a05574));
    func_0x01384978(*(undefined4 *)(_UNK_01a062b4 + 0x1a05580));
    func_0x01384978(*(undefined4 *)(_UNK_01a062b8 + 0x1a0558c));
    func_0x01384978(*(undefined4 *)(_UNK_01a062bc + 0x1a05598));
    func_0x01384978(*(undefined4 *)(_UNK_01a062c0 + 0x1a055a4));
    func_0x01384978(*(undefined4 *)(_UNK_01a062c4 + 0x1a055b0));
    func_0x01384978(*(undefined4 *)(_UNK_01a062c8 + 0x1a055bc));
    func_0x01384978(*(undefined4 *)(_UNK_01a062cc + 0x1a055c8));
    *pcVar14 = '\x01';
  }
  uVar15 = 0;
  aiStack_4c[4] = 0;
  aiStack_4c[3] = 0;
  aiStack_4c[2] = 0;
  aiStack_4c[1] = 0;
  aiStack_4c[0] = 0;
  uStack_50 = 0;
  iVar3 = func_0x0229f06c(0x7d96,0);
  if (iVar3 == 0) {
    if (param_1[0x17] != 0) {
      iVar4 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = param_1[0xf];
      }
      if (iVar4 != 0 && iVar3 != 0) {
        uVar15 = 0;
        iVar3 = func_0x02139cf4(iVar3,0);
        if ((0 < param_2) && (iVar3 != 0)) {
          uVar15 = 0;
          iVar4 = func_0x02beee40(param_1[0x43],param_2,aiStack_4c + 4,aiStack_4c + 3,0);
          if (iVar4 != 0) {
            if (param_1[0x1d] < aiStack_4c[4]) {
              iVar3 = param_1[0x2a];
              if (*(int *)(**(int **)(_UNK_01a062d0 + 0x1a056f8) + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar3 = func_0x02085f3c(iVar3,0);
              iVar4 = func_0x01c24918(0);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              iVar4 = *(int *)(iVar4 + 0x10);
              piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01a062d4 + 0x1a05744),1);
              if (piVar5 == (int *)0x0) {
                func_0x01384bf0();
              }
              if ((iVar3 != 0) &&
                 (iVar6 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0)) {
                uVar15 = func_0x01384c10();
                func_0x01384aa0(uVar15,0);
              }
              if (piVar5[3] == 0) {
                func_0x01384bf4();
              }
              piVar5[4] = iVar3;
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              uVar15 = 0;
              func_0x01ca1c50(iVar4,0x52,piVar5,0);
              if (param_1[0x43] != 0) {
                uVar15 = 0;
                func_0x02bf0144(param_1[0x43],param_2,param_1[0x1d],0);
              }
            }
            else {
              uVar15 = 0;
              iVar4 = func_0x020ece38(iVar3,0);
              if (iVar4 == 0) {
                iVar3 = func_0x01c24918(0);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                iVar4 = *(int *)(iVar3 + 0x10);
                iVar6 = **(int **)(_UNK_01a062d8 + 0x1a05a70);
                iVar3 = *(int *)(iVar6 + 0x1c);
                if (iVar3 == 0) {
                  func_0x0140024c(iVar6);
                  iVar3 = *(int *)(iVar6 + 0x1c);
                }
                iVar3 = *(int *)(iVar3 + 8);
                if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                  iVar3 = func_0x014001f0();
                }
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                iVar3 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
                if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                  iVar3 = func_0x014001f0();
                }
                uVar15 = **(undefined4 **)(iVar3 + 0x5c);
                if (iVar4 == 0) {
                  func_0x01384bf0();
                }
                func_0x01ca1c50(iVar4,0x14,uVar15,0);
                iVar3 = func_0x01c24918(0);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = *(int *)(iVar3 + 8);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                uVar15 = 0;
                func_0x01bf3284(iVar3,**(undefined4 **)(_UNK_01a062dc + 0x1a05b2c),0);
              }
              else {
                iVar4 = func_0x01a0634c(param_1);
                iVar6 = FUN_01a046d8(param_1,iVar4);
                if (iVar6 != 0) {
                  if (param_1[0x42] != iVar4) {
                    iVar16 = param_1[0x41];
                    if (iVar16 == 0) {
                      func_0x01384bf0();
                    }
                    *(undefined4 *)(iVar16 + 0xc) = 0;
                    iVar6 = *(int *)(iVar6 + 0x1c);
                    *(int *)(iVar16 + 0x10) = *(int *)(iVar16 + 0x10) + 1;
                    if (iVar6 != 0) {
                      piVar5 = (int *)func_0x03653608(iVar6,**(undefined4 **)
                                                              (_UNK_01a062e0 + 0x1a0586c));
LAB_01a05874:
                      if (piVar5 == (int *)0x0) {
                        func_0x01384bf0();
                      }
                      iVar6 = *piVar5;
                      uVar12 = (uint)*(ushort *)(iVar6 + 0xb6);
                      if (uVar12 != 0) {
                        piVar13 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                        do {
                          if (piVar13[-1] == **(int **)(_UNK_01a062f0 + 0x1a05894)) {
                            puVar7 = (undefined4 *)(iVar6 + *piVar13 * 8 + 0xc0);
                            goto LAB_01a058dc;
                          }
                          uVar12 = uVar12 - 1;
                          piVar13 = piVar13 + 2;
                        } while (uVar12 != 0);
                      }
                      puVar7 = (undefined4 *)
                               func_0x014002dc(piVar5,**(int **)(_UNK_01a062f0 + 0x1a05894),0);
LAB_01a058dc:
                      iVar6 = (*(code *)*puVar7)(piVar5,puVar7[1]);
                      if (iVar6 != 0) {
                        if (piVar5 == (int *)0x0) {
                          func_0x01384bf0();
                        }
                        iVar6 = *piVar5;
                        uVar12 = (uint)*(ushort *)(iVar6 + 0xb6);
                        if (uVar12 != 0) {
                          piVar13 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                          do {
                            if (piVar13[-1] == **(int **)(_UNK_01a062e4 + 0x1a05914)) {
                              puVar7 = (undefined4 *)(iVar6 + *piVar13 * 8 + 0xc0);
                              goto LAB_01a0595c;
                            }
                            uVar12 = uVar12 - 1;
                            piVar13 = piVar13 + 2;
                          } while (uVar12 != 0);
                        }
                        puVar7 = (undefined4 *)
                                 func_0x014002dc(piVar5,**(int **)(_UNK_01a062e4 + 0x1a05914),0);
LAB_01a0595c:
                        uVar8 = (*(code *)*puVar7)(piVar5,puVar7[1]);
                        iVar6 = param_1[0x41];
                        if (*(int *)(**(int **)(_UNK_01a062e8 + 0x1a0597c) + 0x74) == 0) {
                          func_0x01384ab4();
                        }
                        func_0x02566088(&uStack_60,uVar8,0);
                        uVar9 = uStack_58;
                        uVar19 = uStack_5c;
                        uVar8 = uStack_60;
                        if (iVar6 == 0) {
                          func_0x01384bf0();
                        }
                        iVar16 = *(int *)(iVar6 + 8);
                        uVar12 = *(uint *)(iVar6 + 0xc);
                        piVar13 = *(int **)(_UNK_01a062ec + 0x1a059e4);
                        *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
                        iVar17 = *piVar13;
                        if (iVar16 == 0) {
                          func_0x01384bf0();
                        }
                        if (uVar12 < *(uint *)(iVar16 + 0xc)) {
                          *(uint *)(iVar6 + 0xc) = uVar12 + 1;
                          iVar16 = iVar16 + uVar12 * 0xc;
                          *(undefined4 *)(iVar16 + 0x10) = uVar8;
                          *(undefined4 *)(iVar16 + 0x14) = uVar19;
                          *(undefined4 *)(iVar16 + 0x18) = uVar9;
                        }
                        else {
                          func_0x024505a8(iVar6,uVar8,uVar19,uVar9,
                                          *(undefined4 *)
                                           (*(int *)(*(int *)(iVar17 + 0x10) + 0x60) + 0x38));
                        }
                        goto LAB_01a05874;
                      }
                      if (piVar5 != (int *)0x0) {
                        iVar6 = *piVar5;
                        uVar12 = (uint)*(ushort *)(iVar6 + 0xb6);
                        if (uVar12 != 0) {
                          piVar13 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                          do {
                            if (piVar13[-1] == **(int **)(_UNK_01a062f4 + 0x1a05b58)) {
                              puVar7 = (undefined4 *)(iVar6 + *piVar13 * 8 + 0xc0);
                              goto LAB_01a05ba8;
                            }
                            uVar12 = uVar12 - 1;
                            piVar13 = piVar13 + 2;
                          } while (uVar12 != 0);
                        }
                        puVar7 = (undefined4 *)
                                 func_0x014002dc(piVar5,**(int **)(_UNK_01a062f4 + 0x1a05b58),0);
LAB_01a05ba8:
                        (*(code *)*puVar7)(piVar5,puVar7[1]);
                      }
                    }
                    param_1[0x42] = iVar4;
                  }
                  iVar6 = param_1[0x41];
                  if (iVar6 == 0) {
                    func_0x01384bf0();
                  }
                  if (*(int *)(iVar6 + 0xc) != 0) {
                    param_1[0x1d] = param_1[0x1d] - aiStack_4c[4];
                    iVar16 = FUN_01a05244(param_1);
                    if (iVar16 != 0) {
                      iVar6 = param_1[0x40];
                    }
                    if (iVar16 != 0 && iVar6 != 0) {
                      uVar15 = FUN_019fef44(param_1);
                      func_0x02af96e4(iVar6,uVar15,0);
                    }
                    func_0x019a4b9c(param_1[0x2a],-aiStack_4c[4],param_1[0x1d],param_3,0);
                    if (*(int *)(**(int **)(_UNK_01a062f8 + 0x1a05c40) + 0x74) == 0) {
                      func_0x01384ab4();
                    }
                    iVar16 = func_0x0300d558(**(undefined4 **)(_UNK_01a062fc + 0x1a05c5c));
                    iVar6 = aiStack_4c[4];
                    iVar17 = param_1[0x2a];
                    if (iVar16 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x034a0af8(iVar16,iVar17,iVar6,**(undefined4 **)(_UNK_01a06300 + 0x1a05c8c)
                                   );
                    piVar5 = *(int **)(_UNK_01a06304 + 0x1a05ca0);
                    iVar16 = param_1[0x41];
                    iVar6 = *piVar5;
                    if (*(int *)(iVar6 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar6 = *piVar5;
                    }
                    iVar17 = *(int *)(*(int *)(iVar6 + 0x5c) + 8);
                    if (iVar17 == 0) {
                      if (*(int *)(iVar6 + 0x74) == 0) {
                        func_0x01384ab4();
                        iVar6 = *piVar5;
                      }
                      uVar15 = **(undefined4 **)(iVar6 + 0x5c);
                      iVar17 = func_0x01384be4(**(undefined4 **)(_UNK_01a06308 + 0x1a05cec));
                      func_0x02458028(iVar17,uVar15,**(undefined4 **)(_UNK_01a0630c + 0x1a05d0c),0);
                      *(int *)(*(int *)(*piVar5 + 0x5c) + 8) = iVar17;
                    }
                    func_0x02fbdda8(&uStack_60,iVar16,iVar17,0,
                                    **(undefined4 **)(_UNK_01a06310 + 0x1a05d38));
                    uVar8 = uStack_5c;
                    uVar15 = uStack_60;
                    if (*(int *)(**(int **)(_UNK_01a06314 + 0x1a05d50) + 0x74) == 0) {
                      func_0x01384ab4();
                    }
                    iVar6 = func_0x028c8d78(0);
                    if (iVar6 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x0302a45c(aiStack_4c + 1,iVar6,aiStack_4c,
                                    **(undefined4 **)(_UNK_01a06318 + 0x1a05d94));
                    if (param_1[0x43] == 0) {
                      uStack_50 = uVar15;
                    }
                    else {
                      func_0x02bf06e8(param_1[0x43],uVar15,uVar8,&uStack_50,aiStack_4c[0],0);
                    }
                    uVar15 = FUN_01a0463c(param_1);
                    iVar6 = param_1[0x17];
                    if (iVar6 == 0) {
                      func_0x01384bf0();
                    }
                    uVar18 = *(undefined4 *)(iVar6 + 0x20);
                    uVar9 = FUN_019fe804(param_1);
                    uVar19 = uStack_50;
                    iVar6 = param_1[0x19];
                    uVar10 = func_0x02157e88(uStack_50,0);
                    func_0x023141f8(param_1,iVar4 + 1,uVar15,uVar18,uVar9,iVar6,uVar19,uVar10,
                                    aiStack_4c[3],0);
                    if (*(int *)(**(int **)(_UNK_01a06320 + 0x1a05e4c) + 0x74) == 0) {
                      func_0x01384ab4();
                    }
                    func_0x01dd7d28(0);
                    func_0x020da680(&uStack_60,iVar3,0);
                    uVar19 = uStack_5c;
                    uVar15 = uStack_60;
                    pcVar14 = (char *)(_UNK_01a06324 + 0x1a05e8c);
                    if (*pcVar14 == '\0') {
                      func_0x01384978(*(undefined4 *)(_UNK_01a06328 + 0x1a05ea0));
                      *pcVar14 = '\x01';
                    }
                    bVar1 = false;
                    piVar5 = *(int **)(_UNK_01a0632c + 0x1a05eb8);
                    if (*(int *)(*piVar5 + 0x74) == 0) {
                      func_0x01384ab4();
                      bVar1 = *pcVar14 == '\0';
                    }
                    fVar20 = (float)VectorSignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
                    fVar11 = (float)func_0x02450364(fVar20 * 0.5);
                    fVar20 = _UNK_01a06264;
                    uVar12 = in_fpscr & 0xfffffff | (uint)(fVar11 == _UNK_01a06264) << 0x1e;
                    iVar4 = (int)fVar11;
                    if (SUB41(uVar12 >> 0x1e,0)) {
                      iVar4 = -0x80000000;
                    }
                    if (bVar1) {
                      func_0x01384978(*(undefined4 *)(_UNK_01a06330 + 0x1a05f18));
                      *pcVar14 = '\x01';
                    }
                    if (*(int *)(*piVar5 + 0x74) == 0) {
                      func_0x01384ab4();
                    }
                    fVar11 = (float)VectorSignedToFloat(uVar19,(byte)(uVar12 >> 0x16) & 3);
                    fVar11 = (float)func_0x02450364(fVar11 * 0.5);
                    uVar15 = uStack_50;
                    iVar16 = (int)fVar11;
                    iVar6 = **(int **)(_UNK_01a06334 + 0x1a05f60);
                    if (fVar11 == fVar20) {
                      iVar16 = -0x80000000;
                    }
                    if (*(int *)(iVar6 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar6 = **(int **)(_UNK_01a06338 + 0x1a05f90);
                    }
                    func_0x01dd7f28(iVar3,uVar15,uVar8,param_4,param_5,param_6,iVar4,iVar16,
                                    *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x1cc),0x21,0);
                    iVar6 = 0;
                    while( true ) {
                      iVar17 = aiStack_4c[0];
                      if (aiStack_4c[0] == 0) {
                        func_0x01384bf0();
                      }
                      iVar2 = aiStack_4c[0];
                      if (*(int *)(iVar17 + 0xc) <= iVar6) break;
                      if (aiStack_4c[0] == 0) {
                        func_0x01384bf0();
                      }
                      func_0x024501ac(&uStack_60,iVar2,iVar6,
                                      **(undefined4 **)(_UNK_01a0633c + 0x1a06010));
                      uVar8 = uStack_5c;
                      uVar15 = uStack_60;
                      iVar17 = **(int **)(_UNK_01a06340 + 0x1a0602c);
                      if (*(int *)(iVar17 + 0x74) == 0) {
                        func_0x01384ab4();
                        iVar17 = **(int **)(_UNK_01a06344 + 0x1a06050);
                      }
                      uVar19 = *(undefined4 *)(*(int *)(iVar17 + 0x5c) + 0x1cc);
                      if (*(int *)(**(int **)(_UNK_01a06348 + 0x1a0605c) + 0x74) == 0) {
                        func_0x01384ab4(**(int **)(_UNK_01a06348 + 0x1a0605c));
                      }
                      func_0x01dd7f28(iVar3,uVar15,uVar8,param_4,param_5,param_6,iVar4,iVar16,uVar19
                                      ,0x21,0);
                      iVar6 = iVar6 + 1;
                    }
                    func_0x028c98a0(aiStack_4c + 1,0);
                    uVar15 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x7d96,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar15 = func_0x02256308(iVar3,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return uVar15;
}



// ===== FAT.FestBoardActivity$$GetCurrentDropMilestoneIndex RVA 0x19f634c =====

int FUN_01a0634c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d97,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d97,0);
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
  iVar3 = FUN_01a0463c(param_1);
  iVar1 = 0;
  if (0 < iVar3) {
    iVar1 = FUN_01a002f8(param_1);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x78) + 1;
      if (*(int *)(param_1 + 0x78) < 0) {
        iVar1 = 0;
      }
      if (iVar3 + -1 <= iVar1) {
        iVar1 = iVar3 + -1;
      }
    }
    else {
      iVar1 = iVar3 + -1;
    }
  }
  return iVar1;
}



// ===== FAT.FestBoardActivity$$OnPreUpdate RVA 0x19f63ec =====

undefined4 FUN_01a063ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x7d98,0);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x5c) != 0) && (iVar1 = FUN_01a05244(param_1), iVar1 != 0)) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(param_2 + 0x28) == 0) || (*(char *)(*(int *)(param_2 + 0x28) + 0x46) != '\0')) {
        iVar1 = func_0x01f2a218(0);
        uVar4 = 0;
        if (iVar1 == 0) {
          iVar1 = func_0x01e40318(param_2,0x15,0);
          if ((iVar1 == 0) ||
             (iVar3 = *(int *)(iVar1 + 0x10), iVar1 = func_0x02b449f8(param_1,0), iVar3 != iVar1)) {
            uVar4 = *(undefined4 *)(param_1 + 0xa8);
            iVar1 = *(int *)(param_1 + 0x100);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x02afa744(iVar1,param_2,param_4,uVar4,0);
            uVar4 = 1;
          }
        }
        else {
          uVar2 = func_0x02b449f8(param_1,0);
          iVar1 = func_0x01e4b758(param_2,uVar2,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01e3e5b8(param_2,*(undefined4 *)(iVar1 + 8),0);
          iVar3 = func_0x02b449f8(param_1,0);
          if (iVar1 != iVar3) {
            uVar2 = *(undefined4 *)(param_1 + 0xa8);
            iVar1 = *(int *)(param_1 + 0x100);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar4 = 1;
            func_0x02afacd4(iVar1,param_2,param_4,uVar2,1,0);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d98,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar4;
}



// ===== FAT.FestBoardActivity$$FAT.IBoardActivityOutput.IsValidForOrder RVA 0x19f65b0 =====

uint FUN_01a065b0(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d99,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x5dc,0);
    if (iVar1 == 0) {
      return (uint)((param_1[0x45] & 0xfffffffeU) == 2);
    }
    iVar1 = func_0x0229f13c(0x5dc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7d99,0);
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
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.FestBoardActivity$$get_OutputType RVA 0x19f662c =====

undefined4 FUN_01a0662c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x110);
}



// ===== FAT.FestBoardActivity$$set_OutputType RVA 0x19f6634 =====

void FUN_01a06634(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x110) = param_2;
  return;
}



// ===== FAT.FestBoardActivity$$get_OutputMethod RVA 0x19f663c =====

undefined4 FUN_01a0663c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x114);
}



// ===== FAT.FestBoardActivity$$set_OutputMethod RVA 0x19f6644 =====

void FUN_01a06644(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x114) = param_2;
  return;
}



// ===== FAT.FestBoardActivity$$FAT.IBoardActivityOutput.GetReasonString RVA 0x19f664c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a0664c(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_01a066ec + 0x1a06660);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a066f0 + 0x1a06674));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7d9a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d9a,0);
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
  piVar3 = *(int **)(_UNK_01a066f4 + 0x1a066cc);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1c0);
}



// ===== FAT.FestBoardActivity$$FAT.IBoardActivityOutput.GetFlyType RVA 0x19f66f8 =====

undefined4 FUN_01a066f8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x7d9b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7d9b,0);
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
  return 0x51;
}



// ===== FAT.FestBoardActivity$$<>iFixBaseProxy_get_Valid RVA 0x19f674c =====

void FUN_01a0674c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  iVar1 = func_0x0229f06c(0x127,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x127,0);
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
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02b4cb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)(*piVar3 + 0x134));
  return;
}



// ===== FAT.FestBoardActivity$$<>iFixBaseProxy_get_Visual RVA 0x19f6754 =====

undefined4 FUN_01a06754(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.FestBoardActivity$$<>iFixBaseProxy_SetupFresh RVA 0x19f675c =====

void FUN_01a0675c(undefined4 param_1)

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



// ===== FAT.FestBoardActivity$$<>iFixBaseProxy_ResEnumerate RVA 0x19f6764 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a06764(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x3189,0);
  if (iVar1 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02b61df8 + 0x2b61d5c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61dfc + 0x2b61d70),0);
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x1395,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b61e00 + 0x2b61dc8));
      func_0x04874ed4(iVar1,0);
      *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
      uVar5 = func_0x048799ac(0);
      *(undefined4 *)(iVar1 + 0x14) = uVar5;
      *(int **)(iVar1 + 0x18) = param_1;
      return iVar1;
    }
    iVar1 = func_0x0229f13c(0x1395,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3189,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_021c7568 + 0x21c7488);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
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
  iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
  return iVar1;
}



// ===== FAT.FestBoardActivity$$<>iFixBaseProxy_WhenActive RVA 0x19f676c =====

void FUN_01a0676c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x201,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x201,0);
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



// ===== FAT.FestBoardActivity$$<>iFixBaseProxy_WhenReset RVA 0x19f6774 =====

void FUN_01a06774(undefined4 param_1)

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



// ===== FAT.FestBoardActivity$$<>iFixBaseProxy_WhenEnd RVA 0x19f677c =====

void FUN_01a0677c(undefined4 param_1)

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



// ===== FAT.FestBoardActivity.<>c$$.cctor RVA 0x19f6784 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a06784(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01a067dc + 0x1a06794);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a067e0 + 0x1a067a8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01a067e4 + 0x1a067bc);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.FestBoardActivity.<>c$$.ctor RVA 0x19f67e8 =====

void FUN_01a067e8(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.FestBoardActivity.<>c$$<BuildSpinSequenceWithSeed>b__156_0 RVA 0x19f67f0 =====

undefined4 FUN_01a067f0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0x1c);
}



// ===== FAT.FestBoardActivity.<>c$$<_TryUseToken>b__211_0 RVA 0x19f680c =====

undefined4 FUN_01a0680c(void)

{
  undefined4 in_r3;
  
  return in_r3;
}



// ===== FAT.FestBoardActivity.<>c__DisplayClass156_0$$<BuildSpinSequenceWithSeed>b__1 RVA 0x19f6814 =====

void FUN_01a06814(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x01a06844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xf0))(piVar1,0,0x7fffffff,*(undefined4 *)(*piVar1 + 0xf4));
  return;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$System.IDisposable.Dispose RVA 0x19f6848 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a06848(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0xfffffff6:
  case 8:
    break;
  case 0xfffffff7:
  case 7:
    pcVar5 = &UNK_01a07ee0 + _UNK_01a07f80;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a07ef4 + _UNK_01a07f84));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01a07f20 + _UNK_01a07f88)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a07f6c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a07f20 + _UNK_01a07f88),0);
code_r0x01a07f6c:
                    /* WARNING: Could not recover jumptable at 0x01a07f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff8:
  case 6:
    pcVar5 = &UNK_01a07e20 + _UNK_01a07ec0;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a07e34 + _UNK_01a07ec4));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01a07e60 + _UNK_01a07ec8)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a07eac;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a07e60 + _UNK_01a07ec8),0);
code_r0x01a07eac:
                    /* WARNING: Could not recover jumptable at 0x01a07ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff9:
  case 5:
    pcVar5 = &UNK_01a07d60 + _UNK_01a07e00;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a07d74 + _UNK_01a07e04));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01a07da0 + _UNK_01a07e08)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a07dec;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a07da0 + _UNK_01a07e08),0);
code_r0x01a07dec:
                    /* WARNING: Could not recover jumptable at 0x01a07dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffa:
  case 4:
    pcVar5 = &UNK_01a07ca0 + _UNK_01a07d40;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a07cb4 + _UNK_01a07d44));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01a07ce0 + _UNK_01a07d48)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a07d2c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a07ce0 + _UNK_01a07d48),0);
code_r0x01a07d2c:
                    /* WARNING: Could not recover jumptable at 0x01a07d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffb:
  case 3:
    pcVar5 = &UNK_01a07be0 + _UNK_01a07c80;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a07bf4 + _UNK_01a07c84));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01a07c20 + _UNK_01a07c88)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a07c6c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a07c20 + _UNK_01a07c88),0);
code_r0x01a07c6c:
                    /* WARNING: Could not recover jumptable at 0x01a07c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffc:
  case 2:
    pcVar5 = &UNK_01a07b20 + _UNK_01a07bc0;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a07b34 + _UNK_01a07bc4));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01a07b60 + _UNK_01a07bc8)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a07bac;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a07b60 + _UNK_01a07bc8),0);
code_r0x01a07bac:
                    /* WARNING: Could not recover jumptable at 0x01a07bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffd:
  case 1:
    pcVar5 = &UNK_01a07a60 + _UNK_01a07b00;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a07a74 + _UNK_01a07b04));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01a07aa0 + _UNK_01a07b08)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a07aec;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a07aa0 + _UNK_01a07b08),0);
code_r0x01a07aec:
                    /* WARNING: Could not recover jumptable at 0x01a07afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffe:
  case 0xffffffff:
  case 0:
    return;
  default:
    return;
  }
  pcVar5 = &UNK_01a07fa0 + _UNK_01a08040;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(&UNK_01a07fb4 + _UNK_01a08044));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(&UNK_01a07fe0 + _UNK_01a08048)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x01a0802c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a07fe0 + _UNK_01a08048),0);
code_r0x01a0802c:
                    /* WARNING: Could not recover jumptable at 0x01a0803c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$MoveNext RVA 0x19f68d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a068d4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  int iStack_20;
  
  pcVar6 = (char *)(_UNK_01a078e0 + 0x1a068ec);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a078f8 + 0x1a06900));
    func_0x01384978(*(undefined4 *)(_UNK_01a07904 + 0x1a0690c));
    func_0x01384978(*(undefined4 *)(_UNK_01a07910 + 0x1a06918));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  piVar8 = *(int **)(param_1 + 0x18);
  uStack_28 = 0;
  iStack_20 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*piVar8 + 0x108))(piVar8,*(undefined4 *)(*piVar8 + 0x10c));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (**(code **)(*piVar8 + 0x118))(piVar8,*(undefined4 *)(*piVar8 + 0x11c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar5 = (int *)func_0x02b61d48(iVar1,0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01a069f8 + _UNK_01a079ec)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a06ac0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01a069f8 + _UNK_01a079ec),0);
code_r0x01a06ac0:
    piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    *(int **)(param_1 + 0x1c) = piVar5;
    break;
  case 1:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    break;
  case 2:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    goto code_r0x01a06ca8;
  case 3:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffb;
    goto code_r0x01a06e6c;
  case 4:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffa;
    goto code_r0x01a07030;
  case 5:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff9;
    goto code_r0x01a071f8;
  case 6:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff8;
    goto code_r0x01a073c0;
  case 7:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff7;
    goto code_r0x01a07588;
  case 8:
    piVar8 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff6;
    goto code_r0x01a07760;
  default:
    goto LAB_01a07884;
  }
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(&UNK_01a06afc + _UNK_01a079f4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x01a06b44;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01a06afc + _UNK_01a079f4),0);
code_r0x01a06b44:
  iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
  if (iVar1 == 0) {
    func_0x01a07a4c(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iStack_20 = piVar8[0x37];
    uStack_28 = *(undefined8 *)(piVar8 + 0x35);
    piVar5 = (int *)func_0x02b64af8(&uStack_28,0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01a06c10 + _UNK_01a079f8)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a06c88;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01a06c10 + _UNK_01a079f8),0);
code_r0x01a06c88:
    piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    *(int **)(param_1 + 0x1c) = piVar5;
code_r0x01a06ca8:
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01a06cc4 + _UNK_01a07a00)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a06d0c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01a06cc4 + _UNK_01a07a00),0);
code_r0x01a06d0c:
    iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
    if (iVar1 == 0) {
      func_0x01a07b0c(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iStack_20 = piVar8[0x3a];
      uStack_28 = *(undefined8 *)(piVar8 + 0x38);
      piVar5 = (int *)func_0x02b64af8(&uStack_28,0);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(&UNK_01a06dd8 + _UNK_01a07a04)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto code_r0x01a06e4c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01a06dd8 + _UNK_01a07a04),0);
code_r0x01a06e4c:
      piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
      *(undefined4 *)(param_1 + 8) = 0xfffffffb;
      *(int **)(param_1 + 0x1c) = piVar5;
code_r0x01a06e6c:
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(&UNK_01a06e88 + _UNK_01a07a0c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto code_r0x01a06ed0;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01a06e88 + _UNK_01a07a0c),0);
code_r0x01a06ed0:
      iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
      if (iVar1 == 0) {
        func_0x01a07bcc(param_1);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iStack_20 = piVar8[0x3d];
        uStack_28 = *(undefined8 *)(piVar8 + 0x3b);
        piVar5 = (int *)func_0x02b64af8(&uStack_28,0);
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar5;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(&UNK_01a06f9c + _UNK_01a07a10)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
              goto code_r0x01a07010;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01a06f9c + _UNK_01a07a10),0);
code_r0x01a07010:
        piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
        *(undefined4 *)(param_1 + 8) = 0xfffffffa;
        *(int **)(param_1 + 0x1c) = piVar5;
code_r0x01a07030:
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar5;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(&UNK_01a0704c + _UNK_01a07a18)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
              goto code_r0x01a07094;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01a0704c + _UNK_01a07a18),0);
code_r0x01a07094:
        iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
        if (iVar1 == 0) {
          func_0x01a07c8c(param_1);
          *(undefined4 *)(param_1 + 0x1c) = 0;
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iStack_30 = piVar8[0x2d];
          iStack_2c = piVar8[0x2e];
          piVar5 = (int *)func_0x02b646a0(&iStack_30,0);
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar5;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar4[-1] == **(int **)(&UNK_01a07164 + _UNK_01a07a1c)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                goto code_r0x01a071d8;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01a07164 + _UNK_01a07a1c),0)
          ;
code_r0x01a071d8:
          piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
          *(undefined4 *)(param_1 + 8) = 0xfffffff9;
          *(int **)(param_1 + 0x1c) = piVar5;
code_r0x01a071f8:
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar5;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar4[-1] == **(int **)(&UNK_01a07214 + _UNK_01a07a24)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                goto code_r0x01a0725c;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_01a07214 + _UNK_01a07a24),0)
          ;
code_r0x01a0725c:
          iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
          if (iVar1 == 0) {
            func_0x01a07d4c(param_1);
            *(undefined4 *)(param_1 + 0x1c) = 0;
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iStack_30 = piVar8[0x2f];
            iStack_2c = piVar8[0x30];
            piVar5 = (int *)func_0x02b646a0(&iStack_30,0);
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar5;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar4[-1] == **(int **)(&UNK_01a0732c + _UNK_01a07a28)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                  goto code_r0x01a073a0;
                }
                uVar3 = uVar3 - 1;
                piVar4 = piVar4 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar5,**(int **)(&UNK_01a0732c + _UNK_01a07a28),0);
code_r0x01a073a0:
            piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
            *(undefined4 *)(param_1 + 8) = 0xfffffff8;
            *(int **)(param_1 + 0x1c) = piVar5;
code_r0x01a073c0:
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar5;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar4[-1] == **(int **)(&UNK_01a073dc + _UNK_01a07a30)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                  goto code_r0x01a07424;
                }
                uVar3 = uVar3 - 1;
                piVar4 = piVar4 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar5,**(int **)(&UNK_01a073dc + _UNK_01a07a30),0);
code_r0x01a07424:
            iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
            if (iVar1 == 0) {
              func_0x01a07e0c(param_1);
              *(undefined4 *)(param_1 + 0x1c) = 0;
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              iStack_30 = piVar8[0x31];
              iStack_2c = piVar8[0x32];
              piVar5 = (int *)func_0x02b646a0(&iStack_30,0);
              if (piVar5 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar5;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar4[-1] == **(int **)(&UNK_01a074f4 + _UNK_01a07a34)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                    goto code_r0x01a07568;
                  }
                  uVar3 = uVar3 - 1;
                  piVar4 = piVar4 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar5,**(int **)(&UNK_01a074f4 + _UNK_01a07a34),0);
code_r0x01a07568:
              piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
              *(undefined4 *)(param_1 + 8) = 0xfffffff7;
              *(int **)(param_1 + 0x1c) = piVar5;
code_r0x01a07588:
              if (piVar5 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar5;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar4[-1] == **(int **)(&UNK_01a075a4 + _UNK_01a07a3c)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                    goto code_r0x01a075ec;
                  }
                  uVar3 = uVar3 - 1;
                  piVar4 = piVar4 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar5,**(int **)(&UNK_01a075a4 + _UNK_01a07a3c),0);
code_r0x01a075ec:
              iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
              if (iVar1 == 0) {
                func_0x01a07ecc(param_1);
                *(undefined4 *)(param_1 + 0x1c) = 0;
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                (**(code **)(*piVar8 + 0x128))(&iStack_38,piVar8,*(undefined4 *)(*piVar8 + 300));
                iStack_2c = iStack_34;
                iStack_30 = iStack_38;
                piVar8 = (int *)func_0x02b646a0(&iStack_30,0);
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar8;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == **(int **)(&UNK_01a076cc + _UNK_01a07a40)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                      goto code_r0x01a07740;
                    }
                    uVar3 = uVar3 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar8,**(int **)(&UNK_01a076cc + _UNK_01a07a40),0);
code_r0x01a07740:
                piVar8 = (int *)(*(code *)*puVar2)(piVar8,puVar2[1]);
                *(undefined4 *)(param_1 + 8) = 0xfffffff6;
                *(int **)(param_1 + 0x1c) = piVar8;
code_r0x01a07760:
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar8;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == **(int **)(&UNK_01a0777c + _UNK_01a07a48)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                      goto code_r0x01a077c4;
                    }
                    uVar3 = uVar3 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar8,**(int **)(&UNK_01a0777c + _UNK_01a07a48),0);
code_r0x01a077c4:
                iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
                if (iVar1 == 0) {
                  func_0x01a07f8c(param_1);
                  *(undefined4 *)(param_1 + 0x1c) = 0;
                  return 0;
                }
                piVar8 = *(int **)(param_1 + 0x1c);
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar8;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == **(int **)(&UNK_01a077fc + _UNK_01a07a44)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                      goto code_r0x01a07858;
                    }
                    uVar3 = uVar3 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar8,**(int **)(&UNK_01a077fc + _UNK_01a07a44),0);
code_r0x01a07858:
                (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
                uVar7 = 8;
              }
              else {
                piVar8 = *(int **)(param_1 + 0x1c);
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar8;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == **(int **)(&UNK_01a07624 + _UNK_01a07a38)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                      goto code_r0x01a07714;
                    }
                    uVar3 = uVar3 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar8,**(int **)(&UNK_01a07624 + _UNK_01a07a38),0);
code_r0x01a07714:
                (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
                uVar7 = 7;
              }
            }
            else {
              piVar8 = *(int **)(param_1 + 0x1c);
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar8;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar5[-1] == **(int **)(&UNK_01a0745c + _UNK_01a07a2c)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                    goto code_r0x01a0753c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar8,**(int **)(&UNK_01a0745c + _UNK_01a07a2c),0);
code_r0x01a0753c:
              (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
              uVar7 = 6;
            }
          }
          else {
            piVar8 = *(int **)(param_1 + 0x1c);
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar8;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(&UNK_01a07294 + _UNK_01a07a20)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                  goto code_r0x01a07374;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar8,**(int **)(&UNK_01a07294 + _UNK_01a07a20),0);
code_r0x01a07374:
            (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
            uVar7 = 5;
          }
        }
        else {
          piVar8 = *(int **)(param_1 + 0x1c);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar8;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == **(int **)(&UNK_01a070cc + _UNK_01a07a14)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto code_r0x01a071ac;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01a070cc + _UNK_01a07a14),0)
          ;
code_r0x01a071ac:
          (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
          uVar7 = 4;
        }
      }
      else {
        piVar8 = *(int **)(param_1 + 0x1c);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar8;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(&UNK_01a06f08 + _UNK_01a07a08)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto code_r0x01a06fe4;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01a06f08 + _UNK_01a07a08),0);
code_r0x01a06fe4:
        (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
        uVar7 = 3;
      }
    }
    else {
      piVar8 = *(int **)(param_1 + 0x1c);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_01a06d44 + _UNK_01a079fc)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x01a06e20;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01a06d44 + _UNK_01a079fc),0);
code_r0x01a06e20:
      (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
      uVar7 = 2;
    }
    *(undefined4 *)(param_1 + 8) = uVar7;
  }
  else {
    piVar8 = *(int **)(param_1 + 0x1c);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01a06b7c + _UNK_01a079f0)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01a06c58;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01a06b7c + _UNK_01a079f0),0);
code_r0x01a06c58:
    (*(code *)*puVar2)(&iStack_38,piVar8,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  uVar7 = 1;
  *(int *)(param_1 + 0xc) = iStack_38;
  *(int *)(param_1 + 0x10) = iStack_34;
LAB_01a07884:
  return uVar7;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$<>m__Finally1 RVA 0x19f7a4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a07a4c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a07b00 + 0x1a07a60);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a07b04 + 0x1a07a74));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01a07b08 + 0x1a07aa0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a07aec;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a07b08 + 0x1a07aa0),0);
LAB_01a07aec:
                    /* WARNING: Could not recover jumptable at 0x01a07afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$<>m__Finally2 RVA 0x19f7b0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a07b0c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a07bc0 + 0x1a07b20);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a07bc4 + 0x1a07b34));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01a07bc8 + 0x1a07b60)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a07bac;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a07bc8 + 0x1a07b60),0);
LAB_01a07bac:
                    /* WARNING: Could not recover jumptable at 0x01a07bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$<>m__Finally3 RVA 0x19f7bcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a07bcc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a07c80 + 0x1a07be0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a07c84 + 0x1a07bf4));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01a07c88 + 0x1a07c20)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a07c6c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a07c88 + 0x1a07c20),0);
LAB_01a07c6c:
                    /* WARNING: Could not recover jumptable at 0x01a07c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$<>m__Finally4 RVA 0x19f7c8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a07c8c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a07d40 + 0x1a07ca0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a07d44 + 0x1a07cb4));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01a07d48 + 0x1a07ce0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a07d2c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a07d48 + 0x1a07ce0),0);
LAB_01a07d2c:
                    /* WARNING: Could not recover jumptable at 0x01a07d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$<>m__Finally5 RVA 0x19f7d4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a07d4c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a07e00 + 0x1a07d60);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a07e04 + 0x1a07d74));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01a07e08 + 0x1a07da0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a07dec;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a07e08 + 0x1a07da0),0);
LAB_01a07dec:
                    /* WARNING: Could not recover jumptable at 0x01a07dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$<>m__Finally6 RVA 0x19f7e0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a07e0c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a07ec0 + 0x1a07e20);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a07ec4 + 0x1a07e34));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01a07ec8 + 0x1a07e60)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a07eac;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a07ec8 + 0x1a07e60),0);
LAB_01a07eac:
                    /* WARNING: Could not recover jumptable at 0x01a07ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$<>m__Finally7 RVA 0x19f7ecc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a07ecc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a07f80 + 0x1a07ee0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a07f84 + 0x1a07ef4));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01a07f88 + 0x1a07f20)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a07f6c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a07f88 + 0x1a07f20),0);
LAB_01a07f6c:
                    /* WARNING: Could not recover jumptable at 0x01a07f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$<>m__Finally8 RVA 0x19f7f8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a07f8c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a08040 + 0x1a07fa0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a08044 + 0x1a07fb4));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01a08048 + 0x1a07fe0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a0802c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a08048 + 0x1a07fe0),0);
LAB_01a0802c:
                    /* WARNING: Could not recover jumptable at 0x01a0803c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x19f804c =====

void FUN_01a0804c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$System.Collections.IEnumerator.Reset RVA 0x19f8060 =====

/* WARNING: Removing unreachable block (ram,0x01a080a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a08060(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint unaff_r6;
  undefined1 in_ZR;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  func_0x01384988(*(undefined4 *)(iRam01a0809c + 0x1a08070));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam01a080a0 + 0x1a0808c));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
                    /* WARNING: Could not recover jumptable at 0x01a0809c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (!(bool)in_ZR) {
    pcVar4 = (char *)(_UNK_01a08100 + 0x1a080bc);
    uStack_18 = uVar1;
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01a08104 + 0x1a080d0));
      *pcVar4 = '\x01';
    }
    uStack_20 = *(undefined4 *)(iVar3 + 0xc);
    uStack_1c = *(undefined4 *)(iVar3 + 0x10);
    func_0x01384abc(**(undefined4 **)(_UNK_01a08108 + 0x1a080ec),&uStack_20);
    return;
  }
  (*(code *)(unaff_r6 & 0xffffffde))();
  return;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$System.Collections.IEnumerator.get_Current RVA 0x19f80a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a080a4(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_01a08100 + 0x1a080bc);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a08104 + 0x1a080d0));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_01a08108 + 0x1a080ec),&uStack_18);
  return;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x19f810c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a0810c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01a081ac + 0x1a08120);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a081b0 + 0x1a08134));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a081b4 + 0x1a08178));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.FestBoardActivity.<ResEnumerate>d__137$$System.Collections.IEnumerable.GetEnumerator RVA 0x19f81b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_01a0810c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01a081ac + 0x1a08120);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a081b0 + 0x1a08134));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a081b4 + 0x1a08178));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}


