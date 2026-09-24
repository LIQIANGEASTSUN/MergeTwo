/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MineCartActivity$$get_Valid RVA 0x1a723d4 =====

undefined4 FUN_01a823d4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x82ea,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x82ea,0);
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
  if ((iVar1 != 0) && (uVar5 = 0, *(int *)(param_1 + 0x44) != 0)) {
    uVar5 = 1;
  }
  return uVar5;
}



// ===== FAT.MineCartActivity$$get_World RVA 0x1a72464 =====

undefined4 FUN_01a82464(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.MineCartActivity$$set_World RVA 0x1a7246c =====

void FUN_01a8246c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.MineCartActivity$$get_WorldTracer RVA 0x1a72474 =====

undefined4 FUN_01a82474(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.MineCartActivity$$set_WorldTracer RVA 0x1a7247c =====

void FUN_01a8247c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== FAT.MineCartActivity$$get_ConfD RVA 0x1a72484 =====

undefined4 FUN_01a82484(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.MineCartActivity$$set_ConfD RVA 0x1a7248c =====

void FUN_01a8248c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// ===== FAT.MineCartActivity$$get_DetailId RVA 0x1a72494 =====

undefined4 FUN_01a82494(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.MineCartActivity$$set_DetailId RVA 0x1a7249c =====

void FUN_01a8249c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.MineCartActivity$$get_UnlockMaxLevel RVA 0x1a724a4 =====

undefined4 FUN_01a824a4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.MineCartActivity$$set_UnlockMaxLevel RVA 0x1a724ac =====

void FUN_01a824ac(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== FAT.MineCartActivity$$get_OutputType RVA 0x1a724b4 =====

undefined4 FUN_01a824b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== FAT.MineCartActivity$$set_OutputType RVA 0x1a724bc =====

void FUN_01a824bc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



// ===== FAT.MineCartActivity$$GetCurDetailConfig RVA 0x1a724c4 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a824c4(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  
  iVar2 = func_0x0229f06c(0x82ec,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x82ec,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02258cd8 + 0x2258bf8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02258cdc + 0x2258c0c),param_1,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
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
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5);
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02258ce0 + 0x2258cc8));
    return uVar9;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  uVar9 = *(undefined4 *)(param_1 + 0x48);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x0229f06c(0x82ee,0,0);
  if (iVar7 == 0) {
    pcVar8 = (char *)(_UNK_017fa244 + 0x17fa1e8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017fa248 + 0x17fa1fc),0);
      func_0x01384978(*(undefined4 *)(_UNK_017fa24c + 0x17fa208));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017fa250 + 0x17fa21c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017fa254 + 0x17fa238);
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
    uStack_28 = 0;
    uStack_2c = 0;
    (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
    iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar2 != 0) {
      unaff_r4 = piVar3[0x11];
    }
    bVar1 = true;
    iVar6 = 0;
    if (iVar2 != 0 && unaff_r4 != 0) {
      iVar4 = func_0x03d66780(unaff_r4,uVar9,&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
      uVar5 = uStack_28;
      bVar1 = false;
      iVar6 = unaff_r4;
      if (iVar4 != 0) {
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uStack_28;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uStack_28;
      }
    }
    if ((piVar3[0x12] == 0) ||
       (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
       iVar4 == 0)) {
      uStack_2c = 0;
      iVar4 = (**(code **)(*piVar3 + 0x1a0))
                        (piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
      uVar5 = uStack_2c;
      if (iVar4 != 0) {
        if (iVar2 != 0) {
          if (bVar1) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar6 = func_0x02457d58();
            func_0x03d63f04(iVar6,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74))
            ;
            piVar3[0x11] = iVar6;
          }
          if (iVar6 == 0) {
            func_0x02457d50();
          }
          func_0x03d6491c(iVar6,uVar9,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
        }
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uVar5;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uVar5;
      }
      iVar2 = piVar3[0x12];
      if (iVar2 == 0) {
        if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0)
        {
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
  iVar7 = func_0x0229f13c(0x82ee,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_02258bd0 + 0x2258adc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02258bd4 + 0x2258af0),iVar2,uVar9,0);
    *pcVar8 = '\x01';
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
  if (*(int *)(iVar7 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485238(&uStack_38,uVar9,0);
  iVar6 = *(int *)(iVar7 + 8);
  uVar9 = *(undefined4 *)(iVar7 + 0xc);
  iVar2 = *(int *)(iVar7 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar6,uVar9,&uStack_38,uVar5,0,0);
  uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02258bd8 + 0x2258bc0));
  return uVar9;
}



// ===== FAT.MineCartActivity$$.ctor RVA 0x1a72550 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a82550(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
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
  
  pcVar5 = (char *)(_UNK_01a8292c + 0x1a8256c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a82930 + 0x1a82580));
    func_0x01384978(*(undefined4 *)(_UNK_01a82934 + 0x1a8258c));
    func_0x01384978(*(undefined4 *)(_UNK_01a82938 + 0x1a82598));
    func_0x01384978(*(undefined4 *)(_UNK_01a8293c + 0x1a825a4));
    func_0x01384978(*(undefined4 *)(_UNK_01a82940 + 0x1a825b0));
    func_0x01384978(*(undefined4 *)(_UNK_01a82944 + 0x1a825bc));
    func_0x01384978(*(undefined4 *)(_UNK_01a82948 + 0x1a825c8));
    func_0x01384978(*(undefined4 *)(_UNK_01a8294c + 0x1a825d4));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01a82950 + 0x1a8260c);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  func_0x02b644a0(&uStack_30,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x830),0);
  *(undefined4 *)(param_1 + 0x54) = uStack_30;
  *(undefined4 *)(param_1 + 0x58) = uStack_2c;
  uStack_34 = 0;
  uStack_38 = 0;
  func_0x02b644a0(&uStack_38,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x834),0);
  *(undefined4 *)(param_1 + 0x5c) = uStack_38;
  *(undefined4 *)(param_1 + 0x60) = uStack_34;
  uStack_3c = 0;
  uStack_40 = 0;
  func_0x02b644a0(&uStack_40,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x838),0);
  *(undefined4 *)(param_1 + 100) = uStack_40;
  *(undefined4 *)(param_1 + 0x68) = uStack_3c;
  uStack_44 = 0;
  uStack_48 = 0;
  func_0x02b644a0(&uStack_48,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x83c),0);
  *(undefined4 *)(param_1 + 0x6c) = uStack_48;
  *(undefined4 *)(param_1 + 0x70) = uStack_44;
  uStack_4c = 0;
  uStack_50 = 0;
  func_0x02b644a0(&uStack_50,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x824),0);
  *(undefined4 *)(param_1 + 0x74) = uStack_50;
  *(undefined4 *)(param_1 + 0x78) = uStack_4c;
  uStack_54 = 0;
  uStack_58 = 0;
  func_0x02b644a0(&uStack_58,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x828),0);
  *(undefined4 *)(param_1 + 0x7c) = uStack_58;
  *(undefined4 *)(param_1 + 0x80) = uStack_54;
  uStack_5c = 0;
  uStack_60 = 0;
  func_0x02b644a0(&uStack_60,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x820),0);
  *(undefined4 *)(param_1 + 0x84) = uStack_60;
  *(undefined4 *)(param_1 + 0x88) = uStack_5c;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x02b64854(&uStack_70,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x818),0);
  iVar1 = *piVar6;
  *(undefined4 *)(param_1 + 0x94) = uStack_68;
  *(ulonglong *)(param_1 + 0x8c) = CONCAT44(uStack_6c,uStack_70);
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x02b64854(&uStack_80,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x81c),0);
  iVar1 = *piVar6;
  *(undefined4 *)(param_1 + 0xa0) = uStack_78;
  *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_7c,uStack_80);
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x02b64854(&uStack_90,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x82c),0);
  puVar2 = *(undefined4 **)(_UNK_01a82954 + 0x1a827fc);
  *(undefined4 *)(param_1 + 0xac) = uStack_88;
  *(ulonglong *)(param_1 + 0xa4) = CONCAT44(uStack_8c,uStack_90);
  uVar3 = func_0x01384be4(*puVar2);
  func_0x03258eb8(uVar3,**(undefined4 **)(_UNK_01a82958 + 0x1a82818));
  puVar8 = *(undefined4 **)(_UNK_01a8295c + 0x1a8282c);
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  uVar3 = func_0x01384be4(*puVar8);
  puVar9 = *(undefined4 **)(_UNK_01a82960 + 0x1a82844);
  func_0x02450660(uVar3,*puVar9);
  puVar2 = *(undefined4 **)(_UNK_01a82964 + 0x1a82854);
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  uVar3 = func_0x01384be4(*puVar2);
  puVar7 = *(undefined4 **)(_UNK_01a82968 + 0x1a8286c);
  func_0x0328e950(uVar3,*puVar7);
  uVar4 = *puVar8;
  *(undefined4 *)(param_1 + 0xe0) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x02450660(uVar3,*puVar9);
  uVar4 = *puVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  uVar3 = func_0x01384be4(uVar4);
  func_0x0328e950(uVar3,*puVar7);
  uVar4 = **(undefined4 **)(_UNK_01a8296c + 0x1a828b0);
  *(undefined4 *)(param_1 + 0xe8) = uVar3;
  *(undefined4 *)(param_1 + 0xec) = uVar4;
  func_0x02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar3 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x01ca9008(iVar1,uVar3,0);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  return;
}



// ===== FAT.MineCartActivity$$SetupFresh RVA 0x1a72970 =====

void FUN_01a82970(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x82ef,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_1 + 0x44);
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = *(undefined4 *)(iVar2 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01cf6408(iVar1,uVar3,0);
    *(undefined4 *)(param_1 + 0x48) = uVar3;
    func_0x01a82a80(param_1);
    func_0x01a82edc(param_1);
    func_0x01a833ec(param_1);
    func_0x01a83624(param_1);
    func_0x01a83720(param_1);
    func_0x01a83820(param_1);
    func_0x01a838e4(param_1);
    func_0x01a83990(param_1,0);
    uStack_20 = *(undefined8 *)(param_1 + 0x8c);
    uStack_18 = *(undefined4 *)(param_1 + 0x94);
    func_0x02b64cc4(&uStack_20,0,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x82ef,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MineCartActivity$$_InitBoardData RVA 0x1a72a80 =====

/* WARNING: Removing unreachable block (ram,0x01a82d34) */
/* WARNING: Removing unreachable block (ram,0x01a82d40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a82a80(int param_1)

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
  int *piVar11;
  int unaff_r9;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_01a82ea8 + 0x1a82a98);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a82eac + 0x1a82aac));
    func_0x01384978(*(undefined4 *)(_UNK_01a82eb0 + 0x1a82ab8));
    func_0x01384978(*(undefined4 *)(_UNK_01a82eb4 + 0x1a82ac4));
    func_0x01384978(*(undefined4 *)(_UNK_01a82eb8 + 0x1a82ad0));
    func_0x01384978(*(undefined4 *)(_UNK_01a82ebc + 0x1a82adc));
    func_0x01384978(*(undefined4 *)(_UNK_01a82ec0 + 0x1a82ae8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x82f1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x82f1,0);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar8 = FUN_01a824c4(param_1);
  iVar1 = 0;
  if (iVar8 != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    unaff_r9 = iVar8;
  }
  if (iVar8 == 0 || iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01a82ec4 + 0x1a82b9c));
  piVar10 = *(int **)(_UNK_01a82ec8 + 0x1a82bb4);
  piVar11 = *(int **)(_UNK_01a82ecc + 0x1a82bbc);
  puVar12 = *(undefined4 **)(_UNK_01a82ed0 + 0x1a82bc4);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01a82c1c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01a82c1c:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01a82c90;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01a82c90:
    uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    func_0x02f622a4(*(undefined4 *)(param_1 + 0xb4),uVar9,*puVar12);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01a82ed4 + 0x1a82cd4)) {
          puVar12 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_01a82d1c;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar4 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a82ed4 + 0x1a82cd4),0);
LAB_01a82d1c:
    (*(code *)*puVar12)(piVar2,puVar12[1]);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x3c);
  uVar9 = *(undefined4 *)(param_1 + 0xb4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01cc1cc8(iVar1,uVar9,0);
  func_0x01a850b8(param_1,*(undefined4 *)(unaff_r9 + 0x14),1);
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020da680(&uStack_28,iVar1,0);
  *(undefined4 *)(param_1 + 0xc0) = uStack_24;
  return;
}



// ===== FAT.MineCartActivity$$_InitStartItem RVA 0x1a72edc =====

/* WARNING: Removing unreachable block (ram,0x01a83294) */
/* WARNING: Removing unreachable block (ram,0x01a832a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a82edc(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  int unaff_r6;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01a833a0 + 0x1a82ef4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a833a4 + 0x1a82f08));
    func_0x01384978(*(undefined4 *)(_UNK_01a833a8 + 0x1a82f14));
    func_0x01384978(*(undefined4 *)(_UNK_01a833ac + 0x1a82f20));
    func_0x01384978(*(undefined4 *)(_UNK_01a833b0 + 0x1a82f2c));
    func_0x01384978(*(undefined4 *)(_UNK_01a833b4 + 0x1a82f38));
    func_0x01384978(*(undefined4 *)(_UNK_01a833b8 + 0x1a82f44));
    func_0x01384978(*(undefined4 *)(_UNK_01a833bc + 0x1a82f50));
    func_0x01384978(*(undefined4 *)(_UNK_01a833c0 + 0x1a82f5c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x82f8,0);
  if (iVar1 == 0) {
    iVar2 = FUN_01a824c4(param_1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_1 + 0x44);
      unaff_r6 = iVar2;
    }
    if (iVar2 == 0 || iVar1 == 0) {
      return;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x40);
    uVar11 = *(undefined4 *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01cdef00(iVar1,uVar11,0,0);
    iVar2 = *(int *)(unaff_r6 + 0x28);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_01a833c4 + 0x1a83030));
    piVar12 = *(int **)(_UNK_01a833c8 + 0x1a83048);
    piVar13 = *(int **)(_UNK_01a833cc + 0x1a83050);
LAB_01a8304c:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01a830a8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar12,0);
LAB_01a830a8:
    iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar2 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01a833d0 + 0x1a830dc)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_01a83124;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01a833d0 + 0x1a830dc),0);
LAB_01a83124:
      uVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (*(int *)(*piVar13 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x02565a88(uVar11,0);
      if (iVar2 != 0) {
        uVar11 = *(undefined4 *)(iVar2 + 8);
        uVar7 = *(undefined4 *)(iVar2 + 0xc);
        iVar2 = **(int **)(_UNK_01a833d4 + 0x1a83170);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = **(int **)(_UNK_01a833d8 + 0x1a83194);
        }
        uVar9 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x180);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = **(undefined4 **)(_UNK_01a833dc + 0x1a831b4);
        uStack_2c = **(undefined4 **)(_UNK_01a833e0 + 27800000);
        uStack_34 = 0x213;
        uStack_28 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uVar11 = func_0x01cdcbac(iVar1,uVar11,uVar7,uVar9);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdf088(iVar1,uVar11,0);
      }
      goto LAB_01a8304c;
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_01a833e4 + 0x1a83234)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xc0);
            goto LAB_01a8327c;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01a833e4 + 0x1a83234),0);
LAB_01a8327c:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_01cdf07c + 0x1cdefe8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cdf080 + 0x1cdeffc),0);
      *pcVar8 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x54e,0);
    if (iVar2 == 0) {
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x036890ec(&stack0xffffffe8,iVar1,**(undefined4 **)(_UNK_01cdf084 + 0x1cdf06c));
      return;
    }
    iVar2 = func_0x0229f13c(0x54e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x82f8,0);
    iVar1 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,iVar1,0);
  iVar10 = *(int *)(iVar2 + 8);
  uVar11 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
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



// ===== FAT.MineCartActivity$$_RefreshPopupInfo RVA 0x1a733ec =====

void FUN_01a833ec(int *param_1)

{
  int iVar1;
  int iStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  int iStack_20;
  
  uStack_28 = 0;
  iStack_20 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  iVar1 = func_0x0229f06c(0x82f9,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 != 0) {
      iVar1 = param_1[0x11];
      uStack_28 = *(undefined8 *)(param_1 + 0x23);
      iStack_20 = param_1[0x25];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x34),param_1,0,1,0);
      iVar1 = param_1[0x11];
      uStack_28 = *(undefined8 *)(param_1 + 0x26);
      iStack_20 = param_1[0x28];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x30),param_1,0,0,0);
      iVar1 = param_1[0x11];
      uStack_28 = *(undefined8 *)(param_1 + 0x29);
      iStack_20 = param_1[0x2b];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x2c),param_1,0,0,0);
      iStack_30 = param_1[0x15];
      iStack_2c = param_1[0x16];
      iVar1 = param_1[0x11];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_30,*(undefined4 *)(iVar1 + 0x18),0);
      iStack_30 = param_1[0x19];
      iStack_2c = param_1[0x1a];
      iVar1 = param_1[0x11];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_30,*(undefined4 *)(iVar1 + 0x3c),0);
      iStack_30 = param_1[0x17];
      iStack_2c = param_1[0x18];
      iVar1 = param_1[0x11];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_30,*(undefined4 *)(iVar1 + 0x40),0);
      iStack_30 = param_1[0x1f];
      iStack_2c = param_1[0x20];
      iVar1 = param_1[0x11];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_30,*(undefined4 *)(iVar1 + 0x1c),0);
      iVar1 = param_1[0x11];
      iStack_30 = param_1[0x1b];
      iStack_2c = param_1[0x1c];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_30,*(undefined4 *)(iVar1 + 0x14),0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x82f9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MineCartActivity$$_RefreshItemOutputType RVA 0x1a73624 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a83624(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
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
  
  pcVar5 = (char *)(_UNK_01a83718 + 0x1a83638);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8371c + 0x1a8364c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8302,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8302,0);
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
  pcVar2 = (char *)FUN_01a824c4(param_1);
  iVar1 = 0;
  if (pcVar2 != (char *)0x0) {
    iVar1 = *(int *)(param_1 + 0x44);
    pcVar5 = pcVar2;
  }
  if (pcVar2 != (char *)0x0 && iVar1 != 0) {
    iVar1 = *(int *)(pcVar5 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(pcVar5 + 0x24);
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar6 + 0xc);
    iVar6 = iVar1;
    if (0 < iVar1) {
      iVar6 = iVar3;
    }
    if (iVar6 < 1) {
      if (iVar3 < 1) {
        if (iVar1 < 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 2;
        }
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 3;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar7;
    return;
  }
  return;
}



// ===== FAT.MineCartActivity$$_RefreshSpawnBonusHandler RVA 0x1a73720 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a83720(int param_1)

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
  
  pcVar7 = (char *)(_UNK_01a83814 + 0x1a83734);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a83818 + 0x1a83748));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8304,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8304,0);
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
  iVar1 = func_0x01a85abc(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc4) == 0) {
    uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_01a8381c + 0x1a837bc));
    func_0x021582ec(uVar10,param_1,0);
    *(undefined4 *)(param_1 + 0xc4) = uVar10;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  piVar6 = *(int **)(param_1 + 0xc4);
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



// ===== FAT.MineCartActivity$$_InitBoardMoveHandler RVA 0x1a73820 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a83820(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01a838d8 + 0x1a83838);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a838dc + 0x1a8384c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8307,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8307,0);
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
  uVar2 = *(undefined4 *)(param_1 + 0xc0);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01a838e0 + 0x1a838ac));
  uStack_20 = 0;
  func_0x02c06bbc(uVar5,param_1,1,uVar2);
  *(undefined4 *)(param_1 + 0xb8) = uVar5;
  return;
}



// ===== FAT.MineCartActivity$$_InitBoardExtremeHandler RVA 0x1a738e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a838e4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01a83984 + 0x1a838f8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a83988 + 0x1a8390c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8308,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8308,0);
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
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01a8398c + 0x1a83964));
  func_0x02c05f90(uVar5,param_1,1,0);
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  return;
}



// ===== FAT.MineCartActivity$$_RefreshRoundInfo RVA 0x1a73990 =====

void FUN_01a83990(int param_1,int param_2)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8309,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8309,0);
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
  if (param_2 != 0) {
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  }
  func_0x01a86fcc(param_1);
  iVar1 = func_0x0229f06c(0x8310,0);
  if (iVar1 == 0) {
    iVar3 = func_0x01a85abc(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0xc4);
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
    iVar1 = func_0x0229f13c(0x8310,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
  return;
}



// ===== FAT.MineCartActivity$$SaveSetup RVA 0x1a73a08 =====

/* WARNING: Possible PIC construction at 0x01a83ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a83af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a83b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a83b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a83b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a83bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a83be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a83c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a83c48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01a83c1c) */
/* WARNING: Removing unreachable block (ram,0x01a83c38) */
/* WARNING: Removing unreachable block (ram,0x01a83c3c) */
/* WARNING: Removing unreachable block (ram,0x01a83bec) */
/* WARNING: Removing unreachable block (ram,0x01a83c08) */
/* WARNING: Removing unreachable block (ram,0x01a83c0c) */
/* WARNING: Removing unreachable block (ram,0x01a83bbc) */
/* WARNING: Removing unreachable block (ram,0x01a83bd8) */
/* WARNING: Removing unreachable block (ram,0x01a83bdc) */
/* WARNING: Removing unreachable block (ram,0x01a83b8c) */
/* WARNING: Removing unreachable block (ram,0x01a83ba8) */
/* WARNING: Removing unreachable block (ram,0x01a83bac) */
/* WARNING: Removing unreachable block (ram,0x01a83b5c) */
/* WARNING: Removing unreachable block (ram,0x01a83b78) */
/* WARNING: Removing unreachable block (ram,0x01a83b7c) */
/* WARNING: Removing unreachable block (ram,0x01a83b2c) */
/* WARNING: Removing unreachable block (ram,0x01a83b48) */
/* WARNING: Removing unreachable block (ram,0x01a83b4c) */
/* WARNING: Removing unreachable block (ram,0x01a83afc) */
/* WARNING: Removing unreachable block (ram,0x01a83b18) */
/* WARNING: Removing unreachable block (ram,0x01a83b1c) */
/* WARNING: Removing unreachable block (ram,0x01a83acc) */
/* WARNING: Removing unreachable block (ram,0x01a83ae8) */
/* WARNING: Removing unreachable block (ram,0x01a83aec) */
/* WARNING: Removing unreachable block (ram,0x01a83c4c) */
/* WARNING: Removing unreachable block (ram,0x01a83c68) */
/* WARNING: Removing unreachable block (ram,0x01a83c6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a83a08(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01a83c80 + 0x1a83a20);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a83c84 + 0x1a83a34));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8311,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8311,0);
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
  uVar5 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0x48),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_24 = *(int **)(_UNK_01a83c88 + 0x1a83ac8);
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



// ===== FAT.MineCartActivity$$LoadSetup RVA 0x1a73c8c =====

/* WARNING: Removing unreachable block (ram,0x01a839ec) */
/* WARNING: Removing unreachable block (ram,0x01a839e8) */
/* WARNING: Removing unreachable block (ram,0x01a839f0) */

void FUN_01a83c8c(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar2 = func_0x0229f06c(0x8315,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8315,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = func_0x01c23c30(0,uVar3,0);
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  uVar5 = func_0x01c23c30(1,uVar3,0);
  *(undefined4 *)(param_1 + 200) = uVar5;
  uVar5 = func_0x01c23c30(2,uVar3,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  uVar5 = func_0x01c23c30(3,uVar3,0);
  *(undefined4 *)(param_1 + 0xcc) = uVar5;
  uVar5 = func_0x01c23c30(4,uVar3,0);
  *(undefined4 *)(param_1 + 0xd4) = uVar5;
  uVar5 = func_0x01c23c30(5,uVar3,0);
  *(undefined4 *)(param_1 + 0xc0) = uVar5;
  uVar1 = func_0x01c23b88(6,uVar3,0);
  *(undefined1 *)(param_1 + 0xb0) = uVar1;
  uVar1 = func_0x01c23b88(7,uVar3,0);
  *(undefined1 *)(param_1 + 0xb1) = uVar1;
  uVar1 = func_0x01c23b88(8,uVar3,0);
  *(undefined1 *)(param_1 + 0xb2) = uVar1;
  uVar5 = func_0x01c23c30(9,uVar3,0);
  *(undefined4 *)(param_1 + 0xd0) = uVar5;
  FUN_01a833ec(param_1);
  func_0x01a83de0(param_1);
  FUN_01a83624(param_1);
  iVar2 = func_0x0229f06c(0x8309,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8309,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,0,0);
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
  func_0x01a86fcc(param_1);
  iVar2 = func_0x0229f06c(0x8310,0);
  if (iVar2 == 0) {
    iVar4 = func_0x01a85abc(param_1);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = *(int *)(param_1 + 0xc4);
    }
    param_1 = iVar2;
    if (iVar4 == 0 || param_1 == 0) {
      return;
    }
    iVar2 = func_0x0229f06c(0x5b3,0);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar2 = func_0x0229f13c(0x5b3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8310,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3);
  return;
}



// ===== FAT.MineCartActivity$$_RefreshAllItemIdList RVA 0x1a73de0 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a83de0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_01a8413c + 0x1a83df4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a84140 + 0x1a83e08));
    func_0x01384978(*(undefined4 *)(_UNK_01a84144 + 0x1a83e14));
    func_0x01384978(*(undefined4 *)(_UNK_01a84148 + 0x1a83e20));
    func_0x01384978(*(undefined4 *)(_UNK_01a8414c + 0x1a83e2c));
    func_0x01384978(*(undefined4 *)(_UNK_01a84150 + 0x1a83e38));
    func_0x01384978(*(undefined4 *)(_UNK_01a84154 + 0x1a83e44));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8319,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8319,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    iVar1 = func_0x0245495c(iVar8,uVar10,&uStack_30,uVar6,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar8 = *(int *)(param_1 + 0x44);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar1 = 0;
  if (iVar8 != 0) {
    iVar1 = *(int *)(iVar8 + 0x38);
  }
  if (iVar8 == 0 || iVar1 == 0) {
    return iVar1;
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01a84158 + 0x1a83ed8));
  piVar9 = *(int **)(_UNK_01a8415c + 0x1a83eec);
  piVar11 = *(int **)(_UNK_01a84160 + 0x1a83ef4);
  puVar12 = *(undefined4 **)(_UNK_01a84164 + 0x1a83efc);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar9) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01a83f54;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_01a83f54:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01a83fc8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01a83fc8:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    func_0x02f622a4(*(undefined4 *)(param_1 + 0xb4),uVar10,*puVar12);
  } while( true );
  iVar1 = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01a84168 + 0x1a84008)) {
          puVar12 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_01a84050;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar4 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a84168 + 0x1a84008),0);
LAB_01a84050:
    iVar1 = (*(code *)*puVar12)(piVar2,puVar12[1]);
  }
  return iVar1;
}



// ===== FAT.MineCartActivity$$ResEnumerate RVA 0x1a74170 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a84170(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01a84220 + 0x1a84184);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a84224 + 0x1a84198));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x831a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x831a,0);
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a84228 + 0x1a841f0));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
  uVar5 = func_0x0245057c(0);
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.MineCartActivity.<ResEnumerate>d__31$$.ctor RVA 0x1a7422c =====

void FUN_01a8422c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x0245057c(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.MineCartActivity$$WhenEnd RVA 0x1a74254 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a84254(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_01a84488 + 0x1a8426c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8448c + 0x1a84280));
    func_0x01384978(*(undefined4 *)(_UNK_01a84490 + 0x1a8428c));
    func_0x01384978(*(undefined4 *)(_UNK_01a84494 + 0x1a84298));
    func_0x01384978(*(undefined4 *)(_UNK_01a84498 + 0x1a842a4));
    func_0x01384978(*(undefined4 *)(_UNK_01a8449c + 0x1a842b0));
    *pcVar2 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x8325,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01a824c4(param_1);
    if (iVar1 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xfc);
      uVar3 = *(undefined4 *)(param_1 + 0xa0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(iVar1,uVar3,0xffffffff,0,0);
      if (*(int *)(**(int **)(_UNK_01a844a0 + 0x1a84370) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x028c8d78(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_20,iVar1,&iStack_24,**(undefined4 **)(_UNK_01a844a4 + 0x1a843ac));
      uVar3 = func_0x02c0389c(iStack_24,*(undefined4 *)(param_1 + 0x3c),0);
      func_0x019b0c40(param_1,uVar3,0);
      iVar1 = iStack_24;
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) < 1) {
        func_0x03633b24(&uStack_20,**(undefined4 **)(_UNK_01a844ac + 0x1a84470));
      }
      else {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar4 = *(undefined4 *)(param_1 + 0xac);
        iVar1 = *(int *)(iVar1 + 0xfc);
        uStack_30 = uStack_20;
        uStack_2c = uStack_1c;
        uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01a844a8 + 0x1a84424),&uStack_30);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7437c(iVar1,uVar4,0xffffffff,uVar3,0);
      }
    }
    func_0x01a844b0(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0x8325,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MineCartActivity$$_ClearBoardData RVA 0x1a744b0 =====

void FUN_01a844b0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8326,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8326,0);
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
  func_0x01a853bc(param_1);
  if (*(int *)(param_1 + 0x3c) != 0) {
    func_0x021421a8(*(int *)(param_1 + 0x3c),param_1,0);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0xb4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01cc1cc8(iVar1,uVar4,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// ===== FAT.MineCartActivity$$get_Visual RVA 0x1a745b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a845b0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8328,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8328,0);
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
  return *(undefined4 *)(param_1 + 0x90);
}



// ===== FAT.MineCartActivity$$get_VisualBoard RVA 0x1a74604 =====

void FUN_01a84604(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x58);
  *param_1 = *(undefined4 *)(param_2 + 0x54);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.MineCartActivity$$get_VisualLoading RVA 0x1a74618 =====

void FUN_01a84618(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x60);
  *param_1 = *(undefined4 *)(param_2 + 0x5c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.MineCartActivity$$get_VisualHelp RVA 0x1a7462c =====

void FUN_01a8462c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  *param_1 = *(undefined4 *)(param_2 + 100);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.MineCartActivity$$get_VisualBanner RVA 0x1a74640 =====

void FUN_01a84640(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  *param_1 = *(undefined4 *)(param_2 + 0x6c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.MineCartActivity$$get_VisualMilestoneReward RVA 0x1a74654 =====

void FUN_01a84654(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x78);
  *param_1 = *(undefined4 *)(param_2 + 0x74);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.MineCartActivity$$get_VisualHandbook RVA 0x1a74668 =====

void FUN_01a84668(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  *param_1 = *(undefined4 *)(param_2 + 0x7c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.MineCartActivity$$get_VisualRewardTips RVA 0x1a7467c =====

void FUN_01a8467c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x88);
  *param_1 = *(undefined4 *)(param_2 + 0x84);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.MineCartActivity$$get_StartPopup RVA 0x1a74690 =====

void FUN_01a84690(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x94);
  *param_1 = uVar1;
  return;
}



// ===== FAT.MineCartActivity$$get_EndPopup RVA 0x1a746a4 =====

void FUN_01a846a4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xa0);
  *param_1 = uVar1;
  return;
}



// ===== FAT.MineCartActivity$$get_ConvertPopup RVA 0x1a746b8 =====

void FUN_01a846b8(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xac);
  *param_1 = uVar1;
  return;
}



// ===== FAT.MineCartActivity$$Open RVA 0x1a746cc =====

void FUN_01a846cc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8329,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8329,0);
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
  func_0x02b57d14(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),
                  *(undefined4 *)(param_1 + 0x54));
  return;
}



// ===== FAT.MineCartActivity$$Close RVA 0x1a74748 =====

void FUN_01a84748(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x832a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x832a,0);
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
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  func_0x02b57fac(param_1,*(undefined4 *)(iVar1 + 0xc),0,0);
  return;
}



// ===== FAT.MineCartActivity$$FAT.IBoardEntry.BoardEntryAsset RVA 0x1a747d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a847d0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01a84898 + 0x1a847e8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8489c + 0x1a847fc));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x832b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = func_0x02b617fc(iVar1,0);
    func_0x02b63e8c(&uStack_18,**(undefined4 **)(_UNK_01a848a0 + 0x1a84880),&uStack_14,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x832b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.MineCartActivity$$IsItemUnlock RVA 0x1a748a4 =====

/* WARNING: Possible PIC construction at 0x01cc4568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc456c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a848a4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  uint uStack_14;
  
  iVar1 = func_0x0229f06c(0x832c,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x3c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01cc45c8 + 0x1cc4504);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc45cc + 0x1cc4518),param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0x2ca,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02451924(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01cc45d0 + 0x1cc4594))
      ;
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = (uint)((uStack_14 & 0xfffffffe) == 2);
      }
      return uVar2;
    }
    iVar1 = func_0x0229f13c(0x2ca,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cc456c;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x832c,0);
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
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
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
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  uVar2 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar2;
}



// ===== FAT.MineCartActivity$$GetAllItemIdList RVA 0x1a74934 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a84934(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x832d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x832d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021a9f78 + 0x21a9e98);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021a9f7c + 0x21a9eac),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a9f80 + 0x21a9f68));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xb4);
}



// ===== FAT.MineCartActivity$$_GetCurUnlockItemMaxLevel RVA 0x1a74988 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a84988(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
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
  
  pcVar5 = (char *)(_UNK_01a84aa8 + 0x1a8499c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a84aac + 0x1a849b0));
    func_0x01384978(*(undefined4 *)(_UNK_01a84ab0 + 0x1a849bc));
    *pcVar5 = '\x01';
  }
  iVar6 = 0;
  iVar1 = func_0x0229f06c(0x832e,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 != 0) {
      puVar9 = *(undefined4 **)(_UNK_01a84ab4 + 0x1a84a3c);
      iVar6 = 0;
      iVar1 = 0;
      while( true ) {
        iVar8 = param_1[0x2d];
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar8 + 0xc) <= iVar1) break;
        iVar8 = param_1[0x2d];
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar7 = func_0x03259410(iVar8,iVar1,*puVar9);
        iVar2 = FUN_01a848a4(param_1,uVar7);
        iVar3 = iVar1 + 1;
        iVar8 = iVar3;
        if (iVar1 < iVar6) {
          iVar8 = iVar6;
        }
        iVar1 = iVar3;
        if (iVar2 != 0) {
          iVar6 = iVar8;
        }
      }
    }
    return iVar6;
  }
  iVar6 = func_0x0229f13c(0x832e,0);
  if (iVar6 == 0) {
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
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar1 = *(int *)(iVar6 + 8);
  uVar7 = *(undefined4 *)(iVar6 + 0xc);
  iVar6 = *(int *)(iVar6 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar6 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar1,uVar7,&uStack_30,uVar4,0,0);
  iVar6 = func_0x0245498c(&uStack_30,0,0);
  return iVar6;
}



// ===== FAT.MineCartActivity$$FAT.IBoardActivityHandbook.CheckIsBoardItem RVA 0x1a74ab8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a84ab8(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar5 = (char *)(_UNK_01a84b8c + 0x1a84ad0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a84b90 + 0x1a84ae4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x832f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x832f,0);
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
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if ((0 < param_2) && (iVar1 != 0)) {
    iVar1 = param_1[0x2d];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = func_0x030fe230(*(undefined4 *)(iVar1 + 8),param_2,0);
      uVar2 = (uint)(iVar1 != -1);
    }
    return uVar2;
  }
  return 0;
}



// ===== FAT.MineCartActivity$$FAT.IBoardActivityHandbook.OnNewItemUnlock RVA 0x1a74b98 =====

void FUN_01a84b98(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x8330,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8330,0);
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
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_01a84988(param_1);
  param_1[0x13] = iVar1;
  return;
}



// ===== FAT.MineCartActivity$$FAT.IBoardActivityHandbook.OnNewItemShow RVA 0x1a74c10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a84c10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01a84e88 + 0x1a84c2c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a84e8c + 0x1a84c40));
    func_0x01384978(*(undefined4 *)(_UNK_01a84e90 + 0x1a84c4c));
    func_0x01384978(*(undefined4 *)(_UNK_01a84e94 + 0x1a84c58));
    func_0x01384978(*(undefined4 *)(_UNK_01a84e98 + 0x1a84c64));
    func_0x01384978(*(undefined4 *)(_UNK_01a84e9c + 0x1a84c70));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8331,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8331,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 != 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x02116990(iVar1,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *param_1;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    uVar9 = *(undefined4 *)(iVar7 + 0x10);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01a84ea0 + 0x1a84d28)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
          goto LAB_01a84d74;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01a84ea0 + 0x1a84d28),0);
LAB_01a84d74:
    iVar7 = (*(code *)*puVar3)(param_1,uVar9,puVar3[1]);
    if (iVar7 != 0) {
      if (*(int *)(**(int **)(_UNK_01a84ea4 + 0x1a84d9c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar7 = func_0x0300d558(**(undefined4 **)(_UNK_01a84ea8 + 0x1a84db8));
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar7,iVar1,**(undefined4 **)(_UNK_01a84eac + 0x1a84ddc));
      iVar1 = param_1[0x2d];
      *(undefined1 *)((int)param_1 + 0xb1) = 1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = param_1[0x13];
      iVar7 = *(int *)(iVar1 + 0xc);
      iVar1 = FUN_01a824c4(param_1);
      iVar10 = param_1[0xf];
      if (iVar1 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)(iVar1 + 0x1c);
      }
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar10,0);
      uStack_34 = 0;
      if (iVar1 != 0) {
        uStack_34 = *(undefined4 *)(iVar1 + 8);
      }
      iStack_30 = param_1[0x30];
      uStack_38 = (uint)(iVar7 <= iVar2);
      iStack_2c = param_1[0x32] + 1;
      uStack_28 = 0;
      func_0x019b0700(param_1,iVar2,iVar7,uVar9);
    }
  }
  return;
}



// ===== FAT.MineCartActivity$$CheckClaimBoardCategoryReward RVA 0x1a74eb0 =====

undefined4 FUN_01a84eb0(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x8332,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8332,0);
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
  return 0;
}



// ===== FAT.MineCartActivity$$CheckClaimBoardHandBookAllReward RVA 0x1a74f0c =====

undefined4 FUN_01a84f0c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x8333,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8333,0);
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
  return 0;
}



// ===== FAT.MineCartActivity$$ProcessAllUnlockReward RVA 0x1a74f60 =====

undefined4 FUN_01a84f60(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x8334,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8334,0);
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
  return 0;
}



// ===== FAT.MineCartActivity$$FAT.IBoardArchive.get_Feature RVA 0x1a74fb4 =====

undefined4 FUN_01a84fb4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x8335,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8335,0);
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
  return 0x5a;
}



// ===== FAT.MineCartActivity$$FAT.IBoardArchive.SetBoardData RVA 0x1a75008 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a85008(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x8336,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8336,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 != 0) {
    func_0x01a850b8(param_1,*(undefined4 *)(param_2 + 0x38),0);
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0214a9e8(iVar1,param_2,0,0);
    FUN_01a83720(param_1);
    FUN_01a83820(param_1);
    pcVar3 = (char *)(_UNK_01a83984 + 0x1a838f8);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01a83988 + 0x1a8390c));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x8308,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x8308,0);
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
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2);
      return;
    }
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01a8398c + 0x1a83964));
    func_0x02c05f90(uVar5,param_1,1,0);
    *(undefined4 *)(param_1 + 0xbc) = uVar5;
    return;
  }
  return;
}



// ===== FAT.MineCartActivity$$_InitWorld RVA 0x1a750b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a850b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
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
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01a8531c + 0x1a850d8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a85320 + 0x1a850ec));
    func_0x01384978(*(undefined4 *)(_UNK_01a85324 + 0x1a850f8));
    func_0x01384978(*(undefined4 *)(_UNK_01a85328 + 0x1a85104));
    func_0x01384978(*(undefined4 *)(_UNK_01a8532c + 0x1a85110));
    func_0x01384978(*(undefined4 *)(_UNK_01a85330 + 0x1a8511c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x82f2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x82f2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    uVar2 = func_0x0217f950(iVar1,param_1,param_2,param_3);
    return uVar2;
  }
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a85334 + 0x1a85184));
  func_0x02143488(uVar2,0);
  puVar3 = *(undefined4 **)(_UNK_01a85338 + 0x1a851a0);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = func_0x01384be4(*puVar3);
  func_0x024500b4(uVar2,param_1,**(undefined4 **)(_UNK_01a8533c + 0x1a851c0),0);
  uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01a85340 + 0x1a851d4));
  func_0x0214d6c8(uVar4,uVar2,0,0);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar1 + 0x4c);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a85344 + 0x1a85214));
  func_0x01db7f44(iVar1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 8) = 8;
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  func_0x01db7f4c(iVar10,iVar1,0);
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
  uStack_24 = 0;
  uStack_28 = param_3;
  func_0x01dbe654(iVar1,param_1,uVar2,param_2);
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_0214219c + 0x214211c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021421a0 + 0x2142130),param_1,0);
    *pcVar8 = '\x01';
  }
  iVar10 = func_0x0229f06c(0x5bec,0);
  if (iVar10 != 0) {
    iVar10 = func_0x0229f13c(0x5bec,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar10 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,param_1,0);
    iVar9 = *(int *)(iVar10 + 8);
    uVar2 = *(undefined4 *)(iVar10 + 0xc);
    iVar1 = *(int *)(iVar10 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    uVar2 = func_0x0245495c(iVar9,uVar2,&uStack_38,uVar4,0,0);
    return uVar2;
  }
  iVar10 = **(int **)(_UNK_021421a4 + 0x2142190);
  piVar5 = *(int **)(iVar1 + 0xa0);
  if (*(int *)(iVar10 + 0x1c) == 0) {
    func_0x0140024c(iVar10);
  }
  uVar2 = 0;
  if (piVar5 != (int *)0x0) {
    iVar1 = **(int **)(iVar10 + 0x1c);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0(iVar1);
    }
    iVar9 = *piVar5;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar1) {
          puVar3 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xe0);
          goto LAB_02f625c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar5,iVar1,4);
LAB_02f625c8:
    iVar1 = (*(code *)*puVar3)(piVar5,param_1,puVar3[1]);
    if (iVar1 == 0) {
      iVar1 = **(int **)(iVar10 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar10 = *piVar5;
      uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xd0);
            goto LAB_02f62650;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar5,iVar1,2);
LAB_02f62650:
      (*(code *)*puVar3)(piVar5,param_1,puVar3[1]);
      uVar2 = 1;
    }
  }
  return uVar2;
}



// ===== FAT.MineCartActivity$$FAT.IBoardArchive.FillBoardData RVA 0x1a75348 =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a85348(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x8337,0);
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
    iVar1 = func_0x0229f13c(0x8337,0);
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



// ===== FAT.MineCartActivity$$_ClearSpawnBonusHandler RVA 0x1a753bc =====

void FUN_01a853bc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8327,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8327,0);
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
  iVar1 = func_0x01a85abc(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar4,0);
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  return;
}



// ===== FAT.MineCartActivity$$FAT.IBoardActivityRowConf.GetRowConfIdList RVA 0x1a75460 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a85460(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x8338,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8338,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = func_0x01ca90d0(iVar1,param_2,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x14);
  }
  return uVar4;
}



// ===== FAT.MineCartActivity$$FAT.IBoardActivityRowConf.GetRowConfStr RVA 0x1a75500 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a85500(undefined4 param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01a855d8 + 0x1a85518);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a855dc + 0x1a8552c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x833a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x833a,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = 0;
  iVar1 = func_0x01ca92c4(iVar1,param_2,0);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x14);
  }
  iVar1 = **(int **)(_UNK_01a855e0 + 0x1a855d0);
  if (iVar3 != 0) {
    iVar1 = iVar3;
  }
  return iVar1;
}



// ===== FAT.MineCartActivity$$FAT.IBoardActivityRowConf.GetCycleStartRowId RVA 0x1a755e4 =====

undefined4 FUN_01a855e4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x833c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x833c,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = func_0x01ca90d0(iVar1,param_2,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x18);
  }
  return uVar4;
}



// ===== FAT.MineCartActivity$$FAT.IBoardMoveAdapter.GetMoveNeedRowCount RVA 0x1a75684 =====

undefined4 FUN_01a85684(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x833d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x833d,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = func_0x01ca90d0(iVar1,param_2,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  }
  return uVar4;
}



// ===== FAT.MineCartActivity$$FAT.IBoardMoveAdapter.GetMoveCountByRowId RVA 0x1a75724 =====

undefined4 FUN_01a85724(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x833e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x833e,0);
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



// ===== FAT.MineCartActivity$$FAT.IBoardMoveAdapter.GetBoard RVA 0x1a75780 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a85780(int *param_1)

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
  
  iVar2 = func_0x0229f06c(0x833f,0);
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
    iVar2 = func_0x0229f13c(0x833f,0);
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



// ===== FAT.MineCartActivity$$FAT.IBoardMoveAdapter.OnDepthIndexUpdate RVA 0x1a75800 =====

void FUN_01a85800(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x8340,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8340,0);
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
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}



// ===== FAT.MineCartActivity$$FAT.IBoardExtremeAdapter.GetBoard RVA 0x1a7585c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a8585c(int *param_1)

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
  
  iVar2 = func_0x0229f06c(0x8341,0);
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
    iVar2 = func_0x0229f13c(0x8341,0);
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



// ===== FAT.MineCartActivity$$FAT.IBoardExtremeAdapter.CanCheckExtreme RVA 0x1a758dc =====

uint FUN_01a858dc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8342,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8342,0);
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
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar2 = func_0x02c07260(*(int *)(param_1 + 0xb8),0);
    return uVar2 ^ 1;
  }
  return 1;
}



// ===== FAT.MineCartActivity$$CheckBoardExtremeCase RVA 0x1a7594c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8594c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8343,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xbc);
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
    iVar1 = func_0x0229f13c(0x8343,0);
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



// ===== FAT.MineCartActivity$$_OnBoardItemChange RVA 0x1a759b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a859b4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x82f4,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xb8) != 0) {
      func_0x02c06e70(*(int *)(param_1 + 0xb8),0);
    }
    param_1 = *(int *)(param_1 + 0xbc);
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
    iVar1 = func_0x0229f13c(0x82f4,0);
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



// ===== FAT.MineCartActivity$$FAT.IActivityUpdate.ActivityUpdate RVA 0x1a75a30 =====

void FUN_01a85a30(int param_1,float param_2)

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
  
  iVar1 = func_0x0229f06c(0x8344,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xb8) != 0) {
      func_0x02c07148(*(int *)(param_1 + 0xb8),param_2,0);
    }
    param_1 = *(int *)(param_1 + 0xbc);
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
    iVar1 = func_0x0229f13c(0x8344,0);
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



// ===== FAT.MineCartActivity$$IsEnergyType RVA 0x1a75abc =====

uint FUN_01a85abc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8305,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8305,0);
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
  return (uint)((*(uint *)(param_1 + 0x50) & 0xfffffffd) == 1);
}



// ===== FAT.MineCartActivity$$IsOrderType RVA 0x1a75b20 =====

uint FUN_01a85b20(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8345,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8345,0);
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
  return (uint)((*(uint *)(param_1 + 0x50) & 0xfffffffe) == 2);
}



// ===== FAT.MineCartActivity$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x1a75b84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a85b84(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_01a85fa0 + 0x1a85ba4);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a85fa4 + 0x1a85bbc));
    func_0x01384978(*(undefined4 *)(_UNK_01a85fa8 + 0x1a85bc8));
    *pcVar11 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x8346,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8346,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  iVar1 = FUN_01a85b20(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_01a85fac + 0x1a85c60)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0x268);
        goto LAB_01a85ca8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01a85fac + 0x1a85c60),0x35);
LAB_01a85ca8:
  iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
  if (iVar1 != 0) {
    return 0;
  }
  piVar10 = *(int **)(_UNK_01a85fb0 + 0x1a85cd0);
  uStack_2c = 0;
  uStack_28 = 0;
  iVar1 = *piVar10;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar10;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01e4b23c(iVar1,param_2,0);
  if (iVar1 == 0) {
LAB_01a85d70:
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
      uVar2 = func_0x01e3e5b8(0,0xc,0);
      func_0x01384bf0();
    }
    else {
      uVar2 = func_0x01e3e5b8(param_2,0xc,0);
    }
    uVar5 = func_0x01e3e5b8(param_2,0xd,0);
    iVar1 = func_0x01a85fb4(param_1,uVar2,&uStack_28,&uStack_2c);
    if ((iVar1 == 0) && (iVar1 = func_0x01a863e0(param_1,uVar5,&uStack_28,&uStack_2c), iVar1 == 0))
    {
      return 0;
    }
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar10;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
    uVar6 = func_0x02b449f8(param_1,0);
    uVar5 = uStack_28;
    uVar2 = uStack_2c;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e4b8f0(iVar1,param_2,uVar6,uVar2,uVar5,0);
    uVar2 = 1;
  }
  else {
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar10;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x01e4b2b0(iVar1,param_2,0);
    iVar4 = func_0x02b449f8(param_1,0);
    if (iVar1 != iVar4) goto LAB_01a85d70;
  }
  uVar5 = func_0x02b449f8(param_1,0);
  iVar1 = func_0x01e4b758(param_2,uVar5,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x01e4b23c(0,param_2,0);
    if (iVar4 != 0) {
      func_0x01384bf0();
      goto LAB_01a85ec4;
    }
  }
  else {
    iVar4 = func_0x01e4b23c(iVar1,param_2,0);
    if (iVar4 != 0) {
LAB_01a85ec4:
      uVar5 = 0;
      iVar4 = func_0x01e4b2b0(iVar1,param_2,0);
      iVar7 = func_0x02b449f8(param_1,0);
      if (iVar4 == iVar7) goto LAB_01a85f84;
    }
  }
  iVar4 = *piVar10;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar10;
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4b3b8(&uStack_34,iVar4,param_2,0);
  uStack_28 = uStack_34;
  uStack_2c = uStack_30;
  uVar8 = func_0x02b449f8(param_1,0);
  uVar6 = uStack_28;
  uVar5 = uStack_2c;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4ba84(iVar1,param_2,uVar8,uVar5,uVar6,0);
  uVar5 = 1;
LAB_01a85f84:
  iVar1 = func_0x01f2a218(0);
  if (iVar1 != 0) {
    uVar2 = uVar5;
  }
  return uVar2;
}



// ===== FAT.MineCartActivity$$GetOrderRewardBR RVA 0x1a75fb4 =====

/* WARNING: Removing unreachable block (ram,0x01a862f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a85fb4(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int unaff_r6;
  int *piVar9;
  int *piVar10;
  
  pcVar7 = (char *)(_UNK_01a863b8 + 0x1a85fd4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a863bc + 0x1a85fec));
    func_0x01384978(*(undefined4 *)(_UNK_01a863c0 + 0x1a85ff8));
    func_0x01384978(*(undefined4 *)(_UNK_01a863c4 + 0x1a86004));
    func_0x01384978(*(undefined4 *)(_UNK_01a863c8 + 0x1a86010));
    *pcVar7 = '\x01';
  }
  uVar8 = 0;
  iVar1 = func_0x0229f06c(0x8347,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    *param_4 = 0;
    iVar2 = FUN_01a824c4(param_1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_1 + 0x44);
      unaff_r6 = iVar2;
    }
    if (iVar2 != 0 && iVar1 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(unaff_r6 + 0x2c);
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01a863cc + 0x1a860dc));
      piVar10 = *(int **)(_UNK_01a863d0 + 0x1a860f8);
      piVar9 = *(int **)(_UNK_01a863d4 + 0x1a86100);
LAB_01a860fc:
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar8 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_01a86158;
          }
          uVar8 = uVar8 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0);
LAB_01a86158:
      iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar2 != 0) {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar8 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar9) {
              puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
              goto LAB_01a861cc;
            }
            uVar8 = uVar8 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar9,0);
LAB_01a861cc:
        uVar5 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01ca9260(iVar1,uVar5,0);
        if (iVar2 != 0) {
          if (*(int *)(iVar2 + 0x1c) == 0) goto LAB_01a86274;
          if (*(int *)(iVar2 + 0x24) <= param_2) {
            *param_3 = *(int *)(iVar2 + 0x20);
            iVar2 = func_0x01457ae8(param_2,*(undefined4 *)(iVar2 + 0x1c));
            if (iVar2 < 2) {
              iVar2 = 1;
            }
            *param_4 = iVar2;
          }
        }
        goto LAB_01a860fc;
      }
LAB_01a86274:
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_01a863d8 + 0x1a86290)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
              goto LAB_01a862d8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01a863d8 + 0x1a86290),0);
LAB_01a862d8:
        (*(code *)*puVar4)(piVar3,puVar4[1]);
      }
      if (*param_3 < 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)(0 < *param_4);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8347,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x02182904(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar8;
}



// ===== FAT.MineCartActivity$$GetOrderRewardBRAct RVA 0x1a763e0 =====

/* WARNING: Removing unreachable block (ram,0x01a8671c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a863e0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int unaff_r6;
  int *piVar9;
  int *piVar10;
  
  pcVar7 = (char *)(_UNK_01a867e4 + 0x1a86400);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a867e8 + 0x1a86418));
    func_0x01384978(*(undefined4 *)(_UNK_01a867ec + 0x1a86424));
    func_0x01384978(*(undefined4 *)(_UNK_01a867f0 + 0x1a86430));
    func_0x01384978(*(undefined4 *)(_UNK_01a867f4 + 0x1a8643c));
    *pcVar7 = '\x01';
  }
  uVar8 = 0;
  iVar1 = func_0x0229f06c(0x8349,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    *param_4 = 0;
    iVar2 = FUN_01a824c4(param_1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_1 + 0x44);
      unaff_r6 = iVar2;
    }
    if (iVar2 != 0 && iVar1 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(unaff_r6 + 0x2c);
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01a867f8 + 0x1a86508));
      piVar10 = *(int **)(_UNK_01a867fc + 0x1a86524);
      piVar9 = *(int **)(_UNK_01a86800 + 0x1a8652c);
LAB_01a86528:
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar8 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_01a86584;
          }
          uVar8 = uVar8 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0);
LAB_01a86584:
      iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar2 != 0) {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar8 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar9) {
              puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
              goto LAB_01a865f8;
            }
            uVar8 = uVar8 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar9,0);
LAB_01a865f8:
        uVar5 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01ca9260(iVar1,uVar5,0);
        if (iVar2 != 0) {
          if (*(int *)(iVar2 + 0x14) == 0) goto LAB_01a866a0;
          if (*(int *)(iVar2 + 0x18) <= param_2) {
            *param_3 = *(int *)(iVar2 + 0x20);
            iVar2 = func_0x01457ae8(param_2,*(undefined4 *)(iVar2 + 0x14));
            if (iVar2 < 2) {
              iVar2 = 1;
            }
            *param_4 = iVar2;
          }
        }
        goto LAB_01a86528;
      }
LAB_01a866a0:
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_01a86804 + 0x1a866bc)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
              goto LAB_01a86704;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01a86804 + 0x1a866bc),0);
LAB_01a86704:
        (*(code *)*puVar4)(piVar3,puVar4[1]);
      }
      if (*param_3 < 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)(0 < *param_4);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8349,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x02182904(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar8;
}



// ===== FAT.MineCartActivity$$TrackOrderGetItem RVA 0x1a7680c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8680c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01a86988 + 0x1a8682c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8698c + 0x1a86844));
    func_0x01384978(*(undefined4 *)(_UNK_01a86990 + 0x1a86850));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x834a,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01a824c4(param_1);
    if (iVar1 != 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01dbb000(iVar2,0);
      uVar6 = 0;
      if (iVar2 != 0) {
        iVar2 = func_0x02139cf4(iVar2,0);
        uVar6 = 0;
        if (iVar2 != 0) {
          uStack_2c = 0;
          uStack_30 = 0;
          func_0x03507d38(&uStack_30,*(undefined4 *)(iVar2 + 8),
                          **(undefined4 **)(_UNK_01a86994 + 0x1a86920));
          uVar6 = uStack_2c;
        }
      }
      uVar7 = *(undefined4 *)(param_1 + 0xc0);
      iVar2 = *(int *)(param_1 + 200);
      uVar5 = *(undefined4 *)(iVar1 + 0x1c);
      uVar3 = func_0x02157e88(param_2,0);
      func_0x019b08b8(param_1,uVar5,uVar6,uVar7,iVar2 + 1,param_2,uVar3,param_3,param_4,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x834a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MineCartActivity$$_SetBonusHandlerDirty RVA 0x1a76998 =====

void FUN_01a86998(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8310,0);
  if (iVar1 == 0) {
    iVar3 = FUN_01a85abc(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0xc4);
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
    iVar1 = func_0x0229f13c(0x8310,0);
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



// ===== FAT.MineCartActivity$$GetCurDropConf RVA 0x1a76a08 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a86a08(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  
  iVar2 = func_0x0229f06c(0x834b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x834b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02259488 + 0x22593a8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0225948c + 0x22593bc),param_1,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
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
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5);
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02259490 + 0x2259478));
    return uVar9;
  }
  uVar9 = func_0x01a86a9c(param_1);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x0229f06c(0x834d,0,0);
  if (iVar7 == 0) {
    pcVar8 = (char *)(_UNK_017fa700 + 0x17fa6a4);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017fa704 + 0x17fa6b8),0);
      func_0x01384978(*(undefined4 *)(_UNK_017fa708 + 0x17fa6c4));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017fa70c + 0x17fa6d8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017fa710 + 0x17fa6f4);
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
    uStack_28 = 0;
    uStack_2c = 0;
    (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
    iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar2 != 0) {
      unaff_r4 = piVar3[0x11];
    }
    bVar1 = true;
    iVar6 = 0;
    if (iVar2 != 0 && unaff_r4 != 0) {
      iVar4 = func_0x03d66780(unaff_r4,uVar9,&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
      uVar5 = uStack_28;
      bVar1 = false;
      iVar6 = unaff_r4;
      if (iVar4 != 0) {
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uStack_28;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uStack_28;
      }
    }
    if ((piVar3[0x12] == 0) ||
       (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
       iVar4 == 0)) {
      uStack_2c = 0;
      iVar4 = (**(code **)(*piVar3 + 0x1a0))
                        (piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
      uVar5 = uStack_2c;
      if (iVar4 != 0) {
        if (iVar2 != 0) {
          if (bVar1) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar6 = func_0x02457d58();
            func_0x03d63f04(iVar6,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74))
            ;
            piVar3[0x11] = iVar6;
          }
          if (iVar6 == 0) {
            func_0x02457d50();
          }
          func_0x03d6491c(iVar6,uVar9,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
        }
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uVar5;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uVar5;
      }
      iVar2 = piVar3[0x12];
      if (iVar2 == 0) {
        if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0)
        {
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
  iVar7 = func_0x0229f13c(0x834d,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_02259380 + 0x225928c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02259384 + 0x22592a0),iVar2,uVar9,0);
    *pcVar8 = '\x01';
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
  if (*(int *)(iVar7 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485238(&uStack_38,uVar9,0);
  iVar6 = *(int *)(iVar7 + 8);
  uVar9 = *(undefined4 *)(iVar7 + 0xc);
  iVar2 = *(int *)(iVar7 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar6,uVar9,&uStack_38,uVar5,0,0);
  uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02259388 + 0x2259370));
  return uVar9;
}



// ===== FAT.MineCartActivity$$_GetCurDropConfId RVA 0x1a76a9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a86a9c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01a86bec + 0x1a86ab4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a86bf0 + 0x1a86ac8));
    func_0x01384978(*(undefined4 *)(_UNK_01a86bf4 + 0x1a86ad4));
    func_0x01384978(*(undefined4 *)(_UNK_01a86bf8 + 0x1a86ae0));
    *pcVar4 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0x834c,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01a824c4(param_1);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0x24);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      if ((0 < iVar5) &&
         (iVar3 = func_0x03005740(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(param_1 + 200),
                                  &uStack_1c,**(undefined4 **)(_UNK_01a86bfc + 0x1a86b78)),
         uVar2 = uStack_1c, iVar3 == 0)) {
        iVar3 = *(int *)(iVar1 + 0x24);
        iVar1 = *(int *)(param_1 + 200);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (iVar1 < iVar5 + -1) {
          uVar2 = **(undefined4 **)(_UNK_01a86c00 + 0x1a86bc4);
          iVar1 = 0;
        }
        else {
          uVar2 = **(undefined4 **)(_UNK_01a86c00 + 0x1a86bc4);
          iVar1 = *(int *)(iVar3 + 0xc) + -1;
        }
        uVar2 = func_0x0364c9b8(iVar3,iVar1,uVar2);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x834c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217493c(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.MineCartActivity$$TrackBonusGetItem RVA 0x1a76c04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a86c04(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01a86d74 + 0x1a86c24);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a86d78 + 0x1a86c38));
    func_0x01384978(*(undefined4 *)(_UNK_01a86d7c + 0x1a86c44));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x834e,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01a824c4(param_1);
    if (iVar1 != 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01dbb000(iVar2,0);
      uVar5 = 0;
      if (iVar2 != 0) {
        iVar2 = func_0x02139cf4(iVar2,0);
        uVar5 = 0;
        if (iVar2 != 0) {
          uStack_2c = 0;
          uStack_30 = 0;
          func_0x03507d38(&uStack_30,*(undefined4 *)(iVar2 + 8),
                          **(undefined4 **)(_UNK_01a86d80 + 0x1a86d14));
          uVar5 = uStack_2c;
        }
      }
      uVar7 = *(undefined4 *)(param_1 + 0xc0);
      iVar2 = *(int *)(param_1 + 200);
      uVar6 = *(undefined4 *)(iVar1 + 0x1c);
      uVar3 = func_0x02157e88(param_2,0);
      func_0x019b0a84(param_1,uVar6,uVar5,uVar7,iVar2 + 1,param_2,uVar3,param_3,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x834e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MineCartActivity$$get_RoundIndex RVA 0x1a76d84 =====

undefined4 FUN_01a86d84(int param_1)

{
  return *(undefined4 *)(param_1 + 200);
}



// ===== FAT.MineCartActivity$$set_RoundIndex RVA 0x1a76d8c =====

void FUN_01a86d8c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 200) = param_2;
  return;
}



// ===== FAT.MineCartActivity$$get_MilestoneNum RVA 0x1a76d94 =====

undefined4 FUN_01a86d94(int param_1)

{
  return *(undefined4 *)(param_1 + 0xcc);
}



// ===== FAT.MineCartActivity$$set_MilestoneNum RVA 0x1a76d9c =====

void FUN_01a86d9c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xcc) = param_2;
  return;
}



// ===== FAT.MineCartActivity$$get_BaseMilestoneNum RVA 0x1a76da4 =====

undefined4 FUN_01a86da4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd0);
}



// ===== FAT.MineCartActivity$$set_BaseMilestoneNum RVA 0x1a76dac =====

void FUN_01a86dac(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  return;
}



// ===== FAT.MineCartActivity$$GetCurRoundConfig RVA 0x1a76db4 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a86db4(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  
  iVar2 = func_0x0229f06c(0x830d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x830d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02258f00 + 0x2258e20);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02258f04 + 0x2258e34),param_1,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
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
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5);
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02258f08 + 0x2258ef0));
    return uVar9;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  uVar9 = func_0x01a86e48(param_1);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x0229f06c(0x830f,0,0);
  if (iVar7 == 0) {
    pcVar8 = (char *)(_UNK_017fb534 + 0x17fb4d8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017fb538 + 0x17fb4ec),0);
      func_0x01384978(*(undefined4 *)(_UNK_017fb53c + 0x17fb4f8));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017fb540 + 0x17fb50c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017fb544 + 0x17fb528);
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
    uStack_28 = 0;
    uStack_2c = 0;
    (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
    iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar2 != 0) {
      unaff_r4 = piVar3[0x11];
    }
    bVar1 = true;
    iVar6 = 0;
    if (iVar2 != 0 && unaff_r4 != 0) {
      iVar4 = func_0x03d66780(unaff_r4,uVar9,&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
      uVar5 = uStack_28;
      bVar1 = false;
      iVar6 = unaff_r4;
      if (iVar4 != 0) {
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uStack_28;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uStack_28;
      }
    }
    if ((piVar3[0x12] == 0) ||
       (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
       iVar4 == 0)) {
      uStack_2c = 0;
      iVar4 = (**(code **)(*piVar3 + 0x1a0))
                        (piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
      uVar5 = uStack_2c;
      if (iVar4 != 0) {
        if (iVar2 != 0) {
          if (bVar1) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar6 = func_0x02457d58();
            func_0x03d63f04(iVar6,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74))
            ;
            piVar3[0x11] = iVar6;
          }
          if (iVar6 == 0) {
            func_0x02457d50();
          }
          func_0x03d6491c(iVar6,uVar9,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
        }
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uVar5;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uVar5;
      }
      iVar2 = piVar3[0x12];
      if (iVar2 == 0) {
        if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0)
        {
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
  iVar7 = func_0x0229f13c(0x830f,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_02258df8 + 0x2258d04);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02258dfc + 0x2258d18),iVar2,uVar9,0);
    *pcVar8 = '\x01';
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
  if (*(int *)(iVar7 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485238(&uStack_38,uVar9,0);
  iVar6 = *(int *)(iVar7 + 8);
  uVar9 = *(undefined4 *)(iVar7 + 0xc);
  iVar2 = *(int *)(iVar7 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar6,uVar9,&uStack_38,uVar5,0,0);
  uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02258e00 + 0x2258de8));
  return uVar9;
}



// ===== FAT.MineCartActivity$$GetCurRoundConfigId RVA 0x1a76e48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a86e48(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int extraout_r1;
  undefined4 extraout_r2;
  undefined4 uVar5;
  int extraout_r3;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
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
  
  pcVar6 = (char *)(_UNK_01a86fac + 0x1a86e5c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a86fb0 + 0x1a86e70));
    func_0x01384978(*(undefined4 *)(_UNK_01a86fb4 + 0x1a86e7c));
    func_0x01384978(*(undefined4 *)(_UNK_01a86fb8 + 0x1a86e88));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x830e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x830e,0);
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
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (((iVar1 == 0) || (iVar1 = FUN_01a824c4(param_1), iVar1 == 0)) ||
     (uVar4 = param_1[0x32], (int)uVar4 < 0)) {
    return 0;
  }
  iVar7 = *(int *)(iVar1 + 0x30);
  if (iVar7 == 0) {
    func_0x01384bf0();
    uVar4 = param_1[0x32];
  }
  iVar9 = *(int *)(iVar7 + 0xc);
  if ((int)uVar4 < iVar9) {
    puVar2 = *(undefined4 **)(_UNK_01a86fbc + 0x1a86f3c);
  }
  else {
    iVar1 = func_0x0364c54c(iVar7,*(undefined4 *)(iVar1 + 0x18),
                            **(undefined4 **)(_UNK_01a86fc0 + 0x1a86f50));
    if (iVar1 < 0) {
      uVar8 = **(undefined4 **)(_UNK_01a86fc4 + 0x1a86f9c);
      uVar4 = *(int *)(iVar7 + 0xc) - 1;
      goto LAB_01a86fa0;
    }
    func_0x01458344(param_1[0x32] - iVar1,iVar9 - iVar1);
    uVar4 = extraout_r1 + iVar1;
    puVar2 = *(undefined4 **)(_UNK_01a86fc8 + 0x1a86f88);
  }
  uVar8 = *puVar2;
LAB_01a86fa0:
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(iVar7 + 0xc))) {
    iVar1 = *(int *)(iVar7 + 8);
    if (iVar1 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar4) {
      func_0x02457d5c();
    }
    return *(int *)(iVar1 + uVar4 * 4 + 0x10);
  }
  func_0x02457d6c(*(undefined4 *)(iRam0364ca44 + 0x364ca10));
  uVar5 = func_0x02457d58();
  uVar3 = func_0x02457d6c(*(undefined4 *)(iRam0364ca48 + 0x364ca24));
  func_0x047901e8(uVar5,uVar3,0);
  func_0x02457d90(uVar5,uVar8);
  lVar10 = func_0x02457d94();
  uVar4 = (uint)((ulonglong)lVar10 >> 0x20);
  pcVar6 = (char *)(iRam0364cb28 + 0x364ca68);
  uStack_28 = uVar8;
  uStack_24 = uVar5;
  if (*pcVar6 == '\0') {
    func_0x02457d54(*(undefined4 *)(iRam0364cb2c + 0x364ca80));
    *pcVar6 = '\x01';
  }
  if ((-1 < lVar10) && ((int)uVar4 < *(int *)((int)lVar10 + 0xc))) {
    func_0x03031db0(extraout_r2,**(undefined4 **)(iRam0364cb30 + 0x364cab0),
                    *(undefined4 *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x80));
    iVar1 = *(int *)((int)lVar10 + 8);
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
  uVar8 = func_0x02457d58();
  uVar5 = func_0x02457d6c(*(undefined4 *)(iRam0364cb38 + 0x364cb08));
  func_0x047901e8(uVar8,uVar5,0);
  func_0x02457d90(uVar8,extraout_r3);
  func_0x02457d94();
  return 0;
}



// ===== FAT.MineCartActivity$$_RefreshUseItemRewardPool RVA 0x1a76fcc =====

/* WARNING: Removing unreachable block (ram,0x01a87350) */
/* WARNING: Removing unreachable block (ram,0x01a87360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a86fcc(int param_1)

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
  int iVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01a87448 + 0x1a86fe4);
  iStack_34 = param_1;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8744c + 0x1a86ff8));
    func_0x01384978(*(undefined4 *)(_UNK_01a87450 + 0x1a87004));
    func_0x01384978(*(undefined4 *)(_UNK_01a87454 + 0x1a87010));
    func_0x01384978(*(undefined4 *)(_UNK_01a87458 + 0x1a8701c));
    func_0x01384978(*(undefined4 *)(_UNK_01a8745c + 0x1a87028));
    func_0x01384978(*(undefined4 *)(_UNK_01a87460 + 0x1a87034));
    func_0x01384978(*(undefined4 *)(_UNK_01a87464 + 0x1a87040));
    func_0x01384978(*(undefined4 *)(_UNK_01a87468 + 0x1a8704c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x830c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x830c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar8 = iStack_34;
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
    func_0x01485278(&uStack_30,iVar8,0);
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
    return;
  }
  iStack_38 = FUN_01a86db4(iStack_34);
  if (iStack_38 != 0) {
    iVar1 = *(int *)(iStack_34 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    iVar8 = *(int *)(iStack_38 + 0x1c);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x03653608(iVar8,**(undefined4 **)(_UNK_01a8746c + 0x1a870f8));
LAB_01a87108:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01a87480 + 0x1a87124)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01a8716c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a87480 + 0x1a87124),0);
LAB_01a8716c:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01a87470 + 0x1a871a0)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01a871e8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a87470 + 0x1a871a0),0);
LAB_01a871e8:
      uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (*(int *)(**(int **)(_UNK_01a87474 + 0x1a87208) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&uStack_30,uVar9,0);
      uVar6 = uStack_2c;
      uVar9 = uStack_30;
      iVar1 = *(int *)(iStack_34 + 0xd8);
      uStack_2c = 0;
      uStack_30 = 0;
      func_0x038fd264(&uStack_30,uVar9,uVar6,**(undefined4 **)(_UNK_01a87478 + 0x1a8723c));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = uStack_2c;
      uVar9 = uStack_30;
      iVar8 = *(int *)(iVar1 + 8);
      uVar4 = *(uint *)(iVar1 + 0xc);
      piVar5 = *(int **)(_UNK_01a8747c + 0x1a87284);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar10 = *piVar5;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (uVar4 < *(uint *)(iVar8 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar4 + 1;
        iVar8 = iVar8 + uVar4 * 8;
        *(undefined4 *)(iVar8 + 0x10) = uVar9;
        *(undefined4 *)(iVar8 + 0x14) = uVar6;
      }
      else {
        func_0x024501b4(iVar1,uVar9,uVar6,
                        *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_01a87108;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01a87484 + 0x1a872f0)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01a87338;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a87484 + 0x1a872f0),0);
LAB_01a87338:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
    *(undefined4 *)(iStack_34 + 0xdc) = *(undefined4 *)(iStack_38 + 0x18);
  }
  return;
}



// ===== FAT.MineCartActivity$$FAT.Merge.IExternalOutput.CanUseItem RVA 0x1a7748c =====

/* WARNING: Removing unreachable block (ram,0x01a87724) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a8748c(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
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
  
  pcVar8 = (char *)(_UNK_01a87804 + 0x1a874a4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a87808 + 0x1a874b8));
    func_0x01384978(*(undefined4 *)(_UNK_01a8780c + 0x1a874c4));
    func_0x01384978(*(undefined4 *)(_UNK_01a87810 + 0x1a874d0));
    func_0x01384978(*(undefined4 *)(_UNK_01a87814 + 0x1a874dc));
    *pcVar8 = '\x01';
  }
  iVar9 = 0;
  iVar1 = func_0x0229f06c(0x834f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x834f,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7,0,0);
    iVar1 = func_0x0245496c(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 != 0) {
    iVar1 = param_1[0x11];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01a87818 + 0x1a87578));
    piVar11 = *(int **)(_UNK_01a8781c + 0x1a87590);
    piVar12 = *(int **)(_UNK_01a87820 + 0x1a87598);
    do {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01a875f0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01a875f0:
      iVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar9 == 0) {
        iVar9 = 0;
        break;
      }
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar12) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01a87668;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_01a87668:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0210e2d4(param_2,0);
    } while (iVar1 != iVar4);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == **(int **)(_UNK_01a87824 + 0x1a876c4)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_01a8770c;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a87824 + 0x1a876c4),0);
LAB_01a8770c:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return iVar9;
}



// ===== FAT.MineCartActivity$$FAT.Merge.IExternalOutput.TrySpawnItem RVA 0x1a7782c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a8782c(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01a87938 + 0x1a8784c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8793c + 0x1a87864));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8350,0);
  if (iVar1 == 0) {
    *param_4 = 0;
    *param_3 = 0xffffffff;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_01a87940 + 0x1a878ec));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0211b24c(iVar1,0);
    if (iVar3 != 0) {
      func_0x01a87944(param_1,param_2,iVar1);
    }
    uVar2 = (uint)(iVar3 != 0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8350,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x022365c4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.MineCartActivity$$_OnUseItem RVA 0x1a77944 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a87944(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01a87b50 + 0x1a87964);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a87b54 + 0x1a87978));
    func_0x01384978(*(undefined4 *)(_UNK_01a87b58 + 0x1a87984));
    func_0x01384978(*(undefined4 *)(_UNK_01a87b5c + 0x1a87990));
    *pcVar8 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x8351,0);
  if (iVar5 == 0) {
    if (*(int *)(**(int **)(_UNK_01a87b60 + 0x1a879f4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0204f2f0(&uStack_30,0x3b,0);
    uVar4 = uStack_28;
    uVar2 = uStack_2c;
    uVar7 = uStack_30;
    if (param_2 == 0) {
      func_0x01384bf0();
      uVar6 = func_0x0210e2d4(0,0);
      func_0x01384bf0();
    }
    else {
      uVar6 = func_0x0210e2d4(param_2,0);
    }
    func_0x0210cd7c(&uStack_30,param_2,0);
    uVar3 = uStack_2c;
    uVar1 = uStack_30;
    if (*(int *)(**(int **)(_UNK_01a87b64 + 0x1a87a78) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dd876c(&uStack_30,uVar1,uVar3,0);
    if (*(int *)(**(int **)(_UNK_01a87b68 + 0x1a87ab8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0207405c(uVar6,1,uStack_30,uStack_2c,uStack_28,uVar7,uVar2,uVar4,0,0x3b,0,0,0x43080000,0,
                    0);
    func_0x01a87f34(param_1);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0211b2b0(param_3,0);
    func_0x01a885fc(param_1,uVar7);
  }
  else {
    iVar5 = func_0x0229f13c(0x8351,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar5,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MineCartActivity$$HasSpecialItem RVA 0x1a77b6c =====

/* WARNING: Removing unreachable block (ram,0x01a87e24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a87b6c(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01a87f04 + 0x1a87b80);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a87f08 + 0x1a87b94));
    func_0x01384978(*(undefined4 *)(_UNK_01a87f0c + 0x1a87ba0));
    func_0x01384978(*(undefined4 *)(_UNK_01a87f10 + 0x1a87bac));
    func_0x01384978(*(undefined4 *)(_UNK_01a87f14 + 0x1a87bb8));
    func_0x01384978(*(undefined4 *)(_UNK_01a87f18 + 0x1a87bc4));
    *pcVar8 = '\x01';
  }
  iVar9 = 0;
  iVar1 = func_0x0229f06c(0x8367,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8367,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
    iVar1 = func_0x0245496c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 != 0) {
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01a87f1c + 0x1a87c3c));
    iVar9 = param_1[0x11];
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x44);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar9,**(undefined4 **)(_UNK_01a87f20 + 0x1a87c70));
    piVar11 = *(int **)(_UNK_01a87f24 + 0x1a87c88);
    piVar12 = *(int **)(_UNK_01a87f28 + 0x1a87c90);
    do {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
            goto LAB_01a87ce8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01a87ce8:
      iVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar9 == 0) {
        iVar9 = 0;
        break;
      }
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar12) {
            puVar3 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xc0);
            goto LAB_01a87d60;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_01a87d60:
      uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x01de5d8c(iVar1,uVar10,1,0);
    } while (iVar4 == 0);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == **(int **)(_UNK_01a87f2c + 0x1a87dc4)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_01a87e0c;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a87f2c + 0x1a87dc4),0);
LAB_01a87e0c:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return iVar9;
}



// ===== FAT.MineCartActivity$$_BeginUseItemReward RVA 0x1a77f34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a87f34(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar8 = (char *)(_UNK_01a88568 + 0x1a87f54);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8856c + 0x1a87f68));
    func_0x01384978(*(undefined4 *)(_UNK_01a88570 + 0x1a87f74));
    func_0x01384978(*(undefined4 *)(_UNK_01a88574 + 0x1a87f80));
    func_0x01384978(*(undefined4 *)(_UNK_01a88578 + 0x1a87f8c));
    func_0x01384978(*(undefined4 *)(_UNK_01a8857c + 0x1a87f98));
    func_0x01384978(*(undefined4 *)(_UNK_01a88580 + 0x1a87fa4));
    func_0x01384978(*(undefined4 *)(_UNK_01a88584 + 0x1a87fb0));
    func_0x01384978(*(undefined4 *)(_UNK_01a88588 + 0x1a87fbc));
    func_0x01384978(*(undefined4 *)(_UNK_01a8858c + 0x1a87fc8));
    func_0x01384978(*(undefined4 *)(_UNK_01a88590 + 0x1a87fd4));
    func_0x01384978(*(undefined4 *)(_UNK_01a88594 + 0x1a87fe0));
    func_0x01384978(*(undefined4 *)(_UNK_01a88598 + 0x1a87fec));
    func_0x01384978(*(undefined4 *)(_UNK_01a8859c + 0x1a87ff8));
    func_0x01384978(*(undefined4 *)(_UNK_01a885a0 + 0x1a88004));
    func_0x01384978(*(undefined4 *)(_UNK_01a885a4 + 0x1a88010));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8352,0);
  if (iVar1 == 0) {
    iVar1 = param_1[0x38];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar10) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar10,0);
    }
    iVar10 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    iVar1 = 0;
    if (iVar10 != 0) {
      iVar1 = param_1[0xf];
    }
    if ((iVar10 != 0 && iVar1 != 0) && (iVar1 = func_0x02139cf4(iVar1,0), iVar1 != 0)) {
      iVar10 = func_0x020d80e4(0x1c,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(**(int **)(_UNK_01a885a8 + 0x1a88118) + 0x74);
      *(int **)(iVar10 + 0x1c) = param_1;
      if (iVar4 == 0) {
        func_0x01384ab4();
      }
      func_0x0204f2f0(&iStack_4c,0x3c,0);
      iVar4 = iStack_4c;
      uVar11 = uStack_44;
      if (0 < param_1[0x37]) {
        iVar13 = 0;
        piVar2 = *(int **)(_UNK_01a885ac + 0x1a8816c);
        piVar6 = *(int **)(_UNK_01a885b0 + 0x1a88174);
        do {
          iVar3 = *piVar2;
          iVar9 = param_1[0x36];
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar2;
          }
          iVar12 = *(int *)(*(int *)(iVar3 + 0x5c) + 4);
          if (iVar12 == 0) {
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              piVar2 = *(int **)(_UNK_01a885b8 + 0x1a881dc);
              iVar3 = *piVar2;
            }
            else {
              piVar2 = *(int **)(_UNK_01a885b4 + 0x1a881cc);
            }
            uVar5 = **(undefined4 **)(iVar3 + 0x5c);
            iVar12 = func_0x01384be4(**(undefined4 **)(_UNK_01a885bc + 0x1a881ec));
            func_0x03a068fc(iVar12,uVar5,**(undefined4 **)(_UNK_01a885c0 + 0x1a8820c),0);
            *(int *)(*(int *)(*piVar2 + 0x5c) + 4) = iVar12;
            piVar6 = *(int **)(_UNK_01a885c4 + 0x1a88234);
          }
          func_0x02fbd288(&iStack_4c,iVar9,iVar12,0,**(undefined4 **)(_UNK_01a885c8 + 0x1a88250));
          iVar3 = iStack_4c;
          if (0 < iStack_4c) {
            iVar9 = *piVar6;
            if (*(int *)(iVar9 + 0x74) == 0) {
              func_0x01384ab4();
              iVar9 = *piVar6;
            }
            fVar15 = **(float **)(iVar9 + 0x5c);
            fVar16 = (*(float **)(iVar9 + 0x5c))[1];
            if (*(int *)(**(int **)(_UNK_01a885cc + 0x1a8828c) + 0x74) == 0) {
              func_0x01384ab4(**(int **)(_UNK_01a885cc + 0x1a8828c));
            }
            fVar14 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x16) & 3);
            func_0x01dd7838(iVar3,iVar4,uStack_48,uVar11,fVar15 + fVar16 * fVar14,0);
            iVar9 = func_0x020e2888(iVar1,iVar3,0x12,iVar10,0);
            if (iVar9 == 0) {
              if (*(int *)(**(int **)(_UNK_01a885d0 + 0x1a8837c) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x01dd7dfc(0);
              iVar9 = func_0x01c24918(0);
              piVar2 = *(int **)(_UNK_01a885d4 + 0x1a883b0);
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              iVar12 = *piVar2;
              iVar9 = *(int *)(iVar9 + 0x40);
              if (*(int *)(iVar12 + 0x74) == 0) {
                func_0x01384ab4();
                iVar12 = *piVar2;
              }
              uVar5 = *(undefined4 *)(*(int *)(iVar12 + 0x5c) + 0x18c);
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              uVar5 = func_0x01cdcbac(iVar9,iVar3,1,uVar5,0,0,0,0x36d,
                                      **(undefined4 **)(_UNK_01a885d8 + 0x1a883f8),
                                      **(undefined4 **)(_UNK_01a885dc + 0x1a88404),0);
              iVar3 = param_1[0x38];
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              iVar12 = *(int *)(iVar3 + 8);
              uVar7 = *(uint *)(iVar3 + 0xc);
              piVar2 = *(int **)(_UNK_01a885e0 + 0x1a88464);
              *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
              iVar9 = *piVar2;
              if (iVar12 == 0) {
                func_0x01384bf0();
              }
              if (uVar7 < *(uint *)(iVar12 + 0xc)) {
                *(uint *)(iVar3 + 0xc) = uVar7 + 1;
                *(undefined4 *)(iVar12 + uVar7 * 4 + 0x10) = uVar5;
              }
              else {
                func_0x0328f170(iVar3,uVar5,
                                *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
              }
              piVar6 = *(int **)(_UNK_01a885e4 + 0x1a884bc);
            }
            else {
              iVar3 = *piVar6;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar6;
              }
              fVar16 = **(float **)(iVar3 + 0x5c);
              fVar15 = (*(float **)(iVar3 + 0x5c))[1];
              iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01a885e8 + 0x1a8832c));
              uVar5 = func_0x01a89134(param_1,fVar16 + fVar15 * fVar14,
                                      **(undefined4 **)(_UNK_01a885ec + 0x1a88344));
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              func_0x01c36290(iVar3,uVar5,0);
            }
          }
          iVar13 = iVar13 + 1;
          piVar2 = *(int **)(_UNK_01a885f0 + 0x1a884d0);
        } while (iVar13 < param_1[0x37]);
      }
      iVar1 = param_1[0x38];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01a885f4 + 0x1a884f8));
        piVar2 = *(int **)(_UNK_01a885f8 + 0x1a8850c);
        iVar10 = *piVar2;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x01384ab4();
          iVar10 = *piVar2;
        }
        uVar11 = func_0x01a89210(param_1,**(undefined4 **)(iVar10 + 0x5c),iVar4,uStack_48,uVar11,
                                 param_1[0x38]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01c36290(iVar1,uVar11,0);
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8352,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245494c(&uStack_48,0,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&stack0xffffffd0,param_1,0);
  iVar10 = *(int *)(iVar1 + 8);
  uVar11 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  iStack_4c = 0;
  func_0x0245495c(iVar10,uVar11,&stack0xffffffd0,uVar5,0);
  return;
}



// ===== FAT.MineCartActivity$$_TryAddMilestoneNum RVA 0x1a785fc =====

/* WARNING: Removing unreachable block (ram,0x01a88ca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a885fc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01a88f10 + 0x1a88618);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a88f14 + 0x1a8862c));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f18 + 0x1a88638));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f1c + 0x1a88644));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f20 + 0x1a88650));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f24 + 0x1a8865c));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f28 + 0x1a88668));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f2c + 0x1a88674));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f30 + 0x1a88680));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f34 + 0x1a8868c));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f38 + 0x1a88698));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f3c + 0x1a886a4));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f40 + 0x1a886b0));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f44 + 0x1a886bc));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f48 + 0x1a886c8));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f4c + 0x1a886d4));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f50 + 0x1a886e0));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f54 + 0x1a886ec));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f58 + 0x1a886f8));
    func_0x01384978(*(undefined4 *)(_UNK_01a88f5c + 0x1a88704));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x8365,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8365,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
    return;
  }
  iVar1 = FUN_01a86db4(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar9 = *(int *)(iVar1 + 0x24);
  iVar2 = *(int *)(param_1 + 0xd4);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar15 = 0;
  iVar17 = *(int *)(iVar9 + 0xc);
  param_2 = *(int *)(param_1 + 0xcc) + param_2;
  *(int *)(param_1 + 0xcc) = param_2;
  iVar9 = iVar15;
  if (0 < iVar17) {
    puVar13 = *(undefined4 **)(_UNK_01a88f60 + 0x1a887b4);
    do {
      iVar9 = *(int *)(iVar1 + 0x24);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0364c9b8(iVar9,iVar15,*puVar13);
      iVar9 = iVar15;
    } while ((iVar3 <= param_2) && (iVar15 = iVar15 + 1, iVar9 = iVar17, iVar17 != iVar15));
  }
  iVar3 = iVar17 + -1;
  iVar15 = iVar3;
  if (iVar9 < iVar3) {
    iVar15 = iVar9;
  }
  func_0x01a88fc4(param_1,iVar15);
  if (iVar9 == iVar2) {
    if (*(int *)(**(int **)(_UNK_01a88f70 + 0x1a88818) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a88f74 + 0x1a88834));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a53e4(iVar1,param_2,0xffffffff,0,0,**(undefined4 **)(_UNK_01a88f78 + 0x1a88860));
    return;
  }
  iVar15 = iVar2;
  if (iVar2 < iVar9) {
    do {
      iVar10 = *(int *)(iVar1 + 0x20);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      if (iVar15 < *(int *)(iVar10 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_01a88f64 + 0x1a888b4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar10 = func_0x0300d558(**(undefined4 **)(_UNK_01a88f68 + 0x1a888d0));
        uVar11 = *(undefined4 *)(param_1 + 0xd4);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x034a53e4(iVar10,param_2,uVar11,0,0,**(undefined4 **)(_UNK_01a88f6c + 0x1a88904));
      }
      else if ((iVar2 < iVar17) && (iVar3 == iVar15)) {
        if (*(int *)(**(int **)(_UNK_01a88f7c + 0x1a88954) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x028c8d78(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0302a7c0(&uStack_30,iVar2,&iStack_28,**(undefined4 **)(_UNK_01a88f80 + 0x1a88994));
        uVar12 = uStack_2c;
        uVar11 = uStack_30;
        iVar2 = *(int *)(iVar1 + 0x2c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar4 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_01a88f84 + 0x1a889c8));
        goto LAB_01a889d4;
      }
      iVar15 = iVar15 + 1;
    } while (iVar9 != iVar15);
  }
  *(int *)(param_1 + 0xd4) = iVar9;
  return;
LAB_01a889d4:
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar4;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_01a88fa4 + 0x1a889f0)) {
        puVar13 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
        goto LAB_01a88a38;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar13 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01a88fa4 + 0x1a889f0),0);
LAB_01a88a38:
  iVar2 = (*(code *)*puVar13)(piVar4,puVar13[1]);
  if (iVar2 != 0) {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01a88f88 + 0x1a88a6c)) {
          puVar13 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01a88ab4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01a88f88 + 0x1a88a6c),0);
LAB_01a88ab4:
    uVar5 = (*(code *)*puVar13)(piVar4,puVar13[1]);
    if (*(int *)(**(int **)(_UNK_01a88f8c + 0x1a88ad4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x02565a88(uVar5,0);
    if (iVar2 != 0) {
      iVar9 = func_0x01c24918(0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *(undefined4 *)(iVar2 + 8);
      uVar14 = *(undefined4 *)(iVar2 + 0xc);
      iVar2 = **(int **)(_UNK_01a88f90 + 0x1a88b20);
      iVar9 = *(int *)(iVar9 + 0x40);
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = **(int **)(_UNK_01a88f94 + 0x1a88b48);
      }
      uVar16 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x194);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x01cdcbac(iVar9,uVar5,uVar14,uVar16,0,0,0,0x3c0,
                              **(undefined4 **)(_UNK_01a88f98 + 0x1a88b68),
                              **(undefined4 **)(_UNK_01a88f9c + 0x1a88b74),0);
      iVar2 = iStack_28;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar2 + 8);
      uVar6 = *(uint *)(iVar2 + 0xc);
      piVar7 = *(int **)(_UNK_01a88fa0 + 0x1a88bdc);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      iVar15 = *piVar7;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (uVar6 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar6 + 1;
        *(undefined4 *)(iVar9 + uVar6 * 4 + 0x10) = uVar5;
      }
      else {
        func_0x0328f170(iVar2,uVar5,*(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38)
                       );
      }
    }
    goto LAB_01a889d4;
  }
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01a88fa8 + 0x1a88c40)) {
          puVar13 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01a88c88;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01a88fa8 + 0x1a88c40),0);
LAB_01a88c88:
    (*(code *)*puVar13)(piVar4,puVar13[1]);
  }
  if (*(int *)(**(int **)(_UNK_01a88fac + 0x1a88cb4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01a88fb0 + 0x1a88cd4));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x034a53e4(iVar2,param_2,0xffffffff,uVar11,uVar12,
                  **(undefined4 **)(_UNK_01a88fb4 + 0x1a88cfc));
  iVar2 = FUN_01a824c4(param_1);
  if (iVar2 != 0) {
    iVar9 = *(int *)(iVar2 + 0x30);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0364c54c(iVar9,uVar11,**(undefined4 **)(_UNK_01a88fb8 + 0x1a88d50));
    iVar9 = *(int *)(iVar2 + 0x30);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar2 + 0x1c);
    iVar2 = *(int *)(iVar9 + 0xc);
    uVar12 = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      iVar9 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0);
      uVar12 = 0;
      if (iVar9 != 0) {
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x03507d38(&uStack_30,*(undefined4 *)(iVar9 + 8),
                        **(undefined4 **)(_UNK_01a88fbc + 0x1a88dac));
        uVar12 = uStack_2c;
      }
    }
    func_0x019b0538(param_1,iVar1 + 1,iVar2,uVar5,iVar1 + 1 == iVar2,uVar11,uVar12,
                    *(undefined4 *)(param_1 + 0xc0),*(int *)(param_1 + 200) + 1,0);
  }
  iVar1 = *(int *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(int *)(param_1 + 0xd0) = iVar1 + *(int *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  FUN_01a83990(param_1,1);
  return;
}



// ===== FAT.MineCartActivity$$_TrackUseItem RVA 0x1a78fc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a88fc4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01a89120 + 0x1a88fe0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a89124 + 0x1a88ff4));
    func_0x01384978(*(undefined4 *)(_UNK_01a89128 + 0x1a89000));
    func_0x01384978(*(undefined4 *)(_UNK_01a8912c + 0x1a8900c));
    *pcVar3 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x8366,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8366,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = FUN_01a86db4(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
  }
  iVar1 = FUN_01a824c4(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
  }
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0);
    uStack_38 = 0;
    if (iVar1 != 0) {
      uStack_1c = 0;
      uStack_20 = 0;
      func_0x03507d38(&uStack_20,*(undefined4 *)(iVar1 + 8),
                      **(undefined4 **)(_UNK_01a89130 + 0x1a890cc));
      uStack_38 = uStack_1c;
    }
  }
  uStack_2c = *(undefined4 *)(param_1 + 0xcc);
  uStack_34 = *(undefined4 *)(param_1 + 0xc0);
  iStack_30 = *(int *)(param_1 + 200) + 1;
  uStack_28 = 0;
  func_0x019b037c(param_1,param_2 + 1,uVar5,uVar2);
  return;
}



// ===== FAT.MineCartActivity$$CoPlaySound RVA 0x1a79134 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a89134(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01a89204 + 0x1a89158);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a89208 + 0x1a8916c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8357,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a8920c + 0x1a891d8));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 0x14) = param_3;
    *(undefined4 *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x8357,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021ed128(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.MineCartActivity$$CoDelayReward RVA 0x1a79210 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a89210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01a892fc + 0x1a89238);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a89300 + 0x1a89250));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x835e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a89304 + 0x1a892c4));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    *(undefined4 *)(iVar1 + 0x1c) = param_4;
    *(undefined4 *)(iVar1 + 0x20) = param_5;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x14) = param_6;
  }
  else {
    iVar1 = func_0x0229f13c(0x835e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02259494(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return iVar1;
}



// ===== FAT.MineCartActivity.<CoPlaySound>d__152$$.ctor RVA 0x1a79308 =====

void FUN_01a89308(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MineCartActivity.<CoDelayReward>d__153$$.ctor RVA 0x1a79324 =====

void FUN_01a89324(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MineCartActivity$$TryClaimMilestoneReward RVA 0x1a79340 =====

/* WARNING: Removing unreachable block (ram,0x01a89784) */
/* WARNING: Removing unreachable block (ram,0x01a89794) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a89340(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_01a89880 + 0x1a89360);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a89884 + 0x1a89374));
    func_0x01384978(*(undefined4 *)(_UNK_01a89888 + 0x1a89380));
    func_0x01384978(*(undefined4 *)(_UNK_01a8988c + 0x1a8938c));
    func_0x01384978(*(undefined4 *)(_UNK_01a89890 + 0x1a89398));
    func_0x01384978(*(undefined4 *)(_UNK_01a89894 + 0x1a893a4));
    func_0x01384978(*(undefined4 *)(_UNK_01a89898 + 0x1a893b0));
    func_0x01384978(*(undefined4 *)(_UNK_01a8989c + 0x1a893bc));
    func_0x01384978(*(undefined4 *)(_UNK_01a898a0 + 0x1a893c8));
    func_0x01384978(*(undefined4 *)(_UNK_01a898a4 + 0x1a893d4));
    *pcVar9 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x8368,0);
  if (iVar1 == 0) {
    if (((-1 < param_2) &&
        (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c)),
        iVar1 != 0)) && (iVar1 = FUN_01a86db4(param_1), iVar1 != 0)) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar10 = param_1[0x39];
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar7 = **(undefined4 **)(_UNK_01a898a8 + 0x1a894ac);
      *(undefined4 *)(iVar10 + 0xc) = 0;
      uVar3 = *(undefined4 *)(iVar1 + 0x20);
      *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
      iVar1 = func_0x03005740(uVar3,param_2,&uStack_28,uVar7);
      uVar3 = uStack_28;
      if (iVar1 != 0) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01ca9198(iVar2,uVar3,0);
        if (iVar1 != 0) {
          iVar2 = *(int *)(iVar1 + 0x1c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          piVar4 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_01a898ac + 0x1a89524));
LAB_01a89534:
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar4;
          uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar8[-1] == **(int **)(_UNK_01a898c0 + 0x1a89550)) {
                puVar5 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                goto LAB_01a89598;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01a898c0 + 0x1a89550),0);
LAB_01a89598:
          iVar2 = (*(code *)*puVar5)(piVar4,puVar5[1]);
          if (iVar2 != 0) {
            if (piVar4 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = *piVar4;
            uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar8[-1] == **(int **)(_UNK_01a898b0 + 0x1a895cc)) {
                  puVar5 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                  goto LAB_01a89614;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01a898b0 + 0x1a895cc),0);
LAB_01a89614:
            uVar3 = (*(code *)*puVar5)(piVar4,puVar5[1]);
            if (*(int *)(**(int **)(_UNK_01a898b4 + 0x1a89634) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x02566088(&uStack_38,uVar3,0);
            uVar7 = uStack_34;
            uVar3 = uStack_38;
            iVar2 = param_1[0x39];
            uStack_34 = 0;
            uStack_38 = 0;
            func_0x038fd264(&uStack_38,uVar3,uVar7,**(undefined4 **)(_UNK_01a898b8 + 0x1a89670));
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar7 = uStack_34;
            uVar3 = uStack_38;
            iVar10 = *(int *)(iVar2 + 8);
            uVar6 = *(uint *)(iVar2 + 0xc);
            piVar8 = *(int **)(_UNK_01a898bc + 0x1a896b8);
            *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
            iVar11 = *piVar8;
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            if (uVar6 < *(uint *)(iVar10 + 0xc)) {
              *(uint *)(iVar2 + 0xc) = uVar6 + 1;
              iVar10 = iVar10 + uVar6 * 8;
              *(undefined4 *)(iVar10 + 0x10) = uVar3;
              *(undefined4 *)(iVar10 + 0x14) = uVar7;
            }
            else {
              func_0x024501b4(iVar2,uVar3,uVar7,
                              *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
            }
            goto LAB_01a89534;
          }
          if (piVar4 != (int *)0x0) {
            iVar2 = *piVar4;
            uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar8[-1] == **(int **)(_UNK_01a898c4 + 0x1a89724)) {
                  puVar5 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                  goto LAB_01a8976c;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01a898c4 + 0x1a89724),0);
LAB_01a8976c:
            (*(code *)*puVar5)(piVar4,puVar5[1]);
          }
          func_0x01a898cc(param_1,*(undefined4 *)(iVar1 + 0x18),param_3);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8368,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a7900(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MineCartActivity$$_BeginMilestoneReward RVA 0x1a798cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a898cc(int *param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar5 = (char *)(_UNK_01a89ec8 + 0x1a898f4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a89ecc + 0x1a89908));
    func_0x01384978(*(undefined4 *)(_UNK_01a89ed0 + 0x1a89914));
    func_0x01384978(*(undefined4 *)(_UNK_01a89ed4 + 0x1a89920));
    func_0x01384978(*(undefined4 *)(_UNK_01a89ed8 + 0x1a8992c));
    func_0x01384978(*(undefined4 *)(_UNK_01a89edc + 0x1a89938));
    func_0x01384978(*(undefined4 *)(_UNK_01a89ee0 + 0x1a89944));
    func_0x01384978(*(undefined4 *)(_UNK_01a89ee4 + 0x1a89950));
    func_0x01384978(*(undefined4 *)(_UNK_01a89ee8 + 0x1a8995c));
    func_0x01384978(*(undefined4 *)(_UNK_01a89eec + 0x1a89968));
    func_0x01384978(*(undefined4 *)(_UNK_01a89ef0 + 0x1a89974));
    func_0x01384978(*(undefined4 *)(_UNK_01a89ef4 + 0x1a89980));
    func_0x01384978(*(undefined4 *)(_UNK_01a89ef8 + 0x1a8998c));
    func_0x01384978(*(undefined4 *)(_UNK_01a89efc + 0x1a89998));
    func_0x01384978(*(undefined4 *)(_UNK_01a89f00 + 0x1a899a4));
    func_0x01384978(*(undefined4 *)(_UNK_01a89f04 + 0x1a899b0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x836a,0);
  if (iVar1 == 0) {
    iVar1 = param_1[0x3a];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    }
    iVar4 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = param_1[0xf];
    }
    if ((iVar4 != 0 && iVar1 != 0) && (iVar1 = func_0x02139cf4(iVar1,0), iVar1 != 0)) {
      iVar4 = func_0x020d80e4(0x1c,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(**(int **)(_UNK_01a89f08 + 0x1a89ac0) + 0x74);
      *(int **)(iVar4 + 0x1c) = param_1;
      if (iVar3 == 0) {
        func_0x01384ab4();
      }
      func_0x0204f2f0(&iStack_4c,0x3d,0);
      iVar3 = iStack_4c;
      if (0 < param_2) {
        iVar12 = 0;
        piVar10 = *(int **)(_UNK_01a89f0c + 0x1a89b18);
        piVar7 = *(int **)(_UNK_01a89f10 + 0x1a89b20);
        do {
          iVar2 = *piVar10;
          iVar11 = param_1[0x39];
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar10;
          }
          iVar6 = *(int *)(*(int *)(iVar2 + 0x5c) + 8);
          if (iVar6 == 0) {
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar10;
            }
            uVar8 = **(undefined4 **)(iVar2 + 0x5c);
            iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01a89f14 + 0x1a89b70));
            func_0x03a068fc(iVar6,uVar8,**(undefined4 **)(_UNK_01a89f18 + 0x1a89b90),0);
            *(int *)(*(int *)(*piVar10 + 0x5c) + 8) = iVar6;
            piVar7 = *(int **)(_UNK_01a89f1c + 0x1a89bb0);
          }
          func_0x02fbd288(&iStack_4c,iVar11,iVar6,0,**(undefined4 **)(_UNK_01a89f20 + 0x1a89bc4));
          iVar2 = iStack_4c;
          if (0 < iStack_4c) {
            iVar11 = *piVar7;
            if (*(int *)(iVar11 + 0x74) == 0) {
              func_0x01384ab4();
              iVar11 = *piVar7;
            }
            fVar14 = *(float *)(*(int *)(iVar11 + 0x5c) + 4);
            if (*(int *)(**(int **)(_UNK_01a89f24 + 0x1a89c04) + 0x74) == 0) {
              func_0x01384ab4(**(int **)(_UNK_01a89f24 + 0x1a89c04));
            }
            fVar13 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x16) & 3);
            func_0x01dd7838(iVar2,iVar3,uStack_48,uStack_44,param_3 + fVar14 * fVar13,0);
            iVar11 = func_0x020e2888(iVar1,iVar2,0x12,iVar4,0);
            if (iVar11 == 0) {
              if (*(int *)(**(int **)(_UNK_01a89f28 + 0x1a89d00) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x01dd7dfc(0);
              iVar11 = func_0x01c24918(0);
              piVar7 = *(int **)(_UNK_01a89f2c + 0x1a89d34);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar6 = *piVar7;
              iVar11 = *(int *)(iVar11 + 0x40);
              if (*(int *)(iVar6 + 0x74) == 0) {
                func_0x01384ab4();
                iVar6 = *piVar7;
              }
              uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 400);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              uVar8 = func_0x01cdcbac(iVar11,iVar2,1,uVar8,0,0,0,0x413,
                                      **(undefined4 **)(_UNK_01a89f30 + 0x1a89d7c),
                                      **(undefined4 **)(_UNK_01a89f34 + 0x1a89d88),0);
              iVar2 = param_1[0x3a];
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar11 = *(int *)(iVar2 + 8);
              uVar9 = *(uint *)(iVar2 + 0xc);
              piVar7 = *(int **)(_UNK_01a89f38 + 0x1a89de8);
              *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
              iVar6 = *piVar7;
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              if (uVar9 < *(uint *)(iVar11 + 0xc)) {
                *(uint *)(iVar2 + 0xc) = uVar9 + 1;
                *(undefined4 *)(iVar11 + uVar9 * 4 + 0x10) = uVar8;
              }
              else {
                func_0x0328f170(iVar2,uVar8,
                                *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
              }
              piVar10 = *(int **)(_UNK_01a89f3c + 0x1a89e3c);
              piVar7 = *(int **)(_UNK_01a89f40 + 0x1a89e44);
            }
            else {
              iVar2 = *piVar7;
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              fVar14 = *(float *)(*(int *)(iVar2 + 0x5c) + 4);
              iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01a89f44 + 0x1a89ca4));
              uVar8 = FUN_01a89134(param_1,param_3 + fVar14 * fVar13,
                                   **(undefined4 **)(_UNK_01a89f48 + 0x1a89cc0));
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              func_0x01c36290(iVar2,uVar8,0);
              piVar10 = *(int **)(_UNK_01a89f4c + 0x1a89cf4);
            }
          }
          iVar12 = iVar12 + 1;
        } while (param_2 != iVar12);
      }
      iVar1 = param_1[0x3a];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01a89f50 + 0x1a89e78));
        uVar8 = FUN_01a89210(param_1,param_3,iVar3,uStack_48,uStack_44,param_1[0x3a]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01c36290(iVar1,uVar8,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x836a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a7900(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MineCartActivity$$FAT.Merge.ISpawnEffectWithTrail.AddTrail RVA 0x1a79f54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a89f54(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_01a8a0f0 + 0x1a89f74);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8a0f4 + 0x1a89f88));
    func_0x01384978(*(undefined4 *)(_UNK_01a8a0f8 + 0x1a89f94));
    func_0x01384978(*(undefined4 *)(_UNK_01a8a0fc + 0x1a89fa0));
    func_0x01384978(*(undefined4 *)(_UNK_01a8a100 + 0x1a89fac));
    func_0x01384978(*(undefined4 *)(_UNK_01a8a104 + 0x1a89fb8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x836b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a8a108 + 0x1a8a01c));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_01a8a10c + 0x1a8a044);
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(int *)(iVar1 + 0xc) = param_1;
    uVar3 = *puVar2;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    iVar4 = func_0x034aaa34(uVar3);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01ee906c(iVar4,4,0);
    iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01a8a110 + 0x1a8a088));
    uVar6 = *(undefined4 *)(param_1 + 0xec);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01a8a114 + 0x1a8a0a0));
    func_0x02450194(uVar5,iVar1,**(undefined4 **)(_UNK_01a8a118 + 0x1a8a0bc),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0244a2c0(iVar4,uVar6,uVar3,uVar5,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x836b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MineCartActivity.<>c__DisplayClass160_0$$.ctor RVA 0x1a7a11c =====

void FUN_01a8a11c(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MineCartActivity$$.cctor RVA 0x1a7a124 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8a124(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01a8a178 + 0x1a8a134);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8a17c + 0x1a8a148));
    *pcVar2 = '\x01';
  }
  puVar1 = *(undefined4 **)(**(int **)(_UNK_01a8a180 + 0x1a8a168) + 0x5c);
  *puVar1 = 0x3f800000;
  puVar1[1] = 0x3d75c28f;
  return;
}



// ===== FAT.MineCartActivity$$<>iFixBaseProxy_get_Valid RVA 0x1a7a184 =====

void FUN_01a8a184(int param_1)

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



// ===== FAT.MineCartActivity$$<>iFixBaseProxy_SetupFresh RVA 0x1a7a18c =====

void FUN_01a8a18c(undefined4 param_1)

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



// ===== FAT.MineCartActivity$$<>iFixBaseProxy_ResEnumerate RVA 0x1a7a194 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a8a194(int *param_1)

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



// ===== FAT.MineCartActivity$$<>iFixBaseProxy_WhenEnd RVA 0x1a7a19c =====

void FUN_01a8a19c(undefined4 param_1)

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



// ===== FAT.MineCartActivity$$<>iFixBaseProxy_get_Visual RVA 0x1a7a1a4 =====

undefined4 FUN_01a8a1a4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.MineCartActivity.<>c$$.cctor RVA 0x1a7a1ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8a1ac(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01a8a204 + 0x1a8a1bc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8a208 + 0x1a8a1d0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01a8a20c + 0x1a8a1e4);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.MineCartActivity.<>c$$.ctor RVA 0x1a7a210 =====

void FUN_01a8a210(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MineCartActivity.<>c$$<_BeginUseItemReward>b__151_0 RVA 0x1a7a218 =====

undefined4 FUN_01a8a218(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}



// ===== FAT.MineCartActivity.<>c$$<_BeginMilestoneReward>b__158_0 RVA 0x1a7a220 =====

undefined4 FUN_01a8a220(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}



// ===== FAT.MineCartActivity.<>c__DisplayClass160_0$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__0 RVA 0x1a7a228 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8a228(int param_1,int param_2)

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
  
  pcVar2 = (char *)(_UNK_01a8a544 + 0x1a8a244);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8a548 + 0x1a8a258));
    func_0x01384978(*(undefined4 *)(_UNK_01a8a54c + 0x1a8a264));
    func_0x01384978(*(undefined4 *)(_UNK_01a8a550 + 0x1a8a270));
    func_0x01384978(*(undefined4 *)(_UNK_01a8a554 + 0x1a8a27c));
    func_0x01384978(*(undefined4 *)(_UNK_01a8a558 + 0x1a8a288));
    func_0x01384978(*(undefined4 *)(_UNK_01a8a55c + 0x1a8a294));
    func_0x01384978(*(undefined4 *)(_UNK_01a8a560 + 0x1a8a2a0));
    func_0x01384978(*(undefined4 *)(_UNK_01a8a564 + 0x1a8a2ac));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a8a568 + 0x1a8a2c0));
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
  iVar3 = func_0x02fd6f60(*(undefined4 *)(iVar1 + 8),**(undefined4 **)(_UNK_01a8a56c + 0x1a8a39c));
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar4 + 0xec);
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
  iVar3 = func_0x02450178(iVar3,**(undefined4 **)(_UNK_01a8a570 + 0x1a8a41c),0);
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
    puVar6 = *(undefined4 **)(_UNK_01a8a574 + 0x1a8a498);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar4 + 0x44);
    uVar5 = func_0x01384be4(*puVar6);
    func_0x02ce3d80(uVar5,iVar1,**(undefined4 **)(_UNK_01a8a578 + 0x1a8a4bc),0);
    func_0x0309eb60(iVar3,uVar5,**(undefined4 **)(_UNK_01a8a57c + 0x1a8a4d4));
    iVar4 = *(int *)(param_1 + 0x10);
    iVar3 = iVar4;
    if (iVar4 == 0) {
      func_0x01384bf0();
      iVar3 = *(int *)(param_1 + 0x10);
    }
    uVar5 = *puVar6;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar4 + 0x4c);
    uVar5 = func_0x01384be4(uVar5);
    func_0x02ce3d80(uVar5,iVar1,**(undefined4 **)(_UNK_01a8a580 + 0x1a8a51c),0);
    func_0x0309ead4(iVar3,uVar5,**(undefined4 **)(_UNK_01a8a584 + 0x1a8a534));
  }
  return;
}



// ===== FAT.MineCartActivity.<>c__DisplayClass160_1$$.ctor RVA 0x1a7a588 =====

void FUN_01a8a588(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MineCartActivity.<>c__DisplayClass160_1$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__1 RVA 0x1a7a590 =====

void FUN_01a8a590(int param_1)

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



// ===== FAT.MineCartActivity.<>c__DisplayClass160_1$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__2 RVA 0x1a7a69c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8a69c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_01a8a7b0 + 0x1a8a6b0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8a7b4 + 0x1a8a6c4));
    func_0x01384978(*(undefined4 *)(_UNK_01a8a7b8 + 0x1a8a6d0));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(**(int **)(_UNK_01a8a7bc + 0x1a8a700) + 0x74) == 0) {
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
  iVar1 = func_0x02450178(iVar1,**(undefined4 **)(_UNK_01a8a7c0 + 0x1a8a768),0);
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



// ===== FAT.MineCartActivity.<CoDelayReward>d__153$$System.IDisposable.Dispose RVA 0x1a7a7c4 =====

void FUN_01a8a7c4(void)

{
  return;
}



// ===== FAT.MineCartActivity.<CoDelayReward>d__153$$MoveNext RVA 0x1a7a7c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a8a7c8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar4 = (char *)(_UNK_01a8a8b8 + 0x1a8a7e0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8a8bc + 0x1a8a7f4));
    func_0x01384978(*(undefined4 *)(_UNK_01a8a8c0 + 0x1a8a800));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    uVar7 = *(undefined4 *)(param_1 + 0x1c);
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    iVar3 = **(int **)(_UNK_01a8a8c8 + 0x1a8a870);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar5 = 0;
    func_0x020718d0(uVar2,uVar6,uVar7,uVar8,0,0,0);
  }
  else {
    uVar5 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_01a8a8c4 + 0x1a8a830);
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar2 = func_0x01384be4(*puVar1);
      func_0x0245031c(uVar2,uVar6,0);
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar5;
}



// ===== FAT.MineCartActivity.<CoDelayReward>d__153$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1a7a8cc =====

undefined4 FUN_01a8a8cc(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MineCartActivity.<CoDelayReward>d__153$$System.Collections.IEnumerator.Reset RVA 0x1a7a8d4 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8a8d4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01a8a910 + 0x1a8a8e4));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01a8a914 + 0x1a8a900));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.MineCartActivity.<CoDelayReward>d__153$$System.Collections.IEnumerator.get_Current RVA 0x1a7a918 =====

undefined4 FUN_01a8a918(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MineCartActivity.<CoPlaySound>d__152$$System.IDisposable.Dispose RVA 0x1a7a920 =====

void FUN_01a8a920(void)

{
  return;
}



// ===== FAT.MineCartActivity.<CoPlaySound>d__152$$MoveNext RVA 0x1a7a924 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a8a924(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(_UNK_01a8a9f8 + 0x1a8a938);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8a9fc + 0x1a8a94c));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
    func_0x01bf3284(iVar3,uVar2,0);
  }
  else {
    uVar5 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_01a8aa00 + 0x1a8a97c);
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



// ===== FAT.MineCartActivity.<CoPlaySound>d__152$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1a7aa04 =====

undefined4 FUN_01a8aa04(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MineCartActivity.<CoPlaySound>d__152$$System.Collections.IEnumerator.Reset RVA 0x1a7aa0c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8aa0c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01a8aa48 + 0x1a8aa1c));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01a8aa4c + 0x1a8aa38));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.MineCartActivity.<CoPlaySound>d__152$$System.Collections.IEnumerator.get_Current RVA 0x1a7aa50 =====

undefined4 FUN_01a8aa50(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MineCartActivity.<ResEnumerate>d__31$$System.IDisposable.Dispose RVA 0x1a7aa58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8aa58(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0xfffffffc:
  case 2:
    break;
  case 0xfffffffd:
  case 1:
    pcVar5 = &UNK_01a8aff4 + _UNK_01a8b094;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01a8b008 + _UNK_01a8b098));
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
        if (piVar4[-1] == **(int **)(&UNK_01a8b034 + _UNK_01a8b09c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01a8b080;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a8b034 + _UNK_01a8b09c),0);
code_r0x01a8b080:
                    /* WARNING: Could not recover jumptable at 0x01a8b090. Too many branches */
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
  pcVar5 = &UNK_01a8b0b4 + _UNK_01a8b154;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(&UNK_01a8b0c8 + _UNK_01a8b158));
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
      if (piVar4[-1] == **(int **)(&UNK_01a8b0f4 + _UNK_01a8b15c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x01a8b140;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01a8b0f4 + _UNK_01a8b15c),0);
code_r0x01a8b140:
                    /* WARNING: Could not recover jumptable at 0x01a8b150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineCartActivity.<ResEnumerate>d__31$$MoveNext RVA 0x1a7aa9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a8aa9c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_01a8afb8 + 0x1a8aab4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8afbc + 0x1a8aac8));
    func_0x01384978(*(undefined4 *)(_UNK_01a8afc0 + 0x1a8aad4));
    func_0x01384978(*(undefined4 *)(_UNK_01a8afc4 + 0x1a8aae0));
    *pcVar6 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 8);
  piVar7 = *(int **)(param_1 + 0x18);
  uStack_30 = 0;
  iStack_28 = 0;
  if (iVar1 == 2) {
    piVar7 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
  }
  else {
    if (iVar1 == 1) {
      piVar2 = *(int **)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = (**(code **)(*piVar7 + 0x108))(piVar7,*(undefined4 *)(*piVar7 + 0x10c));
      if (iVar1 == 0) {
        return 0;
      }
      iStack_28 = piVar7[0x25];
      uStack_30 = *(undefined8 *)(piVar7 + 0x23);
      piVar2 = (int *)func_0x02b64af8(&uStack_30,0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01a8afc8 + 0x1a8ab84)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01a8abec;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a8afc8 + 0x1a8ab84),0);
LAB_01a8abec:
      piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
      *(undefined4 *)(param_1 + 8) = 0xfffffffd;
      *(int **)(param_1 + 0x1c) = piVar2;
    }
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01a8afd0 + 0x1a8ac28)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01a8ac70;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a8afd0 + 0x1a8ac28),0);
LAB_01a8ac70:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      piVar7 = *(int **)(param_1 + 0x1c);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(_UNK_01a8afcc + 0x1a8aca8)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
            goto LAB_01a8ad98;
          }
          uVar4 = uVar4 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01a8afcc + 0x1a8aca8),0);
LAB_01a8ad98:
      (*(code *)*puVar3)(&uStack_38,piVar7,puVar3[1]);
      *(undefined4 *)(param_1 + 8) = 1;
      goto LAB_01a8af04;
    }
    func_0x01a8afe0(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*piVar7 + 0x118))(piVar7,*(undefined4 *)(*piVar7 + 0x11c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x02b61d48(iVar1,0);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_01a8afd4 + 0x1a8ad50)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_01a8adc8;
        }
        uVar4 = uVar4 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01a8afd4 + 0x1a8ad50),0);
LAB_01a8adc8:
    piVar7 = (int *)(*(code *)*puVar3)(piVar7,puVar3[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    *(int **)(param_1 + 0x1c) = piVar7;
  }
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01a8afdc + 0x1a8ae04)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
        goto LAB_01a8ae4c;
      }
      uVar4 = uVar4 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01a8afdc + 0x1a8ae04),0);
LAB_01a8ae4c:
  iVar1 = (*(code *)*puVar3)(piVar7,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01a8b0a0(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  piVar7 = *(int **)(param_1 + 0x1c);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_01a8afd8 + 0x1a8ae84)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
        goto LAB_01a8aee0;
      }
      uVar4 = uVar4 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01a8afd8 + 0x1a8ae84),0);
LAB_01a8aee0:
  (*(code *)*puVar3)(&uStack_38,piVar7,puVar3[1]);
  *(undefined4 *)(param_1 + 8) = 2;
LAB_01a8af04:
  *(undefined4 *)(param_1 + 0xc) = uStack_38;
  *(undefined4 *)(param_1 + 0x10) = uStack_34;
  return 1;
}



// ===== FAT.MineCartActivity.<ResEnumerate>d__31$$<>m__Finally1 RVA 0x1a7afe0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8afe0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a8b094 + 0x1a8aff4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8b098 + 0x1a8b008));
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
      if (piVar4[-1] == **(int **)(_UNK_01a8b09c + 0x1a8b034)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a8b080;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a8b09c + 0x1a8b034),0);
LAB_01a8b080:
                    /* WARNING: Could not recover jumptable at 0x01a8b090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineCartActivity.<ResEnumerate>d__31$$<>m__Finally2 RVA 0x1a7b0a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8b0a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01a8b154 + 0x1a8b0b4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8b158 + 0x1a8b0c8));
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
      if (piVar4[-1] == **(int **)(_UNK_01a8b15c + 0x1a8b0f4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01a8b140;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01a8b15c + 0x1a8b0f4),0);
LAB_01a8b140:
                    /* WARNING: Could not recover jumptable at 0x01a8b150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.MineCartActivity.<ResEnumerate>d__31$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x1a7b160 =====

void FUN_01a8b160(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.MineCartActivity.<ResEnumerate>d__31$$System.Collections.IEnumerator.Reset RVA 0x1a7b174 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8b174(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01a8b1b0 + 0x1a8b184));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01a8b1b4 + 0x1a8b1a0));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.MineCartActivity.<ResEnumerate>d__31$$System.Collections.IEnumerator.get_Current RVA 0x1a7b1b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8b1b8(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_01a8b214 + 0x1a8b1d0);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8b218 + 0x1a8b1e4));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_01a8b21c + 0x1a8b200),&uStack_18);
  return;
}



// ===== FAT.MineCartActivity.<ResEnumerate>d__31$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x1a7b220 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a8b220(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01a8b2c0 + 0x1a8b234);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8b2c4 + 0x1a8b248));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a8b2c8 + 0x1a8b28c));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.MineCartActivity.<ResEnumerate>d__31$$System.Collections.IEnumerable.GetEnumerator RVA 0x1a7b2cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_01a8b220(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01a8b2c0 + 0x1a8b234);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a8b2c4 + 0x1a8b248));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a8b2c8 + 0x1a8b28c));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}


