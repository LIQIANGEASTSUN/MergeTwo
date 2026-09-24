/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.FarmBoardActivity$$get_Valid RVA 0x28d3a50 =====

undefined4 FUN_028e3a50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
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
  
  iVar1 = func_0x0229f06c(0x5b42,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b42,0);
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
  piVar4 = *(int **)(param_1 + 0x10);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = (**(code **)(*piVar4 + 0x130))(piVar4,*(undefined4 *)(*piVar4 + 0x134));
  uVar5 = 0;
  if ((iVar1 != 0) && (uVar5 = 0, *(int *)(param_1 + 0x44) != 0)) {
    uVar5 = 1;
  }
  return uVar5;
}



// ===== FAT.FarmBoardActivity$$get_World RVA 0x28d3ae0 =====

undefined4 FUN_028e3ae0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.FarmBoardActivity$$set_World RVA 0x28d3ae8 =====

void FUN_028e3ae8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.FarmBoardActivity$$get_WorldTracer RVA 0x28d3af0 =====

undefined4 FUN_028e3af0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.FarmBoardActivity$$set_WorldTracer RVA 0x28d3af8 =====

void FUN_028e3af8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== FAT.FarmBoardActivity$$get_ConfD RVA 0x28d3b00 =====

undefined4 FUN_028e3b00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.FarmBoardActivity$$set_ConfD RVA 0x28d3b08 =====

void FUN_028e3b08(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// ===== FAT.FarmBoardActivity$$get_BoardSkinId RVA 0x28d3b10 =====

undefined4 FUN_028e3b10(int param_1)

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
  iVar1 = func_0x0229f06c(0x5b43,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b43,0);
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
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x14);
  }
  return uVar4;
}



// ===== FAT.FarmBoardActivity$$get_MainCategoryId RVA 0x28d3b74 =====

undefined4 FUN_028e3b74(undefined4 param_1)

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
  iVar1 = func_0x0229f06c(0x5b44,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b44,0);
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
  iVar1 = func_0x028e3bdc(param_1);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x40);
  }
  return uVar4;
}



// ===== FAT.FarmBoardActivity$$GetCurGroupConfig RVA 0x28d3bdc =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e3bdc(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x5b45,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5b45,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_022326d8 + 0x22325f8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022326dc + 0x223260c),param_1,0);
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
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022326e0 + 0x22326c8));
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
  iVar7 = func_0x0229f06c(0x5b47,0,0);
  if (iVar7 == 0) {
    pcVar8 = (char *)(_UNK_017e69cc + 0x17e6970);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017e69d0 + 0x17e6984),0);
      func_0x01384978(*(undefined4 *)(_UNK_017e69d4 + 0x17e6990));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017e69d8 + 0x17e69a4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017e69dc + 0x17e69c0);
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
  iVar7 = func_0x0229f13c(0x5b47,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_022325d0 + 0x22324dc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022325d4 + 0x22324f0),iVar2,uVar9,0);
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
  uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_022325d8 + 0x22325c0));
  return uVar9;
}



// ===== FAT.FarmBoardActivity$$get_GroupId RVA 0x28d3c68 =====

undefined4 FUN_028e3c68(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.FarmBoardActivity$$set_GroupId RVA 0x28d3c70 =====

void FUN_028e3c70(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.FarmBoardActivity$$get_UnlockMaxLevel RVA 0x28d3c78 =====

undefined4 FUN_028e3c78(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.FarmBoardActivity$$set_UnlockMaxLevel RVA 0x28d3c80 =====

void FUN_028e3c80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== FAT.FarmBoardActivity$$get_UnlockFarmlandNum RVA 0x28d3c88 =====

undefined4 FUN_028e3c88(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== FAT.FarmBoardActivity$$set_UnlockFarmlandNum RVA 0x28d3c90 =====

void FUN_028e3c90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



// ===== FAT.FarmBoardActivity$$get_OutputType RVA 0x28d3c98 =====

undefined4 FUN_028e3c98(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== FAT.FarmBoardActivity$$set_OutputType RVA 0x28d3ca0 =====

void FUN_028e3ca0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



// ===== FAT.FarmBoardActivity$$get_TokenNum RVA 0x28d3ca8 =====

undefined4 FUN_028e3ca8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.FarmBoardActivity$$set_TokenNum RVA 0x28d3cb0 =====

void FUN_028e3cb0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// ===== FAT.FarmBoardActivity$$get_TokenBoost RVA 0x28d3cb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e3cb8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b48,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b48,0);
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
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== FAT.FarmBoardActivity$$GetCurBoardDropConfig RVA 0x28d3d0c =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e3d0c(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_r4;
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
  
  iVar3 = func_0x0229f06c(0x5b49,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x5b49,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_02232a08 + 0x2232928);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02232a0c + 0x223293c),param_1,0);
      *pcVar9 = '\x01';
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar3 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar7);
    uVar10 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02232a10 + 0x22329f8));
    return uVar10;
  }
  iVar3 = func_0x028e3db0(param_1);
  if (0 < iVar3) {
    iVar8 = func_0x01c24918(0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar8 + 0xc);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x5b4d,0,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x5b4d,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      pcVar9 = (char *)(_UNK_02232900 + 0x223280c);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02232904 + 0x2232820),iVar8,iVar3,0);
        *pcVar9 = '\x01';
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
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar8,0);
      func_0x01485238(&uStack_38,iVar3,0);
      iVar8 = *(int *)(iVar2 + 8);
      uVar10 = *(undefined4 *)(iVar2 + 0xc);
      iVar3 = *(int *)(iVar2 + 0x10);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 3;
      if (iVar3 == 0) {
        uVar7 = 2;
      }
      func_0x0245495c(iVar8,uVar10,&uStack_38,uVar7,0,0);
      uVar10 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02232908 + 0x22328f0));
      return uVar10;
    }
    pcVar9 = (char *)(_UNK_017e7cbc + 0x17e7c60);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017e7cc0 + 0x17e7c74),0);
      func_0x01384978(*(undefined4 *)(_UNK_017e7cc4 + 0x17e7c80));
      *pcVar9 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017e7cc8 + 0x17e7c94) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = **(int **)(_UNK_017e7ccc + 0x17e7cb0);
    iVar8 = *(int *)(iVar2 + 0x10);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x02457d84();
    }
    iVar8 = *(int *)(*(int *)(iVar8 + 0x60) + 8);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x02457d84();
    }
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x02457d48();
    }
    iVar8 = *(int *)(iVar2 + 0x10);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x02457d84();
    }
    piVar4 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar8 + 0x60) + 0xe8));
    if (piVar4 == (int *)0x0) {
      func_0x02457d50();
    }
    iVar8 = *(int *)(iVar2 + 0x10);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x02457d84();
    }
    iVar2 = *(int *)(*(int *)(iVar8 + 0x60) + 0xf4);
    uStack_28 = 0;
    uStack_2c = 0;
    (**(code **)(*piVar4 + 0x110))(piVar4,*(undefined4 *)(*piVar4 + 0x114));
    iVar8 = (**(code **)(*piVar4 + 0xe8))(piVar4,*(undefined4 *)(*piVar4 + 0xec));
    if (iVar8 != 0) {
      unaff_r4 = piVar4[0x11];
    }
    bVar1 = true;
    iVar6 = 0;
    if (iVar8 != 0 && unaff_r4 != 0) {
      iVar5 = func_0x03d66780(unaff_r4,iVar3,&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x68));
      uVar10 = uStack_28;
      bVar1 = false;
      iVar6 = unaff_r4;
      if (iVar5 != 0) {
        iVar8 = (**(code **)(*piVar4 + 0x100))(piVar4,*(undefined4 *)(*piVar4 + 0x104));
        if (iVar8 == 0) {
          return uStack_28;
        }
        (**(code **)(*piVar4 + 0x138))(piVar4,iVar3,uVar10,*(undefined4 *)(*piVar4 + 0x13c));
        return uStack_28;
      }
    }
    if ((piVar4[0x12] == 0) ||
       (iVar5 = func_0x0421f3b0(piVar4[0x12],iVar3,
                                *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x13c)),
       iVar5 == 0)) {
      uStack_2c = 0;
      iVar5 = (**(code **)(*piVar4 + 0x1a0))
                        (piVar4,iVar3,&uStack_2c,*(undefined4 *)(*piVar4 + 0x1a4));
      uVar10 = uStack_2c;
      if (iVar5 != 0) {
        if (iVar8 != 0) {
          if (bVar1) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar6 = func_0x02457d58();
            func_0x03d63f04(iVar6,4,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x74))
            ;
            piVar4[0x11] = iVar6;
          }
          if (iVar6 == 0) {
            func_0x02457d50();
          }
          func_0x03d6491c(iVar6,iVar3,uVar10,
                          *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x78));
        }
        iVar8 = (**(code **)(*piVar4 + 0x100))(piVar4,*(undefined4 *)(*piVar4 + 0x104));
        if (iVar8 == 0) {
          return uVar10;
        }
        (**(code **)(*piVar4 + 0x138))(piVar4,iVar3,uVar10,*(undefined4 *)(*piVar4 + 0x13c));
        return uVar10;
      }
      iVar8 = piVar4[0x12];
      if (iVar8 == 0) {
        if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0)
        {
          func_0x02457d84();
        }
        iVar8 = func_0x02457d58();
        func_0x0421ec60(iVar8,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x144));
        piVar4[0x12] = iVar8;
        if (iVar8 == 0) {
          func_0x02457d50();
          iVar8 = 0;
        }
      }
      func_0x04220004(iVar8,iVar3,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x148));
    }
    func_0x0369fb50(piVar4,iVar3,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x134));
    return 0;
  }
  return 0;
}



// ===== FAT.FarmBoardActivity$$_GetCurBoardDropConfigId RVA 0x28d3db0 =====

/* WARNING: Removing unreachable block (ram,0x03003dbc) */
/* WARNING: Removing unreachable block (ram,0x03003dd0) */
/* WARNING: Removing unreachable block (ram,0x03003ddc) */
/* WARNING: Removing unreachable block (ram,0x03003dec) */
/* WARNING: Removing unreachable block (ram,0x03003df4) */
/* WARNING: Removing unreachable block (ram,0x03003e00) */
/* WARNING: Removing unreachable block (ram,0x03003cb0) */
/* WARNING: Removing unreachable block (ram,0x03003cb8) */
/* WARNING: Removing unreachable block (ram,0x03003d60) */
/* WARNING: Removing unreachable block (ram,0x03003d74) */
/* WARNING: Removing unreachable block (ram,0x03003d80) */
/* WARNING: Removing unreachable block (ram,0x03003d90) */
/* WARNING: Removing unreachable block (ram,0x03003d98) */
/* WARNING: Removing unreachable block (ram,0x03003e1c) */
/* WARNING: Removing unreachable block (ram,0x03003da4) */
/* WARNING: Removing unreachable block (ram,0x03003db0) */
/* WARNING: Removing unreachable block (ram,0x03003e0c) */
/* WARNING: Removing unreachable block (ram,0x03003e28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e3db0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
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
  
  iVar1 = func_0x0229f06c(0x5b4a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b4a,0);
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
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar6);
    uVar10 = func_0x0245498c(&uStack_30,0,0);
    return uVar10;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  pcVar11 = (char *)(_UNK_028e401c + 0x28e3f54);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e4020 + 0x28e3f68));
    func_0x01384978(*(undefined4 *)(_UNK_028e4024 + 0x28e3f74));
    *pcVar11 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x5b4c,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0x5b4c,0);
    if (iVar8 == 0) {
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
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,iVar1,0);
    iVar9 = *(int *)(iVar8 + 8);
    uVar10 = *(undefined4 *)(iVar8 + 0xc);
    iVar1 = *(int *)(iVar8 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
    uVar10 = func_0x0245498c(&uStack_38,0,0);
    return uVar10;
  }
  iVar8 = FUN_028e3bdc(param_1);
  if (iVar8 != 0) {
    iVar9 = *(int *)(iVar8 + 0x18);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar9 + 0xc)) {
      iVar9 = **(int **)(_UNK_028e4028 + 0x28e4008);
      piVar2 = *(int **)(iVar8 + 0x18);
      if (*(int *)(iVar9 + 0x1c) == 0) {
        func_0x0140024c(iVar9);
      }
      if (piVar2 != (int *)0x0) {
        iVar8 = *(int *)(*(int *)(iVar9 + 0x1c) + 4);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x014001f0(iVar8);
        }
        iVar3 = *piVar2;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar8) {
              puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
              goto LAB_03003c20;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar8,0);
LAB_03003c20:
        iVar8 = (*(code *)*puVar4)(piVar2,puVar4[1]);
        if (iVar8 != 0) {
          if (iVar1 < 0) {
            iVar1 = 0;
          }
          else {
            iVar8 = *(int *)(*(int *)(iVar9 + 0x1c) + 4);
            if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
              iVar8 = func_0x014001f0(iVar8);
            }
            iVar3 = *piVar2;
            uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar5 != 0) {
              piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar8) {
                  puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                  goto LAB_03003cc8;
                }
                uVar5 = uVar5 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar8,0);
LAB_03003cc8:
            iVar8 = (*(code *)*puVar4)(piVar2,puVar4[1]);
            if (iVar8 <= iVar1) {
              iVar1 = *(int *)(*(int *)(iVar9 + 0x1c) + 4);
              if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = func_0x014001f0(iVar1);
              }
              iVar8 = *piVar2;
              uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
              if (uVar5 != 0) {
                piVar7 = (int *)(*(int *)(iVar8 + 0x58) + 4);
                do {
                  if (piVar7[-1] == iVar1) {
                    puVar4 = (undefined4 *)(iVar8 + *piVar7 * 8 + 0xc0);
                    goto LAB_03003e58;
                  }
                  uVar5 = uVar5 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_03003e58:
              iVar1 = (*(code *)*puVar4)(piVar2,puVar4[1]);
              iVar1 = iVar1 + -1;
            }
          }
          iVar8 = **(int **)(iVar9 + 0x1c);
          if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
            iVar8 = func_0x014001f0(iVar8);
          }
          iVar9 = *piVar2;
          uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar7[-1] == iVar8) {
                puVar4 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
                goto LAB_03003ed8;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar8,0);
LAB_03003ed8:
                    /* WARNING: Could not recover jumptable at 0x03003eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar10 = (*(code *)*puVar4)(piVar2,iVar1,puVar4[1]);
          return uVar10;
        }
      }
      return 0;
    }
  }
  return 0;
}



// ===== FAT.FarmBoardActivity$$_UseLegacyFarmlandLogic RVA 0x28d3e0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e3e0c(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_028e3ebc + 0x28e3e20);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e3ec0 + 0x28e3e34));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x5b4e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b4e,0);
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
  iVar1 = FUN_028e3bdc(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x14);
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



// ===== FAT.FarmBoardActivity$$_UseLegacyAnimalLogic RVA 0x28d3ec4 =====

undefined4 FUN_028e3ec4(undefined4 param_1)

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
  iVar1 = func_0x0229f06c(0x5b4f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b4f,0);
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
  iVar1 = FUN_028e3bdc(param_1);
  if ((iVar1 != 0) && (uVar4 = 0, 0 < *(int *)(iVar1 + 0x28))) {
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.FarmBoardActivity$$_GetBoardDropConfigIdByUnlockLevel RVA 0x28d3f3c =====

/* WARNING: Removing unreachable block (ram,0x03003dbc) */
/* WARNING: Removing unreachable block (ram,0x03003dd0) */
/* WARNING: Removing unreachable block (ram,0x03003ddc) */
/* WARNING: Removing unreachable block (ram,0x03003dec) */
/* WARNING: Removing unreachable block (ram,0x03003df4) */
/* WARNING: Removing unreachable block (ram,0x03003e00) */
/* WARNING: Removing unreachable block (ram,0x03003cb0) */
/* WARNING: Removing unreachable block (ram,0x03003cb8) */
/* WARNING: Removing unreachable block (ram,0x03003d60) */
/* WARNING: Removing unreachable block (ram,0x03003d74) */
/* WARNING: Removing unreachable block (ram,0x03003d80) */
/* WARNING: Removing unreachable block (ram,0x03003d90) */
/* WARNING: Removing unreachable block (ram,0x03003d98) */
/* WARNING: Removing unreachable block (ram,0x03003e1c) */
/* WARNING: Removing unreachable block (ram,0x03003da4) */
/* WARNING: Removing unreachable block (ram,0x03003db0) */
/* WARNING: Removing unreachable block (ram,0x03003e0c) */
/* WARNING: Removing unreachable block (ram,0x03003e28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e3f3c(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
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
  
  pcVar10 = (char *)(_UNK_028e401c + 0x28e3f54);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e4020 + 0x28e3f68));
    func_0x01384978(*(undefined4 *)(_UNK_028e4024 + 0x28e3f74));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b4c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b4c,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    uVar9 = func_0x0245498c(&uStack_38,0,0);
    return uVar9;
  }
  iVar1 = FUN_028e3bdc(param_1);
  if (iVar1 != 0) {
    iVar8 = *(int *)(iVar1 + 0x18);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar8 + 0xc)) {
      iVar8 = **(int **)(_UNK_028e4028 + 0x28e4008);
      piVar2 = *(int **)(iVar1 + 0x18);
      if (*(int *)(iVar8 + 0x1c) == 0) {
        func_0x0140024c(iVar8);
      }
      if (piVar2 != (int *)0x0) {
        iVar1 = *(int *)(*(int *)(iVar8 + 0x1c) + 4);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar3 = *piVar2;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
              goto LAB_03003c20;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_03003c20:
        iVar1 = (*(code *)*puVar4)(piVar2,puVar4[1]);
        if (iVar1 != 0) {
          if (param_2 < 0) {
            param_2 = 0;
          }
          else {
            iVar1 = *(int *)(*(int *)(iVar8 + 0x1c) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x014001f0(iVar1);
            }
            iVar3 = *piVar2;
            uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar5 != 0) {
              piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar7[-1] == iVar1) {
                  puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                  goto LAB_03003cc8;
                }
                uVar5 = uVar5 - 1;
                piVar7 = piVar7 + 2;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_03003cc8:
            iVar1 = (*(code *)*puVar4)(piVar2,puVar4[1]);
            if (iVar1 <= param_2) {
              iVar1 = *(int *)(*(int *)(iVar8 + 0x1c) + 4);
              if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
                iVar1 = func_0x014001f0(iVar1);
              }
              iVar3 = *piVar2;
              uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar5 != 0) {
                piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar7[-1] == iVar1) {
                    puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                    goto LAB_03003e58;
                  }
                  uVar5 = uVar5 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_03003e58:
              param_2 = (*(code *)*puVar4)(piVar2,puVar4[1]);
              param_2 = param_2 + -1;
            }
          }
          iVar1 = **(int **)(iVar8 + 0x1c);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x014001f0(iVar1);
          }
          iVar8 = *piVar2;
          uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar8 + 0x58) + 4);
            do {
              if (piVar7[-1] == iVar1) {
                puVar4 = (undefined4 *)(iVar8 + *piVar7 * 8 + 0xc0);
                goto LAB_03003ed8;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_03003ed8:
                    /* WARNING: Could not recover jumptable at 0x03003eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (*(code *)*puVar4)(piVar2,param_2,puVar4[1]);
          return uVar9;
        }
      }
      return 0;
    }
  }
  return 0;
}



// ===== FAT.FarmBoardActivity$$_GetBoardDropConfigByUnlockLevel RVA 0x28d402c =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e402c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
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
  
  iVar2 = func_0x0229f06c(0x5b50,0);
  if (iVar2 == 0) {
    param_2 = FUN_028e3f3c(param_1,param_2);
    if (param_2 < 1) {
      return 0;
    }
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0xc);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x5b4d,0,0);
    if (iVar2 == 0) {
      pcVar9 = (char *)(_UNK_017e7cbc + 0x17e7c60);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_017e7cc0 + 0x17e7c74),0);
        func_0x01384978(*(undefined4 *)(_UNK_017e7cc4 + 0x17e7c80));
        *pcVar9 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_017e7cc8 + 0x17e7c94) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar7 = **(int **)(_UNK_017e7ccc + 0x17e7cb0);
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
        iVar4 = func_0x03d66780(unaff_r4,param_2,auStack_28,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
        uVar8 = auStack_28[0];
        bVar1 = false;
        iVar5 = unaff_r4;
        if (iVar4 != 0) {
          iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
          if (iVar2 == 0) {
            return auStack_28[0];
          }
          (**(code **)(*piVar3 + 0x138))(piVar3,param_2,uVar8,*(undefined4 *)(*piVar3 + 0x13c));
          return auStack_28[0];
        }
      }
      if ((piVar3[0x12] == 0) ||
         (iVar4 = func_0x0421f3b0(piVar3[0x12],param_2,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
         iVar4 == 0)) {
        uStack_2c = 0;
        iVar4 = (**(code **)(*piVar3 + 0x1a0))
                          (piVar3,param_2,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
        uVar8 = uStack_2c;
        if (iVar4 != 0) {
          if (iVar2 != 0) {
            if (bVar1) {
              if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                  == 0) {
                func_0x02457d84();
              }
              iVar5 = func_0x02457d58();
              func_0x03d63f04(iVar5,4,*(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74));
              piVar3[0x11] = iVar5;
            }
            if (iVar5 == 0) {
              func_0x02457d50();
            }
            func_0x03d6491c(iVar5,param_2,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
          }
          iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
          if (iVar2 == 0) {
            return uVar8;
          }
          (**(code **)(*piVar3 + 0x138))(piVar3,param_2,uVar8,*(undefined4 *)(*piVar3 + 0x13c));
          return uVar8;
        }
        iVar2 = piVar3[0x12];
        if (iVar2 == 0) {
          if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) ==
              0) {
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
        func_0x04220004(iVar2,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
      }
      func_0x0369fb50(piVar3,param_2,
                      *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
      return 0;
    }
    iVar2 = func_0x0229f13c(0x5b4d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5b50,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar9 = (char *)(_UNK_02232900 + 0x223280c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02232904 + 0x2232820),param_1,param_2,0);
    *pcVar9 = '\x01';
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
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar2 == 0) {
    uVar6 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar6,0,0);
  uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02232908 + 0x22328f0));
  return uVar8;
}



// ===== FAT.FarmBoardActivity$$DebugResetFarmBoard RVA 0x28d40dc =====

void FUN_028e40dc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b51,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x5b52,0);
    if (iVar1 == 0) {
      func_0x028e8964(param_1);
      if (*(int *)(param_1 + 0x3c) != 0) {
        func_0x021421a8(*(int *)(param_1 + 0x3c),param_1,0);
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x3c);
      uVar4 = *(undefined4 *)(param_1 + 0xb0);
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
      if (*(int *)(param_1 + 0x5c) != 0) {
        func_0x02befc68(*(int *)(param_1 + 0x5c),0);
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x5b52,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b51,0);
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



// ===== FAT.FarmBoardActivity$$_ClearFarmBoardData RVA 0x28d4134 =====

void FUN_028e4134(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b52,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b52,0);
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
  func_0x028e8964(param_1);
  if (*(int *)(param_1 + 0x3c) != 0) {
    func_0x021421a8(*(int *)(param_1 + 0x3c),param_1,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0xb0);
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
  if (*(int *)(param_1 + 0x5c) != 0) {
    func_0x02befc68(*(int *)(param_1 + 0x5c),0);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}



// ===== FAT.FarmBoardActivity$$.ctor RVA 0x28d4240 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e4240(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
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
  
  pcVar6 = (char *)(_UNK_028e45cc + 0x28e425c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e45d0 + 0x28e4270));
    func_0x01384978(*(undefined4 *)(_UNK_028e45d4 + 0x28e427c));
    func_0x01384978(*(undefined4 *)(_UNK_028e45d8 + 0x28e4288));
    func_0x01384978(*(undefined4 *)(_UNK_028e45dc + 0x28e4294));
    func_0x01384978(*(undefined4 *)(_UNK_028e45e0 + 0x28e42a0));
    func_0x01384978(*(undefined4 *)(_UNK_028e45e4 + 0x28e42ac));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_028e45e8 + 0x28e42d4);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar7;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  func_0x02b644a0(&uStack_30,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x694),0);
  uStack_34 = 0;
  *(undefined4 *)(param_1 + 0x60) = uStack_30;
  *(undefined4 *)(param_1 + 100) = uStack_2c;
  uStack_38 = 0;
  func_0x02b644a0(&uStack_38,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x6a0),0);
  uStack_3c = 0;
  *(undefined4 *)(param_1 + 0x68) = uStack_38;
  *(undefined4 *)(param_1 + 0x6c) = uStack_34;
  uStack_40 = 0;
  func_0x02b644a0(&uStack_40,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x6ac),0);
  uStack_44 = 0;
  *(undefined4 *)(param_1 + 0x70) = uStack_40;
  *(undefined4 *)(param_1 + 0x74) = uStack_3c;
  uStack_48 = 0;
  func_0x02b644a0(&uStack_48,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x6c0),0);
  uStack_4c = 0;
  *(undefined4 *)(param_1 + 0x78) = uStack_48;
  *(undefined4 *)(param_1 + 0x7c) = uStack_44;
  uStack_50 = 0;
  func_0x02b644a0(&uStack_50,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x6a8),0);
  uStack_5c = 0;
  *(undefined4 *)(param_1 + 0x80) = uStack_50;
  *(undefined4 *)(param_1 + 0x84) = uStack_4c;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x02b64854(&uStack_60,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x698),0);
  iVar1 = *piVar7;
  *(undefined4 *)(param_1 + 0x90) = uStack_58;
  *(ulonglong *)(param_1 + 0x88) = CONCAT44(uStack_5c,uStack_60);
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x02b64854(&uStack_70,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x69c),0);
  iVar1 = *piVar7;
  *(undefined4 *)(param_1 + 0x9c) = uStack_68;
  *(ulonglong *)(param_1 + 0x94) = CONCAT44(uStack_6c,uStack_70);
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x02b64854(&uStack_80,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x6a4),0);
  puVar10 = *(undefined4 **)(_UNK_028e45ec + 0x28e4464);
  *(undefined4 *)(param_1 + 0xa8) = uStack_78;
  *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_7c,uStack_80);
  uVar2 = func_0x01384be4(*puVar10);
  puVar9 = *(undefined4 **)(_UNK_028e45f0 + 0x28e4480);
  func_0x03258eb8(uVar2,*puVar9);
  puVar11 = *(undefined4 **)(_UNK_028e45f8 + 0x28e44a4);
  uVar4 = **(undefined4 **)(**(int **)(_UNK_028e45f4 + 0x28e4494) + 0x5c);
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  uVar3 = *puVar11;
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xd4) = uVar4;
  uVar2 = func_0x01384be4(uVar3);
  puVar8 = *(undefined4 **)(_UNK_028e45fc + 0x28e44c8);
  func_0x04419ad8(uVar2,*puVar8);
  iVar1 = _UNK_028e4600;
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  if (*(char *)(iVar1 + 0x28e44dc) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e4604 + 0x28e44f0));
    *(char *)(iVar1 + 0x28e44dc) = '\x01';
  }
  puVar5 = *(undefined8 **)(**(int **)(_UNK_028e4608 + 0x28e4504) + 0x5c);
  uVar2 = *puVar10;
  uVar12 = *puVar5;
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(puVar5 + 1);
  *(undefined8 *)(param_1 + 0xdc) = uVar12;
  uVar2 = func_0x01384be4(uVar2);
  func_0x03258eb8(uVar2,*puVar9);
  uVar3 = *puVar11;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  uVar2 = func_0x01384be4(uVar3);
  func_0x04419ad8(uVar2,*puVar8);
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
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
  uVar2 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x01ca9328(iVar1,uVar2,0);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  return;
}



// ===== FAT.FarmBoardActivity$$SetupFresh RVA 0x28d460c =====

void FUN_028e460c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x5b69,0);
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
    uVar3 = *(undefined4 *)(iVar2 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01cf6408(iVar1,uVar3,0);
    *(undefined4 *)(param_1 + 0x48) = uVar3;
    func_0x028e472c(param_1);
    func_0x028e4ba0(param_1);
    func_0x028e4c8c(param_1);
    func_0x028e4e94(param_1);
    func_0x028e55fc(param_1);
    func_0x028e5fcc(param_1);
    func_0x028e60b4(param_1);
    func_0x028e626c(param_1);
    func_0x028e636c(param_1,1);
    func_0x028e657c(param_1);
    uStack_20 = *(undefined8 *)(param_1 + 0x88);
    uStack_18 = *(undefined4 *)(param_1 + 0x90);
    func_0x02b64cc4(&uStack_20,0,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5b69,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.FarmBoardActivity$$_InitFarmBoardData RVA 0x28d472c =====

/* WARNING: Removing unreachable block (ram,0x028e49d0) */
/* WARNING: Removing unreachable block (ram,0x028e49dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e472c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
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
  
  pcVar7 = (char *)(_UNK_028e4b6c + 0x28e4744);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e4b70 + 0x28e4758));
    func_0x01384978(*(undefined4 *)(_UNK_028e4b74 + 0x28e4764));
    func_0x01384978(*(undefined4 *)(_UNK_028e4b78 + 0x28e4770));
    func_0x01384978(*(undefined4 *)(_UNK_028e4b7c + 0x28e477c));
    func_0x01384978(*(undefined4 *)(_UNK_028e4b80 + 0x28e4788));
    func_0x01384978(*(undefined4 *)(_UNK_028e4b84 + 0x28e4794));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b6b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b6b,0);
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
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar5,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar1 = FUN_028e3bdc(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar9 = *(int *)(iVar1 + 0x44);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar9,**(undefined4 **)(_UNK_028e4b88 + 0x28e4838));
  piVar11 = *(int **)(_UNK_028e4b8c + 0x28e4850);
  piVar12 = *(int **)(_UNK_028e4b90 + 0x28e4858);
  puVar8 = *(undefined4 **)(_UNK_028e4b94 + 0x28e4860);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
          goto LAB_028e48b8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_028e48b8:
    iVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar9 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
          goto LAB_028e492c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_028e492c:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    func_0x02f622a4(*(undefined4 *)(param_1 + 0xb0),uVar10,*puVar8);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar9 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_028e4b98 + 0x28e4970)) {
          puVar8 = (undefined4 *)(iVar9 + *piVar11 * 8 + 0xc0);
          goto LAB_028e49b8;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_028e4b98 + 0x28e4970),0);
LAB_028e49b8:
    (*(code *)*puVar8)(piVar2,puVar8[1]);
  }
  iVar9 = func_0x01c24918(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar9 + 0x3c);
  uVar10 = *(undefined4 *)(param_1 + 0xb0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x01cc1cc8(iVar9,uVar10,0);
  func_0x028e8660(param_1,*(undefined4 *)(iVar1 + 0x1c),1);
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020da680(&uStack_28,iVar1,0);
  uVar10 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xb4) = uStack_24;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020dc7e4(iVar1,uStack_24,uVar10,0);
  return;
}



// ===== FAT.FarmBoardActivity$$_InitStartToken RVA 0x28d4ba0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e4ba0(int param_1)

{
  int iVar1;
  int extraout_r2;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_028e4c80 + 0x28e4bb8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e4c84 + 0x28e4bcc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bed,0);
  if (iVar1 == 0) {
    iVar3 = FUN_028e3bdc(param_1);
    iVar1 = extraout_r2;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x44);
    }
    if (iVar3 != 0 && iVar1 != 0) {
      piVar6 = *(int **)(_UNK_028e4c88 + 0x28e4c44);
      uVar5 = *(undefined4 *)(iVar3 + 0x48);
      uVar2 = *(undefined4 *)(iVar1 + 0x40);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      func_0x028f1568(param_1,uVar2,uVar5,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x168));
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x5bed,0);
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
  return;
}



// ===== FAT.FarmBoardActivity$$_RefreshPopupInfo RVA 0x28d4c8c =====

void FUN_028e4c8c(int *param_1)

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
  iVar1 = func_0x0229f06c(0x5bee,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 != 0) {
      iVar1 = param_1[0x11];
      uStack_28 = *(undefined8 *)(param_1 + 0x22);
      iStack_20 = param_1[0x24];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x28),param_1,0,1,0);
      iVar1 = param_1[0x11];
      uStack_28 = *(undefined8 *)(param_1 + 0x25);
      iStack_20 = param_1[0x27];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x24),param_1,0,0,0);
      iVar1 = param_1[0x11];
      uStack_28 = *(undefined8 *)(param_1 + 0x28);
      iStack_20 = param_1[0x2a];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x20),param_1,0,0,0);
      iVar1 = param_1[0x11];
      iStack_30 = param_1[0x18];
      iStack_2c = param_1[0x19];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_30,*(undefined4 *)(iVar1 + 0x18),0);
      iVar1 = param_1[0x11];
      iStack_30 = param_1[0x1a];
      iStack_2c = param_1[0x1b];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_30,*(undefined4 *)(iVar1 + 0x38),0);
      iStack_30 = param_1[0x1e];
      iStack_2c = param_1[0x1f];
      iVar1 = param_1[0x11];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_30,*(undefined4 *)(iVar1 + 0x3c),0);
      iVar1 = param_1[0x11];
      iStack_30 = param_1[0x20];
      iStack_2c = param_1[0x21];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&iStack_30,*(undefined4 *)(iVar1 + 0x2c),0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5bee,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.FarmBoardActivity$$_RefreshFarmlandInfo RVA 0x28d4e94 =====

/* WARNING: Removing unreachable block (ram,0x028e546c) */
/* WARNING: Removing unreachable block (ram,0x028e5478) */
/* WARNING: Removing unreachable block (ram,0x028eca58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_028e4e94(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_028e558c + 0x28e4eac);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e5590 + 0x28e4ec0));
    func_0x01384978(*(undefined4 *)(_UNK_028e5594 + 0x28e4ecc));
    func_0x01384978(*(undefined4 *)(_UNK_028e5598 + 0x28e4ed8));
    func_0x01384978(*(undefined4 *)(_UNK_028e559c + 0x28e4ee4));
    func_0x01384978(*(undefined4 *)(_UNK_028e55a0 + 0x28e4ef0));
    func_0x01384978(*(undefined4 *)(_UNK_028e55a4 + 0x28e4efc));
    func_0x01384978(*(undefined4 *)(_UNK_028e55a8 + 0x28e4f08));
    func_0x01384978(*(undefined4 *)(_UNK_028e55ac + 0x28e4f14));
    func_0x01384978(*(undefined4 *)(_UNK_028e55b0 + 0x28e4f20));
    func_0x01384978(*(undefined4 *)(_UNK_028e55b4 + 0x28e4f2c));
    func_0x01384978(*(undefined4 *)(_UNK_028e55b8 + 0x28e4f38));
    func_0x01384978(*(undefined4 *)(_UNK_028e55bc + 0x28e4f44));
    func_0x01384978(*(undefined4 *)(_UNK_028e55c0 + 0x28e4f50));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5bf6,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5bf6,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    iStack_2c = iStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
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
    iStack_4c = 0;
    piVar1 = (int *)func_0x0245495c(iVar7,uVar9,&iStack_30,uVar5);
    return piVar1;
  }
  iVar2 = *(int *)(param_1 + 0xd8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  puVar3 = *(undefined4 **)(**(int **)(_UNK_028e55c4 + 0x28e4fc0) + 0x5c);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  *(undefined4 *)(param_1 + 0xd4) = *puVar3;
  iVar7 = FUN_028e3e0c(param_1);
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    iVar2 = FUN_028e3d0c(param_1);
    if (iVar2 == 0) {
      puVar3 = *(undefined4 **)(_UNK_028e55c8 + 0x28e51c4);
      iStack_28 = *(int *)(param_1 + 0x48);
      uVar9 = *puVar3;
      *(undefined4 *)(param_1 + 0x50) = 0;
      uVar9 = func_0x01384abc(uVar9,&iStack_28);
      iStack_2c = *(int *)(param_1 + 0x4c);
      uVar5 = func_0x01384abc(*puVar3,&iStack_2c);
      uVar9 = func_0x0467272c(**(undefined4 **)(_UNK_028e55cc + 0x28e5208),uVar9,uVar5,0);
    }
    else {
      if (-1 < *(int *)(iVar2 + 0x20)) {
        *(int *)(param_1 + 0x50) = *(int *)(iVar2 + 0x20);
        pcVar8 = (char *)(_UNK_028ecb98 + 0x28ec204);
        iStack_48 = param_1;
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_028ecb9c + 0x28ec218));
          func_0x01384978(*(undefined4 *)(_UNK_028ecba0 + 0x28ec224));
          func_0x01384978(*(undefined4 *)(_UNK_028ecba4 + 0x28ec230));
          func_0x01384978(*(undefined4 *)(_UNK_028ecba8 + 0x28ec23c));
          func_0x01384978(*(undefined4 *)(_UNK_028ecbac + 0x28ec248));
          func_0x01384978(*(undefined4 *)(_UNK_028ecbb0 + 0x28ec254));
          func_0x01384978(*(undefined4 *)(_UNK_028ecbb4 + 0x28ec260));
          func_0x01384978(*(undefined4 *)(_UNK_028ecbb8 + 0x28ec26c));
          func_0x01384978(*(undefined4 *)(_UNK_028ecbbc + 0x28ec278));
          func_0x01384978(*(undefined4 *)(_UNK_028ecbc0 + 0x28ec284));
          func_0x01384978(*(undefined4 *)(_UNK_028ecbc4 + 0x28ec290));
          func_0x01384978(*(undefined4 *)(_UNK_028ecbc8 + 0x28ec29c));
          func_0x01384978(*(undefined4 *)(_UNK_028ecbcc + 0x28ec2a8));
          func_0x01384978(*(undefined4 *)(_UNK_028ecbd0 + 0x28ec2b4));
          func_0x01384978(*(undefined4 *)(_UNK_028ecbd4 + 0x28ec2c0));
          *pcVar8 = '\x01';
        }
        piVar1 = (int *)0x0;
        iVar7 = func_0x0229f06c(0x5bf8,0);
        if (iVar7 != 0) {
          iVar7 = func_0x0229f13c(0x5bf8,0);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar12 = iStack_48;
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          iStack_28 = 0;
          func_0x0245494c(&uStack_50,0,iVar2,0);
          uStack_38 = uStack_50;
          uStack_34 = iStack_4c;
          iStack_30 = iStack_48;
          iStack_2c = iStack_44;
          iStack_28 = iStack_40;
          if (*(int *)(iVar7 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar12,0);
          func_0x01485278(&uStack_38,iVar2,0);
          iVar12 = *(int *)(iVar7 + 8);
          uVar9 = *(undefined4 *)(iVar7 + 0xc);
          iVar2 = *(int *)(iVar7 + 0x10);
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          uVar5 = 3;
          if (iVar2 == 0) {
            uVar5 = 2;
          }
          func_0x0245495c(iVar12,uVar9,&uStack_38,uVar5,0,0);
          piVar1 = (int *)func_0x0245496c(&uStack_38,0,0);
          return piVar1;
        }
        if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x20))) {
          iVar7 = *(int *)(iVar2 + 0x1c);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar7 + 0xc) < 1) {
            piVar10 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028ecbd8 + 0x28ec56c),4);
            iStack_40 = *(int *)(iStack_48 + 0x48);
            puVar3 = *(undefined4 **)(_UNK_028ecbdc + 0x28ec588);
            iVar7 = func_0x01384abc(*puVar3,&iStack_40);
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar7 != 0) &&
               (iVar12 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar10 + 0x20)), iVar12 == 0)) {
              uVar9 = func_0x01384c10();
              func_0x01384aa0(uVar9,0);
            }
            if (piVar10[3] == 0) {
              func_0x01384bf4();
            }
            piVar10[4] = iVar7;
            iStack_28 = *(int *)(iStack_48 + 0x4c);
            iVar7 = func_0x01384abc(*puVar3,&iStack_28);
            if ((iVar7 != 0) &&
               (iVar12 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar10 + 0x20)), iVar12 == 0)) {
              uVar9 = func_0x01384c10();
              func_0x01384aa0(uVar9,0);
            }
            if ((uint)piVar10[3] < 2) {
              func_0x01384bf4();
            }
            piVar10[5] = iVar7;
            iStack_2c = *(int *)(iVar2 + 0xc);
            iVar7 = func_0x01384abc(*puVar3,&iStack_2c);
            if ((iVar7 != 0) &&
               (iVar12 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar10 + 0x20)), iVar12 == 0)) {
              uVar9 = func_0x01384c10();
              func_0x01384aa0(uVar9,0);
            }
            if ((uint)piVar10[3] < 3) {
              func_0x01384bf4();
            }
            piVar10[6] = iVar7;
            iStack_30 = *(int *)(iVar2 + 0x20);
            iVar2 = func_0x01384abc(*puVar3,&iStack_30);
            if ((iVar2 != 0) &&
               (iVar7 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar10 + 0x20)), iVar7 == 0)) {
              uVar9 = func_0x01384c10();
              func_0x01384aa0(uVar9,0);
            }
            if ((uint)piVar10[3] < 4) {
              func_0x01384bf4();
            }
            piVar10[7] = iVar2;
            piVar1 = (int *)0x0;
            uVar9 = func_0x046727d0(**(undefined4 **)(_UNK_028ecbe0 + 0x28ec708),piVar10,0);
            if (*(int *)(**(int **)(_UNK_028ecbe4 + 0x28ec71c) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2944(uVar9,0);
          }
          else {
            iVar7 = *(int *)(iVar2 + 0x1c);
            iStack_4c = iVar2;
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            piVar1 = (int *)func_0x03653608(iVar7,**(undefined4 **)(_UNK_028ecbe8 + 0x28ec368));
LAB_028ec378:
            if (piVar1 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = *piVar1;
            uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar10[-1] == **(int **)(_UNK_028ecc0c + 0x28ec394)) {
                  puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
                  goto LAB_028ec3dc;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_028ecc0c + 0x28ec394),0);
LAB_028ec3dc:
            iVar2 = (*(code *)*puVar3)(piVar1,puVar3[1]);
            if (iVar2 == 0) {
              iVar2 = 0xb;
              goto LAB_028ec9e0;
            }
            if (piVar1 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = *piVar1;
            uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar10[-1] == **(int **)(_UNK_028ecbec + 0x28ec410)) {
                  puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
                  goto LAB_028ec458;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_028ecbec + 0x28ec410),0);
LAB_028ec458:
            iVar2 = (*(code *)*puVar3)(piVar1,puVar3[1]);
            if (*(int *)(**(int **)(_UNK_028ecbf0 + 0x28ec478) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x02566088(&iStack_40,iVar2,0);
            iVar14 = iStack_3c;
            iVar12 = iStack_40;
            bVar15 = iStack_40 == 1;
            iVar7 = iStack_40 + -1;
            if (iStack_40 >= 1) {
              bVar15 = iStack_3c == 0;
              iVar7 = iStack_3c;
            }
            if (!bVar15 && iVar7 < 0 == (iStack_40 < 1 && SBORROW4(iStack_40,1))) {
              iVar2 = *(int *)(iStack_48 + 0xd8);
              iStack_3c = 0;
              iStack_40 = 0;
              func_0x038fd264(&iStack_40,iVar12,iVar14,**(undefined4 **)(_UNK_028ecc04 + 0x28ec4c0))
              ;
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar12 = iStack_3c;
              iVar7 = iStack_40;
              iVar14 = *(int *)(iVar2 + 8);
              uVar4 = *(uint *)(iVar2 + 0xc);
              piVar10 = *(int **)(_UNK_028ecc08 + 0x28ec510);
              *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
              iVar11 = *piVar10;
              if (iVar14 == 0) {
                func_0x01384bf0();
              }
              if (uVar4 < *(uint *)(iVar14 + 0xc)) {
                *(uint *)(iVar2 + 0xc) = uVar4 + 1;
                iVar14 = iVar14 + uVar4 * 8;
                *(int *)(iVar14 + 0x10) = iVar7;
                *(int *)(iVar14 + 0x14) = iVar12;
              }
              else {
                func_0x0441a364(iVar2,iVar7,iVar12,
                                *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
              }
              goto LAB_028ec378;
            }
            piVar10 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028ecbf4 + 0x28ec754),6);
            iStack_40 = *(int *)(iStack_48 + 0x48);
            puVar3 = *(undefined4 **)(_UNK_028ecbf8 + 0x28ec774);
            iVar7 = func_0x01384abc(*puVar3,&iStack_40);
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar7 != 0) &&
               (iVar11 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar10 + 0x20)), iVar11 == 0)) {
              uVar9 = func_0x01384c10();
              func_0x01384aa0(uVar9,0);
            }
            if (piVar10[3] == 0) {
              func_0x01384bf4();
            }
            piVar10[4] = iVar7;
            iStack_28 = *(int *)(iStack_48 + 0x4c);
            iVar7 = func_0x01384abc(*puVar3,&iStack_28);
            if ((iVar7 != 0) &&
               (iVar11 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar10 + 0x20)), iVar11 == 0)) {
              uVar9 = func_0x01384c10();
              func_0x01384aa0(uVar9,0);
            }
            if ((uint)piVar10[3] < 2) {
              func_0x01384bf4();
            }
            piVar10[5] = iVar7;
            iStack_2c = *(int *)(iStack_4c + 0xc);
            iVar7 = func_0x01384abc(*puVar3,&iStack_2c);
            if ((iVar7 != 0) &&
               (iVar11 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar10 + 0x20)), iVar11 == 0)) {
              uVar9 = func_0x01384c10();
              func_0x01384aa0(uVar9,0);
            }
            if ((uint)piVar10[3] < 3) {
              func_0x01384bf4();
            }
            piVar10[6] = iVar7;
            if ((iVar2 != 0) &&
               (iVar7 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar10 + 0x20)), iVar7 == 0)) {
              uVar9 = func_0x01384c10();
              func_0x01384aa0(uVar9,0);
            }
            if ((uint)piVar10[3] < 4) {
              func_0x01384bf4();
            }
            piVar10[7] = iVar2;
            iStack_30 = iVar12;
            iVar2 = func_0x01384abc(*puVar3,&iStack_30);
            if ((iVar2 != 0) &&
               (iVar7 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar10 + 0x20)), iVar7 == 0)) {
              uVar9 = func_0x01384c10();
              func_0x01384aa0(uVar9,0);
            }
            if ((uint)piVar10[3] < 5) {
              func_0x01384bf4();
            }
            piVar10[8] = iVar2;
            iStack_44 = iVar14;
            iVar2 = func_0x01384abc(*puVar3,&iStack_44);
            if ((iVar2 != 0) &&
               (iVar7 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar10 + 0x20)), iVar7 == 0)) {
              uVar9 = func_0x01384c10();
              func_0x01384aa0(uVar9,0);
            }
            if ((uint)piVar10[3] < 6) {
              func_0x01384bf4();
            }
            piVar10[9] = iVar2;
            uVar9 = func_0x046727d0(**(undefined4 **)(_UNK_028ecbfc + 0x28ec97c),piVar10,0);
            if (*(int *)(**(int **)(_UNK_028ecc00 + 0x28ec998) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2944(uVar9,0);
            iVar2 = *(int *)(iStack_48 + 0xd8);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            *(undefined4 *)(iVar2 + 0xc) = 0;
            *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
            iVar2 = 10;
LAB_028ec9e0:
            if (piVar1 != (int *)0x0) {
              iVar7 = *piVar1;
              uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
              if (uVar4 != 0) {
                piVar10 = (int *)(*(int *)(iVar7 + 0x58) + 4);
                do {
                  if (piVar10[-1] == **(int **)(_UNK_028ecc10 + 0x28ec9f8)) {
                    puVar3 = (undefined4 *)(iVar7 + *piVar10 * 8 + 0xc0);
                    goto LAB_028eca40;
                  }
                  uVar4 = uVar4 - 1;
                  piVar10 = piVar10 + 2;
                } while (uVar4 != 0);
              }
              puVar3 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_028ecc10 + 0x28ec9f8),0)
              ;
LAB_028eca40:
              (*(code *)*puVar3)(piVar1,puVar3[1]);
            }
            if (iVar2 != 0xb) {
              piVar1 = (int *)0x0;
            }
            if (iVar2 == 0xb || iVar2 == 0) {
              iVar2 = *(int *)(iStack_48 + 0xd8);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              piVar1 = (int *)0x0;
              if (0 < *(int *)(iVar2 + 0xc)) {
                piVar1 = (int *)0x1;
              }
            }
          }
        }
        return piVar1;
      }
      puVar3 = *(undefined4 **)(_UNK_028e55d4 + 0x28e527c);
      *(undefined4 *)(param_1 + 0x50) = 0;
      piVar1 = (int *)func_0x01384a00(*puVar3,4);
      iStack_28 = *(int *)(param_1 + 0x48);
      puVar3 = *(undefined4 **)(_UNK_028e55d8 + 0x28e529c);
      iVar7 = func_0x01384abc(*puVar3,&iStack_28);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar7 != 0) &&
         (iVar12 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar1 + 0x20)), iVar12 == 0)) {
        uVar9 = func_0x01384c10();
        func_0x01384aa0(uVar9,0);
      }
      if (piVar1[3] == 0) {
        func_0x01384bf4();
      }
      piVar1[4] = iVar7;
      iStack_2c = *(int *)(param_1 + 0x4c);
      iVar7 = func_0x01384abc(*puVar3,&iStack_2c);
      if ((iVar7 != 0) &&
         (iVar12 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar1 + 0x20)), iVar12 == 0)) {
        uVar9 = func_0x01384c10();
        func_0x01384aa0(uVar9,0);
      }
      if ((uint)piVar1[3] < 2) {
        func_0x01384bf4();
      }
      piVar1[5] = iVar7;
      iStack_30 = *(int *)(iVar2 + 0xc);
      iVar7 = func_0x01384abc(*puVar3,&iStack_30);
      if ((iVar7 != 0) &&
         (iVar12 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar1 + 0x20)), iVar12 == 0)) {
        uVar9 = func_0x01384c10();
        func_0x01384aa0(uVar9,0);
      }
      if ((uint)piVar1[3] < 3) {
        func_0x01384bf4();
      }
      piVar1[6] = iVar7;
      uStack_34 = *(undefined4 *)(iVar2 + 0x20);
      iVar2 = func_0x01384abc(*puVar3,&uStack_34);
      if ((iVar2 != 0) &&
         (iVar7 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar7 == 0)) {
        uVar9 = func_0x01384c10();
        func_0x01384aa0(uVar9,0);
      }
      if ((uint)piVar1[3] < 4) {
        func_0x01384bf4();
      }
      piVar1[7] = iVar2;
      uVar9 = func_0x046727d0(**(undefined4 **)(_UNK_028e55dc + 0x28e5414),piVar1,0);
    }
    if (*(int *)(**(int **)(_UNK_028e55d0 + 0x28e5428) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar1 = (int *)func_0x028c2944(uVar9,0);
  }
  else {
    piVar1 = (int *)FUN_028e3bdc(param_1);
    if (piVar1 != (int *)0x0) {
      iVar2 = piVar1[5];
    }
    if (piVar1 != (int *)0x0 && iVar2 != 0) {
      iVar12 = 0;
      uVar9 = **(undefined4 **)(_UNK_028e55e0 + 0x28e5014);
      iVar7 = func_0x01c24918(0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar7 + 0xc);
      piVar1 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_028e55e4 + 0x28e5038));
      piVar10 = *(int **)(_UNK_028e55e8 + 0x28e5054);
      piVar13 = *(int **)(_UNK_028e55ec + 0x28e505c);
LAB_028e5058:
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_028e50b4;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_028e50b4:
      iVar2 = (*(code *)*puVar3)(piVar1,puVar3[1]);
      if (iVar2 != 0) {
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar1;
        uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar13) {
              puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
              goto LAB_028e5128;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar1,*piVar13,0);
LAB_028e5128:
        uVar5 = (*(code *)*puVar3)(piVar1,puVar3[1]);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01ca95e4(iVar7,uVar5,0);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) <= *(int *)(param_1 + 0x4c))) {
          uVar9 = *(undefined4 *)(iVar2 + 0x14);
          iVar12 = iVar12 + 1;
        }
        goto LAB_028e5058;
      }
      if (piVar1 != (int *)0x0) {
        iVar2 = *piVar1;
        uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_028e55f0 + 0x28e5230)) {
              puVar3 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
              goto LAB_028e5454;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_028e55f0 + 0x28e5230),0);
LAB_028e5454:
        (*(code *)*puVar3)(piVar1,puVar3[1]);
      }
      piVar1 = *(int **)(_UNK_028e55f4 + 0x28e548c);
      *(undefined4 *)(param_1 + 0xd4) = uVar9;
      iVar2 = *(int *)(*piVar1 + 0x74);
      *(int *)(param_1 + 0x50) = iVar12;
      if (iVar2 == 0) {
        func_0x01384ab4();
      }
      piVar1 = (int *)func_0x02565b6c(uVar9,0);
      *(int **)(param_1 + 0xd0) = piVar1;
    }
  }
  return piVar1;
}



// ===== FAT.FarmBoardActivity$$_RefreshAnimalOutputInfo RVA 0x28d55fc =====

/* WARNING: Removing unreachable block (ram,0x028e5c74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e55fc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_028e5f54 + 0x28e5614);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e5f58 + 0x28e5628));
    func_0x01384978(*(undefined4 *)(_UNK_028e5f5c + 0x28e5634));
    func_0x01384978(*(undefined4 *)(_UNK_028e5f60 + 0x28e5640));
    func_0x01384978(*(undefined4 *)(_UNK_028e5f64 + 0x28e564c));
    func_0x01384978(*(undefined4 *)(_UNK_028e5f68 + 0x28e5658));
    func_0x01384978(*(undefined4 *)(_UNK_028e5f6c + 0x28e5664));
    func_0x01384978(*(undefined4 *)(_UNK_028e5f70 + 0x28e5670));
    func_0x01384978(*(undefined4 *)(_UNK_028e5f74 + 0x28e567c));
    func_0x01384978(*(undefined4 *)(_UNK_028e5f78 + 0x28e5688));
    func_0x01384978(*(undefined4 *)(_UNK_028e5f7c + 0x28e5694));
    func_0x01384978(*(undefined4 *)(_UNK_028e5f80 + 0x28e56a0));
    func_0x01384978(*(undefined4 *)(_UNK_028e5f84 + 0x28e56ac));
    func_0x01384978(*(undefined4 *)(_UNK_028e5f88 + 0x28e56b8));
    func_0x01384978(*(undefined4 *)(_UNK_028e5f8c + 0x28e56c4));
    *pcVar9 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x5bfa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bfa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar10 = *(int *)(param_1 + 0xec);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar10 + 0xc) = 0;
  *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
  iVar1 = func_0x028ee2b0(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
    return;
  }
  iVar1 = FUN_028e3ec4(param_1);
  if (iVar1 == 0) {
    iVar1 = func_0x028eedf4(param_1,&iStack_28);
    if ((iVar1 == 0) ||
       (iVar10 = func_0x028efbf0(param_1,iStack_28), iVar1 = iStack_28, iVar10 == 0))
    goto LAB_028e5e7c;
    iVar10 = *(int *)(param_1 + 0xf0);
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    if (iVar10 < *(int *)(iVar1 + 0x18)) {
      return;
    }
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028e5fbc + 0x28e5984),5);
    uStack_2c = *(undefined4 *)(param_1 + 0x48);
    puVar3 = *(undefined4 **)(_UNK_028e5fc0 + 0x28e599c);
    iVar1 = func_0x01384abc(*puVar3,&uStack_2c);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) &&
       (iVar10 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    uStack_30 = *(undefined4 *)(param_1 + 0x4c);
    iVar1 = func_0x01384abc(*puVar3,&uStack_30);
    if ((iVar1 != 0) &&
       (iVar10 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if ((uint)piVar2[3] < 2) {
      func_0x01384bf4();
    }
    iVar10 = iStack_28;
    piVar2[5] = iVar1;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)(iVar10 + 0xc);
    iVar1 = func_0x01384abc(*puVar3,&uStack_34);
    if ((iVar1 != 0) &&
       (iVar10 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if ((uint)piVar2[3] < 3) {
      func_0x01384bf4();
    }
    piVar2[6] = iVar1;
    uStack_38 = *(undefined4 *)(param_1 + 0xf0);
    iVar1 = func_0x01384abc(*puVar3,&uStack_38);
    if ((iVar1 != 0) &&
       (iVar10 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if ((uint)piVar2[3] < 4) {
      func_0x01384bf4();
    }
    iVar10 = iStack_28;
    piVar2[7] = iVar1;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    uStack_3c = *(undefined4 *)(iVar10 + 0x18);
    iVar1 = func_0x01384abc(*puVar3,&uStack_3c);
    if ((iVar1 != 0) &&
       (iVar10 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if ((uint)piVar2[3] < 5) {
      func_0x01384bf4();
    }
    piVar2[8] = iVar1;
    puVar3 = *(undefined4 **)(_UNK_028e5fc4 + 0x28e5b84);
LAB_028e5e40:
    uVar4 = func_0x046727d0(*puVar3,piVar2,0);
  }
  else {
    iVar1 = func_0x028edc50(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_028e5f98 + 0x28e57a8));
      piVar11 = *(int **)(_UNK_028e5f9c + 0x28e57c0);
LAB_028e57bc:
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_028e5818;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_028e5818:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 != 0) {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_028e5fa0 + 0x28e584c)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
              goto LAB_028e5894;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_028e5fa0 + 0x28e584c),0);
LAB_028e5894:
        uVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        iVar1 = *(int *)(param_1 + 0xe8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(iVar1 + 8);
        uVar7 = *(uint *)(iVar1 + 0xc);
        piVar8 = *(int **)(_UNK_028e5fa4 + 0x28e58d8);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar12 = *piVar8;
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        if (uVar7 < *(uint *)(iVar10 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar7 + 1;
          *(undefined4 *)(iVar10 + uVar7 * 4 + 0x10) = uVar4;
        }
        else {
          func_0x0325970c(iVar1,uVar4,
                          *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
        }
        goto LAB_028e57bc;
      }
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar11[-1] == **(int **)(_UNK_028e5fa8 + 0x28e5ba0)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
              goto LAB_028e5c5c;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_028e5fa8 + 0x28e5ba0),0);
LAB_028e5c5c:
        (*(code *)*puVar3)(piVar2,puVar3[1]);
      }
      iVar10 = *(int *)(param_1 + 0xe8);
      iVar1 = *(int *)(param_1 + 0xf0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      if (iVar1 < *(int *)(iVar10 + 0xc)) {
        return;
      }
      piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028e5fac + 0x28e5cac),4);
      uStack_2c = *(undefined4 *)(param_1 + 0x48);
      puVar3 = *(undefined4 **)(_UNK_028e5fb0 + 0x28e5cc4);
      iVar1 = func_0x01384abc(*puVar3,&uStack_2c);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar10 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if (piVar2[3] == 0) {
        func_0x01384bf4();
      }
      piVar2[4] = iVar1;
      uStack_30 = *(undefined4 *)(param_1 + 0x4c);
      iVar1 = func_0x01384abc(*puVar3,&uStack_30);
      if ((iVar1 != 0) &&
         (iVar10 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar2[3] < 2) {
        func_0x01384bf4();
      }
      piVar2[5] = iVar1;
      uStack_34 = *(undefined4 *)(param_1 + 0xf0);
      iVar1 = func_0x01384abc(*puVar3,&uStack_34);
      if ((iVar1 != 0) &&
         (iVar10 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar2[3] < 3) {
        func_0x01384bf4();
      }
      piVar2[6] = iVar1;
      iVar1 = *(int *)(param_1 + 0xe8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = func_0x01384abc(*puVar3,&uStack_38);
      if ((iVar1 != 0) &&
         (iVar10 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar2[3] < 4) {
        func_0x01384bf4();
      }
      piVar2[7] = iVar1;
      puVar3 = *(undefined4 **)(_UNK_028e5fb4 + 0x28e5e44);
      goto LAB_028e5e40;
    }
    uStack_2c = *(undefined4 *)(param_1 + 0x48);
    puVar3 = *(undefined4 **)(_UNK_028e5f90 + 0x28e5bec);
    uVar4 = func_0x01384abc(*puVar3,&uStack_2c);
    uStack_30 = *(undefined4 *)(param_1 + 0x4c);
    uVar5 = func_0x01384abc(*puVar3,&uStack_30);
    uStack_34 = *(undefined4 *)(param_1 + 0xf0);
    uVar6 = func_0x01384abc(*puVar3,&uStack_34);
    uVar4 = func_0x0467277c(**(undefined4 **)(_UNK_028e5f94 + 0x28e5c40),uVar4,uVar5,uVar6,0);
  }
  if (*(int *)(**(int **)(_UNK_028e5fc8 + 0x28e5e60) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar4,0);
LAB_028e5e7c:
  func_0x028eed14(param_1);
  return;
}



// ===== FAT.FarmBoardActivity$$_RefreshTokenOutputType RVA 0x28d5fcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e5fcc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar4 = (char *)(_UNK_028e60ac + 0x28e5fe0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e60b0 + 0x28e5ff4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c01,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c01,0);
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
    return;
  }
  uVar7 = FUN_028e3bdc(param_1);
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  iVar3 = (int)uVar7;
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  if (iVar3 != 0 && iVar1 != 0) {
    iVar6 = *(int *)(iVar3 + 0x3c);
    iVar1 = *(int *)(iVar3 + 0x30);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    iVar3 = iVar1;
    if (0 < iVar1) {
      iVar3 = iVar6;
    }
    if (iVar3 < 1) {
      if (iVar6 < 1) {
        if (iVar1 < 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 3;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    return;
  }
  return;
}



// ===== FAT.FarmBoardActivity$$_RefreshScoreEntity RVA 0x28d60b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e60b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_028e6250 + 0x28e60cc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e6254 + 0x28e60e0));
    func_0x01384978(*(undefined4 *)(_UNK_028e6258 + 0x28e60ec));
    func_0x01384978(*(undefined4 *)(_UNK_028e625c + 0x28e60f8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c03,0);
  if (iVar1 == 0) {
    iVar3 = func_0x028f1504(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x44);
    }
    if ((iVar3 != 0 && iVar1 != 0) && (iVar1 = FUN_028e3bdc(param_1), iVar1 != 0)) {
      iVar3 = *(int *)(param_1 + 0xf8);
      if (iVar3 == 0) {
        iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_028e6260 + 0x28e6194));
        func_0x02afb3e0(iVar3,0);
        *(int *)(param_1 + 0xf8) = iVar3;
      }
      iVar6 = *(int *)(param_1 + 0x44);
      uVar5 = *(undefined4 *)(param_1 + 0x58);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      piVar9 = *(int **)(_UNK_028e6264 + 0x28e61c8);
      uVar8 = *(undefined4 *)(iVar1 + 0x30);
      uVar2 = *(undefined4 *)(iVar6 + 0x40);
      iVar1 = *piVar9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar9;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x16c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = **(undefined4 **)(_UNK_028e6268 + 0x28e6210);
      uStack_44 = 1;
      uStack_3c = 0x3f;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      func_0x02af6c48(iVar3,uVar5,param_1,uVar2,uVar8,uVar7);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x5c03,0);
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
  return;
}



// ===== FAT.FarmBoardActivity$$_RefreshSpawnBonusHandler RVA 0x28d626c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e626c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
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
  
  pcVar9 = (char *)(_UNK_028e6360 + 0x28e6280);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e6364 + 0x28e6294));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5c04,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5c04,0);
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
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
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
    func_0x0245495c(iVar7,uVar10,&uStack_30,uVar5);
    return;
  }
  iVar2 = func_0x028e7f2c(param_1);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xfc) == 0) {
    uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_028e6368 + 0x28e6308));
    func_0x02157234(uVar10,param_1,0);
    *(undefined4 *)(param_1 + 0xfc) = uVar10;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  piVar6 = *(int **)(param_1 + 0xfc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar9 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x16b4,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x16b4,0);
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
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,piVar6,0);
    iVar8 = *(int *)(iVar7 + 8);
    uVar10 = *(undefined4 *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = func_0x02f6252c(*(undefined4 *)(iVar2 + 0x34),piVar6,
                          **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
  if (piVar6 == (int *)0x0 || iVar2 == 0) {
    return;
  }
  iVar2 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xd0);
        goto LAB_01dbba38;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar6,puVar1[1]);
  return;
}



// ===== FAT.FarmBoardActivity$$InitHandbookAgent RVA 0x28d636c =====

/* WARNING: Removing unreachable block (ram,0x02b61b38) */
/* WARNING: Removing unreachable block (ram,0x02b61b44) */
/* WARNING: Removing unreachable block (ram,0x02b61b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_028e636c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
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
  
  pcVar7 = (char *)(_UNK_028e6554 + 0x28e6388);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e6558 + 0x28e639c));
    func_0x01384978(*(undefined4 *)(_UNK_028e655c + 0x28e63a8));
    func_0x01384978(*(undefined4 *)(_UNK_028e6560 + 0x28e63b4));
    func_0x01384978(*(undefined4 *)(_UNK_028e6564 + 0x28e63c0));
    func_0x01384978(*(undefined4 *)(_UNK_028e6568 + 0x28e63cc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c05,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c05,0);
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
    iVar1 = func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return iVar1;
  }
  iVar5 = FUN_028e3bdc(param_1);
  iVar1 = 0;
  if (iVar5 != 0) {
    iVar8 = *(int *)(iVar5 + 0x34);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar1 = 0;
    if (*(int *)(iVar8 + 0xc) != 0) {
      if (*(int *)(param_1 + 0xac) == 0) {
        uVar4 = *(undefined4 *)(iVar5 + 0x34);
        uVar6 = *(undefined4 *)(iVar5 + 0x38);
        if (*(int *)(**(int **)(_UNK_028e656c + 0x28e6468) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar6 = func_0x02565a88(uVar6,0);
        iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_028e6570 + 0x28e64a0));
        uStack_24 = 0;
        uStack_28 = uVar6;
        func_0x02bf5bd8(iVar1,param_1,uVar4,param_2);
        puVar2 = *(undefined4 **)(_UNK_028e6574 + 0x28e64c8);
        *(int *)(param_1 + 0xac) = iVar1;
        uVar6 = func_0x01384be4(*puVar2);
        func_0x03ccab14(uVar6,param_1,**(undefined4 **)(_UNK_028e6578 + 0x28e64e8),0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02bf51c0(iVar1,uVar6,0);
      }
      iVar1 = *(int *)(param_1 + 0x44);
      if ((iVar1 != 0) && (iVar5 = *(int *)(iVar1 + 0x30), 0 < iVar5)) {
        iVar1 = *(int *)(param_1 + 0xac);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        pcVar7 = (char *)(_UNK_02bf66f0 + 0x2bf6634);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02bf66f4 + 0x2bf6648),iVar5,0);
          *pcVar7 = '\x01';
        }
        iVar8 = func_0x0229f06c(0x5c08,0);
        if (iVar8 != 0) {
          iVar8 = func_0x0229f13c(0x5c08,0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x0245494c(&uStack_50,0,iVar5,0);
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar8 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar1,0);
          func_0x01485238(&uStack_38,iVar5,0);
          iVar5 = *(int *)(iVar8 + 8);
          uVar6 = *(undefined4 *)(iVar8 + 0xc);
          iVar1 = *(int *)(iVar8 + 0x10);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 3;
          if (iVar1 == 0) {
            uVar4 = 2;
          }
          iVar1 = func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
          return iVar1;
        }
        if (0 < iVar5) {
          puVar2 = *(undefined4 **)(_UNK_02bf66f8 + 0x2bf66ac);
          *(int *)(iVar1 + 0x20) = iVar5;
          iVar5 = func_0x01384be4(*puVar2);
          func_0x02b635c4(iVar5,0);
          iVar8 = *(int *)(iVar1 + 0x20);
          *(int *)(iVar1 + 0x24) = iVar5;
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          pcVar7 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
          if (*pcVar7 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84),iVar8,0,0);
            func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
            func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
            func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
            *pcVar7 = '\x01';
          }
          iVar1 = func_0x0229f06c(0x305,0);
          if (iVar1 == 0) {
            iVar3 = 0;
            iVar1 = func_0x01822f2c(iVar8,0);
            *(int *)(iVar5 + 8) = iVar1;
            if (iVar1 == 0) {
              if (0 < iVar8) {
                uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),
                                        &stack0xffffffe4);
                iVar3 = 0;
                uVar6 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                                        **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar6,0);
                if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x028c2944(uVar6,0);
              }
            }
            else {
              uVar6 = func_0x017d2c28(*(undefined4 *)(iVar1 + 0x1c),0);
              iVar3 = 1;
              *(undefined4 *)(iVar5 + 0xc) = uVar6;
            }
          }
          else {
            iVar1 = func_0x0229f13c(0x305,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x021846e8(iVar1,iVar5,iVar8,0);
          }
          return iVar3;
        }
        return 0;
      }
    }
  }
  return iVar1;
}



// ===== FAT.FarmBoardActivity$$_InitBoost RVA 0x28d657c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e657c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
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
  
  pcVar6 = (char *)(_UNK_028e66b0 + 0x28e6590);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e66b4 + 0x28e65a4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c09,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c09,0);
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
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4);
    return;
  }
  iVar1 = FUN_028e3bdc(param_1);
  if ((iVar1 == 0) || (iVar5 = *(int *)(iVar1 + 0x20), iVar5 < 1)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_028e66b8 + 0x28e6628));
    func_0x02bf44e8(iVar2,0);
    iVar5 = *(int *)(iVar1 + 0x20);
    *(int *)(param_1 + 0x5c) = iVar2;
    if (iVar2 == 0) {
      func_0x01384bf0();
      iVar2 = 0;
    }
  }
  func_0x02befbb0(iVar2,iVar5,param_1,0);
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02bf02d0(iVar1,0);
  uVar7 = *(undefined4 *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_02befe10 + 0x2befcf4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02befe14 + 0x2befd08),uVar7,0);
    *pcVar6 = '\x01';
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
    func_0x0245494c(&uStack_50,0,uVar7,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,uVar7,0);
    iVar2 = *(int *)(iVar5 + 8);
    uVar7 = *(undefined4 *)(iVar5 + 0xc);
    iVar1 = *(int *)(iVar5 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar2,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  iVar5 = func_0x02beec64(iVar1);
  if (iVar5 != 0) {
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(uint *)(iVar1 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar1 + 0x14);
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar2 + 1 < iVar5) {
      do {
        iVar2 = iVar2 + 1;
        iVar3 = func_0x02befe18(iVar1,iVar2,uVar7);
        if (iVar3 == 0) {
          iVar2 = *(int *)(iVar1 + 0x14);
          break;
        }
        *(int *)(iVar1 + 0x14) = iVar2;
      } while (iVar5 + -1 != iVar2);
    }
    if ((int)uVar8 < iVar2) {
      iVar5 = *(int *)(iVar1 + 0x20);
      if (0x7fffffff < (*(uint *)(iVar1 + 0x10) & uVar8)) {
        *(int *)(iVar1 + 0x10) = iVar2;
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



// ===== FAT.FarmBoardActivity$$SaveSetup RVA 0x28d66bc =====

/* WARNING: Possible PIC construction at 0x028e6784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028e67b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028e67e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028e6814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028e6844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028e6874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028e68d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028e6908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028e68dc) */
/* WARNING: Removing unreachable block (ram,0x028e68f8) */
/* WARNING: Removing unreachable block (ram,0x028e68fc) */
/* WARNING: Removing unreachable block (ram,0x028e6878) */
/* WARNING: Removing unreachable block (ram,0x028e68ac) */
/* WARNING: Removing unreachable block (ram,0x028e68c8) */
/* WARNING: Removing unreachable block (ram,0x028e68cc) */
/* WARNING: Removing unreachable block (ram,0x028e6884) */
/* WARNING: Removing unreachable block (ram,0x028e6848) */
/* WARNING: Removing unreachable block (ram,0x028e6864) */
/* WARNING: Removing unreachable block (ram,0x028e6868) */
/* WARNING: Removing unreachable block (ram,0x028e6818) */
/* WARNING: Removing unreachable block (ram,0x028e6834) */
/* WARNING: Removing unreachable block (ram,0x028e6838) */
/* WARNING: Removing unreachable block (ram,0x028e67e8) */
/* WARNING: Removing unreachable block (ram,0x028e6804) */
/* WARNING: Removing unreachable block (ram,0x028e6808) */
/* WARNING: Removing unreachable block (ram,0x028e67b8) */
/* WARNING: Removing unreachable block (ram,0x028e67d4) */
/* WARNING: Removing unreachable block (ram,0x028e67d8) */
/* WARNING: Removing unreachable block (ram,0x028e6788) */
/* WARNING: Removing unreachable block (ram,0x028e67a4) */
/* WARNING: Removing unreachable block (ram,0x028e67a8) */
/* WARNING: Removing unreachable block (ram,0x028e690c) */
/* WARNING: Removing unreachable block (ram,0x028e6928) */
/* WARNING: Removing unreachable block (ram,0x028e692c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e66bc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar5 = (char *)(_UNK_028e6944 + 0x28e66d8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e6948 + 0x28e66ec));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c0c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c0c,0);
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
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&iStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar4 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0x48),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_2c = *(int **)(_UNK_028e694c + 0x28e6784);
  iVar3 = *piStack_2c;
  pcVar5 = (char *)(_UNK_03652bac + 0x3652b1c);
  iStack_38 = iVar1;
  iStack_34 = param_1;
  uStack_30 = uVar4;
  if (*pcVar5 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar5 = '\x01';
  }
  func_0x03031dbc(uVar4,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
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
  *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar4;
  return;
}



// ===== FAT.FarmBoardActivity$$LoadSetup RVA 0x28d6950 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e6950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
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
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_028e6b10 + 0x28e696c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e6b14 + 0x28e6980));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5c0e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5c0e,0);
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
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = func_0x01c23c30(0,uVar4,0);
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  uVar6 = func_0x01c23c30(1,uVar4,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  uVar6 = func_0x01c23c30(2,uVar4,0);
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  uVar6 = func_0x01c23c30(3,uVar4,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar6;
  uVar6 = func_0x01c23c30(4,uVar4,0);
  *(undefined4 *)(param_1 + 0xf0) = uVar6;
  uVar6 = func_0x01c23c30(5,uVar4,0);
  *(undefined4 *)(param_1 + 0xf4) = uVar6;
  iVar2 = FUN_028e3bdc(param_1);
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x20))) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_028e6b18 + 0x28e6a84));
    func_0x02bf44e8(iVar2,0);
    *(int *)(param_1 + 0x5c) = iVar2;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 8;
    uStack_1c = 0;
    func_0x02bf061c(iVar2,uVar4,6,7);
  }
  FUN_028e4c8c(param_1);
  func_0x028e6b1c(param_1);
  FUN_028e4e94(param_1);
  FUN_028e55fc(param_1);
  FUN_028e5fcc(param_1);
  FUN_028e60b4(param_1);
  FUN_028e636c(param_1,0);
  pcVar7 = (char *)(_UNK_028e66b0 + 0x28e6590);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e66b4 + 0x28e65a4));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5c09,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5c09,0);
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
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar4);
    return;
  }
  iVar2 = FUN_028e3bdc(param_1);
  if ((iVar2 == 0) || (iVar5 = *(int *)(iVar2 + 0x20), iVar5 < 1)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_028e66b8 + 0x28e6628));
    func_0x02bf44e8(iVar1,0);
    iVar5 = *(int *)(iVar2 + 0x20);
    *(int *)(param_1 + 0x5c) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = 0;
    }
  }
  func_0x02befbb0(iVar1,iVar5,param_1,0);
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02bf02d0(iVar2,0);
  uVar6 = *(undefined4 *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_02befe10 + 0x2befcf4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02befe14 + 0x2befd08),uVar6,0);
    *pcVar7 = '\x01';
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
    func_0x0245494c(&uStack_50,0,uVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485238(&uStack_38,uVar6,0);
    iVar1 = *(int *)(iVar5 + 8);
    uVar6 = *(undefined4 *)(iVar5 + 0xc);
    iVar2 = *(int *)(iVar5 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar1,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  iVar5 = func_0x02beec64(iVar2);
  if (iVar5 != 0) {
    iVar5 = *(int *)(iVar2 + 8);
    uVar8 = *(uint *)(iVar2 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar2 + 0x14);
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar1 + 1 < iVar5) {
      do {
        iVar1 = iVar1 + 1;
        iVar3 = func_0x02befe18(iVar2,iVar1,uVar6);
        if (iVar3 == 0) {
          iVar1 = *(int *)(iVar2 + 0x14);
          break;
        }
        *(int *)(iVar2 + 0x14) = iVar1;
      } while (iVar5 + -1 != iVar1);
    }
    if ((int)uVar8 < iVar1) {
      iVar5 = *(int *)(iVar2 + 0x20);
      if (0x7fffffff < (*(uint *)(iVar2 + 0x10) & uVar8)) {
        *(int *)(iVar2 + 0x10) = iVar1;
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



// ===== FAT.FarmBoardActivity$$_RefreshAllItemIdList RVA 0x28d6b1c =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_028e6b1c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
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
  
  pcVar7 = (char *)(_UNK_028e6e7c + 0x28e6b30);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e6e80 + 0x28e6b44));
    func_0x01384978(*(undefined4 *)(_UNK_028e6e84 + 0x28e6b50));
    func_0x01384978(*(undefined4 *)(_UNK_028e6e88 + 0x28e6b5c));
    func_0x01384978(*(undefined4 *)(_UNK_028e6e8c + 0x28e6b68));
    func_0x01384978(*(undefined4 *)(_UNK_028e6e90 + 0x28e6b74));
    func_0x01384978(*(undefined4 *)(_UNK_028e6e94 + 0x28e6b80));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c11,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c11,0);
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
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    iVar1 = func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar8 = FUN_028e3bdc(param_1);
  iVar1 = 0;
  if (iVar8 != 0) {
    iVar1 = *(int *)(iVar8 + 0x44);
  }
  if (iVar8 == 0 || iVar1 == 0) {
    return iVar1;
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_028e6e98 + 0x28e6c18));
  piVar10 = *(int **)(_UNK_028e6e9c + 0x28e6c2c);
  piVar11 = *(int **)(_UNK_028e6ea0 + 0x28e6c34);
  puVar12 = *(undefined4 **)(_UNK_028e6ea4 + 0x28e6c3c);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_028e6c94;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_028e6c94:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_028e6d08;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_028e6d08:
    uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    func_0x02f622a4(*(undefined4 *)(param_1 + 0xb0),uVar9,*puVar12);
  } while( true );
  iVar1 = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_028e6ea8 + 0x28e6d48)) {
          puVar12 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_028e6d90;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar4 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_028e6ea8 + 0x28e6d48),0);
LAB_028e6d90:
    iVar1 = (*(code *)*puVar12)(piVar2,puVar12[1]);
  }
  return iVar1;
}



// ===== FAT.FarmBoardActivity$$ResEnumerate RVA 0x28d6eb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_028e6eb0(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_028e6f5c + 0x28e6ec4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e6f60 + 0x28e6ed8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c12,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c12,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_028e6f64 + 0x28e6f30));
  func_0x028f2130(iVar1,0xfffffffe,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.FarmBoardActivity$$WhenReset RVA 0x28d6f68 =====

void FUN_028e6f68(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c1d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x5c1e,0);
    if (iVar1 == 0) {
      iVar3 = func_0x028f1504(param_1);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = *(int *)(param_1 + 0xf8);
      }
      if (iVar3 != 0 && iVar1 != 0) {
        func_0x02af7520(iVar1,0);
      }
      *(undefined4 *)(param_1 + 0xf8) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x5c1e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c1d,0);
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



// ===== FAT.FarmBoardActivity$$_ClearScoreEntity RVA 0x28d6fc0 =====

void FUN_028e6fc0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c1e,0);
  if (iVar1 == 0) {
    iVar3 = func_0x028f1504(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0xf8);
    }
    if (iVar3 != 0 && iVar1 != 0) {
      func_0x02af7520(iVar1,0);
    }
    *(undefined4 *)(param_1 + 0xf8) = 0;
    return;
  }
  iVar1 = func_0x0229f13c(0x5c1e,0);
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



// ===== FAT.FarmBoardActivity$$WhenEnd RVA 0x28d703c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e703c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int aiStack_34 [4];
  
  pcVar3 = (char *)(_UNK_028e74f0 + 0x28e7054);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e74f4 + 0x28e7068));
    func_0x01384978(*(undefined4 *)(_UNK_028e74f8 + 0x28e7074));
    func_0x01384978(*(undefined4 *)(_UNK_028e74fc + 0x28e7080));
    func_0x01384978(*(undefined4 *)(_UNK_028e7500 + 0x28e708c));
    func_0x01384978(*(undefined4 *)(_UNK_028e7504 + 0x28e7098));
    func_0x01384978(*(undefined4 *)(_UNK_028e7508 + 0x28e70a4));
    func_0x01384978(*(undefined4 *)(_UNK_028e750c + 0x28e70b0));
    func_0x01384978(*(undefined4 *)(_UNK_028e7510 + 0x28e70bc));
    *pcVar3 = '\x01';
  }
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  iStack_44 = 0;
  iVar1 = func_0x0229f06c(0x5c1f,0);
  if (iVar1 == 0) {
    iVar1 = FUN_028e3bdc(param_1);
    if (iVar1 != 0) {
      piVar8 = *(int **)(_UNK_028e7514 + 0x28e7148);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x028c8d78(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a45c(aiStack_34 + 1,iVar2,aiStack_34,**(undefined4 **)(_UNK_028e7518 + 0x28e7184));
      iVar2 = aiStack_34[0];
      iVar4 = *(int *)(param_1 + 0x44);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(param_1 + 0x58);
      uVar5 = *(undefined4 *)(iVar4 + 0x40);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar2,uVar5,uVar6,**(undefined4 **)(_UNK_028e751c + 0x28e71c0));
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x028c8d78(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      puVar9 = *(undefined4 **)(_UNK_028e7520 + 0x28e7208);
      func_0x0302a7c0(&uStack_50,iVar2,&uStack_38,*puVar9);
      uVar5 = uStack_38;
      piVar8 = *(int **)(_UNK_028e7524 + 0x28e722c);
      uVar6 = *(undefined4 *)(iVar1 + 0x2c);
      iVar1 = *piVar8;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar8;
      }
      func_0x02b4aed4(uVar6,uVar5,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x178),aiStack_34[0],0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(param_1 + 0x9c);
      iVar1 = *(int *)(iVar1 + 0xfc);
      puVar7 = *(undefined4 **)(_UNK_028e7528 + 0x28e7294);
      uVar5 = func_0x01384abc(*puVar7,&uStack_50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(iVar1,uVar6,0,uVar5,0);
      iVar1 = func_0x028c8d78(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_58,iVar1,&iStack_44,*puVar9);
      uStack_3c = uStack_54;
      uStack_40 = uStack_58;
      uVar5 = func_0x02c0389c(iStack_44,*(undefined4 *)(param_1 + 0x3c),0);
      if (*(int *)(param_1 + 0xac) != 0) {
        func_0x02bf7198(*(int *)(param_1 + 0xac),iStack_44,0);
      }
      func_0x019b5a40(param_1,uVar5,0);
      iVar1 = iStack_44;
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) < 1) {
        func_0x03633b24(&uStack_40,**(undefined4 **)(_UNK_028e752c + 0x28e73dc));
      }
      else {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar6 = *(undefined4 *)(param_1 + 0xa8);
        iVar1 = *(int *)(iVar1 + 0xfc);
        uStack_4c = uStack_3c;
        uStack_50 = uStack_40;
        uVar5 = func_0x01384abc(*puVar7,&uStack_50);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7437c(iVar1,uVar6,0,uVar5,0);
      }
      func_0x028c98a0(aiStack_34 + 1,0);
    }
    FUN_028e6fc0(param_1);
    if (*(int *)(param_1 + 0xac) != 0) {
      func_0x02bf56a4(*(int *)(param_1 + 0xac),0);
      iVar1 = *(int *)(param_1 + 0xac);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02bf6458(iVar1,0);
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    FUN_028e4134(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0x5c1f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.FarmBoardActivity$$get_Visual RVA 0x28d7530 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e7530(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c3a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c3a,0);
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



// ===== FAT.FarmBoardActivity$$get_VisualBoard RVA 0x28d7584 =====

void FUN_028e7584(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 100);
  *param_1 = *(undefined4 *)(param_2 + 0x60);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FarmBoardActivity$$get_VisualHelp RVA 0x28d7590 =====

void FUN_028e7590(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  *param_1 = *(undefined4 *)(param_2 + 0x68);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FarmBoardActivity$$get_VisualTokenTip RVA 0x28d759c =====

void FUN_028e759c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x74);
  *param_1 = *(undefined4 *)(param_2 + 0x70);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FarmBoardActivity$$get_VisualLoading RVA 0x28d75a8 =====

void FUN_028e75a8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  *param_1 = *(undefined4 *)(param_2 + 0x78);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FarmBoardActivity$$get_VisualComplete RVA 0x28d75b4 =====

void FUN_028e75b4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  *param_1 = *(undefined4 *)(param_2 + 0x80);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FarmBoardActivity$$get_StartPopup RVA 0x28d75c0 =====

void FUN_028e75c0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x90);
  *param_1 = uVar1;
  return;
}



// ===== FAT.FarmBoardActivity$$get_EndPopup RVA 0x28d75d4 =====

void FUN_028e75d4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x9c);
  *param_1 = uVar1;
  return;
}



// ===== FAT.FarmBoardActivity$$get_ConvertPopup RVA 0x28d75e8 =====

void FUN_028e75e8(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xa8);
  *param_1 = uVar1;
  return;
}



// ===== FAT.FarmBoardActivity$$Open RVA 0x28d75fc =====

void FUN_028e75fc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c3b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c3b,0);
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
  func_0x02b57d14(param_1,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),
                  *(undefined4 *)(param_1 + 0x60));
  return;
}



// ===== FAT.FarmBoardActivity$$Close RVA 0x28d7680 =====

void FUN_028e7680(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c3c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c3c,0);
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
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  func_0x02b57fac(param_1,*(undefined4 *)(iVar1 + 0xc),0,0);
  return;
}



// ===== FAT.FarmBoardActivity$$FAT.IBoardEntry.BoardEntryAsset RVA 0x28d7708 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e7708(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_028e77d0 + 0x28e7720);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e77d4 + 0x28e7734));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5c3d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = func_0x02b617fc(iVar1,0);
    func_0x02b63e8c(&uStack_18,**(undefined4 **)(_UNK_028e77d8 + 0x28e77b8),&uStack_14,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5c3d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.FarmBoardActivity$$get_HandbookAgent RVA 0x28d77dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e77dc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c3e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c3e,0);
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
  return *(undefined4 *)(param_1 + 0xac);
}



// ===== FAT.FarmBoardActivity$$IsItemUnlock RVA 0x28d7830 =====

/* WARNING: Possible PIC construction at 0x01cc4568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cc456c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_028e7830(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int unaff_r5;
  char *pcVar5;
  undefined4 uVar6;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  uint uStack_14;
  
  iVar2 = func_0x0229f06c(0x5c3f,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0x3c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01cc45c8 + 0x1cc4504);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01cc45cc + 0x1cc4518),param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_14 = 0;
    iVar2 = func_0x0229f06c(0x2ca,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02451924(iVar2,param_2,&uStack_14,**(undefined4 **)(_UNK_01cc45d0 + 0x1cc4594))
      ;
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = (uint)((uStack_14 & 0xfffffffe) == 2);
      }
      return uVar1;
    }
    iVar2 = func_0x0229f13c(0x2ca,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1cc456c;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar2;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar2 = func_0x0229f13c(0x5c3f,0);
    if (iVar2 == 0) {
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
  iVar3 = *(int *)(iVar2 + 0x10);
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
  iVar3 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  uVar1 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar1;
}



// ===== FAT.FarmBoardActivity$$GetAllItemIdList RVA 0x28d78c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e78c0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c40,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c40,0);
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
  return *(undefined4 *)(param_1 + 0xb0);
}



// ===== FAT.FarmBoardActivity$$_GetCurUnlockItemMaxLevel RVA 0x28d7914 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_028e7914(int *param_1)

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
  
  pcVar5 = (char *)(_UNK_028e7a34 + 0x28e7928);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e7a38 + 0x28e793c));
    func_0x01384978(*(undefined4 *)(_UNK_028e7a3c + 0x28e7948));
    *pcVar5 = '\x01';
  }
  iVar6 = 0;
  iVar1 = func_0x0229f06c(0x5c41,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 != 0) {
      puVar9 = *(undefined4 **)(_UNK_028e7a40 + 0x28e79c8);
      iVar6 = 0;
      iVar1 = 0;
      while( true ) {
        iVar8 = param_1[0x2c];
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar8 + 0xc) <= iVar1) break;
        iVar8 = param_1[0x2c];
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar7 = func_0x03259410(iVar8,iVar1,*puVar9);
        iVar2 = FUN_028e7830(param_1,uVar7);
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
  iVar6 = func_0x0229f13c(0x5c41,0);
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



// ===== FAT.FarmBoardActivity$$FAT.IBoardActivityHandbook.CheckIsBoardItem RVA 0x28d7a44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_028e7a44(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
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
  
  pcVar7 = (char *)(_UNK_028e7b34 + 0x28e7a5c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e7b38 + 0x28e7a70));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5c42,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5c42,0);
    piVar3 = param_1;
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
    func_0x01485278(&uStack_38,piVar3,0);
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
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    return uVar1;
  }
  iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if ((param_2 < 1) || (iVar2 == 0)) {
    return 0;
  }
  piVar3 = (int *)param_1[0x2b];
  if (piVar3 == (int *)0x0) {
    iVar2 = param_1[0x2c];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    pcVar7 = (char *)(_UNK_02bf6bd0 + 0x2bf6b40);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6bd4 + 0x2bf6b54),param_2,0);
      *pcVar7 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x5c43,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x5c43,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02179234;
    }
    iVar2 = piVar3[3];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = func_0x030fe230(*(undefined4 *)(iVar2 + 8),param_2,0);
    uVar1 = (uint)(iVar2 != -1);
  }
  return uVar1;
}



// ===== FAT.FarmBoardActivity$$FAT.IBoardActivityHandbook.OnNewItemUnlock RVA 0x28d7b40 =====

void FUN_028e7b40(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c44,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 == 0) {
      return;
    }
    if (param_1[0x17] != 0) {
      func_0x02befcdc(param_1[0x17],param_1[0x16],0);
    }
    iVar1 = FUN_028e7914(param_1);
    param_1[0x13] = iVar1;
    if ((param_1[0xf] != 0) && (iVar1 = func_0x02139cf4(param_1[0xf],0), iVar1 != 0)) {
      func_0x020dc7e4(iVar1,param_1[0x2d],param_1[0x13],0);
    }
    func_0x028e7c54(param_1);
    FUN_028e4e94(param_1);
    iVar1 = func_0x028e7f2c(param_1);
    if (iVar1 != 0) {
      iVar1 = param_1[0x3f];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02155388(iVar1,0);
    }
    param_1 = (int *)param_1[0x2b];
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
    iVar1 = func_0x0229f13c(0x5c44,0);
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



// ===== FAT.FarmBoardActivity$$_CheckCanMoveBoard RVA 0x28d7c54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e7c54(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_028e7f04 + 0x28e7c6c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e7f08 + 0x28e7c80));
    func_0x01384978(*(undefined4 *)(_UNK_028e7f0c + 0x28e7c8c));
    func_0x01384978(*(undefined4 *)(_UNK_028e7f10 + 0x28e7c98));
    func_0x01384978(*(undefined4 *)(_UNK_028e7f14 + 0x28e7ca4));
    func_0x01384978(*(undefined4 *)(_UNK_028e7f18 + 0x28e7cb0));
    *pcVar7 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0x5b6e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_028e7f1c + 0x28e7d10));
    func_0x028f1fdc(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = param_1[0x30];
    *(int **)(iVar1 + 8) = param_1;
    if ((char)iVar3 == '\0') {
      iVar8 = 0;
      param_1[0x31] = 0;
      *(undefined1 *)(param_1 + 0x2e) = 0;
      pcVar6 = *(code **)(*param_1 + 0x108);
      uVar5 = *(undefined4 *)(*param_1 + 0x10c);
      param_1[0x2f] = -1;
      iVar2 = (*pcVar6)(param_1,uVar5);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = param_1[0xf];
      }
      if (iVar2 != 0 && iVar3 != 0) {
        iVar8 = func_0x02139cf4(iVar3,0);
      }
      *(int *)(iVar1 + 0xc) = iVar8;
      if ((iVar8 != 0) && (iVar3 = func_0x020dd140(iVar8,0), iVar3 == 0)) {
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar3 + 0xc);
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar1 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x4c);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(iVar8 + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar9 = 0;
        iVar3 = func_0x01dbd5a4(iVar3,uVar5,0);
        if (iVar3 != 0) {
          uVar9 = *(undefined4 *)(iVar3 + 0x28);
        }
        *(undefined4 *)(iVar1 + 0x10) = uVar9;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x01ca93f0(iVar2,uVar9,0);
        iVar3 = 0;
        if (iVar8 != 0) {
          iVar3 = *(int *)(iVar8 + 0x14);
        }
        if (((iVar8 != 0 && iVar3 != 0) && (-1 < *(int *)(iVar3 + 0xc))) &&
           (iVar3 = func_0x03005740(iVar3,param_1[0x2d] + -1,&uStack_24,
                                    **(undefined4 **)(_UNK_028e7f20 + 0x28e7e5c)), uVar5 = uStack_24
           , iVar3 != 0)) {
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x01ca9454(iVar2,uVar5,0);
          if ((iVar3 != 0) &&
             (iVar3 = *(int *)(iVar3 + 0x18), *(int *)(iVar1 + 0x14) = iVar3, 0 < iVar3)) {
            iVar3 = func_0x024508e0(0);
            param_1[0x2f] = iVar3;
            puVar4 = *(undefined4 **)(_UNK_028e7f24 + 0x28e7ec4);
            *(undefined1 *)(param_1 + 0x2e) = 1;
            iVar3 = func_0x01384be4(*puVar4);
            func_0x0478dedc(iVar3,iVar1,**(undefined4 **)(_UNK_028e7f28 + 0x28e7ee4),0);
            param_1[0x31] = iVar3;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b6e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.FarmBoardActivity$$IsEnergyType RVA 0x28d7f2c =====

uint FUN_028e7f2c(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x5b54,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5b54,0);
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
  return (uint)((*(uint *)(param_1 + 0x54) & 0xfffffffd) == 1);
}



// ===== FAT.FarmBoardActivity$$FAT.IBoardActivityHandbook.OnNewItemShow RVA 0x28d7f90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e7f90(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_028e81d4 + 0x28e7fac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e81d8 + 0x28e7fc0));
    func_0x01384978(*(undefined4 *)(_UNK_028e81dc + 0x28e7fcc));
    func_0x01384978(*(undefined4 *)(_UNK_028e81e0 + 0x28e7fd8));
    func_0x01384978(*(undefined4 *)(_UNK_028e81e4 + 0x28e7fe4));
    func_0x01384978(*(undefined4 *)(_UNK_028e81e8 + 0x28e7ff0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c46,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c46,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02174108:
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
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
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 != 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x30);
    iVar5 = param_1[0x2c];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02116990(iVar1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x03259a6c(iVar5,uVar6,**(undefined4 **)(_UNK_028e81ec + 0x28e80bc));
    if (iVar5 != 0) {
      if (*(int *)(**(int **)(_UNK_028e81f0 + 0x28e80d8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar5 = func_0x0300d558(**(undefined4 **)(_UNK_028e81f4 + 0x28e80f4));
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar5,iVar1,**(undefined4 **)(_UNK_028e81f8 + 0x28e8118));
      iVar1 = param_1[0x2c];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = param_1[0x13];
      iVar2 = *(int *)(iVar1 + 0xc);
      iVar1 = FUN_028e3bdc(param_1);
      iVar5 = param_1[0xf];
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(iVar1 + 0x24);
      }
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139cf4(iVar5,0);
      uStack_38 = 0;
      if (iVar1 != 0) {
        uStack_38 = *(undefined4 *)(iVar1 + 8);
      }
      iStack_30 = param_1[0x14];
      iStack_34 = param_1[0x2d];
      uStack_2c = (uint)(iVar2 <= iVar7);
      uStack_28 = 0;
      func_0x019b56a4(param_1,iVar7,iVar2,uVar6);
    }
    param_1 = (int *)param_1[0x2b];
    if (param_1 != (int *)0x0) {
      iVar1 = func_0x0229f06c(0x5c48,0,0);
      if (iVar1 == 0) {
        iVar1 = param_1[0xf];
        if (iVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x02bf6aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      iVar1 = func_0x0229f13c(0x5c48,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02174108;
    }
  }
  return;
}



// ===== FAT.FarmBoardActivity$$CheckClaimBoardCategoryReward RVA 0x28d81fc =====

/* WARNING: Possible PIC construction at 0x02bf69e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf69e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_028e81fc(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 uVar5;
  int unaff_r6;
  char *pcVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [7];
  char cStack_11;
  
  iVar2 = func_0x0229f06c(0x5c49,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0xac);
    if (param_1 == 0) {
      return 0;
    }
    pcVar6 = (char *)(_UNK_02bf6a28 + 0x2bf697c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6a2c + 0x2bf6990),param_2,0);
      *pcVar6 = '\x01';
    }
    cStack_11 = '\0';
    iVar2 = func_0x0229f06c(0x5c4a,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d50be8(iVar2,param_2,&cStack_11,**(undefined4 **)(_UNK_02bf6a30 + 0x2bf6a0c));
      return (uint)(cStack_11 == '\0');
    }
    iVar2 = func_0x0229f13c(0x5c4a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2bf69e4;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar2;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar2 = func_0x0229f13c(0x5c49,0);
    if (iVar2 == 0) {
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
  iVar3 = *(int *)(iVar2 + 0x10);
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
  iVar3 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  uVar1 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar1;
}



// ===== FAT.FarmBoardActivity$$CheckClaimBoardHandBookAllReward RVA 0x28d8274 =====

/* WARNING: Possible PIC construction at 0x02bf67ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf67b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e8274(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int unaff_r5;
  undefined4 uVar6;
  undefined4 unaff_r6;
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
  
  iVar1 = func_0x0229f06c(0x5c4b,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xac);
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
    iVar1 = func_0x0229f13c(0x5c4b,0);
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



// ===== FAT.FarmBoardActivity$$ProcessAllUnlockReward RVA 0x28d82e0 =====

/* WARNING: Removing unreachable block (ram,0x02bf91a0) */
/* WARNING: Removing unreachable block (ram,0x02bf91b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e82e0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c4d,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xac);
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
    iVar1 = func_0x0229f13c(0x5c4d,0);
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



// ===== FAT.FarmBoardActivity$$TrackHandbookRewardClaim RVA 0x28d834c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e834c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_028e8508 + 0x28e8368);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e850c + 0x28e837c));
    func_0x01384978(*(undefined4 *)(_UNK_028e8510 + 0x28e8388));
    func_0x01384978(*(undefined4 *)(_UNK_028e8514 + 0x28e8394));
    func_0x01384978(*(undefined4 *)(_UNK_028e8518 + 0x28e83a0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c06,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c06,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
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
    uVar4 = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      iVar3 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0);
      uVar4 = 0;
      if (iVar3 != 0) {
        uStack_1c = 0;
        uStack_20 = 0;
        func_0x03507d38(&uStack_20,*(undefined4 *)(iVar3 + 8),
                        **(undefined4 **)(_UNK_028e851c + 0x28e8468));
        uVar4 = uStack_1c;
      }
    }
    iVar3 = *(int *)(iVar1 + 0x44);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0364c54c(iVar3,param_2,**(undefined4 **)(_UNK_028e8520 + 0x28e84a4));
    iVar6 = *(int *)(iVar1 + 0x44);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    uStack_2c = *(undefined4 *)(param_1 + 0xb4);
    uStack_28 = *(undefined4 *)(iVar1 + 0x10);
    uStack_24 = 0;
    uStack_30 = (uint)(iVar3 + 1 == iVar6);
    uStack_34 = 1;
    uStack_38 = uVar4;
    func_0x02313628(param_1,iVar3 + 1,iVar6,*(undefined4 *)(param_1 + 0x48));
  }
  return;
}



// ===== FAT.FarmBoardActivity$$FAT.IBoardArchive.get_Feature RVA 0x28d8524 =====

undefined4 FUN_028e8524(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c4f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c4f,0);
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
  return 0x48;
}



// ===== FAT.FarmBoardActivity$$FAT.IBoardArchive.SetBoardData RVA 0x28d8578 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e8578(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
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
  
  iVar2 = func_0x0229f06c(0x5c50,0);
  if (iVar2 == 0) {
    if (param_2 == (int *)0x0) {
      return;
    }
    func_0x028e8660(param_1,param_2[0xe],0);
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0214a9e8(iVar2,param_2,0,0);
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02139cf4(iVar2,0);
    uVar9 = *(undefined4 *)(param_1 + 0x4c);
    uVar6 = *(undefined4 *)(param_1 + 0xb4);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x020dc7e4(iVar2,uVar6,uVar9,0);
    pcVar8 = (char *)(_UNK_028e6360 + 0x28e6280);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_028e6364 + 0x28e6294));
      *pcVar8 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x5c04,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x5c04,0);
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
      iVar3 = *(int *)(iVar2 + 8);
      uVar9 = *(undefined4 *)(iVar2 + 0xc);
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar6 = 2;
      if (iVar2 == 0) {
        uVar6 = 1;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar3,uVar9,&uStack_30,uVar6);
      return;
    }
    iVar2 = FUN_028e7f2c(param_1);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xfc) == 0) {
      uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_028e6368 + 0x28e6308));
      func_0x02157234(uVar9,param_1,0);
      *(undefined4 *)(param_1 + 0xfc) = uVar9;
    }
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    param_2 = *(int **)(param_1 + 0xfc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_01dbba4c + 0x1dbb948);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
      *pcVar8 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x16b4,0);
    if (iVar3 == 0) {
      iVar2 = func_0x02f6252c(*(undefined4 *)(iVar2 + 0x34),param_2,
                              **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
      if (param_2 == (int *)0x0 || iVar2 == 0) {
        return;
      }
      iVar2 = *param_2;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
            puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd0);
            goto LAB_01dbba38;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(param_2,puVar1[1]);
      return;
    }
    iVar3 = func_0x0229f13c(0x16b4,0);
    param_1 = iVar2;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x5c50,0);
    if (iVar3 == 0) {
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar2 == 0) {
    uVar6 = 2;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
  return;
}



// ===== FAT.FarmBoardActivity$$_InitWorld RVA 0x28d8660 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e8660(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
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
  
  pcVar9 = (char *)(_UNK_028e88c4 + 0x28e8680);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e88c8 + 0x28e8694));
    func_0x01384978(*(undefined4 *)(_UNK_028e88cc + 0x28e86a0));
    func_0x01384978(*(undefined4 *)(_UNK_028e88d0 + 0x28e86ac));
    func_0x01384978(*(undefined4 *)(_UNK_028e88d4 + 0x28e86b8));
    func_0x01384978(*(undefined4 *)(_UNK_028e88d8 + 0x28e86c4));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5b6c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5b6c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    uVar3 = func_0x0217f950(iVar2,param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_028e88dc + 0x28e872c));
  func_0x02143488(uVar3,0);
  puVar4 = *(undefined4 **)(_UNK_028e88e0 + 0x28e8748);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar3 = func_0x01384be4(*puVar4);
  func_0x0478dedc(uVar3,param_1,**(undefined4 **)(_UNK_028e88e4 + 0x28e8768),0);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_028e88e8 + 0x28e877c));
  func_0x0214d6c8(uVar5,uVar3,0,0);
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar2 + 0x4c);
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_028e88ec + 0x28e87bc));
  func_0x01db7f44(iVar2,0);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar2 + 8) = 5;
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  func_0x01db7f4c(iVar10,iVar2,0);
  iVar2 = *(int *)(param_1 + 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0214e900(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02141f58(iVar2,uVar3,0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_24 = 0;
  uStack_28 = param_3;
  func_0x01dbe654(iVar2,param_1,uVar3,param_2);
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_0214219c + 0x214211c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021421a0 + 0x2142130),param_1,0);
    *pcVar9 = '\x01';
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
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,param_1,0);
    iVar8 = *(int *)(iVar10 + 8);
    uVar3 = *(undefined4 *)(iVar10 + 0xc);
    iVar2 = *(int *)(iVar10 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    uVar3 = func_0x0245495c(iVar8,uVar3,&uStack_38,uVar5,0,0);
    return uVar3;
  }
  iVar10 = **(int **)(_UNK_021421a4 + 0x2142190);
  piVar1 = *(int **)(iVar2 + 0xa0);
  if (*(int *)(iVar10 + 0x1c) == 0) {
    func_0x0140024c(iVar10);
  }
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = **(int **)(iVar10 + 0x1c);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0(iVar2);
    }
    iVar8 = *piVar1;
    uVar6 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar2) {
          puVar4 = (undefined4 *)(iVar8 + *piVar7 * 8 + 0xe0);
          goto LAB_02f625c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar1,iVar2,4);
LAB_02f625c8:
    iVar2 = (*(code *)*puVar4)(piVar1,param_1,puVar4[1]);
    if (iVar2 == 0) {
      iVar2 = **(int **)(iVar10 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0(iVar2);
      }
      iVar10 = *piVar1;
      uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar2) {
            puVar4 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xd0);
            goto LAB_02f62650;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,iVar2,2);
LAB_02f62650:
      (*(code *)*puVar4)(piVar1,param_1,puVar4[1]);
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FAT.FarmBoardActivity$$FAT.IBoardArchive.FillBoardData RVA 0x28d88f0 =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e88f0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  char *pcVar11;
  int unaff_r4;
  undefined4 unaff_r5;
  int iVar12;
  undefined4 uVar13;
  undefined4 unaff_r6;
  undefined4 *puVar14;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  uint uVar15;
  int unaff_r9;
  undefined4 *puVar16;
  int unaff_r10;
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
  
  iVar4 = func_0x0229f06c(0x5c6b,0);
  if (iVar4 == 0) {
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
    iVar4 = func_0x0229f06c(0x5c6c,0);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x4c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar4 + 8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_2 + 0x38) = uVar13;
      uVar17 = func_0x02140d24(param_1);
      uVar17 = func_0x01458584((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),1000,0);
      *(undefined8 *)(param_2 + 0x30) = uVar17;
      piVar1 = (int *)func_0x021566f4(0);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar1;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_021488b8 + 0x2147e74)) {
            puVar2 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
            goto LAB_02147ebc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_021488b8 + 0x2147e74),0);
LAB_02147ebc:
      (*(code *)*puVar2)(piVar1,puVar2[1]);
      uVar13 = *(undefined4 *)(param_1 + 0x94);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_2 + 0x3c) = uVar13;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x021139b0(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 0x54);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02148958(iVar4,param_2);
      iVar4 = *(int *)(param_1 + 0x58);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02139e7c(iVar4,param_2);
      iVar4 = *(int *)(param_1 + 0x5c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0215ea7c(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 0x60);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x01db6828(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 100);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02110804(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 0x4c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x020dc720(iVar4,aiStack_28,0);
      iVar4 = aiStack_28[0];
      iStack_b4 = param_2;
      if (iVar6 != 0) {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        func_0x0325a3b4(&uStack_b0,iVar4,**(undefined4 **)(_UNK_021488bc + 0x2147fe8));
        uStack_38 = uStack_b0;
        uStack_34 = uStack_ac;
        uStack_30 = uStack_a8;
        uStack_2c = uStack_a4;
        puVar2 = *(undefined4 **)(_UNK_021488c0 + 0x2148004);
        puVar14 = *(undefined4 **)(_UNK_021488c4 + 0x214800c);
        while (iVar4 = func_0x03f597e0(unaff_r8,*puVar2), uVar7 = uStack_2c, iVar4 != 0) {
          iVar4 = *(int *)(param_2 + 0x6c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0364baf8(iVar4,uVar7,*puVar14);
        }
        func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_021488c8 + 0x2148050));
      }
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
      uVar17 = func_0x02140d24(param_1);
      uVar7 = *(uint *)(param_1 + 0x44);
      iVar4 = *(int *)(param_1 + 0x6c);
      uVar13 = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_2 + 0x44) = uVar13;
      uVar17 = func_0x01458584((uint)uVar17 - uVar7,
                               (int)((ulonglong)uVar17 >> 0x20) -
                               (((int)uVar7 >> 0x1f) + (uint)((uint)uVar17 < uVar7)),1000,0);
      *(undefined8 *)(param_2 + 0x10) = uVar17;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar4 + 0x10)) {
        iVar4 = *(int *)(param_1 + 0x6c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02454910(&uStack_b0,iVar4,**(undefined4 **)(_UNK_021488d0 + 0x21480dc));
        uVar7 = 0;
        uVar15 = 0;
        uStack_48 = uStack_b0;
        uStack_44 = uStack_ac;
        uStack_40 = uStack_a8;
        uStack_3c = uStack_a4;
        puVar2 = *(undefined4 **)(_UNK_021488d4 + 0x2148104);
        while (iVar4 = func_0x03f5a2cc(&uStack_48,*puVar2), iVar4 != 0) {
          uVar3 = uStack_3c & 0x3f;
          uVar8 = uVar3 - 0x20;
          uVar5 = 1 << uVar3;
          if (-1 < (int)uVar8) {
            uVar5 = 0;
          }
          uVar7 = uVar5 | uVar7;
          uVar5 = 1 >> (0x20 - uVar3 & 0xff);
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
      iVar4 = *(int *)(param_1 + 0x9c);
      iStack_b8 = param_1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar4,**(undefined4 **)(_UNK_021488e4 + 0x2148190));
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      puVar14 = *(undefined4 **)(_UNK_021488e8 + 0x21481bc);
      puVar2 = *(undefined4 **)(_UNK_021488ec + 0x21481c4);
      while (iVar4 = func_0x03f9b324(&uStack_60,*puVar14), uVar7 = uStack_54, iVar4 != 0) {
        iVar4 = (int)uStack_50;
        iVar12 = *(int *)(iStack_b4 + 0x50);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_021488f4 + 0x21481ec));
        func_0x01797598(iVar6,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148a58(iVar4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar6 + 0x10) = uVar13;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148aac(iVar4);
        *(undefined4 *)(iVar6 + 0xc) = uVar13;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar12,uVar7,iVar6,*puVar2);
      }
      func_0x03f9b464(&uStack_60,**(undefined4 **)(_UNK_021488f8 + 0x214826c));
      iVar4 = *(int *)(iStack_b8 + 0x98);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar4,**(undefined4 **)(_UNK_02148900 + 0x214829c));
      uStack_78 = uStack_b0;
      uStack_74 = uStack_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      puVar2 = *(undefined4 **)(_UNK_02148904 + 0x21482c8);
      puVar14 = *(undefined4 **)(_UNK_02148908 + 0x21482d0);
      puVar16 = *(undefined4 **)(_UNK_0214890c + 0x21482d8);
      while (iVar4 = func_0x03f9b324(&uStack_78,*puVar2), uVar7 = uStack_6c, iVar4 != 0) {
        iVar4 = (int)uStack_68;
        uVar13 = func_0x01384be4(*puVar14);
        func_0x01798ae4(uVar13,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02148b00(iVar4,uVar13);
        iVar4 = *(int *)(iStack_b4 + 0x58);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar4,uVar7,uVar13,*puVar16);
      }
      func_0x03f9b464(&uStack_78,**(undefined4 **)(_UNK_02148914 + 0x2148354));
      iVar6 = iStack_b4;
      iVar4 = iStack_b8;
      uVar13 = **(undefined4 **)(_UNK_0214891c + 0x2148368);
      *(int *)(iStack_b8 + 0xa4) = iStack_b4;
      uVar13 = func_0x01384be4(uVar13);
      func_0x03ccb96c(uVar13,iVar4,**(undefined4 **)(_UNK_02148920 + 0x2148390),0);
      func_0x021475dc(iVar4,uVar13,0x7fffffff);
      iVar12 = *(int *)(iVar4 + 0x68);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_b0,iVar12,**(undefined4 **)(_UNK_02148924 + 0x21483d0));
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      puVar2 = *(undefined4 **)(_UNK_02148928 + 0x21483ec);
      puVar14 = *(undefined4 **)(_UNK_0214892c + 0x21483f4);
      while (iVar12 = func_0x03f5f428(&uStack_88,*puVar2), uVar7 = uStack_7c, iVar12 != 0) {
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
      iVar6 = *(int *)(iVar4 + 0x34);
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
      puVar2 = *(undefined4 **)(_UNK_02148944 + 0x21484c8);
      while (iVar6 = func_0x03f9b9f8(&uStack_98,*puVar2), iVar6 != 0) {
        if (uStack_8c != 0) {
          func_0x02148de8(iVar4);
        }
      }
      func_0x03f9b9f4(&uStack_98,**(undefined4 **)(_UNK_0214894c + 0x21484fc));
      return;
    }
    iVar4 = func_0x0229f13c(0x5c6c,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2147e08;
    unaff_r4 = iVar4;
    unaff_r9 = param_2;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&iStack_b8;
  }
  else {
    iVar4 = func_0x0229f13c(0x5c6b,0);
    if (iVar4 == 0) {
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
  iVar6 = *(int *)(iVar4 + 0x10);
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
  iVar6 = *(int *)(iVar4 + 8);
  uVar13 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 3;
  if (iVar4 == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar10);
  return;
}



// ===== FAT.FarmBoardActivity$$_ClearSpawnBonusHandler RVA 0x28d8964 =====

void FUN_028e8964(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b53,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b53,0);
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
  iVar1 = FUN_028e7f2c(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0xfc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar4,0);
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return;
}



// ===== FAT.FarmBoardActivity$$FAT.IBoardActivityRowConf.GetRowConfIdList RVA 0x28d8a08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e8a08(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c7e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c7e,0);
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
  iVar1 = func_0x01ca93f0(iVar1,param_2,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x14);
  }
  return uVar4;
}



// ===== FAT.FarmBoardActivity$$FAT.IBoardActivityRowConf.GetRowConfStr RVA 0x28d8aa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_028e8aa8(undefined4 param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_028e8b80 + 0x28e8ac0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e8b84 + 0x28e8ad4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c7f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c7f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02198f18 + 0x2198e24);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02198f1c + 0x2198e38),param_1,param_2,0);
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
  iVar1 = func_0x01ca9454(iVar1,param_2,0);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x14);
  }
  iVar1 = **(int **)(_UNK_028e8b88 + 0x28e8b78);
  if (iVar3 != 0) {
    iVar1 = iVar3;
  }
  return iVar1;
}



// ===== FAT.FarmBoardActivity$$FAT.IBoardActivityRowConf.GetCycleStartRowId RVA 0x28d8b8c =====

undefined4 FUN_028e8b8c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c80,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c80,0);
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



// ===== FAT.FarmBoardActivity$$get_IsReadyToMove RVA 0x28d8be8 =====

uint FUN_028e8be8(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x5c81,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5c81,0);
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
  return (uint)*(byte *)(param_1 + 0xb8);
}



// ===== FAT.FarmBoardActivity$$_OnBoardItemChange RVA 0x28d8c3c =====

void FUN_028e8c3c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
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
  
  iVar2 = func_0x0229f06c(0x5b6d,0);
  if (iVar2 == 0) {
    FUN_028e7c54(param_1);
    iVar2 = func_0x0229f06c(0x5b85,0);
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0xc0) != '\0') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0xb8);
      bVar6 = cVar1 == '\0';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0xcc);
      }
      if (!bVar6 || cVar1 != '\0') {
        return;
      }
      iVar2 = func_0x028e8d2c(param_1);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0xcc) = 1;
        *(undefined4 *)(param_1 + 200) = 0;
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x5b85,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5b6d,0);
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
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.FarmBoardActivity$$CheckBoardExtremeCase RVA 0x28d8c9c =====

void FUN_028e8c9c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
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
  
  iVar2 = func_0x0229f06c(0x5b85,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5b85,0);
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
    return;
  }
  if (*(char *)(param_1 + 0xc0) == '\0') {
    cVar1 = *(char *)(param_1 + 0xb8);
    bVar6 = cVar1 == '\0';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0xcc);
    }
    if (bVar6 && cVar1 == '\0') {
      iVar2 = func_0x028e8d2c(param_1);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0xcc) = 1;
        *(undefined4 *)(param_1 + 200) = 0;
      }
      return;
    }
    return;
  }
  return;
}



// ===== FAT.FarmBoardActivity$$_CheckHasExtremeCase RVA 0x28d8d2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_028e8d2c(int *param_1)

{
  uint uVar1;
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
  
  pcVar5 = (char *)(_UNK_028e8e7c + 0x28e8d40);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e8e80 + 0x28e8d54));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5b86,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5b86,0);
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
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  iVar4 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = param_1[0xf];
  }
  if ((((iVar4 != 0 && iVar2 != 0) && (iVar2 = func_0x02139cf4(iVar2,0), iVar2 != 0)) &&
      (iVar4 = func_0x020ece38(iVar2,0), iVar4 == 0)) &&
     (iVar2 = func_0x020eccb8(iVar2,0), iVar2 == 0)) {
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_028e8e84 + 0x28e8e10));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01ddc2c0(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
      func_0x01e267a0(0,1,0);
      func_0x01384bf0();
    }
    else {
      func_0x01e267a0(iVar2,1,0);
    }
    uVar1 = func_0x01e241b4(iVar2,0);
    return uVar1 ^ 1;
  }
  return 0;
}



// ===== FAT.FarmBoardActivity$$FAT.IActivityUpdate.ActivityUpdate RVA 0x28d8e88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e8e88(int param_1,float param_2)

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
  
  pcVar5 = (char *)(_UNK_028e8fc8 + 0x28e8ea4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e8fcc + 0x28e8eb8));
    func_0x01384978(*(undefined4 *)(_UNK_028e8fd0 + 0x28e8ec4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c82,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c82,0);
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
  iVar1 = *(int *)(param_1 + 0xbc);
  if ((iVar1 != -1) && (iVar3 = func_0x024508e0(0), iVar1 != iVar3)) {
    if (*(int *)(**(int **)(_UNK_028e8fd4 + 0x28e8f44) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_028e8fd8 + 0x28e8f60));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar1,0);
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0xcc) != '\0') {
    param_2 = *(float *)(param_1 + 200) + param_2;
    *(float *)(param_1 + 200) = param_2;
    if (1.0 < param_2) {
      func_0x028e8fdc(param_1);
      *(undefined1 *)(param_1 + 0xcc) = 0;
    }
  }
  return;
}



// ===== FAT.FarmBoardActivity$$_ExecuteExtremeCase RVA 0x28d8fdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e8fdc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_028e9318 + 0x28e8ff4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e931c + 0x28e9008));
    func_0x01384978(*(undefined4 *)(_UNK_028e9320 + 0x28e9014));
    func_0x01384978(*(undefined4 *)(_UNK_028e9324 + 0x28e9020));
    func_0x01384978(*(undefined4 *)(_UNK_028e9328 + 0x28e902c));
    func_0x01384978(*(undefined4 *)(_UNK_028e932c + 0x28e9038));
    func_0x01384978(*(undefined4 *)(_UNK_028e9330 + 0x28e9044));
    *pcVar4 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x5c83,0);
  if (iVar1 == 0) {
    iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_028e9334 + 0x28e90a4));
    func_0x028f202c(iVar5,0);
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = param_1[0xf];
    }
    if (iVar2 != 0 && iVar1 != 0) {
      uVar6 = func_0x02139cf4(iVar1,0);
    }
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar5 + 8) = uVar6;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar5 + 8) != 0) && (iVar1 = FUN_028e8d2c(param_1), iVar1 != 0)) {
      if (*(int *)(**(int **)(_UNK_028e9338 + 0x28e911c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_028e933c + 0x28e9138));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar1,0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar1 + 0x10);
      iVar7 = **(int **)(_UNK_028e9340 + 0x28e917c);
      iVar1 = *(int *)(iVar7 + 0x1c);
      if (iVar1 == 0) {
        func_0x0140024c(iVar7);
        iVar1 = *(int *)(iVar7 + 0x1c);
      }
      iVar1 = *(int *)(iVar1 + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0();
      }
      uVar6 = **(undefined4 **)(iVar1 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01ca1c50(iVar2,0x47,uVar6,0);
      iVar1 = *(int *)(iVar5 + 8);
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_028e9344 + 0x28e920c));
      func_0x03ccb96c(uVar6,iVar5,**(undefined4 **)(_UNK_028e9348 + 0x28e9228),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar8 = 0;
      func_0x020dba14(iVar1,uVar6,0);
      iVar1 = *(int *)(iVar5 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x020da680(&iStack_30,iVar1,0);
      do {
        if (0 < iStack_30) {
          iVar1 = 0;
          do {
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar5 + 8);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x020e81ec(iVar2,iVar1,~uVar8 + iStack_2c,0);
            if (iVar2 != 0) {
              iVar7 = *(int *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              func_0x020df438(iVar7,iVar2,1,0);
            }
            iVar1 = iVar1 + 1;
          } while (iStack_30 != iVar1);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != 2);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x5c83,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_30 = 0;
  func_0x0245494c(&iStack_48,0,0);
  iStack_30 = iStack_48;
  iStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
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
  func_0x0245495c(iVar5,uVar6,&iStack_30,uVar3,0,0);
  return;
}



// ===== FAT.FarmBoardActivity$$StartMoveUpBoard RVA 0x28d934c =====

void FUN_028e934c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c86,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c86,0);
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
  if (*(char *)(param_1 + 0xb8) != '\0') {
    *(undefined1 *)(param_1 + 0xc0) = 1;
    iVar1 = *(int *)(param_1 + 0xc4);
    *(undefined1 *)(param_1 + 0xb8) = 0;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    }
    *(undefined1 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  return;
}



// ===== FAT.FarmBoardActivity$$_MoveDownBoard RVA 0x28d93dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028e93dc(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_028e97ac + 0x28e93fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e97b0 + 0x28e9414));
    func_0x01384978(*(undefined4 *)(_UNK_028e97b4 + 0x28e9420));
    func_0x01384978(*(undefined4 *)(_UNK_028e97b8 + 0x28e942c));
    func_0x01384978(*(undefined4 *)(_UNK_028e97bc + 0x28e9438));
    func_0x01384978(*(undefined4 *)(_UNK_028e97c0 + 0x28e9444));
    func_0x01384978(*(undefined4 *)(_UNK_028e97c4 + 0x28e9450));
    func_0x01384978(*(undefined4 *)(_UNK_028e97c8 + 0x28e945c));
    func_0x01384978(*(undefined4 *)(_UNK_028e97cc + 0x28e9468));
    func_0x01384978(*(undefined4 *)(_UNK_028e97d0 + 0x28e9474));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x5b71,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_028e97d4 + 0x28e9504));
    func_0x0328e950(uVar2,**(undefined4 **)(_UNK_028e97d8 + 0x28e951c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbfdac(iVar1,param_2,param_3,uVar2,0,0,0);
    piVar6 = *(int **)(_UNK_028e97dc + 0x28e9560);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_028e97e0 + 0x28e957c));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x034a1f3c(iVar3,uVar2,param_3,**(undefined4 **)(_UNK_028e97e4 + 0x28e95a4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc00d8(iVar1,param_2,param_3 + 1,0);
    piVar5 = *(int **)(_UNK_028e97e8 + 0x28e95d8);
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar5;
    }
    iVar3 = **(int **)(iVar3 + 0x5c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar3,&uStack_28,**(undefined4 **)(_UNK_028e97ec + 0x28e9614));
    iVar3 = func_0x02c04a3c(param_1,param_4,uStack_28,*(undefined4 *)(param_1 + 0xb4),param_3,0);
    uVar2 = uStack_28;
    if (iVar3 != 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dc0340(iVar1,param_2,uVar2,param_3,0);
    }
    func_0x028c98a0(&uStack_30,0);
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    iVar1 = *(int *)(param_1 + 0xb4) + param_3;
    *(int *)(param_1 + 0xb4) = iVar1;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x020dc7e4(param_2,iVar1,uVar2,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e2d040(iVar1,1,0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_028e97f0 + 0x28e9704));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349e110(iVar1,param_3,**(undefined4 **)(_UNK_028e97f4 + 0x28e9728));
  }
  else {
    iVar1 = func_0x0229f13c(0x5b71,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217fd9c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.FarmBoardActivity$$CheckHasFarmland RVA 0x28d97f8 =====

/* WARNING: Removing unreachable block (ram,0x028e9b1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_028e97f8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  bool bVar13;
  bool bVar14;
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
  
  pcVar9 = (char *)(_UNK_028e9bf8 + 0x28e9810);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028e9bfc + 0x28e9824));
    func_0x01384978(*(undefined4 *)(_UNK_028e9c00 + 0x28e9830));
    func_0x01384978(*(undefined4 *)(_UNK_028e9c04 + 0x28e983c));
    func_0x01384978(*(undefined4 *)(_UNK_028e9c08 + 0x28e9848));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c87,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c87,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar6,0,0);
    iVar1 = func_0x0245496c(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = FUN_028e3e0c(param_1);
  if (iVar1 == 0) {
    if (param_2 < 1) {
      iVar1 = FUN_028e402c(param_1,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = *(int *)(iVar1 + 0x20);
      bVar13 = iVar1 == 0;
      bVar14 = false;
    }
    else {
      iVar1 = FUN_028e402c(param_1,param_2 + -1);
      iVar8 = 0;
      if (iVar1 != 0) {
        iVar8 = *(int *)(iVar1 + 0x20);
      }
      iVar4 = 0;
      iVar1 = FUN_028e402c(param_1,param_2);
      if (iVar1 != 0) {
        iVar4 = *(int *)(iVar1 + 0x20);
      }
      bVar14 = SBORROW4(iVar4,iVar8);
      iVar1 = iVar4 - iVar8;
      bVar13 = iVar4 == iVar8;
    }
    iVar8 = 0;
    if (!bVar13 && iVar1 < 0 == bVar14) {
      iVar8 = 1;
    }
  }
  else {
    iVar1 = FUN_028e3bdc(param_1);
    iVar8 = 0;
    if (iVar1 != 0) {
      param_1 = *(int *)(iVar1 + 0x14);
    }
    if (iVar1 != 0 && param_1 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      piVar2 = (int *)func_0x0364c2b4(param_1,**(undefined4 **)(_UNK_028e9c0c + 0x28e98e8));
      piVar11 = *(int **)(_UNK_028e9c10 + 0x28e9904);
      piVar12 = *(int **)(_UNK_028e9c14 + 0x28e990c);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar8 = *piVar2;
        uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar11) {
              puVar3 = (undefined4 *)(iVar8 + *piVar7 * 8 + 0xc0);
              goto LAB_028e9964;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_028e9964:
        iVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar8 == 0) {
          iVar8 = 0;
          break;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar2;
        uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar12) {
              puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
              goto LAB_028e99dc;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_028e99dc:
        uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x01ca95e4(iVar1,uVar10,0);
      } while ((iVar4 == 0) || (*(int *)(iVar4 + 0x18) != param_2));
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar11[-1] == **(int **)(_UNK_028e9c18 + 0x28e9abc)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
              goto LAB_028e9b04;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_028e9c18 + 0x28e9abc),0);
LAB_028e9b04:
        (*(code *)*puVar3)(piVar2,puVar3[1]);
      }
    }
  }
  return iVar8;
}



// ===== FAT.FarmBoardActivity$$CollectFarmland RVA 0x28d9c20 =====

void FUN_028e9c20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5c88,0);
  if (iVar1 == 0) {
    iVar1 = FUN_028e3e0c(param_1);
    if (iVar1 == 0) {
      func_0x028e9ccc(param_1,param_2,param_3,param_4);
    }
    else {
      func_0x028ea700(param_1,param_2,param_3,param_4);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c88,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021ef980(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.FarmBoardActivity$$_CollectNewFarmland RVA 0x28d9ccc =====

/* WARNING: Removing unreachable block (ram,0x028ea498) */
/* WARNING: Removing unreachable block (ram,0x028ea488) */
/* WARNING: Removing unreachable block (ram,0x028ea4b0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028e9ccc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int aiStack_3c [6];
  
  pcVar8 = (char *)(_UNK_028ea67c + 0x28e9cec);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028ea680 + 0x28e9d04));
    func_0x01384978(*(undefined4 *)(_UNK_028ea684 + 0x28e9d10));
    func_0x01384978(*(undefined4 *)(_UNK_028ea688 + 0x28e9d1c));
    func_0x01384978(*(undefined4 *)(_UNK_028ea68c + 0x28e9d28));
    func_0x01384978(*(undefined4 *)(_UNK_028ea690 + 0x28e9d34));
    func_0x01384978(*(undefined4 *)(_UNK_028ea694 + 0x28e9d40));
    func_0x01384978(*(undefined4 *)(_UNK_028ea698 + 0x28e9d4c));
    func_0x01384978(*(undefined4 *)(_UNK_028ea69c + 0x28e9d58));
    func_0x01384978(*(undefined4 *)(_UNK_028ea6a0 + 0x28e9d64));
    func_0x01384978(*(undefined4 *)(_UNK_028ea6a4 + 0x28e9d70));
    func_0x01384978(*(undefined4 *)(_UNK_028ea6a8 + 0x28e9d7c));
    func_0x01384978(*(undefined4 *)(_UNK_028ea6ac + 0x28e9d88));
    func_0x01384978(*(undefined4 *)(_UNK_028ea6b0 + 0x28e9d94));
    func_0x01384978(*(undefined4 *)(_UNK_028ea6b4 + 0x28e9da0));
    func_0x01384978(*(undefined4 *)(_UNK_028ea6b8 + 0x28e9dac));
    func_0x01384978(*(undefined4 *)(_UNK_028ea6bc + 0x28e9db8));
    func_0x01384978(*(undefined4 *)(_UNK_028ea6c0 + 0x28e9dc4));
    *pcVar8 = '\x01';
  }
  aiStack_3c[5] = 0;
  aiStack_3c[4] = 0;
  aiStack_3c[3] = 0;
  aiStack_3c[2] = 0;
  aiStack_3c[1] = 0;
  aiStack_3c[0] = 0;
  iStack_44 = 0;
  uStack_48 = 0;
  iStack_4c = 0;
  iStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  iVar2 = func_0x0229f06c(0x5c89,0);
  if (iVar2 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = param_1[0xf];
    }
    iVar2 = 0;
    if (iVar3 != 0 && iVar4 != 0) {
      iVar4 = func_0x02139cf4(iVar4,0);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar3 = func_0x020ece38(iVar4,0);
        iVar2 = 1;
        if (iVar3 != 0) {
          uVar5 = FUN_028e3d0c(param_1);
          iVar3 = func_0x028eb4e4(param_1,uVar5);
          iVar2 = 0;
          if (iVar3 != 0) {
            uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_028ea6c4 + 0x28e9ee8));
            func_0x041cd5a4(uVar6,param_1,**(undefined4 **)(_UNK_028ea6c8 + 0x28e9f04),0);
            iVar3 = func_0x028eacdc(param_1,iVar4,uVar6);
            iVar2 = 2;
            if (iVar3 == 0) {
              iVar2 = param_1[0x11];
              iVar3 = param_1[0x17];
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x02beee40(iVar3,*(undefined4 *)(iVar2 + 0x44),aiStack_3c + 5,
                                      aiStack_3c + 4,0);
              iVar2 = 0;
              if (iVar3 != 0) {
                iVar2 = func_0x028eb9f8(param_1,aiStack_3c[5],1);
                if (iVar2 == 0) {
                  iVar4 = param_1[0x17];
                  iVar2 = 3;
                  if (iVar4 != 0) {
                    iVar3 = param_1[0x11];
                    if (iVar3 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x02bf0144(iVar4,*(undefined4 *)(iVar3 + 0x44),param_1[0x16],0);
                  }
                }
                else {
                  piVar10 = *(int **)(_UNK_028ea6cc + 0x28e9f84);
                  iVar2 = *piVar10;
                  if (*(int *)(iVar2 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar2 = *piVar10;
                  }
                  iVar2 = **(int **)(iVar2 + 0x5c);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0359c380(aiStack_3c + 1,iVar2,aiStack_3c + 3,
                                  **(undefined4 **)(_UNK_028ea6d0 + 0x28e9fc0));
                  iVar2 = *piVar10;
                  if (*(int *)(iVar2 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar2 = *piVar10;
                  }
                  iVar2 = **(int **)(iVar2 + 0x5c);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0359c380(&uStack_68,iVar2,aiStack_3c,
                                  **(undefined4 **)(_UNK_028ea6d4 + 0x28ea000));
                  iStack_44 = iStack_64;
                  uStack_48 = uStack_68;
                  if (*(int *)(**(int **)(_UNK_028ea6d8 + 0x28ea01c) + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  iVar2 = func_0x028c8d78(0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0302a45c(&uStack_68,iVar2,&iStack_4c,
                                  **(undefined4 **)(_UNK_028ea6dc + 0x28ea060));
                  iStack_54 = iStack_64;
                  uStack_58 = uStack_68;
                  iVar2 = func_0x028ebbb8(param_1,uVar5,aiStack_3c[3]);
                  if (iVar2 == 0) {
                    iVar4 = 0xf;
                    aiStack_3c[4] = 0;
                  }
                  else {
                    if (param_1[0x17] == 0) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = false;
                      iVar3 = func_0x02bef57c(param_1[0x17],0);
                      iVar2 = aiStack_3c[0];
                      if (0 < iVar3) {
                        if (aiStack_3c[0] == 0) {
                          func_0x01384bf0();
                        }
                        *(undefined4 *)(iVar2 + 0xc) = 0;
                        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
                        iVar2 = 0;
                        while( true ) {
                          iVar3 = aiStack_3c[3];
                          if (aiStack_3c[3] == 0) {
                            func_0x01384bf0();
                          }
                          iVar7 = aiStack_3c[3];
                          if (*(int *)(iVar3 + 0xc) <= iVar2) break;
                          iVar3 = param_1[0x17];
                          if (aiStack_3c[3] == 0) {
                            func_0x01384bf0();
                          }
                          uVar5 = func_0x03259410(iVar7,iVar2,
                                                  **(undefined4 **)(_UNK_028ea6e0 + 0x28ea128));
                          iVar7 = iStack_4c;
                          if (iVar3 == 0) {
                            func_0x01384bf0();
                          }
                          func_0x02bf06e8(iVar3,uVar5,1,&uStack_5c,iVar7,0);
                          iVar3 = aiStack_3c[0];
                          uVar5 = uStack_5c;
                          if (aiStack_3c[0] == 0) {
                            func_0x01384bf0();
                          }
                          iVar11 = *(int *)(iVar3 + 8);
                          uVar9 = *(uint *)(iVar3 + 0xc);
                          piVar10 = *(int **)(_UNK_028ea6e4 + 0x28ea1a0);
                          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
                          iVar7 = *piVar10;
                          if (iVar11 == 0) {
                            func_0x01384bf0();
                          }
                          if (uVar9 < *(uint *)(iVar11 + 0xc)) {
                            *(uint *)(iVar3 + 0xc) = uVar9 + 1;
                            *(undefined4 *)(iVar11 + uVar9 * 4 + 0x10) = uVar5;
                          }
                          else {
                            func_0x0325970c(iVar3,uVar5,
                                            *(undefined4 *)
                                             (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                          }
                          iVar2 = iVar2 + 1;
                        }
                        iVar2 = func_0x030624d4(**(undefined4 **)(_UNK_028ea6ec + 0x28ea25c),
                                                aiStack_3c[0],
                                                **(undefined4 **)(_UNK_028ea6e8 + 0x28ea250));
                        param_1[0x35] = iVar2;
                        bVar1 = true;
                      }
                    }
                    iVar2 = param_1[0x11];
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    iVar3 = aiStack_3c[5];
                    piVar10 = *(int **)(_UNK_028ea6f0 + 0x28ea294);
                    uVar5 = *(undefined4 *)(iVar2 + 0x40);
                    iVar2 = *piVar10;
                    if (*(int *)(iVar2 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar2 = *piVar10;
                    }
                    iVar2 = func_0x028eb004(param_1,uVar5,iVar3,
                                            *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x174));
                    if (iVar2 == 0) {
                      iVar4 = 0xf;
                      aiStack_3c[4] = 3;
                    }
                    else {
                      if (*(int *)(**(int **)(_UNK_028ea6f4 + 0x28ea2dc) + 0x74) == 0) {
                        func_0x01384ab4();
                      }
                      func_0x01dd7d28(0);
                      iVar2 = 0;
                      while( true ) {
                        iVar3 = aiStack_3c[3];
                        if (aiStack_3c[3] == 0) {
                          func_0x01384bf0();
                        }
                        iVar7 = aiStack_3c[3];
                        if (*(int *)(iVar3 + 0xc) <= iVar2) break;
                        if (aiStack_3c[3] == 0) {
                          func_0x01384bf0();
                        }
                        uVar5 = func_0x03259410(iVar7,iVar2,
                                                **(undefined4 **)(_UNK_028ea6f8 + 0x28ea330));
                        iVar3 = iStack_4c;
                        if (bVar1) {
                          iVar7 = param_1[0x17];
                          if (iVar7 == 0) {
                            func_0x01384bf0();
                          }
                          func_0x02bf06e8(iVar7,uVar5,1,&uStack_60,iVar3,0);
                        }
                        else {
                          uStack_60 = uVar5;
                          if (iStack_4c == 0) {
                            func_0x01384bf0();
                          }
                          *(undefined4 *)(iVar3 + 0xc) = 0;
                          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
                        }
                        func_0x028eb254(param_1,iVar4,uStack_60,param_2,param_3,param_4);
                        iVar3 = 0;
                        while( true ) {
                          iVar7 = iStack_4c;
                          if (iStack_4c == 0) {
                            func_0x01384bf0();
                          }
                          iVar11 = iStack_4c;
                          if (*(int *)(iVar7 + 0xc) <= iVar3) break;
                          if (iStack_4c == 0) {
                            func_0x01384bf0();
                          }
                          func_0x0441a030(&uStack_68,iVar11,iVar3,
                                          **(undefined4 **)(_UNK_028ea6fc + 0x28ea404));
                          uVar5 = uStack_68;
                          iVar7 = iStack_64;
                          if (0 < iStack_64) {
                            do {
                              func_0x028eb254(param_1,iVar4,uVar5,param_2,param_3,param_4);
                              iVar7 = iVar7 + -1;
                            } while (iVar7 != 0);
                          }
                          iVar3 = iVar3 + 1;
                        }
                        iVar2 = iVar2 + 1;
                      }
                      iVar4 = 0x1e;
                    }
                  }
                  func_0x028c98a0(&uStack_58,0);
                  func_0x028c98a0(&uStack_48,0);
                  func_0x028c98a0(aiStack_3c + 1,0);
                  if (iVar4 == 0) {
                    iVar2 = 4;
                  }
                  else {
                    iVar2 = aiStack_3c[4];
                    if (iVar4 != 0xf) {
                      iVar2 = 4;
                    }
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
    iVar2 = func_0x0229f13c(0x5c89,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x021ef980(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return iVar2;
}



// ===== FAT.FarmBoardActivity$$_CollectLegacyFarmland RVA 0x28da700 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028ea700(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int aiStack_34 [4];
  
  pcVar6 = (char *)(_UNK_028eac8c + 0x28ea720);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028eac90 + 0x28ea738));
    func_0x01384978(*(undefined4 *)(_UNK_028eac94 + 0x28ea744));
    func_0x01384978(*(undefined4 *)(_UNK_028eac98 + 0x28ea750));
    func_0x01384978(*(undefined4 *)(_UNK_028eac9c + 0x28ea75c));
    func_0x01384978(*(undefined4 *)(_UNK_028eaca0 + 0x28ea768));
    func_0x01384978(*(undefined4 *)(_UNK_028eaca4 + 0x28ea774));
    func_0x01384978(*(undefined4 *)(_UNK_028eaca8 + 0x28ea780));
    func_0x01384978(*(undefined4 *)(_UNK_028eacac + 0x28ea78c));
    func_0x01384978(*(undefined4 *)(_UNK_028eacb0 + 0x28ea798));
    func_0x01384978(*(undefined4 *)(_UNK_028eacb4 + 0x28ea7a4));
    *pcVar6 = '\x01';
  }
  aiStack_34[3] = 0;
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  iVar2 = func_0x0229f06c(0x5ca7,0);
  if (iVar2 == 0) {
    uVar3 = 0;
    if (param_1[0x34] != 0) {
      iVar4 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = param_1[0xf];
      }
      if (iVar4 != 0 && iVar2 != 0) {
        iVar2 = func_0x02139cf4(iVar2,0);
        uVar3 = 0;
        if (iVar2 != 0) {
          iVar4 = func_0x020ece38(iVar2,0);
          uVar3 = 1;
          if (iVar4 != 0) {
            uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_028eacb8 + 0x28ea894));
            func_0x041cd5a4(uVar3,param_1,**(undefined4 **)(_UNK_028eacbc + 0x28ea8b0),0);
            iVar4 = func_0x028eacdc(param_1,iVar2,uVar3);
            uVar3 = 2;
            if (iVar4 == 0) {
              iVar4 = param_1[0x11];
              iVar8 = param_1[0x17];
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              iVar4 = func_0x02beee40(iVar8,*(undefined4 *)(iVar4 + 0x44),aiStack_34 + 3,&uStack_3c,
                                      0);
              uVar3 = 0;
              if (iVar4 != 0) {
                if (*(int *)(**(int **)(_UNK_028eacc0 + 0x28ea918) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                iVar4 = func_0x028c8d78(0);
                if (iVar4 == 0) {
                  func_0x01384bf0();
                }
                func_0x0302a45c(aiStack_34 + 1,iVar4,aiStack_34,
                                **(undefined4 **)(_UNK_028eacc4 + 0x28ea954));
                iVar8 = param_1[0x17];
                iVar4 = param_1[0x34];
                if (iVar8 == 0) {
                  if (iVar4 == 0) {
                    func_0x01384bf0();
                  }
                  uStack_38 = *(undefined4 *)(iVar4 + 8);
                }
                else {
                  if (iVar4 == 0) {
                    func_0x01384bf0();
                    uVar3 = uRam00000008;
                    iVar4 = param_1[0x34];
                    if (iVar4 == 0) {
                      iVar4 = 0;
                      func_0x01384bf0();
                    }
                  }
                  else {
                    uVar3 = *(undefined4 *)(iVar4 + 8);
                  }
                  func_0x02bf06e8(iVar8,uVar3,*(undefined4 *)(iVar4 + 0xc),&uStack_38,aiStack_34[0],
                                  0);
                }
                puVar9 = *(undefined4 **)(_UNK_028eacc8 + 0x28ea9e0);
                uStack_48 = uStack_38;
                uVar3 = func_0x01384abc(*puVar9,&uStack_48);
                iVar4 = param_1[0x34];
                if (iVar4 == 0) {
                  func_0x01384bf0();
                }
                uStack_40 = *(undefined4 *)(iVar4 + 0xc);
                uVar5 = func_0x01384abc(*puVar9,&uStack_40);
                iVar4 = func_0x0467272c(**(undefined4 **)(_UNK_028eaccc + 0x28eaa24),uVar3,uVar5,0);
                iVar8 = param_1[0x11];
                param_1[0x35] = iVar4;
                if (iVar8 == 0) {
                  func_0x01384bf0();
                }
                iVar4 = aiStack_34[3];
                piVar7 = *(int **)(_UNK_028eacd0 + 0x28eaa50);
                uVar3 = *(undefined4 *)(iVar8 + 0x40);
                iVar8 = *piVar7;
                if (*(int *)(iVar8 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar8 = *piVar7;
                }
                iVar4 = func_0x028eb004(param_1,uVar3,iVar4,
                                        *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x174));
                if (iVar4 == 0) {
                  iVar2 = param_1[0x17];
                  uVar3 = 3;
                  if (iVar2 != 0) {
                    iVar4 = param_1[0x11];
                    if (iVar4 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x02bf0144(iVar2,*(undefined4 *)(iVar4 + 0x44),param_1[0x16],0);
                  }
                }
                else {
                  if (*(int *)(**(int **)(_UNK_028eacd4 + 0x28eaa98) + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  iVar4 = 0;
                  func_0x01dd7d28(0);
                  while( true ) {
                    iVar8 = param_1[0x34];
                    if (iVar8 == 0) {
                      func_0x01384bf0();
                    }
                    if (*(int *)(iVar8 + 0xc) <= iVar4) break;
                    func_0x028eb254(param_1,iVar2,uStack_38,param_2,param_3,param_4);
                    iVar4 = iVar4 + 1;
                  }
                  iVar4 = 0;
                  while( true ) {
                    iVar8 = aiStack_34[0];
                    if (aiStack_34[0] == 0) {
                      func_0x01384bf0();
                    }
                    iVar1 = aiStack_34[0];
                    if (*(int *)(iVar8 + 0xc) <= iVar4) break;
                    if (aiStack_34[0] == 0) {
                      func_0x01384bf0();
                    }
                    func_0x0441a030(&uStack_48,iVar1,iVar4,
                                    **(undefined4 **)(_UNK_028eacd8 + 0x28eab68));
                    uVar3 = uStack_48;
                    iVar8 = iStack_44;
                    if (0 < iStack_44) {
                      do {
                        func_0x028eb254(param_1,iVar2,uVar3,param_2,param_3,param_4);
                        iVar8 = iVar8 + -1;
                      } while (iVar8 != 0);
                    }
                    iVar4 = iVar4 + 1;
                  }
                  uVar3 = 4;
                }
                uStack_3c = uVar3;
                func_0x028c98a0(aiStack_34 + 1,0);
                uVar3 = uStack_3c;
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5ca7,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021ef980(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return uVar3;
}



// ===== FAT.FarmBoardActivity$$_TryCollectFarmlandRewardBoxItem RVA 0x28dacdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028eacdc(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  
  pcVar6 = (char *)(_UNK_028eafe0 + 0x28eacfc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028eafe4 + 0x28ead10));
    func_0x01384978(*(undefined4 *)(_UNK_028eafe8 + 0x28ead1c));
    func_0x01384978(*(undefined4 *)(_UNK_028eafec + 0x28ead28));
    func_0x01384978(*(undefined4 *)(_UNK_028eaff0 + 0x28ead34));
    *pcVar6 = '\x01';
  }
  uVar9 = 0;
  iVar1 = func_0x0229f06c(0x5c8c,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar9 = 0;
      pcVar2 = (char *)func_0x02141c38(*(int *)(param_1 + 0x3c),0);
      if (param_3 != 0) {
        pcVar6 = pcVar2;
      }
      if (param_3 != 0 && pcVar2 != (char *)0x0) {
        uVar9 = 0;
        uVar3 = func_0x0210e2d4(pcVar6,0);
        iVar1 = (**(code **)(param_3 + 0xc))
                          (*(undefined4 *)(param_3 + 0x20),uVar3,*(undefined4 *)(param_3 + 0x14));
        if (iVar1 != 0) {
          piVar8 = *(int **)(_UNK_028eaff4 + 0x28eadfc);
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dd7d28(0);
          uVar9 = func_0x0210e2d4(pcVar6,0);
          func_0x01dd7838(uVar9,*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0),
                          *(undefined4 *)(param_1 + 0xe4),0xbf800000,0);
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          uVar9 = 0;
          iVar1 = func_0x020e9e30(param_2,0,0);
          if (iVar1 == 0) {
            if (*(int *)(*piVar8 + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x01dd7d28(0);
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar5 = *(int *)(iVar1 + 0x10);
            iVar7 = **(int **)(_UNK_028eaff8 + 0x28eaf18);
            iVar1 = *(int *)(iVar7 + 0x1c);
            if (iVar1 == 0) {
              func_0x0140024c(iVar7);
              iVar1 = *(int *)(iVar7 + 0x1c);
            }
            iVar1 = *(int *)(iVar1 + 8);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x014001f0();
            }
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x014001f0();
            }
            uVar9 = **(undefined4 **)(iVar1 + 0x5c);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x01ca1c50(iVar5,0x14,uVar9,0);
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            puVar4 = *(undefined4 **)(_UNK_028eaffc + 0x28eafcc);
          }
          else {
            uVar3 = func_0x0210e2d4(iVar1,0);
            if (*(int *)(param_1 + 0x3c) != 0) {
              uVar9 = func_0x02141d1c(*(int *)(param_1 + 0x3c),0);
            }
            func_0x0199f04c(uVar3,0,0,uVar9,0);
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            puVar4 = *(undefined4 **)(_UNK_028eb000 + 0x28eaed8);
          }
          func_0x01bf3284(iVar1,*puVar4,0);
          uVar9 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c8c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x02174cb0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar9;
}



// ===== FAT.FarmBoardActivity$$TryUseToken RVA 0x28db004 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028eb004(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  pcVar4 = (char *)(_UNK_028eb234 + 0x28eb024);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028eb238 + 0x28eb03c));
    func_0x01384978(*(undefined4 *)(_UNK_028eb23c + 0x28eb048));
    func_0x01384978(*(undefined4 *)(_UNK_028eb240 + 0x28eb054));
    func_0x01384978(*(undefined4 *)(_UNK_028eb244 + 0x28eb060));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x5ca3,0);
  if (iVar1 == 0) {
    iVar1 = param_3;
    if (0 < param_3) {
      iVar1 = param_2;
    }
    if (((0 < iVar1) && (*(int *)(param_1 + 0x44) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x44) + 0x40) == param_2)) {
      uVar5 = 0;
      iVar1 = func_0x028f16cc(param_1,0,param_3);
      if (iVar1 != 0) {
        uVar8 = 0;
        func_0x019a4b9c(param_2,-param_3,*(undefined4 *)(param_1 + 0x58),param_4,0);
        iVar1 = *(int *)(param_1 + 0xb0);
        uVar5 = *(undefined4 *)(param_1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = FUN_028e3bdc(param_1);
        iVar6 = *(int *)(param_1 + 0x3c);
        if (iVar1 != 0) {
          uVar8 = *(undefined4 *)(iVar1 + 0x24);
        }
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar9 = 0;
        iVar1 = func_0x02139cf4(iVar6,0);
        uVar7 = *(undefined4 *)(param_1 + 0x50);
        if (iVar1 != 0) {
          uVar9 = *(undefined4 *)(iVar1 + 8);
        }
        uVar11 = *(undefined4 *)(param_1 + 0xb4);
        uVar10 = *(undefined4 *)(param_1 + 0xd4);
        if (*(int *)(param_1 + 0x5c) == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = func_0x02beed18(*(int *)(param_1 + 0x5c),0);
        }
        func_0x019b5864(param_1,uVar5,uVar2,uVar8,uVar9,uVar11,uVar7,uVar10,uVar3,0);
        if (*(int *)(**(int **)(_UNK_028eb248 + 0x28eb1e0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_028eb24c + 0x28eb1fc));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x034a0af8(iVar1,param_2,param_3,**(undefined4 **)(_UNK_028eb250 + 0x28eb224));
        uVar5 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5ca3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0217a980(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar5;
}



// ===== FAT.FarmBoardActivity$$_SpawnFarmlandItemToBoardOrRewardBox RVA 0x28db254 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028eb254(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  
  pcVar3 = (char *)(_UNK_028eb4b8 + 0x28eb274);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028eb4bc + 0x28eb28c));
    func_0x01384978(*(undefined4 *)(_UNK_028eb4c0 + 0x28eb298));
    func_0x01384978(*(undefined4 *)(_UNK_028eb4c4 + 0x28eb2a4));
    func_0x01384978(*(undefined4 *)(_UNK_028eb4c8 + 0x28eb2b0));
    func_0x01384978(*(undefined4 *)(_UNK_028eb4cc + 0x28eb2bc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ca5,0);
  if (iVar1 == 0) {
    piVar5 = *(int **)(_UNK_028eb4d0 + 0x28eb334);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dd7838(param_3,param_4,param_5,param_6,0xbf800000,0);
    uVar2 = func_0x020d8024(0,0x18,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x020ded9c(param_2,param_3,uVar2,0,0,0,0,0);
    if (iVar1 == 0) {
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dd7d28(0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar5 = *(int **)(_UNK_028eb4d4 + 0x28eb3f4);
      iVar4 = *(int *)(iVar1 + 0x40);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar5;
      }
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x174);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x01cdcbac(iVar4,param_3,1,uVar2,0,0,0,0x3f0,
                              **(undefined4 **)(_UNK_028eb4d8 + 0x28eb438),
                              **(undefined4 **)(_UNK_028eb4dc + 0x28eb444),0);
      if (*(int *)(**(int **)(_UNK_028eb4e0 + 0x28eb47c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0206de24(uVar2,param_4,param_5,param_6,0,0,0,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5ca5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022362c4(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.FarmBoardActivity$$_CanCollectNewFarmland RVA 0x28db4e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028eb4e4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_028eb9b4 + 0x28eb500);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028eb9b8 + 0x28eb514));
    func_0x01384978(*(undefined4 *)(_UNK_028eb9bc + 0x28eb520));
    func_0x01384978(*(undefined4 *)(_UNK_028eb9c0 + 0x28eb52c));
    func_0x01384978(*(undefined4 *)(_UNK_028eb9c4 + 0x28eb538));
    func_0x01384978(*(undefined4 *)(_UNK_028eb9c8 + 0x28eb544));
    func_0x01384978(*(undefined4 *)(_UNK_028eb9cc + 0x28eb550));
    func_0x01384978(*(undefined4 *)(_UNK_028eb9d0 + 0x28eb55c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c8a,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      uStack_1c = *(undefined4 *)(param_1 + 0x48);
      puVar7 = *(undefined4 **)(_UNK_028eb9d4 + 0x28eb78c);
      uVar5 = func_0x01384abc(*puVar7,&uStack_1c);
      uStack_20 = *(undefined4 *)(param_1 + 0x4c);
      uVar3 = func_0x01384abc(*puVar7,&uStack_20);
      uVar5 = func_0x0467272c(**(undefined4 **)(_UNK_028eb9d8 + 0x28eb7cc),uVar5,uVar3,0);
    }
    else {
      if (*(int *)(param_2 + 0x20) < 1) {
        piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028eb9dc + 0x28eb7e4),4);
        uStack_1c = *(undefined4 *)(param_1 + 0x48);
        puVar7 = *(undefined4 **)(_UNK_028eb9e0 + 0x28eb7fc);
        iVar1 = func_0x01384abc(*puVar7,&uStack_1c);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if (piVar2[3] == 0) {
          func_0x01384bf4();
        }
        piVar2[4] = iVar1;
        uStack_20 = *(undefined4 *)(param_1 + 0x4c);
        iVar1 = func_0x01384abc(*puVar7,&uStack_20);
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if ((uint)piVar2[3] < 2) {
          func_0x01384bf4();
        }
        piVar2[5] = iVar1;
        uStack_24 = *(undefined4 *)(param_2 + 0xc);
        iVar1 = func_0x01384abc(*puVar7,&uStack_24);
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if ((uint)piVar2[3] < 3) {
          func_0x01384bf4();
        }
        piVar2[6] = iVar1;
        uStack_28 = *(undefined4 *)(param_2 + 0x20);
        iVar1 = func_0x01384abc(*puVar7,&uStack_28);
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if ((uint)piVar2[3] < 4) {
          func_0x01384bf4();
        }
        piVar2[7] = iVar1;
        puVar7 = *(undefined4 **)(_UNK_028eb9e4 + 0x28eb96c);
      }
      else {
        iVar1 = *(int *)(param_1 + 0xd8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar1 + 0xc)) {
          return 1;
        }
        piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028eb9e8 + 0x28eb5f4),4);
        uStack_1c = *(undefined4 *)(param_1 + 0x48);
        puVar7 = *(undefined4 **)(_UNK_028eb9ec + 0x28eb60c);
        iVar1 = func_0x01384abc(*puVar7,&uStack_1c);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if (piVar2[3] == 0) {
          func_0x01384bf4();
        }
        piVar2[4] = iVar1;
        uStack_20 = *(undefined4 *)(param_1 + 0x4c);
        iVar1 = func_0x01384abc(*puVar7,&uStack_20);
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if ((uint)piVar2[3] < 2) {
          func_0x01384bf4();
        }
        piVar2[5] = iVar1;
        uStack_24 = *(undefined4 *)(param_2 + 0xc);
        iVar1 = func_0x01384abc(*puVar7,&uStack_24);
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if ((uint)piVar2[3] < 3) {
          func_0x01384bf4();
        }
        piVar2[6] = iVar1;
        uStack_28 = *(undefined4 *)(param_2 + 0x20);
        iVar1 = func_0x01384abc(*puVar7,&uStack_28);
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if ((uint)piVar2[3] < 4) {
          func_0x01384bf4();
        }
        piVar2[7] = iVar1;
        puVar7 = *(undefined4 **)(_UNK_028eb9f0 + 0x28eb77c);
      }
      uVar5 = func_0x046727d0(*puVar7,piVar2,0);
    }
    if (*(int *)(**(int **)(_UNK_028eb9f4 + 0x28eb98c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar5,0);
    return 0;
  }
  iVar1 = func_0x0229f13c(0x5c8a,0);
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
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
  uVar5 = func_0x0245496c(&uStack_38,0,0);
  return uVar5;
}



// ===== FAT.FarmBoardActivity$$_HasEnoughToken RVA 0x28db9f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_028eb9f8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  
  pcVar6 = (char *)(_UNK_028ebba4 + 0x28eba18);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028ebba8 + 0x28eba2c));
    func_0x01384978(*(undefined4 *)(_UNK_028ebbac + 0x28eba38));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  iVar1 = func_0x0229f06c(0x5cd,0);
  if (iVar1 == 0) {
    if ((((0 < param_2) && (*(int *)(param_1 + 0x44) != 0)) &&
        (uVar7 = (uint)(param_2 <= *(int *)(param_1 + 0x58)), *(int *)(param_1 + 0x58) < param_2))
       && (param_3 != 0)) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x40);
      if (*(int *)(**(int **)(_UNK_028ebbb0 + 0x28ebad0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x02085f3c(uVar5,0);
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x10);
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028ebbb4 + 0x28ebb1c),1);
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
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 0;
      func_0x01ca1c50(iVar2,0x42,piVar3,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5cd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0218f738(iVar1,param_1,param_2,param_3,0);
  }
  return uVar7;
}



// ===== FAT.FarmBoardActivity$$_TryPrepareNewFarmlandOutputItems RVA 0x28dbbb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028ebbb8(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int aiStack_2c [2];
  
  pcVar9 = (char *)(_UNK_028ebf74 + 0x28ebbd8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028ebf78 + 0x28ebbec));
    func_0x01384978(*(undefined4 *)(_UNK_028ebf7c + 0x28ebbf8));
    func_0x01384978(*(undefined4 *)(_UNK_028ebf80 + 0x28ebc04));
    func_0x01384978(*(undefined4 *)(_UNK_028ebf84 + 0x28ebc10));
    func_0x01384978(*(undefined4 *)(_UNK_028ebf88 + 0x28ebc1c));
    func_0x01384978(*(undefined4 *)(_UNK_028ebf8c + 0x28ebc28));
    func_0x01384978(*(undefined4 *)(_UNK_028ebf90 + 0x28ebc34));
    func_0x01384978(*(undefined4 *)(_UNK_028ebf94 + 0x28ebc40));
    func_0x01384978(*(undefined4 *)(_UNK_028ebf98 + 0x28ebc4c));
    func_0x01384978(*(undefined4 *)(_UNK_028ebf9c + 0x28ebc58));
    func_0x01384978(*(undefined4 *)(_UNK_028ebfa0 + 0x28ebc64));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c91,0);
  if (iVar1 == 0) {
    if (param_3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_3;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_028ebfa4 + 0x28ebcd8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xd8);
          goto LAB_028ebd20;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_028ebfa4 + 0x28ebcd8),3);
LAB_028ebd20:
    (*(code *)*puVar3)(param_3,puVar3[1]);
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0xd4) =
         **(undefined4 **)(**(int **)(_UNK_028ebfa8 + 0x28ebd40) + 0x5c);
    piVar7 = *(int **)(_UNK_028ebfac + 0x28ebd58);
    while( true ) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(param_2 + 0x20) <= iVar1) {
        uVar12 = func_0x030624d4(**(undefined4 **)(_UNK_028ebfd0 + 0x28ebebc),param_3,
                                 **(undefined4 **)(_UNK_028ebfcc + 0x28ebeb0));
        *(undefined4 *)(param_1 + 0xd4) = uVar12;
        return 1;
      }
      iVar4 = *piVar7;
      uVar12 = *(undefined4 *)(param_1 + 0xd8);
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar7;
      }
      iVar10 = *(int *)(*(int *)(iVar4 + 0x5c) + 4);
      if (iVar10 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar7;
        }
        uVar11 = **(undefined4 **)(iVar4 + 0x5c);
        iVar10 = func_0x01384be4(**(undefined4 **)(_UNK_028ebfb0 + 0x28ebdbc));
        func_0x03a068fc(iVar10,uVar11,**(undefined4 **)(_UNK_028ebfb4 + 0x28ebddc),0);
        *(int *)(*(int *)(*piVar7 + 0x5c) + 4) = iVar10;
      }
      func_0x02fbd288(aiStack_2c,uVar12,iVar10,0,**(undefined4 **)(_UNK_028ebfb8 + 0x28ebe08));
      iVar4 = aiStack_2c[0];
      if (aiStack_2c[0] < 1) break;
      if (param_3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar10 = *param_3;
      uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_028ebfc8 + 0x28ebe3c)) {
            puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xd0);
            goto LAB_028ebe84;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_028ebfc8 + 0x28ebe3c),2);
LAB_028ebe84:
      (*(code *)*puVar3)(param_3,iVar4,puVar3[1]);
      iVar1 = iVar1 + 1;
    }
    aiStack_2c[0] = *(int *)(param_1 + 0x48);
    puVar3 = *(undefined4 **)(_UNK_028ebfbc + 0x28ebedc);
    uVar12 = func_0x01384abc(*puVar3,aiStack_2c);
    uStack_30 = *(undefined4 *)(param_1 + 0x4c);
    uVar11 = func_0x01384abc(*puVar3,&uStack_30);
    uStack_34 = *(undefined4 *)(param_2 + 0xc);
    uVar5 = func_0x01384abc(*puVar3,&uStack_34);
    uVar2 = 0;
    uVar12 = func_0x0467277c(**(undefined4 **)(_UNK_028ebfc0 + 0x28ebf34),uVar12,uVar11,uVar5,0);
    if (*(int *)(**(int **)(_UNK_028ebfc4 + 0x28ebf4c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar12,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5c91,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02174cb0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.FarmBoardActivity$$_CheckIsCurrentFarmlandOutputItem RVA 0x28dbfd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_028ebfd4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_028ec1c0 + 0x28ebff0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028ec1c4 + 0x28ec004));
    func_0x01384978(*(undefined4 *)(_UNK_028ec1c8 + 0x28ec010));
    func_0x01384978(*(undefined4 *)(_UNK_028ec1cc + 0x28ec01c));
    func_0x01384978(*(undefined4 *)(_UNK_028ec1d0 + 0x28ec028));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x5c8b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0441b0e4(&uStack_48,iVar1,**(undefined4 **)(_UNK_028ec1d4 + 0x28ec0b4));
    uStack_20 = uStack_38;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_24 = iStack_3c;
    puVar4 = *(undefined4 **)(_UNK_028ec1d8 + 0x28ec0e0);
    do {
      uVar2 = func_0x03f4aab0(&uStack_30,*puVar4);
      if (uVar2 == 0) {
        iVar1 = 6;
        goto LAB_028ec10c;
      }
    } while (iStack_24 != param_2);
    iVar1 = 5;
LAB_028ec10c:
    func_0x03f4aaac(&uStack_30,**(undefined4 **)(_UNK_028ec1dc + 0x28ec118));
    uVar2 = uVar2 & iVar1 == 5;
  }
  else {
    iVar1 = func_0x0229f13c(0x5c8b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.FarmBoardActivity$$_TryRefreshNewFarmlandOutputPool RVA 0x28dc1e8 =====

/* WARNING: Removing unreachable block (ram,0x028eca58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_028ec1e8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_028ecb98 + 0x28ec204);
  iStack_48 = param_1;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028ecb9c + 0x28ec218));
    func_0x01384978(*(undefined4 *)(_UNK_028ecba0 + 0x28ec224));
    func_0x01384978(*(undefined4 *)(_UNK_028ecba4 + 0x28ec230));
    func_0x01384978(*(undefined4 *)(_UNK_028ecba8 + 0x28ec23c));
    func_0x01384978(*(undefined4 *)(_UNK_028ecbac + 0x28ec248));
    func_0x01384978(*(undefined4 *)(_UNK_028ecbb0 + 0x28ec254));
    func_0x01384978(*(undefined4 *)(_UNK_028ecbb4 + 0x28ec260));
    func_0x01384978(*(undefined4 *)(_UNK_028ecbb8 + 0x28ec26c));
    func_0x01384978(*(undefined4 *)(_UNK_028ecbbc + 0x28ec278));
    func_0x01384978(*(undefined4 *)(_UNK_028ecbc0 + 0x28ec284));
    func_0x01384978(*(undefined4 *)(_UNK_028ecbc4 + 0x28ec290));
    func_0x01384978(*(undefined4 *)(_UNK_028ecbc8 + 0x28ec29c));
    func_0x01384978(*(undefined4 *)(_UNK_028ecbcc + 0x28ec2a8));
    func_0x01384978(*(undefined4 *)(_UNK_028ecbd0 + 0x28ec2b4));
    func_0x01384978(*(undefined4 *)(_UNK_028ecbd4 + 0x28ec2c0));
    *pcVar7 = '\x01';
  }
  piVar9 = (int *)0x0;
  iVar2 = func_0x0229f06c(0x5bf8,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5bf8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar8 = iStack_48;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = iStack_4c;
    iStack_30 = iStack_48;
    iStack_2c = iStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar8,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar5,0,0);
    piVar9 = (int *)func_0x0245496c(&uStack_38,0,0);
    return piVar9;
  }
  if ((param_2 != 0) && (0 < *(int *)(param_2 + 0x20))) {
    iVar2 = *(int *)(param_2 + 0x1c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) < 1) {
      piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028ecbd8 + 0x28ec56c),4);
      iStack_40 = *(int *)(iStack_48 + 0x48);
      puVar3 = *(undefined4 **)(_UNK_028ecbdc + 0x28ec588);
      iVar2 = func_0x01384abc(*puVar3,&iStack_40);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar2 != 0) &&
         (iVar8 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar8 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if (piVar6[3] == 0) {
        func_0x01384bf4();
      }
      piVar6[4] = iVar2;
      iStack_28 = *(int *)(iStack_48 + 0x4c);
      iVar2 = func_0x01384abc(*puVar3,&iStack_28);
      if ((iVar2 != 0) &&
         (iVar8 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar8 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if ((uint)piVar6[3] < 2) {
        func_0x01384bf4();
      }
      piVar6[5] = iVar2;
      iStack_2c = *(int *)(param_2 + 0xc);
      iVar2 = func_0x01384abc(*puVar3,&iStack_2c);
      if ((iVar2 != 0) &&
         (iVar8 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar8 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if ((uint)piVar6[3] < 3) {
        func_0x01384bf4();
      }
      piVar6[6] = iVar2;
      iStack_30 = *(int *)(param_2 + 0x20);
      iVar2 = func_0x01384abc(*puVar3,&iStack_30);
      if ((iVar2 != 0) &&
         (iVar8 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar8 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if ((uint)piVar6[3] < 4) {
        func_0x01384bf4();
      }
      piVar6[7] = iVar2;
      piVar9 = (int *)0x0;
      uVar10 = func_0x046727d0(**(undefined4 **)(_UNK_028ecbe0 + 0x28ec708),piVar6,0);
      if (*(int *)(**(int **)(_UNK_028ecbe4 + 0x28ec71c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar10,0);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x1c);
      iStack_4c = param_2;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar9 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_028ecbe8 + 0x28ec368));
LAB_028ec378:
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_028ecc0c + 0x28ec394)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_028ec3dc;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_028ecc0c + 0x28ec394),0);
LAB_028ec3dc:
      iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      if (iVar2 == 0) {
        iVar2 = 0xb;
        goto LAB_028ec9e0;
      }
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar9;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_028ecbec + 0x28ec410)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_028ec458;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_028ecbec + 0x28ec410),0);
LAB_028ec458:
      iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
      if (*(int *)(**(int **)(_UNK_028ecbf0 + 0x28ec478) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&iStack_40,iVar2,0);
      iVar12 = iStack_3c;
      iVar1 = iStack_40;
      bVar13 = iStack_40 == 1;
      iVar8 = iStack_40 + -1;
      if (iStack_40 >= 1) {
        bVar13 = iStack_3c == 0;
        iVar8 = iStack_3c;
      }
      if (!bVar13 && iVar8 < 0 == (iStack_40 < 1 && SBORROW4(iStack_40,1))) {
        iVar2 = *(int *)(iStack_48 + 0xd8);
        iStack_3c = 0;
        iStack_40 = 0;
        func_0x038fd264(&iStack_40,iVar1,iVar12,**(undefined4 **)(_UNK_028ecc04 + 0x28ec4c0));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar1 = iStack_3c;
        iVar8 = iStack_40;
        iVar12 = *(int *)(iVar2 + 8);
        uVar4 = *(uint *)(iVar2 + 0xc);
        piVar6 = *(int **)(_UNK_028ecc08 + 0x28ec510);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        iVar11 = *piVar6;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        if (uVar4 < *(uint *)(iVar12 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar4 + 1;
          iVar12 = iVar12 + uVar4 * 8;
          *(int *)(iVar12 + 0x10) = iVar8;
          *(int *)(iVar12 + 0x14) = iVar1;
        }
        else {
          func_0x0441a364(iVar2,iVar8,iVar1,
                          *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
        }
        goto LAB_028ec378;
      }
      piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028ecbf4 + 0x28ec754),6);
      iStack_40 = *(int *)(iStack_48 + 0x48);
      puVar3 = *(undefined4 **)(_UNK_028ecbf8 + 0x28ec774);
      iVar8 = func_0x01384abc(*puVar3,&iStack_40);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar8 != 0) &&
         (iVar11 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar6 + 0x20)), iVar11 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if (piVar6[3] == 0) {
        func_0x01384bf4();
      }
      piVar6[4] = iVar8;
      iStack_28 = *(int *)(iStack_48 + 0x4c);
      iVar8 = func_0x01384abc(*puVar3,&iStack_28);
      if ((iVar8 != 0) &&
         (iVar11 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar6 + 0x20)), iVar11 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if ((uint)piVar6[3] < 2) {
        func_0x01384bf4();
      }
      piVar6[5] = iVar8;
      iStack_2c = *(int *)(iStack_4c + 0xc);
      iVar8 = func_0x01384abc(*puVar3,&iStack_2c);
      if ((iVar8 != 0) &&
         (iVar11 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar6 + 0x20)), iVar11 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if ((uint)piVar6[3] < 3) {
        func_0x01384bf4();
      }
      piVar6[6] = iVar8;
      if ((iVar2 != 0) &&
         (iVar8 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar8 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if ((uint)piVar6[3] < 4) {
        func_0x01384bf4();
      }
      piVar6[7] = iVar2;
      iStack_30 = iVar1;
      iVar2 = func_0x01384abc(*puVar3,&iStack_30);
      if ((iVar2 != 0) &&
         (iVar8 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar8 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if ((uint)piVar6[3] < 5) {
        func_0x01384bf4();
      }
      piVar6[8] = iVar2;
      iStack_44 = iVar12;
      iVar2 = func_0x01384abc(*puVar3,&iStack_44);
      if ((iVar2 != 0) &&
         (iVar8 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar8 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if ((uint)piVar6[3] < 6) {
        func_0x01384bf4();
      }
      piVar6[9] = iVar2;
      uVar10 = func_0x046727d0(**(undefined4 **)(_UNK_028ecbfc + 0x28ec97c),piVar6,0);
      if (*(int *)(**(int **)(_UNK_028ecc00 + 0x28ec998) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar10,0);
      iVar2 = *(int *)(iStack_48 + 0xd8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      iVar2 = 10;
LAB_028ec9e0:
      if (piVar9 != (int *)0x0) {
        iVar8 = *piVar9;
        uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_028ecc10 + 0x28ec9f8)) {
              puVar3 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
              goto LAB_028eca40;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_028ecc10 + 0x28ec9f8),0);
LAB_028eca40:
        (*(code *)*puVar3)(piVar9,puVar3[1]);
      }
      if (iVar2 != 0xb) {
        piVar9 = (int *)0x0;
      }
      if (iVar2 == 0xb || iVar2 == 0) {
        iVar2 = *(int *)(iStack_48 + 0xd8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar9 = (int *)0x0;
        if (0 < *(int *)(iVar2 + 0xc)) {
          piVar9 = (int *)0x1;
        }
      }
    }
  }
  return piVar9;
}



// ===== FAT.FarmBoardActivity$$SetRewardBoxPos RVA 0x28dcc18 =====

void FUN_028ecc18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5ca9,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xdc) = param_2;
    *(undefined4 *)(param_1 + 0xe0) = param_3;
    *(undefined4 *)(param_1 + 0xe4) = param_4;
  }
  else {
    iVar1 = func_0x0229f13c(0x5ca9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021b96bc(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.FarmBoardActivity$$FAT.Merge.IExternalOutput.CanUseItem RVA 0x28dcc94 =====

void FUN_028ecc94(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  uStack_18 = 0;
  iVar1 = func_0x0229f06c(0x5caa,0);
  if (iVar1 == 0) {
    func_0x028ecd14(param_1,param_2,&uStack_14,&uStack_18);
  }
  else {
    iVar1 = func_0x0229f13c(0x5caa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.FarmBoardActivity$$_TryGetConsumeContext RVA 0x28dcd14 =====

uint FUN_028ecd14(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5cab,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    *param_4 = 0;
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if ((param_2 != 0 && iVar1 != 0) && (iVar1 = func_0x028ee2b0(param_1), iVar1 == 0)) {
      iVar1 = FUN_028e3ec4(param_1);
      if (iVar1 == 0) {
        uVar2 = func_0x0210e2d4(param_2,0);
        iVar1 = func_0x028edd80(param_1,uVar2);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        iVar1 = func_0x028edc50(param_1);
        *param_4 = iVar1;
        if (iVar1 == 0) {
          return 0;
        }
        iVar3 = *(int *)(iVar1 + 0x14);
        iVar1 = func_0x0210e2d4(param_2,0);
        if (iVar3 != iVar1) {
          return 0;
        }
      }
      uVar4 = 0;
      if (param_1[0xf] == 0) {
        *param_3 = 0;
      }
      else {
        iVar1 = func_0x02139cf4(param_1[0xf],0);
        *param_3 = iVar1;
        if (iVar1 != 0) {
          iVar1 = func_0x0210cd28(param_2,0);
          uVar4 = (uint)(iVar1 == *param_3);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5cab,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x02236418(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar4;
}



// ===== FAT.FarmBoardActivity$$FAT.Merge.IExternalOutput.TrySpawnItem RVA 0x28dce78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028ece78(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar10 = (char *)(_UNK_028ed4a8 + 0x28ece98);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028ed4ac + 0x28eceb0));
    func_0x01384978(*(undefined4 *)(_UNK_028ed4b0 + 0x28ecebc));
    func_0x01384978(*(undefined4 *)(_UNK_028ed4b4 + 0x28ecec8));
    func_0x01384978(*(undefined4 *)(_UNK_028ed4b8 + 0x28eced4));
    func_0x01384978(*(undefined4 *)(_UNK_028ed4bc + 0x28ecee0));
    func_0x01384978(*(undefined4 *)(_UNK_028ed4c0 + 0x28eceec));
    func_0x01384978(*(undefined4 *)(_UNK_028ed4c4 + 0x28ecef8));
    func_0x01384978(*(undefined4 *)(_UNK_028ed4c8 + 0x28ecf04));
    func_0x01384978(*(undefined4 *)(_UNK_028ed4cc + 0x28ecf10));
    func_0x01384978(*(undefined4 *)(_UNK_028ed4d0 + 0x28ecf1c));
    func_0x01384978(*(undefined4 *)(_UNK_028ed4d4 + 0x28ecf28));
    *pcVar10 = '\x01';
  }
  uVar11 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  iVar3 = func_0x0229f06c(0x5caf,0);
  if (iVar3 == 0) {
    *param_4 = 0;
    *param_3 = 0xffffffff;
    iVar3 = FUN_028ecd14(param_1,param_2,&uStack_2c,&uStack_28);
    if ((iVar3 != 0) &&
       ((iVar3 = FUN_028e3ec4(param_1), iVar3 != 0 || (iVar3 = func_0x028ed508(param_1), iVar3 != 0)
        ))) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_028ed4d8 + 0x28ecff8));
      if (iVar3 == 0) {
        uStack_40 = *(undefined4 *)(param_1 + 0x48);
        puVar9 = *(undefined4 **)(_UNK_028ed4dc + 0x28ed084);
        uVar12 = func_0x01384abc(*puVar9,&uStack_40);
        uVar8 = **(undefined4 **)(_UNK_028ed4e0 + 0x28ed0a8);
        uVar11 = 0;
        if (*(int *)(param_1 + 0x3c) != 0) {
          iVar3 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0);
          uVar11 = 0;
          if (iVar3 != 0) {
            uStack_3c = 0;
            uStack_40 = 0;
            func_0x03507d38(&uStack_40,*(undefined4 *)(iVar3 + 8),
                            **(undefined4 **)(_UNK_028ed4e4 + 0x28ed0cc));
            uVar11 = uStack_3c;
          }
        }
        uStack_40 = uVar11;
        uVar11 = func_0x01384abc(*puVar9,&uStack_40);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = func_0x0210e2d4(param_2,0);
        uVar5 = func_0x01384abc(*puVar9,&uStack_30);
        uVar12 = func_0x0467277c(uVar8,uVar12,uVar11,uVar5,0);
      }
      else {
        iVar4 = func_0x0211b24c(iVar3,0);
        if (iVar4 != 0) {
          if (*(int *)(**(int **)(_UNK_028ed4fc + 0x28ed028) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x0204f2f0(&uStack_40,0x2d,0);
          uVar8 = uStack_38;
          uVar12 = uStack_3c;
          uVar11 = uStack_40;
          if (param_2 == 0) {
            func_0x01384bf0();
            uVar5 = func_0x0210e2d4(0,0);
            func_0x01384bf0();
          }
          else {
            uVar5 = func_0x0210e2d4(param_2,0);
          }
          func_0x0210cd7c(&uStack_40,param_2,0);
          uVar2 = uStack_3c;
          uVar1 = uStack_40;
          if (*(int *)(**(int **)(_UNK_028ed500 + 0x28ed3d8) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dd876c(&uStack_40,uVar1,uVar2,0);
          if (*(int *)(**(int **)(_UNK_028ed504 + 0x28ed414) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x0207405c(uVar5,1,uStack_40,uStack_3c,uStack_38,uVar11,uVar12,uVar8,0,0x2d,0,0,
                          0x43080000,0,0);
          iVar3 = FUN_028e3ec4(param_1);
          if (iVar3 != 0) {
            func_0x028ed56c(param_1,uStack_28);
            return 1;
          }
          func_0x028eda64(param_1);
          return 1;
        }
        piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028ed4ec + 0x28ed158),4);
        uStack_40 = *(undefined4 *)(param_1 + 0x48);
        puVar9 = *(undefined4 **)(_UNK_028ed4f0 + 0x28ed170);
        iVar4 = func_0x01384abc(*puVar9,&uStack_40);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar4 != 0) &&
           (iVar7 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar6 + 0x20)), iVar7 == 0)) {
          uVar11 = func_0x01384c10();
          func_0x01384aa0(uVar11,0);
        }
        if (piVar6[3] == 0) {
          func_0x01384bf4();
        }
        piVar6[4] = iVar4;
        uVar12 = **(undefined4 **)(_UNK_028ed4f4 + 0x28ed1dc);
        uVar11 = 0;
        if ((*(int *)(param_1 + 0x3c) != 0) &&
           (iVar4 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0), iVar4 != 0)) {
          uStack_3c = 0;
          uStack_40 = 0;
          func_0x03507d38(&uStack_40,*(undefined4 *)(iVar4 + 8),
                          **(undefined4 **)(_UNK_028ed4f8 + 0x28ed204));
          uVar11 = uStack_3c;
        }
        uStack_40 = uVar11;
        iVar4 = func_0x01384abc(*puVar9,&uStack_40);
        if ((iVar4 != 0) &&
           (iVar7 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar6 + 0x20)), iVar7 == 0)) {
          uVar11 = func_0x01384c10();
          func_0x01384aa0(uVar11,0);
        }
        if ((uint)piVar6[3] < 2) {
          func_0x01384bf4();
        }
        piVar6[5] = iVar4;
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = func_0x0210e2d4(param_2,0);
        iVar4 = func_0x01384abc(*puVar9,&uStack_30);
        if ((iVar4 != 0) &&
           (iVar7 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar6 + 0x20)), iVar7 == 0)) {
          uVar11 = func_0x01384c10();
          func_0x01384aa0(uVar11,0);
        }
        if ((uint)piVar6[3] < 3) {
          func_0x01384bf4();
        }
        piVar6[6] = iVar4;
        iVar3 = func_0x0211b194(iVar3,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)(iVar3 + 0x1c);
        iVar3 = func_0x01384abc(*puVar9,&uStack_34);
        if ((iVar3 != 0) &&
           (iVar4 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar6 + 0x20)), iVar4 == 0)) {
          uVar11 = func_0x01384c10();
          func_0x01384aa0(uVar11,0);
        }
        if ((uint)piVar6[3] < 4) {
          func_0x01384bf4();
        }
        piVar6[7] = iVar3;
        uVar12 = func_0x046727d0(uVar12,piVar6,0);
      }
      uVar11 = 0;
      if (*(int *)(**(int **)(_UNK_028ed4e8 + 0x28ed37c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar12,0);
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x5caf,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar11 = func_0x022365c4(iVar3,param_1,param_2,param_3,param_4,0);
  }
  return uVar11;
}



// ===== FAT.FarmBoardActivity$$_CanCommitNewAnimalOutput RVA 0x28dd508 =====

/* WARNING: Removing unreachable block (ram,0x028f1384) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028ed508(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 unaff_r4;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  bool bVar16;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  iVar1 = func_0x0229f06c(0x5cb0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5cb0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    iStack_20 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = iStack_44;
    iStack_28 = iStack_40;
    iStack_24 = iStack_3c;
    iStack_20 = iStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    iStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar11,uVar13,&iStack_30,uVar7);
    uVar13 = func_0x0245496c(&iStack_30,0,0);
    return uVar13;
  }
  iVar1 = func_0x028f09a4(param_1);
  pcVar9 = (char *)(_UNK_028f1480 + 0x28f0a30);
  iStack_24 = unaff_r4;
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f1484 + 0x28f0a44));
    func_0x01384978(*(undefined4 *)(_UNK_028f1488 + 0x28f0a50));
    func_0x01384978(*(undefined4 *)(_UNK_028f148c + 0x28f0a5c));
    func_0x01384978(*(undefined4 *)(_UNK_028f1490 + 0x28f0a68));
    func_0x01384978(*(undefined4 *)(_UNK_028f1494 + 0x28f0a74));
    func_0x01384978(*(undefined4 *)(_UNK_028f1498 + 0x28f0a80));
    func_0x01384978(*(undefined4 *)(_UNK_028f149c + 0x28f0a8c));
    func_0x01384978(*(undefined4 *)(_UNK_028f14a0 + 0x28f0a98));
    func_0x01384978(*(undefined4 *)(_UNK_028f14a4 + 0x28f0aa4));
    func_0x01384978(*(undefined4 *)(_UNK_028f14a8 + 0x28f0ab0));
    func_0x01384978(*(undefined4 *)(_UNK_028f14ac + 0x28f0abc));
    func_0x01384978(*(undefined4 *)(_UNK_028f14b0 + 0x28f0ac8));
    func_0x01384978(*(undefined4 *)(_UNK_028f14b4 + 0x28f0ad4));
    *pcVar9 = '\x01';
  }
  iVar11 = func_0x0229f06c(0x5cb1,0);
  if (iVar11 != 0) {
    iVar11 = func_0x0229f13c(0x5cb1,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iStack_20 = iStack_24;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&iStack_50,0,iVar1,0);
    iStack_38 = iStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    uStack_2c = iStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar11 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar11 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,iVar1,0);
    iVar10 = *(int *)(iVar11 + 8);
    uVar13 = *(undefined4 *)(iVar11 + 0xc);
    iVar1 = *(int *)(iVar11 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar10,uVar13,&iStack_38,uVar7,0,0);
    uVar13 = func_0x0245496c(&iStack_38,0,0);
    return uVar13;
  }
  if (iVar1 == 0) {
    iStack_3c = *(int *)(param_1 + 0x48);
    puVar3 = *(undefined4 **)(_UNK_028f14b8 + 0x28f0f44);
    uVar13 = func_0x01384abc(*puVar3,&iStack_3c);
    iStack_28 = *(int *)(param_1 + 0x4c);
    uVar7 = func_0x01384abc(*puVar3,&iStack_28);
    uVar13 = func_0x0467272c(**(undefined4 **)(_UNK_028f14bc + 0x28f0f84),uVar13,uVar7,0);
  }
  else {
    if (*(int *)(iVar1 + 0x18) < 1) {
      piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028f14c4 + 0x28f0f9c),4);
      iStack_3c = *(int *)(param_1 + 0x48);
      puVar3 = *(undefined4 **)(_UNK_028f14c8 + 0x28f0fb4);
      iVar11 = func_0x01384abc(*puVar3,&iStack_3c);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar11 != 0) &&
         (iVar10 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if (piVar2[3] == 0) {
        func_0x01384bf4();
      }
      piVar2[4] = iVar11;
      iStack_28 = *(int *)(param_1 + 0x4c);
      iVar11 = func_0x01384abc(*puVar3,&iStack_28);
      if ((iVar11 != 0) &&
         (iVar10 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if ((uint)piVar2[3] < 2) {
        func_0x01384bf4();
      }
      piVar2[5] = iVar11;
      uStack_2c = *(undefined4 *)(iVar1 + 0xc);
      iVar11 = func_0x01384abc(*puVar3,&uStack_2c);
      if ((iVar11 != 0) &&
         (iVar10 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if ((uint)piVar2[3] < 3) {
        func_0x01384bf4();
      }
      piVar2[6] = iVar11;
      iStack_30 = *(int *)(iVar1 + 0x18);
      iVar1 = func_0x01384abc(*puVar3,&iStack_30);
      if ((iVar1 != 0) &&
         (iVar11 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar11 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if ((uint)piVar2[3] < 4) {
        func_0x01384bf4();
      }
      piVar2[7] = iVar1;
      puVar3 = *(undefined4 **)(_UNK_028f14cc + 0x28f1124);
    }
    else {
      iVar11 = *(int *)(iVar1 + 0x14);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar11 + 0xc)) {
        iVar11 = *(int *)(iVar1 + 0x14);
        iStack_48 = iVar1;
        iStack_44 = param_1;
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        piVar2 = (int *)func_0x03653608(iVar11,**(undefined4 **)(_UNK_028f14dc + 0x28f0b7c));
        piVar12 = *(int **)(_UNK_028f14e0 + 0x28f0b98);
        piVar14 = *(int **)(_UNK_028f14e4 + 0x28f0ba0);
        piVar15 = *(int **)(_UNK_028f14e8 + 0x28f0ba8);
        do {
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar2;
          uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar8[-1] == *piVar12) {
                puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
                goto LAB_028f0c00;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_028f0c00:
          iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
          if (iVar1 == 0) {
            uVar13 = 1;
            goto LAB_028f130c;
          }
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar2;
          uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar8[-1] == *piVar14) {
                puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
                goto LAB_028f0c74;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar14,0);
LAB_028f0c74:
          iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
          if (*(int *)(*piVar15 + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x02566088(&iStack_3c,iVar1,0);
          iVar10 = iStack_3c;
          bVar16 = iStack_3c == 1;
          iVar11 = iStack_3c + -1;
          if (iStack_3c >= 1) {
            bVar16 = iStack_38 == 0;
            iVar11 = iStack_38;
          }
        } while (!bVar16 && iVar11 < 0 == (iStack_3c < 1 && SBORROW4(iStack_3c,1)));
        piVar12 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028f14ec + 0x28f0ccc),6);
        iVar11 = iStack_44;
        iStack_3c = *(int *)(iStack_44 + 0x48);
        puVar3 = *(undefined4 **)(_UNK_028f14f0 + 0x28f0cec);
        iVar4 = func_0x01384abc(*puVar3,&iStack_3c);
        if (piVar12 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar4 != 0) &&
           (iVar5 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar12 + 0x20)), iVar5 == 0)) {
          uVar13 = func_0x01384c10();
          func_0x01384aa0(uVar13,0);
        }
        if (piVar12[3] == 0) {
          func_0x01384bf4();
        }
        piVar12[4] = iVar4;
        iStack_28 = *(int *)(iVar11 + 0x4c);
        iVar11 = func_0x01384abc(*puVar3,&iStack_28);
        if ((iVar11 != 0) &&
           (iVar4 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar12 + 0x20)), iVar4 == 0)) {
          uVar13 = func_0x01384c10();
          func_0x01384aa0(uVar13,0);
        }
        if ((uint)piVar12[3] < 2) {
          func_0x01384bf4();
        }
        piVar12[5] = iVar11;
        uStack_2c = *(undefined4 *)(iStack_48 + 0xc);
        iVar11 = func_0x01384abc(*puVar3,&uStack_2c);
        if ((iVar11 != 0) &&
           (iVar4 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar12 + 0x20)), iVar4 == 0)) {
          uVar13 = func_0x01384c10();
          func_0x01384aa0(uVar13,0);
        }
        if ((uint)piVar12[3] < 3) {
          func_0x01384bf4();
        }
        piVar12[6] = iVar11;
        if ((iVar1 != 0) &&
           (iVar11 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar12 + 0x20)), iVar11 == 0)) {
          uVar13 = func_0x01384c10();
          func_0x01384aa0(uVar13,0);
        }
        if ((uint)piVar12[3] < 4) {
          func_0x01384bf4();
        }
        piVar12[7] = iVar1;
        iStack_30 = iVar10;
        iVar1 = func_0x01384abc(*puVar3,&iStack_30);
        if ((iVar1 != 0) &&
           (iVar11 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar12 + 0x20)), iVar11 == 0)) {
          uVar13 = func_0x01384c10();
          func_0x01384aa0(uVar13,0);
        }
        if ((uint)piVar12[3] < 5) {
          func_0x01384bf4();
        }
        piVar12[8] = iVar1;
        iStack_40 = iStack_38;
        iVar1 = func_0x01384abc(*puVar3,&iStack_40);
        if ((iVar1 != 0) &&
           (iVar11 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar12 + 0x20)), iVar11 == 0)) {
          uVar13 = func_0x01384c10();
          func_0x01384aa0(uVar13,0);
        }
        if ((uint)piVar12[3] < 6) {
          func_0x01384bf4();
        }
        piVar12[9] = iVar1;
        uVar13 = func_0x046727d0(**(undefined4 **)(_UNK_028f14f4 + 0x28f0ef0),piVar12,0);
        if (*(int *)(**(int **)(_UNK_028f14f8 + 0x28f0f0c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2944(uVar13,0);
        uVar13 = 0;
LAB_028f130c:
        if (piVar2 == (int *)0x0) {
          return uVar13;
        }
        iVar1 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar12[-1] == **(int **)(_UNK_028f14fc + 0x28f1324)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
              goto LAB_028f136c;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_028f14fc + 0x28f1324),0);
LAB_028f136c:
        (*(code *)*puVar3)(piVar2,puVar3[1]);
        return uVar13;
      }
      piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028f14d0 + 0x28f1134),4);
      iStack_3c = *(int *)(param_1 + 0x48);
      puVar3 = *(undefined4 **)(_UNK_028f14d4 + 0x28f114c);
      iVar11 = func_0x01384abc(*puVar3,&iStack_3c);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar11 != 0) &&
         (iVar10 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if (piVar2[3] == 0) {
        func_0x01384bf4();
      }
      piVar2[4] = iVar11;
      iStack_28 = *(int *)(param_1 + 0x4c);
      iVar11 = func_0x01384abc(*puVar3,&iStack_28);
      if ((iVar11 != 0) &&
         (iVar10 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if ((uint)piVar2[3] < 2) {
        func_0x01384bf4();
      }
      piVar2[5] = iVar11;
      uStack_2c = *(undefined4 *)(iVar1 + 0xc);
      iVar11 = func_0x01384abc(*puVar3,&uStack_2c);
      if ((iVar11 != 0) &&
         (iVar10 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if ((uint)piVar2[3] < 3) {
        func_0x01384bf4();
      }
      piVar2[6] = iVar11;
      iStack_30 = *(int *)(iVar1 + 0x18);
      iVar1 = func_0x01384abc(*puVar3,&iStack_30);
      if ((iVar1 != 0) &&
         (iVar11 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar11 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if ((uint)piVar2[3] < 4) {
        func_0x01384bf4();
      }
      piVar2[7] = iVar1;
      puVar3 = *(undefined4 **)(_UNK_028f14d8 + 0x28f12bc);
    }
    uVar13 = func_0x046727d0(*puVar3,piVar2,0);
  }
  if (*(int *)(**(int **)(_UNK_028f14c0 + 0x28f12dc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar13,0);
  return 0;
}



// ===== FAT.FarmBoardActivity$$_CommitLegacyAnimalOutput RVA 0x28dd56c =====

/* WARNING: Removing unreachable block (ram,0x028ed8cc) */
/* WARNING: Removing unreachable block (ram,0x028ed8c0) */
/* WARNING: Removing unreachable block (ram,0x028ed940) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028ed56c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
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
  
  pcVar7 = (char *)(_UNK_028eda14 + 0x28ed588);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028eda18 + 0x28ed59c));
    func_0x01384978(*(undefined4 *)(_UNK_028eda1c + 0x28ed5a8));
    func_0x01384978(*(undefined4 *)(_UNK_028eda20 + 0x28ed5b4));
    func_0x01384978(*(undefined4 *)(_UNK_028eda24 + 0x28ed5c0));
    func_0x01384978(*(undefined4 *)(_UNK_028eda28 + 0x28ed5cc));
    func_0x01384978(*(undefined4 *)(_UNK_028eda2c + 0x28ed5d8));
    func_0x01384978(*(undefined4 *)(_UNK_028eda30 + 0x28ed5e4));
    func_0x01384978(*(undefined4 *)(_UNK_028eda34 + 0x28ed5f0));
    func_0x01384978(*(undefined4 *)(_UNK_028eda38 + 0x28ed5fc));
    func_0x01384978(*(undefined4 *)(_UNK_028eda3c + 0x28ed608));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5cb3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5cb3,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(param_1 + 0xec);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_028eda40 + 0x28ed6c8));
  piVar11 = *(int **)(_UNK_028eda44 + 0x28ed6e0);
LAB_028ed6dc:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == *piVar11) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_028ed738;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_028ed738:
  iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar1 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_028eda48 + 0x28ed76c)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_028ed7b4;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_028eda48 + 0x28ed76c),0);
LAB_028ed7b4:
    uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    iVar1 = *(int *)(param_1 + 0xe8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar4 = *(uint *)(iVar1 + 0xc);
    piVar6 = *(int **)(_UNK_028eda4c + 0x28ed7f8);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar10 = *piVar6;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (uVar4 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar4 + 1;
      *(undefined4 *)(iVar8 + uVar4 * 4 + 0x10) = uVar9;
    }
    else {
      func_0x0325970c(iVar1,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
    }
    goto LAB_028ed6dc;
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_028eda50 + 0x28ed860)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
          goto LAB_028ed8a8;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_028eda50 + 0x28ed860),0);
LAB_028ed8a8:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  piVar2 = *(int **)(_UNK_028eda54 + 0x28ed8e8);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_028eda58 + 0x28ed90c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_1,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.FarmBoardActivity$$_CommitNewAnimalOutput RVA 0x28dda64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028eda64(int param_1)

{
  int iVar1;
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
  
  pcVar5 = (char *)(_UNK_028edbac + 0x28eda78);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028edbb0 + 0x28eda8c));
    func_0x01384978(*(undefined4 *)(_UNK_028edbb4 + 0x28eda98));
    func_0x01384978(*(undefined4 *)(_UNK_028edbb8 + 0x28edaa4));
    func_0x01384978(*(undefined4 *)(_UNK_028edbbc + 0x28edab0));
    func_0x01384978(*(undefined4 *)(_UNK_028edbc0 + 0x28edabc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5cb4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5cb4,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_1 + 0xec);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(param_1 + 0x4c);
  iVar2 = *(int *)(iVar4 + 0x10);
  iVar1 = **(int **)(_UNK_028edbc4 + 0x28edb48);
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = uVar6;
  iVar1 = *(int *)(iVar1 + 0x74);
  *(int *)(iVar4 + 0x10) = iVar2 + 1;
  if (iVar1 == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_028edbc8 + 0x28edb7c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_1,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.FarmBoardActivity$$GetConsumeItemId RVA 0x28ddbd0 =====

/* WARNING: Possible PIC construction at 0x028edd54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028edd58) */

undefined4 FUN_028edbd0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 uVar4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x5cb5,0);
  if (iVar1 == 0) {
    iVar1 = FUN_028e3ec4(param_1);
    if (iVar1 != 0) {
      iVar1 = func_0x028edc50(param_1);
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 0x14);
      }
      return uVar4;
    }
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0x5cb6,0);
    if (iVar1 == 0) {
      iVar1 = func_0x028ede44(param_1,&uStack_14);
      if (iVar1 == 0) {
        uStack_14 = 0;
      }
      return uStack_14;
    }
    iVar1 = func_0x0229f13c(0x5cb6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x28edd58;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x5cb5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar2 = *(int *)(iVar1 + 0x10);
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
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar2,uVar4,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  uVar4 = func_0x0245498c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
  return uVar4;
}



// ===== FAT.FarmBoardActivity$$_GetAnimalConfig RVA 0x28ddc50 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028edc50(undefined4 param_1)

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
  
  iVar2 = func_0x0229f06c(0x5bfc,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5bfc,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02234e00 + 0x2234d20);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02234e04 + 0x2234d34),param_1,0);
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
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02234e08 + 0x2234df0));
    return uVar9;
  }
  iVar2 = FUN_028e3ec4(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_028e3bdc(param_1);
    if (iVar2 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(iVar2 + 0x28);
    }
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x0229f06c(0x5bfd,0,0);
    if (iVar7 != 0) {
      iVar7 = func_0x0229f13c(0x5bfd,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      pcVar8 = (char *)(_UNK_02234cf8 + 0x2234c04);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02234cfc + 0x2234c18),iVar2,uVar9,0);
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
      uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02234d00 + 0x2234ce8));
      return uVar9;
    }
    pcVar8 = (char *)(_UNK_017e5b98 + 0x17e5b3c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017e5b9c + 0x17e5b50),0);
      func_0x01384978(*(undefined4 *)(_UNK_017e5ba0 + 0x17e5b5c));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017e5ba4 + 0x17e5b70) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017e5ba8 + 0x17e5b8c);
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
  return 0;
}



// ===== FAT.FarmBoardActivity$$_GetNewAnimalEatItemId RVA 0x28ddd04 =====

undefined4 FUN_028edd04(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5cb6,0);
  if (iVar1 == 0) {
    iVar1 = func_0x028ede44(param_1,&uStack_14);
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5cb6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x0217493c(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.FarmBoardActivity$$CanConsumeCurrentAnimalItem RVA 0x28ddd80 =====

uint FUN_028edd80(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iStack_14;
  
  uVar2 = 0;
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5cac,0);
  if (iVar1 == 0) {
    if (0 < param_2) {
      iVar1 = FUN_028e3ec4(param_1);
      if (iVar1 == 0) {
        iVar1 = func_0x028ede44(param_1,&iStack_14);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        iVar1 = FUN_028edc50(param_1);
        if (iVar1 == 0) {
          return 0;
        }
        iStack_14 = *(int *)(iVar1 + 0x14);
      }
      uVar2 = (uint)(iStack_14 == param_2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5cac,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.FarmBoardActivity$$_TryGetNewAnimalEatItemId RVA 0x28dde44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028ede44(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_028ee190 + 0x28ede60);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028ee194 + 0x28ede74));
    func_0x01384978(*(undefined4 *)(_UNK_028ee198 + 0x28ede80));
    func_0x01384978(*(undefined4 *)(_UNK_028ee19c + 0x28ede8c));
    func_0x01384978(*(undefined4 *)(_UNK_028ee1a0 + 0x28ede98));
    func_0x01384978(*(undefined4 *)(_UNK_028ee1a4 + 0x28edea4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5cad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5cad,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    func_0x01485238(&uStack_38,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
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
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,1,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    *param_2 = iVar1;
    uVar8 = func_0x0245496c(&uStack_38,1,0);
    return uVar8;
  }
  *param_2 = 0;
  iVar1 = func_0x028f09a4(param_1);
  if (iVar1 == 0) {
    uStack_24 = *(undefined4 *)(param_1 + 0x48);
    puVar9 = *(undefined4 **)(_UNK_028ee1a8 + 0x28ee114);
    uVar8 = func_0x01384abc(*puVar9,&uStack_24);
    uStack_28 = *(undefined4 *)(param_1 + 0x4c);
    uVar4 = func_0x01384abc(*puVar9,&uStack_28);
    uVar6 = 0;
    uVar8 = func_0x0467272c(**(undefined4 **)(_UNK_028ee1ac + 0x28ee154),uVar8,uVar4,0);
    if (*(int *)(**(int **)(_UNK_028ee1b0 + 0x28ee168) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar8,0);
  }
  else {
    iVar7 = *(int *)(iVar1 + 0x24);
    uVar6 = 1;
    *param_2 = iVar7;
    if (iVar7 < 1) {
      piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028ee1b4 + 0x28edf38),4);
      uStack_24 = *(undefined4 *)(param_1 + 0x48);
      puVar9 = *(undefined4 **)(_UNK_028ee1b8 + 0x28edf50);
      iVar7 = func_0x01384abc(*puVar9,&uStack_24);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar7 != 0) &&
         (iVar3 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if (piVar2[3] == 0) {
        func_0x01384bf4();
      }
      piVar2[4] = iVar7;
      uStack_28 = *(undefined4 *)(param_1 + 0x4c);
      iVar7 = func_0x01384abc(*puVar9,&uStack_28);
      if ((iVar7 != 0) &&
         (iVar3 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if ((uint)piVar2[3] < 2) {
        func_0x01384bf4();
      }
      piVar2[5] = iVar7;
      uStack_2c = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = func_0x01384abc(*puVar9,&uStack_2c);
      if ((iVar1 != 0) &&
         (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if ((uint)piVar2[3] < 3) {
        func_0x01384bf4();
      }
      piVar2[6] = iVar1;
      iStack_30 = *param_2;
      iVar1 = func_0x01384abc(*puVar9,&iStack_30);
      if ((iVar1 != 0) &&
         (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if ((uint)piVar2[3] < 4) {
        func_0x01384bf4();
      }
      piVar2[7] = iVar1;
      uVar6 = 0;
      uVar8 = func_0x046727d0(**(undefined4 **)(_UNK_028ee1bc + 0x28ee0cc),piVar2,0);
      if (*(int *)(**(int **)(_UNK_028ee1c0 + 0x28ee0e0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar8,0);
      *param_2 = 0;
    }
  }
  return uVar6;
}



// ===== FAT.FarmBoardActivity$$CheckHasConsumeItem RVA 0x28de1c4 =====

undefined4 FUN_028ee1c4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_14;
  
  uVar4 = 0;
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5cb7,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar4 = 0;
      iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0);
      if (iVar1 != 0) {
        iVar2 = FUN_028e3ec4(param_1);
        if (iVar2 == 0) {
          iVar3 = FUN_028ede44(param_1,&iStack_14);
          iVar2 = iStack_14;
          if (iVar3 == 0) {
            return 0;
          }
        }
        else {
          iVar2 = FUN_028edbd0(param_1);
        }
        if (0 < iVar2) {
          iVar1 = func_0x020dfe04(iVar1,iVar2,0);
          uVar4 = 0;
          if (iVar1 != 0) {
            uVar4 = 1;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5cb7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar4;
}



// ===== FAT.FarmBoardActivity$$CheckIsInOutput RVA 0x28de2b0 =====

uint FUN_028ee2b0(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x5bfb,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5bfb,0);
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
  return ~*(uint *)(param_1 + 0xf0) >> 0x1f;
}



// ===== FAT.FarmBoardActivity$$TryConsumeItem RVA 0x28de30c =====

undefined4 FUN_028ee30c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  int iStack_1c;
  
  uVar2 = 0;
  iStack_1c = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x5cb9,0);
  if (iVar1 == 0) {
    iVar1 = FUN_028ecd14(param_1,param_2,&iStack_1c,&uStack_20);
    if ((iVar1 != 0) &&
       ((iVar1 = FUN_028e3ec4(param_1), iVar1 != 0 || (iVar1 = FUN_028ed508(param_1), iVar1 != 0))))
    {
      iVar1 = iStack_1c;
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      iVar1 = func_0x020dd560(iVar1,param_2,0xe,0);
      if (iVar1 != 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x0210e2d4(param_2,0);
        func_0x02317ae0(uVar2,0);
        iVar1 = FUN_028e3ec4(param_1);
        if (iVar1 == 0) {
          FUN_028eda64(param_1);
        }
        else {
          FUN_028ed56c(param_1,uStack_20);
        }
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5cb9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.FarmBoardActivity$$TryOutputItem RVA 0x28de438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028ee438(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint in_fpscr;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  pcVar6 = (char *)(_UNK_028ee738 + 0x28ee460);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028ee73c + 0x28ee478));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  uStack_44 = 0;
  iStack_48 = 0;
  iVar2 = func_0x0229f06c(0x5cba,0);
  if (iVar2 == 0) {
    iVar2 = FUN_028ee2b0(param_1);
    if (iVar2 != 0) {
      iVar2 = func_0x028ee75c(param_1,&uStack_44,&iStack_48);
      if (iVar2 != 0) {
        iVar3 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = param_1[0xf];
        }
        if (iVar3 == 0 || iVar2 == 0) {
          return 0;
        }
        iVar2 = func_0x02139cf4(iVar2,0);
        if (iVar2 == 0) {
          return 0;
        }
        bVar1 = false;
        func_0x020da680(&uStack_50,iVar2,0);
        fVar9 = (float)VectorSignedToFloat(uStack_50,(byte)(in_fpscr >> 0x16) & 3);
        pcVar6 = (char *)(_UNK_028ee740 + 0x28ee578);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_028ee744 + 0x28ee58c));
          *pcVar6 = '\x01';
        }
        if (*(int *)(**(int **)(_UNK_028ee748 + 0x28ee5a4) + 0x74) == 0) {
          func_0x01384ab4();
          bVar1 = *pcVar6 == '\0';
        }
        fVar10 = (float)VectorSignedToFloat(uStack_4c,(byte)(in_fpscr >> 0x16) & 3);
        fVar4 = (float)func_0x02450364(fVar9 * 0.5);
        fVar9 = _UNK_028ee734;
        iVar3 = (int)fVar4;
        if (fVar4 == _UNK_028ee734) {
          iVar3 = -0x80000000;
        }
        if (bVar1) {
          func_0x01384978(*(undefined4 *)(_UNK_028ee74c + 0x28ee600));
          *pcVar6 = '\x01';
        }
        if (*(int *)(**(int **)(_UNK_028ee750 + 0x28ee618) + 0x74) == 0) {
          func_0x01384ab4();
        }
        fVar4 = (float)func_0x02450364(fVar10 * 0.5);
        iVar8 = (int)fVar4;
        if (fVar4 == fVar9) {
          iVar8 = -0x80000000;
        }
        if (*(int *)(**(int **)(_UNK_028ee754 + 0x28ee648) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x01dd7d28(0);
        func_0x01dd7838(uStack_44,param_2,param_3,param_4,0xbf800000,0);
        uVar7 = uStack_44;
        uVar5 = func_0x020d8024(0,0x18,0);
        iVar2 = func_0x020ded9c(iVar2,uVar7,uVar5,iVar3,iVar8,0,0,0);
        if (iVar2 == 0) {
          if (*(int *)(**(int **)(_UNK_028ee758 + 0x28ee714) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dd7d28(0);
          return 2;
        }
        iVar2 = param_1[0x3c];
        uVar7 = 1;
        param_1[0x3c] = iVar2 + 1;
        if (iVar2 + 1 < iStack_48) {
          return 1;
        }
      }
      func_0x028eed14(param_1);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5cba,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x021ef980(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return uVar7;
}



// ===== FAT.FarmBoardActivity$$_TryGetNextOutputItem RVA 0x28de75c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028ee75c(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_028eecd4 + 0x28ee77c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028eecd8 + 0x28ee790));
    func_0x01384978(*(undefined4 *)(_UNK_028eecdc + 0x28ee79c));
    func_0x01384978(*(undefined4 *)(_UNK_028eece0 + 0x28ee7a8));
    func_0x01384978(*(undefined4 *)(_UNK_028eece4 + 0x28ee7b4));
    func_0x01384978(*(undefined4 *)(_UNK_028eece8 + 0x28ee7c0));
    func_0x01384978(*(undefined4 *)(_UNK_028eecec + 0x28ee7cc));
    func_0x01384978(*(undefined4 *)(_UNK_028eecf0 + 0x28ee7d8));
    *pcVar5 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x5cbb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5cbb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cc06c(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  *param_2 = 0;
  *param_3 = 0;
  iVar1 = FUN_028e3ec4(param_1);
  if (iVar1 == 0) {
    iVar4 = func_0x028eedf4(param_1,&iStack_24);
    iVar1 = iStack_24;
    if (iVar4 == 0) {
      return 0;
    }
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    *param_3 = iVar1;
    if ((-1 < *(int *)(param_1 + 0xf0)) && (*(int *)(param_1 + 0xf0) < iVar1)) {
      uVar2 = func_0x028ef800(param_1,iStack_24,param_2);
      return uVar2;
    }
    piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028eed08 + 0x28eea9c),5);
    uStack_28 = *(undefined4 *)(param_1 + 0x48);
    puVar6 = *(undefined4 **)(_UNK_028eed0c + 0x28eeab4);
    iVar1 = func_0x01384abc(*puVar6,&uStack_28);
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
    uStack_2c = *(undefined4 *)(param_1 + 0x4c);
    iVar1 = func_0x01384abc(*puVar6,&uStack_2c);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar2 = func_0x01384c10();
      func_0x01384aa0(uVar2,0);
    }
    if ((uint)piVar3[3] < 2) {
      func_0x01384bf4();
    }
    iVar4 = iStack_24;
    piVar3[5] = iVar1;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = func_0x01384abc(*puVar6,&uStack_30);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar2 = func_0x01384c10();
      func_0x01384aa0(uVar2,0);
    }
    if ((uint)piVar3[3] < 3) {
      func_0x01384bf4();
    }
    piVar3[6] = iVar1;
    iStack_34 = *(int *)(param_1 + 0xf0);
    iVar1 = func_0x01384abc(*puVar6,&iStack_34);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar2 = func_0x01384c10();
      func_0x01384aa0(uVar2,0);
    }
    if ((uint)piVar3[3] < 4) {
      func_0x01384bf4();
    }
    piVar3[7] = iVar1;
    iStack_38 = *param_3;
    iVar1 = func_0x01384abc(*puVar6,&iStack_38);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar2 = func_0x01384c10();
      func_0x01384aa0(uVar2,0);
    }
    if ((uint)piVar3[3] < 5) {
      func_0x01384bf4();
    }
    piVar3[8] = iVar1;
    puVar6 = *(undefined4 **)(_UNK_028eed10 + 0x28eec8c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    *param_3 = iVar1;
    iVar4 = *(int *)(param_1 + 0xf0);
    if ((-1 < iVar4) && (iVar4 < iVar1)) {
      uVar2 = func_0x03005740(*(undefined4 *)(param_1 + 0xe8),iVar4,param_2,
                              **(undefined4 **)(_UNK_028eed04 + 0x28ee88c));
      return uVar2;
    }
    piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028eecf4 + 0x28ee904),4);
    uStack_28 = *(undefined4 *)(param_1 + 0x48);
    puVar6 = *(undefined4 **)(_UNK_028eecf8 + 0x28ee91c);
    iVar1 = func_0x01384abc(*puVar6,&uStack_28);
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
    uStack_2c = *(undefined4 *)(param_1 + 0x4c);
    iVar1 = func_0x01384abc(*puVar6,&uStack_2c);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar2 = func_0x01384c10();
      func_0x01384aa0(uVar2,0);
    }
    if ((uint)piVar3[3] < 2) {
      func_0x01384bf4();
    }
    piVar3[5] = iVar1;
    uStack_30 = *(undefined4 *)(param_1 + 0xf0);
    iVar1 = func_0x01384abc(*puVar6,&uStack_30);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar2 = func_0x01384c10();
      func_0x01384aa0(uVar2,0);
    }
    if ((uint)piVar3[3] < 3) {
      func_0x01384bf4();
    }
    piVar3[6] = iVar1;
    iStack_34 = *param_3;
    iVar1 = func_0x01384abc(*puVar6,&iStack_34);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar2 = func_0x01384c10();
      func_0x01384aa0(uVar2,0);
    }
    if ((uint)piVar3[3] < 4) {
      func_0x01384bf4();
    }
    piVar3[7] = iVar1;
    puVar6 = *(undefined4 **)(_UNK_028eecfc + 0x28eea8c);
  }
  uVar2 = func_0x046727d0(*puVar6,piVar3,0);
  if (*(int *)(**(int **)(_UNK_028eed00 + 0x28eecac) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar2,0);
  return 0;
}



// ===== FAT.FarmBoardActivity$$_ClearAnimalOutputState RVA 0x28ded14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028eed14(int param_1)

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
  
  pcVar4 = (char *)(_UNK_028eede8 + 0x28eed28);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028eedec + 0x28eed3c));
    func_0x01384978(*(undefined4 *)(_UNK_028eedf0 + 0x28eed48));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bfe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bfe,0);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0xec);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar3 + 0x10);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  *(int *)(iVar3 + 0x10) = iVar1 + 1;
  return;
}



// ===== FAT.FarmBoardActivity$$_TryGetFrozenAnimalDropConfig RVA 0x28dedf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028eedf4(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_028ef794 + 0x28eee10);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028ef798 + 0x28eee24));
    func_0x01384978(*(undefined4 *)(_UNK_028ef79c + 0x28eee30));
    func_0x01384978(*(undefined4 *)(_UNK_028ef7a0 + 0x28eee3c));
    func_0x01384978(*(undefined4 *)(_UNK_028ef7a4 + 0x28eee48));
    func_0x01384978(*(undefined4 *)(_UNK_028ef7a8 + 0x28eee54));
    func_0x01384978(*(undefined4 *)(_UNK_028ef7ac + 0x28eee60));
    func_0x01384978(*(undefined4 *)(_UNK_028ef7b0 + 0x28eee6c));
    func_0x01384978(*(undefined4 *)(_UNK_028ef7b4 + 0x28eee78));
    func_0x01384978(*(undefined4 *)(_UNK_028ef7b8 + 0x28eee84));
    func_0x01384978(*(undefined4 *)(_UNK_028ef7bc + 0x28eee90));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bff,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bff,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_02234f44 + 0x2234e2c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02234f48 + 0x2234e40),param_1,param_2,0);
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    func_0x01485278(&uStack_38,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
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
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,1,0);
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02234f4c + 0x2234f20));
    *param_2 = iVar1;
    uVar7 = func_0x0245496c(&uStack_38,1,0);
    return uVar7;
  }
  iVar1 = *(int *)(param_1 + 0xf4);
  *param_2 = 0;
  if (iVar1 < 0) {
    uStack_24 = *(undefined4 *)(param_1 + 0x48);
    puVar9 = *(undefined4 **)(_UNK_028ef7c0 + 0x28ef34c);
    uVar7 = func_0x01384abc(*puVar9,&uStack_24);
    uStack_28 = *(undefined4 *)(param_1 + 0x4c);
    uVar4 = func_0x01384abc(*puVar9,&uStack_28);
    uStack_2c = *(undefined4 *)(param_1 + 0xf0);
    uVar3 = func_0x01384abc(*puVar9,&uStack_2c);
    uStack_38 = 0;
    uVar7 = func_0x0467277c(**(undefined4 **)(_UNK_028ef7c4 + 0x28ef3a4),uVar7,uVar4,uVar3);
    goto LAB_028ef75c;
  }
  iVar1 = FUN_028e3bdc(param_1);
  if (iVar1 == 0) {
LAB_028ef1a4:
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028ef7c8 + 0x28ef1b4),4);
    uStack_24 = *(undefined4 *)(param_1 + 0x48);
    puVar9 = *(undefined4 **)(_UNK_028ef7cc + 0x28ef1cc);
    iVar1 = func_0x01384abc(*puVar9,&uStack_24);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)
       ) {
      uVar7 = func_0x01384c10();
      func_0x01384aa0(uVar7,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    uStack_28 = *(undefined4 *)(param_1 + 0x4c);
    iVar1 = func_0x01384abc(*puVar9,&uStack_28);
    if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)
       ) {
      uVar7 = func_0x01384c10();
      func_0x01384aa0(uVar7,0);
    }
    if ((uint)piVar2[3] < 2) {
      func_0x01384bf4();
    }
    piVar2[5] = iVar1;
    uStack_2c = *(undefined4 *)(param_1 + 0xf4);
    iVar1 = func_0x01384abc(*puVar9,&uStack_2c);
    if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)
       ) {
      uVar7 = func_0x01384c10();
      func_0x01384aa0(uVar7,0);
    }
    if ((uint)piVar2[3] < 3) {
      func_0x01384bf4();
    }
    piVar2[6] = iVar1;
    iStack_30 = *(int *)(param_1 + 0xf0);
    iVar1 = func_0x01384abc(*puVar9,&iStack_30);
    if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)
       ) {
      uVar7 = func_0x01384c10();
      func_0x01384aa0(uVar7,0);
    }
    if ((uint)piVar2[3] < 4) {
      func_0x01384bf4();
    }
    piVar2[7] = iVar1;
    puVar9 = *(undefined4 **)(_UNK_028ef7d0 + 0x28ef33c);
  }
  else {
    iVar5 = *(int *)(iVar1 + 0x18);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar5 + 0xc) < 1) goto LAB_028ef1a4;
    iVar5 = *(int *)(iVar1 + 0x18);
    iVar8 = *(int *)(param_1 + 0xf4);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (iVar8 < *(int *)(iVar5 + 0xc)) {
      iVar1 = func_0x03003b84(*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(param_1 + 0xf4),2,
                              **(undefined4 **)(_UNK_028ef7e0 + 0x28eef58));
      if (iVar1 < 1) {
        piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028ef7e4 + 0x28ef5c4),4);
        uStack_24 = *(undefined4 *)(param_1 + 0x48);
        puVar9 = *(undefined4 **)(_UNK_028ef7e8 + 0x28ef5dc);
        iVar1 = func_0x01384abc(*puVar9,&uStack_24);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar1 != 0) &&
           (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
          uVar7 = func_0x01384c10();
          func_0x01384aa0(uVar7,0);
        }
        if (piVar2[3] == 0) {
          func_0x01384bf4();
        }
        piVar2[4] = iVar1;
        uStack_28 = *(undefined4 *)(param_1 + 0x4c);
        iVar1 = func_0x01384abc(*puVar9,&uStack_28);
        if ((iVar1 != 0) &&
           (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
          uVar7 = func_0x01384c10();
          func_0x01384aa0(uVar7,0);
        }
        if ((uint)piVar2[3] < 2) {
          func_0x01384bf4();
        }
        piVar2[5] = iVar1;
        uStack_2c = *(undefined4 *)(param_1 + 0xf4);
        iVar1 = func_0x01384abc(*puVar9,&uStack_2c);
        if ((iVar1 != 0) &&
           (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
          uVar7 = func_0x01384c10();
          func_0x01384aa0(uVar7,0);
        }
        if ((uint)piVar2[3] < 3) {
          func_0x01384bf4();
        }
        piVar2[6] = iVar1;
        iStack_30 = *(int *)(param_1 + 0xf0);
        iVar1 = func_0x01384abc(*puVar9,&iStack_30);
        if ((iVar1 != 0) &&
           (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
          uVar7 = func_0x01384c10();
          func_0x01384aa0(uVar7,0);
        }
        if ((uint)piVar2[3] < 4) {
          func_0x01384bf4();
        }
        piVar2[7] = iVar1;
        puVar9 = *(undefined4 **)(_UNK_028ef7ec + 0x28ef74c);
      }
      else {
        iVar5 = func_0x01c24918(0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0xc);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x01ca951c(iVar5,iVar1,0);
        *param_2 = iVar5;
        if (iVar5 != 0) {
          return 1;
        }
        piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028ef7f0 + 0x28eefc8),5);
        uStack_24 = *(undefined4 *)(param_1 + 0x48);
        puVar9 = *(undefined4 **)(_UNK_028ef7f4 + 0x28eefe0);
        iVar5 = func_0x01384abc(*puVar9,&uStack_24);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar5 != 0) &&
           (iVar8 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar2 + 0x20)), iVar8 == 0)) {
          uVar7 = func_0x01384c10();
          func_0x01384aa0(uVar7,0);
        }
        if (piVar2[3] == 0) {
          func_0x01384bf4();
        }
        piVar2[4] = iVar5;
        uStack_28 = *(undefined4 *)(param_1 + 0x4c);
        iVar5 = func_0x01384abc(*puVar9,&uStack_28);
        if ((iVar5 != 0) &&
           (iVar8 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar2 + 0x20)), iVar8 == 0)) {
          uVar7 = func_0x01384c10();
          func_0x01384aa0(uVar7,0);
        }
        if ((uint)piVar2[3] < 2) {
          func_0x01384bf4();
        }
        piVar2[5] = iVar5;
        uStack_2c = *(undefined4 *)(param_1 + 0xf4);
        iVar5 = func_0x01384abc(*puVar9,&uStack_2c);
        if ((iVar5 != 0) &&
           (iVar8 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar2 + 0x20)), iVar8 == 0)) {
          uVar7 = func_0x01384c10();
          func_0x01384aa0(uVar7,0);
        }
        if ((uint)piVar2[3] < 3) {
          func_0x01384bf4();
        }
        piVar2[6] = iVar5;
        iStack_30 = iVar1;
        iVar1 = func_0x01384abc(*puVar9,&iStack_30);
        if ((iVar1 != 0) &&
           (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
          uVar7 = func_0x01384c10();
          func_0x01384aa0(uVar7,0);
        }
        if ((uint)piVar2[3] < 4) {
          func_0x01384bf4();
        }
        piVar2[7] = iVar1;
        uStack_34 = *(undefined4 *)(param_1 + 0xf0);
        iVar1 = func_0x01384abc(*puVar9,&uStack_34);
        if ((iVar1 != 0) &&
           (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
          uVar7 = func_0x01384c10();
          func_0x01384aa0(uVar7,0);
        }
        if ((uint)piVar2[3] < 5) {
          func_0x01384bf4();
        }
        piVar2[8] = iVar1;
        puVar9 = *(undefined4 **)(_UNK_028ef7f8 + 0x28ef1a4);
      }
    }
    else {
      piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028ef7d4 + 0x28ef3c0),5);
      uStack_24 = *(undefined4 *)(param_1 + 0x48);
      puVar9 = *(undefined4 **)(_UNK_028ef7d8 + 0x28ef3d8);
      iVar5 = func_0x01384abc(*puVar9,&uStack_24);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar5 != 0) &&
         (iVar8 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar2 + 0x20)), iVar8 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if (piVar2[3] == 0) {
        func_0x01384bf4();
      }
      piVar2[4] = iVar5;
      uStack_28 = *(undefined4 *)(param_1 + 0x4c);
      iVar5 = func_0x01384abc(*puVar9,&uStack_28);
      if ((iVar5 != 0) &&
         (iVar8 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar2 + 0x20)), iVar8 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar2[3] < 2) {
        func_0x01384bf4();
      }
      piVar2[5] = iVar5;
      uStack_2c = *(undefined4 *)(param_1 + 0xf4);
      iVar5 = func_0x01384abc(*puVar9,&uStack_2c);
      if ((iVar5 != 0) &&
         (iVar8 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar2 + 0x20)), iVar8 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar2[3] < 3) {
        func_0x01384bf4();
      }
      piVar2[6] = iVar5;
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iStack_30 = *(int *)(iVar1 + 0xc) + -1;
      iVar1 = func_0x01384abc(*puVar9,&iStack_30);
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar2[3] < 4) {
        func_0x01384bf4();
      }
      piVar2[7] = iVar1;
      uStack_34 = *(undefined4 *)(param_1 + 0xf0);
      iVar1 = func_0x01384abc(*puVar9,&uStack_34);
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar2[3] < 5) {
        func_0x01384bf4();
      }
      piVar2[8] = iVar1;
      puVar9 = *(undefined4 **)(_UNK_028ef7dc + 0x28ef5b4);
    }
  }
  uVar7 = func_0x046727d0(*puVar9,piVar2,0);
LAB_028ef75c:
  if (*(int *)(**(int **)(_UNK_028ef7fc + 0x28ef76c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar7,0);
  return 0;
}



// ===== FAT.FarmBoardActivity$$_TryRandomNewAnimalOutputItem RVA 0x28df800 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028ef800(int param_1,int param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int aiStack_2c [2];
  
  pcVar2 = (char *)(_UNK_028efbac + 0x28ef820);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028efbb0 + 0x28ef834));
    func_0x01384978(*(undefined4 *)(_UNK_028efbb4 + 0x28ef840));
    func_0x01384978(*(undefined4 *)(_UNK_028efbb8 + 0x28ef84c));
    func_0x01384978(*(undefined4 *)(_UNK_028efbbc + 0x28ef858));
    func_0x01384978(*(undefined4 *)(_UNK_028efbc0 + 0x28ef864));
    func_0x01384978(*(undefined4 *)(_UNK_028efbc4 + 0x28ef870));
    func_0x01384978(*(undefined4 *)(_UNK_028efbc8 + 0x28ef87c));
    func_0x01384978(*(undefined4 *)(_UNK_028efbcc + 0x28ef888));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x5cbc,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    iVar1 = func_0x028efbf0(param_1,param_2);
    if (iVar1 != 0) {
      piVar7 = *(int **)(_UNK_028efbd0 + 0x28ef908);
      uVar3 = *(undefined4 *)(param_1 + 0xec);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar4 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar7;
        }
        uVar6 = **(undefined4 **)(iVar1 + 0x5c);
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_028efbd4 + 0x28ef954));
        func_0x03a068fc(iVar4,uVar6,**(undefined4 **)(_UNK_028efbd8 + 0x28ef974),0);
        *(int *)(*(int *)(*piVar7 + 0x5c) + 8) = iVar4;
      }
      func_0x02fbd288(aiStack_2c,uVar3,iVar4,0,**(undefined4 **)(_UNK_028efbdc + 0x28ef9a0));
      uVar3 = 1;
      *param_3 = aiStack_2c[0];
      if (aiStack_2c[0] < 1) {
        piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028efbe0 + 0x28ef9d0),4);
        aiStack_2c[0] = *(int *)(param_1 + 0x48);
        puVar5 = *(undefined4 **)(_UNK_028efbe4 + 0x28ef9e8);
        iVar1 = func_0x01384abc(*puVar5,aiStack_2c);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if (piVar7[3] == 0) {
          func_0x01384bf4();
        }
        piVar7[4] = iVar1;
        uStack_30 = *(undefined4 *)(param_1 + 0x4c);
        iVar1 = func_0x01384abc(*puVar5,&uStack_30);
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar7[3] < 2) {
          func_0x01384bf4();
        }
        piVar7[5] = iVar1;
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)(param_2 + 0xc);
        iVar1 = func_0x01384abc(*puVar5,&uStack_34);
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar7[3] < 3) {
          func_0x01384bf4();
        }
        piVar7[6] = iVar1;
        uStack_38 = *(undefined4 *)(param_1 + 0xf0);
        iVar1 = func_0x01384abc(*puVar5,&uStack_38);
        if ((iVar1 != 0) &&
           (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar7[3] < 4) {
          func_0x01384bf4();
        }
        piVar7[7] = iVar1;
        uVar3 = 0;
        uVar6 = func_0x046727d0(**(undefined4 **)(_UNK_028efbe8 + 0x28efb70),piVar7,0);
        if (*(int *)(**(int **)(_UNK_028efbec + 0x28efb84) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2944(uVar6,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5cbc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021f0b30(iVar1,param_1,param_2,param_3,0);
  }
  return uVar3;
}



// ===== FAT.FarmBoardActivity$$_TryRefreshAnimalOutputPool RVA 0x28dfbf0 =====

/* WARNING: Removing unreachable block (ram,0x028f07d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_028efbf0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_028f0904 + 0x28efc0c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f0908 + 0x28efc20));
    func_0x01384978(*(undefined4 *)(_UNK_028f090c + 0x28efc2c));
    func_0x01384978(*(undefined4 *)(_UNK_028f0910 + 0x28efc38));
    func_0x01384978(*(undefined4 *)(_UNK_028f0914 + 0x28efc44));
    func_0x01384978(*(undefined4 *)(_UNK_028f0918 + 0x28efc50));
    func_0x01384978(*(undefined4 *)(_UNK_028f091c + 0x28efc5c));
    func_0x01384978(*(undefined4 *)(_UNK_028f0920 + 0x28efc68));
    func_0x01384978(*(undefined4 *)(_UNK_028f0924 + 0x28efc74));
    func_0x01384978(*(undefined4 *)(_UNK_028f0928 + 0x28efc80));
    func_0x01384978(*(undefined4 *)(_UNK_028f092c + 0x28efc8c));
    func_0x01384978(*(undefined4 *)(_UNK_028f0930 + 0x28efc98));
    func_0x01384978(*(undefined4 *)(_UNK_028f0934 + 0x28efca4));
    func_0x01384978(*(undefined4 *)(_UNK_028f0938 + 0x28efcb0));
    func_0x01384978(*(undefined4 *)(_UNK_028f093c + 0x28efcbc));
    func_0x01384978(*(undefined4 *)(_UNK_028f0940 + 0x28efcc8));
    func_0x01384978(*(undefined4 *)(_UNK_028f0944 + 0x28efcd4));
    func_0x01384978(*(undefined4 *)(_UNK_028f0948 + 0x28efce0));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5c00,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5c00,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = iStack_4c;
    iStack_30 = iStack_48;
    iStack_2c = iStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
    piVar1 = (int *)func_0x0245496c(&uStack_38,0,0);
    return piVar1;
  }
  iVar2 = *(int *)(param_1 + 0xec);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (param_2 == 0) {
    piVar1 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028f094c + 0x28effb0),4);
    iStack_40 = *(int *)(param_1 + 0x48);
    puVar3 = *(undefined4 **)(_UNK_028f0950 + 0x28effc8);
    iVar2 = func_0x01384abc(*puVar3,&iStack_40);
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar2 != 0) && (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar9 == 0)
       ) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if (piVar1[3] == 0) {
      func_0x01384bf4();
    }
    piVar1[4] = iVar2;
    iStack_28 = *(int *)(param_1 + 0x4c);
    iVar2 = func_0x01384abc(*puVar3,&iStack_28);
    if ((iVar2 != 0) && (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar9 == 0)
       ) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if ((uint)piVar1[3] < 2) {
      func_0x01384bf4();
    }
    piVar1[5] = iVar2;
    iStack_2c = *(int *)(param_1 + 0xf4);
    iVar2 = func_0x01384abc(*puVar3,&iStack_2c);
    if ((iVar2 != 0) && (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar9 == 0)
       ) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if ((uint)piVar1[3] < 3) {
      func_0x01384bf4();
    }
    piVar1[6] = iVar2;
    iStack_30 = *(int *)(param_1 + 0xf0);
    iVar2 = func_0x01384abc(*puVar3,&iStack_30);
    if ((iVar2 != 0) && (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar9 == 0)
       ) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if ((uint)piVar1[3] < 4) {
      func_0x01384bf4();
    }
    piVar1[7] = iVar2;
    puVar3 = *(undefined4 **)(_UNK_028f0954 + 0x28f0138);
  }
  else if (*(int *)(param_2 + 0x18) < 1) {
    piVar1 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028f095c + 0x28f0148),4);
    iStack_40 = *(int *)(param_1 + 0x48);
    puVar3 = *(undefined4 **)(_UNK_028f0960 + 0x28f0160);
    iVar2 = func_0x01384abc(*puVar3,&iStack_40);
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar2 != 0) && (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar9 == 0)
       ) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if (piVar1[3] == 0) {
      func_0x01384bf4();
    }
    piVar1[4] = iVar2;
    iStack_28 = *(int *)(param_1 + 0x4c);
    iVar2 = func_0x01384abc(*puVar3,&iStack_28);
    if ((iVar2 != 0) && (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar9 == 0)
       ) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if ((uint)piVar1[3] < 2) {
      func_0x01384bf4();
    }
    piVar1[5] = iVar2;
    iStack_2c = *(int *)(param_2 + 0xc);
    iVar2 = func_0x01384abc(*puVar3,&iStack_2c);
    if ((iVar2 != 0) && (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar9 == 0)
       ) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if ((uint)piVar1[3] < 3) {
      func_0x01384bf4();
    }
    piVar1[6] = iVar2;
    iStack_30 = *(int *)(param_2 + 0x18);
    iVar2 = func_0x01384abc(*puVar3,&iStack_30);
    if ((iVar2 != 0) && (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar9 == 0)
       ) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if ((uint)piVar1[3] < 4) {
      func_0x01384bf4();
    }
    piVar1[7] = iVar2;
    puVar3 = *(undefined4 **)(_UNK_028f0964 + 0x28f02d0);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar2 + 0xc)) {
      iVar2 = *(int *)(param_2 + 0x14);
      iStack_4c = param_2;
      iStack_48 = param_1;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_028f0974 + 0x28efda8));
LAB_028efdb8:
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_028f0998 + 0x28efdd4)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_028efe1c;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_028f0998 + 0x28efdd4),0);
LAB_028efe1c:
      iVar2 = (*(code *)*puVar3)(piVar1,puVar3[1]);
      if (iVar2 == 0) {
        iVar9 = 0xb;
        iVar2 = iStack_48;
        goto LAB_028f0758;
      }
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_028f0978 + 0x28efe50)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_028efe98;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_028f0978 + 0x28efe50),0);
LAB_028efe98:
      iVar2 = (*(code *)*puVar3)(piVar1,puVar3[1]);
      if (*(int *)(**(int **)(_UNK_028f097c + 0x28efeb8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&iStack_40,iVar2,0);
      iVar12 = iStack_3c;
      iVar4 = iStack_40;
      bVar13 = iStack_40 == 1;
      iVar9 = iStack_40 + -1;
      if (iStack_40 >= 1) {
        bVar13 = iStack_3c == 0;
        iVar9 = iStack_3c;
      }
      if (!bVar13 && iVar9 < 0 == (iStack_40 < 1 && SBORROW4(iStack_40,1))) {
        iVar2 = *(int *)(iStack_48 + 0xec);
        iStack_3c = 0;
        iStack_40 = 0;
        func_0x038fd264(&iStack_40,iVar4,iVar12,**(undefined4 **)(_UNK_028f0990 + 0x28eff00));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar4 = iStack_3c;
        iVar9 = iStack_40;
        iVar12 = *(int *)(iVar2 + 8);
        uVar5 = *(uint *)(iVar2 + 0xc);
        piVar7 = *(int **)(_UNK_028f0994 + 0x28eff50);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        iVar11 = *piVar7;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        if (uVar5 < *(uint *)(iVar12 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar5 + 1;
          iVar12 = iVar12 + uVar5 * 8;
          *(int *)(iVar12 + 0x10) = iVar9;
          *(int *)(iVar12 + 0x14) = iVar4;
        }
        else {
          func_0x0441a364(iVar2,iVar9,iVar4,
                          *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
        }
        goto LAB_028efdb8;
      }
      piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028f0980 + 0x28f04cc),6);
      iStack_40 = *(int *)(iStack_48 + 0x48);
      puVar3 = *(undefined4 **)(_UNK_028f0984 + 0x28f04ec);
      iVar9 = func_0x01384abc(*puVar3,&iStack_40);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar9 != 0) &&
         (iVar11 = func_0x01384ab8(iVar9,*(undefined4 *)(*piVar7 + 0x20)), iVar11 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if (piVar7[3] == 0) {
        func_0x01384bf4();
      }
      piVar7[4] = iVar9;
      iStack_28 = *(int *)(iStack_48 + 0x4c);
      iVar9 = func_0x01384abc(*puVar3,&iStack_28);
      if ((iVar9 != 0) &&
         (iVar11 = func_0x01384ab8(iVar9,*(undefined4 *)(*piVar7 + 0x20)), iVar11 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if ((uint)piVar7[3] < 2) {
        func_0x01384bf4();
      }
      piVar7[5] = iVar9;
      iStack_2c = *(int *)(iStack_4c + 0xc);
      iVar9 = func_0x01384abc(*puVar3,&iStack_2c);
      if ((iVar9 != 0) &&
         (iVar11 = func_0x01384ab8(iVar9,*(undefined4 *)(*piVar7 + 0x20)), iVar11 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if ((uint)piVar7[3] < 3) {
        func_0x01384bf4();
      }
      piVar7[6] = iVar9;
      if ((iVar2 != 0) &&
         (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar9 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if ((uint)piVar7[3] < 4) {
        func_0x01384bf4();
      }
      piVar7[7] = iVar2;
      iStack_30 = iVar4;
      iVar2 = func_0x01384abc(*puVar3,&iStack_30);
      if ((iVar2 != 0) &&
         (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar9 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if ((uint)piVar7[3] < 5) {
        func_0x01384bf4();
      }
      piVar7[8] = iVar2;
      iStack_44 = iVar12;
      iVar2 = func_0x01384abc(*puVar3,&iStack_44);
      if ((iVar2 != 0) &&
         (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar9 == 0)) {
        uVar10 = func_0x01384c10();
        func_0x01384aa0(uVar10,0);
      }
      if ((uint)piVar7[3] < 6) {
        func_0x01384bf4();
      }
      piVar7[9] = iVar2;
      uVar10 = func_0x046727d0(**(undefined4 **)(_UNK_028f0988 + 0x28f06f4),piVar7,0);
      if (*(int *)(**(int **)(_UNK_028f098c + 0x28f0710) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar10,0);
      iVar2 = iStack_48;
      iVar9 = *(int *)(iStack_48 + 0xec);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar9 + 0xc) = 0;
      *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
      iVar9 = 10;
LAB_028f0758:
      if (piVar1 != (int *)0x0) {
        iVar4 = *piVar1;
        uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_028f099c + 0x28f0770)) {
              puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
              goto LAB_028f07b8;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_028f099c + 0x28f0770),0);
LAB_028f07b8:
        (*(code *)*puVar3)(piVar1,puVar3[1]);
      }
      if (iVar9 != 0xb) {
        piVar1 = (int *)0x0;
      }
      if (iVar9 != 0xb && iVar9 != 0) {
        return piVar1;
      }
      iVar2 = *(int *)(iVar2 + 0xec);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      return (int *)(uint)(0 < *(int *)(iVar2 + 0xc));
    }
    piVar1 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028f0968 + 0x28f02e0),4);
    iStack_40 = *(int *)(param_1 + 0x48);
    puVar3 = *(undefined4 **)(_UNK_028f096c + 0x28f02f8);
    iVar2 = func_0x01384abc(*puVar3,&iStack_40);
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar2 != 0) && (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar9 == 0)
       ) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if (piVar1[3] == 0) {
      func_0x01384bf4();
    }
    piVar1[4] = iVar2;
    iStack_28 = *(int *)(param_1 + 0x4c);
    iVar2 = func_0x01384abc(*puVar3,&iStack_28);
    if ((iVar2 != 0) && (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar9 == 0)
       ) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if ((uint)piVar1[3] < 2) {
      func_0x01384bf4();
    }
    piVar1[5] = iVar2;
    iStack_2c = *(int *)(param_2 + 0xc);
    iVar2 = func_0x01384abc(*puVar3,&iStack_2c);
    if ((iVar2 != 0) && (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar9 == 0)
       ) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if ((uint)piVar1[3] < 3) {
      func_0x01384bf4();
    }
    piVar1[6] = iVar2;
    iStack_30 = *(int *)(param_2 + 0x18);
    iVar2 = func_0x01384abc(*puVar3,&iStack_30);
    if ((iVar2 != 0) && (iVar9 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar9 == 0)
       ) {
      uVar10 = func_0x01384c10();
      func_0x01384aa0(uVar10,0);
    }
    if ((uint)piVar1[3] < 4) {
      func_0x01384bf4();
    }
    piVar1[7] = iVar2;
    puVar3 = *(undefined4 **)(_UNK_028f0970 + 0x28f0468);
  }
  uVar10 = func_0x046727d0(*puVar3,piVar1,0);
  if (*(int *)(**(int **)(_UNK_028f0958 + 0x28f0488) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar10,0);
  return (int *)0x0;
}



// ===== FAT.FarmBoardActivity$$_GetCurAnimalDropConfig RVA 0x28e09a4 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028f09a4(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_r4;
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
  
  iVar3 = func_0x0229f06c(0x5cae,0);
  if (iVar3 == 0) {
    iVar3 = FUN_028e3ec4(param_1);
    if (iVar3 != 0) {
      return 0;
    }
    iVar3 = func_0x0229f06c(0x5b49,0);
    if (iVar3 == 0) {
      iVar3 = FUN_028e3db0(param_1);
      if (iVar3 < 1) {
        return 0;
      }
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x5b4d,0,0);
      if (iVar2 == 0) {
        pcVar9 = (char *)(_UNK_017e7cbc + 0x17e7c60);
        if (*pcVar9 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_017e7cc0 + 0x17e7c74),0);
          func_0x01384978(*(undefined4 *)(_UNK_017e7cc4 + 0x17e7c80));
          *pcVar9 = '\x01';
        }
        if (*(int *)(**(int **)(_UNK_017e7cc8 + 0x17e7c94) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = **(int **)(_UNK_017e7ccc + 0x17e7cb0);
        iVar8 = *(int *)(iVar2 + 0x10);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x02457d84();
        }
        iVar8 = *(int *)(*(int *)(iVar8 + 0x60) + 8);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x02457d84();
        }
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x02457d48();
        }
        iVar8 = *(int *)(iVar2 + 0x10);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x02457d84();
        }
        piVar4 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar8 + 0x60) + 0xe8));
        if (piVar4 == (int *)0x0) {
          func_0x02457d50();
        }
        iVar8 = *(int *)(iVar2 + 0x10);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x02457d84();
        }
        iVar2 = *(int *)(*(int *)(iVar8 + 0x60) + 0xf4);
        uStack_28 = 0;
        uStack_2c = 0;
        (**(code **)(*piVar4 + 0x110))(piVar4,*(undefined4 *)(*piVar4 + 0x114));
        iVar8 = (**(code **)(*piVar4 + 0xe8))(piVar4,*(undefined4 *)(*piVar4 + 0xec));
        if (iVar8 != 0) {
          unaff_r4 = piVar4[0x11];
        }
        bVar1 = true;
        iVar6 = 0;
        if (iVar8 != 0 && unaff_r4 != 0) {
          iVar5 = func_0x03d66780(unaff_r4,iVar3,&uStack_28,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x68));
          uVar10 = uStack_28;
          bVar1 = false;
          iVar6 = unaff_r4;
          if (iVar5 != 0) {
            iVar8 = (**(code **)(*piVar4 + 0x100))(piVar4,*(undefined4 *)(*piVar4 + 0x104));
            if (iVar8 == 0) {
              return uStack_28;
            }
            (**(code **)(*piVar4 + 0x138))(piVar4,iVar3,uVar10,*(undefined4 *)(*piVar4 + 0x13c));
            return uStack_28;
          }
        }
        if ((piVar4[0x12] == 0) ||
           (iVar5 = func_0x0421f3b0(piVar4[0x12],iVar3,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x13c)
                                   ), iVar5 == 0)) {
          uStack_2c = 0;
          iVar5 = (**(code **)(*piVar4 + 0x1a0))
                            (piVar4,iVar3,&uStack_2c,*(undefined4 *)(*piVar4 + 0x1a4));
          uVar10 = uStack_2c;
          if (iVar5 != 0) {
            if (iVar8 != 0) {
              if (bVar1) {
                if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x40) + 0xbd) &
                    1) == 0) {
                  func_0x02457d84();
                }
                iVar6 = func_0x02457d58();
                func_0x03d63f04(iVar6,4,*(undefined4 *)
                                         (*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x74));
                piVar4[0x11] = iVar6;
              }
              if (iVar6 == 0) {
                func_0x02457d50();
              }
              func_0x03d6491c(iVar6,iVar3,uVar10,
                              *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x78));
            }
            iVar8 = (**(code **)(*piVar4 + 0x100))(piVar4,*(undefined4 *)(*piVar4 + 0x104));
            if (iVar8 == 0) {
              return uVar10;
            }
            (**(code **)(*piVar4 + 0x138))(piVar4,iVar3,uVar10,*(undefined4 *)(*piVar4 + 0x13c));
            return uVar10;
          }
          iVar8 = piVar4[0x12];
          if (iVar8 == 0) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x48) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar8 = func_0x02457d58();
            func_0x0421ec60(iVar8,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x144));
            piVar4[0x12] = iVar8;
            if (iVar8 == 0) {
              func_0x02457d50();
              iVar8 = 0;
            }
          }
          func_0x04220004(iVar8,iVar3,
                          *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x148));
        }
        func_0x0369fb50(piVar4,iVar3,
                        *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x134));
        return 0;
      }
      iVar2 = func_0x0229f13c(0x5b4d,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      pcVar9 = (char *)(_UNK_02232900 + 0x223280c);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02232904 + 0x2232820),iVar8,iVar3,0);
        *pcVar9 = '\x01';
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
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar8,0);
      func_0x01485238(&uStack_38,iVar3,0);
      iVar8 = *(int *)(iVar2 + 8);
      uVar10 = *(undefined4 *)(iVar2 + 0xc);
      iVar3 = *(int *)(iVar2 + 0x10);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 3;
      if (iVar3 == 0) {
        uVar7 = 2;
      }
      func_0x0245495c(iVar8,uVar10,&uStack_38,uVar7,0,0);
      uVar10 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02232908 + 0x22328f0));
      return uVar10;
    }
    iVar3 = func_0x0229f13c(0x5b49,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x5cae,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar9 = (char *)(_UNK_02232a08 + 0x2232928);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02232a0c + 0x223293c),param_1,0);
    *pcVar9 = '\x01';
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar8 = *(int *)(iVar3 + 8);
  uVar10 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar3 == 0) {
    uVar7 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar8,uVar10,&uStack_30,uVar7);
  uVar10 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02232a10 + 0x22329f8));
  return uVar10;
}



// ===== FAT.FarmBoardActivity$$_ValidateNewAnimalOutputConfig RVA 0x28e0a14 =====

/* WARNING: Removing unreachable block (ram,0x028f1384) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028f0a14(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  bool bVar16;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_028f1480 + 0x28f0a30);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f1484 + 0x28f0a44));
    func_0x01384978(*(undefined4 *)(_UNK_028f1488 + 0x28f0a50));
    func_0x01384978(*(undefined4 *)(_UNK_028f148c + 0x28f0a5c));
    func_0x01384978(*(undefined4 *)(_UNK_028f1490 + 0x28f0a68));
    func_0x01384978(*(undefined4 *)(_UNK_028f1494 + 0x28f0a74));
    func_0x01384978(*(undefined4 *)(_UNK_028f1498 + 0x28f0a80));
    func_0x01384978(*(undefined4 *)(_UNK_028f149c + 0x28f0a8c));
    func_0x01384978(*(undefined4 *)(_UNK_028f14a0 + 0x28f0a98));
    func_0x01384978(*(undefined4 *)(_UNK_028f14a4 + 0x28f0aa4));
    func_0x01384978(*(undefined4 *)(_UNK_028f14a8 + 0x28f0ab0));
    func_0x01384978(*(undefined4 *)(_UNK_028f14ac + 0x28f0abc));
    func_0x01384978(*(undefined4 *)(_UNK_028f14b0 + 0x28f0ac8));
    func_0x01384978(*(undefined4 *)(_UNK_028f14b4 + 0x28f0ad4));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5cb1,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5cb1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    uStack_2c = iStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar13 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar2 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar11,uVar13,&iStack_38,uVar8,0,0);
    uVar13 = func_0x0245496c(&iStack_38,0,0);
    return uVar13;
  }
  if (param_2 == 0) {
    iStack_3c = *(int *)(param_1 + 0x48);
    puVar4 = *(undefined4 **)(_UNK_028f14b8 + 0x28f0f44);
    uVar13 = func_0x01384abc(*puVar4,&iStack_3c);
    iStack_28 = *(int *)(param_1 + 0x4c);
    uVar8 = func_0x01384abc(*puVar4,&iStack_28);
    uVar13 = func_0x0467272c(**(undefined4 **)(_UNK_028f14bc + 0x28f0f84),uVar13,uVar8,0);
  }
  else {
    if (*(int *)(param_2 + 0x18) < 1) {
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028f14c4 + 0x28f0f9c),4);
      iStack_3c = *(int *)(param_1 + 0x48);
      puVar4 = *(undefined4 **)(_UNK_028f14c8 + 0x28f0fb4);
      iVar2 = func_0x01384abc(*puVar4,&iStack_3c);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar2 != 0) &&
         (iVar11 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar11 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = iVar2;
      iStack_28 = *(int *)(param_1 + 0x4c);
      iVar2 = func_0x01384abc(*puVar4,&iStack_28);
      if ((iVar2 != 0) &&
         (iVar11 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar11 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if ((uint)piVar3[3] < 2) {
        func_0x01384bf4();
      }
      piVar3[5] = iVar2;
      uStack_2c = *(undefined4 *)(param_2 + 0xc);
      iVar2 = func_0x01384abc(*puVar4,&uStack_2c);
      if ((iVar2 != 0) &&
         (iVar11 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar11 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if ((uint)piVar3[3] < 3) {
        func_0x01384bf4();
      }
      piVar3[6] = iVar2;
      iStack_30 = *(int *)(param_2 + 0x18);
      iVar2 = func_0x01384abc(*puVar4,&iStack_30);
      if ((iVar2 != 0) &&
         (iVar11 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar11 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if ((uint)piVar3[3] < 4) {
        func_0x01384bf4();
      }
      piVar3[7] = iVar2;
      puVar4 = *(undefined4 **)(_UNK_028f14cc + 0x28f1124);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar2 + 0xc)) {
        iVar2 = *(int *)(param_2 + 0x14);
        iStack_48 = param_2;
        iStack_44 = param_1;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_028f14dc + 0x28f0b7c));
        piVar12 = *(int **)(_UNK_028f14e0 + 0x28f0b98);
        piVar14 = *(int **)(_UNK_028f14e4 + 0x28f0ba0);
        piVar15 = *(int **)(_UNK_028f14e8 + 0x28f0ba8);
        do {
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar3;
          uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar9[-1] == *piVar12) {
                puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
                goto LAB_028f0c00;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar12,0);
LAB_028f0c00:
          iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if (iVar2 == 0) {
            uVar13 = 1;
            goto LAB_028f130c;
          }
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar3;
          uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar9[-1] == *piVar14) {
                puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
                goto LAB_028f0c74;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar14,0);
LAB_028f0c74:
          iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if (*(int *)(*piVar15 + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x02566088(&iStack_3c,iVar2,0);
          iVar1 = iStack_3c;
          bVar16 = iStack_3c == 1;
          iVar11 = iStack_3c + -1;
          if (iStack_3c >= 1) {
            bVar16 = iStack_38 == 0;
            iVar11 = iStack_38;
          }
        } while (!bVar16 && iVar11 < 0 == (iStack_3c < 1 && SBORROW4(iStack_3c,1)));
        piVar12 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028f14ec + 0x28f0ccc),6);
        iVar11 = iStack_44;
        iStack_3c = *(int *)(iStack_44 + 0x48);
        puVar4 = *(undefined4 **)(_UNK_028f14f0 + 0x28f0cec);
        iVar5 = func_0x01384abc(*puVar4,&iStack_3c);
        if (piVar12 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar5 != 0) &&
           (iVar6 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar12 + 0x20)), iVar6 == 0)) {
          uVar13 = func_0x01384c10();
          func_0x01384aa0(uVar13,0);
        }
        if (piVar12[3] == 0) {
          func_0x01384bf4();
        }
        piVar12[4] = iVar5;
        iStack_28 = *(int *)(iVar11 + 0x4c);
        iVar11 = func_0x01384abc(*puVar4,&iStack_28);
        if ((iVar11 != 0) &&
           (iVar5 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar12 + 0x20)), iVar5 == 0)) {
          uVar13 = func_0x01384c10();
          func_0x01384aa0(uVar13,0);
        }
        if ((uint)piVar12[3] < 2) {
          func_0x01384bf4();
        }
        piVar12[5] = iVar11;
        uStack_2c = *(undefined4 *)(iStack_48 + 0xc);
        iVar11 = func_0x01384abc(*puVar4,&uStack_2c);
        if ((iVar11 != 0) &&
           (iVar5 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar12 + 0x20)), iVar5 == 0)) {
          uVar13 = func_0x01384c10();
          func_0x01384aa0(uVar13,0);
        }
        if ((uint)piVar12[3] < 3) {
          func_0x01384bf4();
        }
        piVar12[6] = iVar11;
        if ((iVar2 != 0) &&
           (iVar11 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar12 + 0x20)), iVar11 == 0)) {
          uVar13 = func_0x01384c10();
          func_0x01384aa0(uVar13,0);
        }
        if ((uint)piVar12[3] < 4) {
          func_0x01384bf4();
        }
        piVar12[7] = iVar2;
        iStack_30 = iVar1;
        iVar2 = func_0x01384abc(*puVar4,&iStack_30);
        if ((iVar2 != 0) &&
           (iVar11 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar12 + 0x20)), iVar11 == 0)) {
          uVar13 = func_0x01384c10();
          func_0x01384aa0(uVar13,0);
        }
        if ((uint)piVar12[3] < 5) {
          func_0x01384bf4();
        }
        piVar12[8] = iVar2;
        iStack_40 = iStack_38;
        iVar2 = func_0x01384abc(*puVar4,&iStack_40);
        if ((iVar2 != 0) &&
           (iVar11 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar12 + 0x20)), iVar11 == 0)) {
          uVar13 = func_0x01384c10();
          func_0x01384aa0(uVar13,0);
        }
        if ((uint)piVar12[3] < 6) {
          func_0x01384bf4();
        }
        piVar12[9] = iVar2;
        uVar13 = func_0x046727d0(**(undefined4 **)(_UNK_028f14f4 + 0x28f0ef0),piVar12,0);
        if (*(int *)(**(int **)(_UNK_028f14f8 + 0x28f0f0c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2944(uVar13,0);
        uVar13 = 0;
LAB_028f130c:
        if (piVar3 == (int *)0x0) {
          return uVar13;
        }
        iVar2 = *piVar3;
        uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar12[-1] == **(int **)(_UNK_028f14fc + 0x28f1324)) {
              puVar4 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xc0);
              goto LAB_028f136c;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_028f14fc + 0x28f1324),0);
LAB_028f136c:
        (*(code *)*puVar4)(piVar3,puVar4[1]);
        return uVar13;
      }
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_028f14d0 + 0x28f1134),4);
      iStack_3c = *(int *)(param_1 + 0x48);
      puVar4 = *(undefined4 **)(_UNK_028f14d4 + 0x28f114c);
      iVar2 = func_0x01384abc(*puVar4,&iStack_3c);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar2 != 0) &&
         (iVar11 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar11 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = iVar2;
      iStack_28 = *(int *)(param_1 + 0x4c);
      iVar2 = func_0x01384abc(*puVar4,&iStack_28);
      if ((iVar2 != 0) &&
         (iVar11 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar11 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if ((uint)piVar3[3] < 2) {
        func_0x01384bf4();
      }
      piVar3[5] = iVar2;
      uStack_2c = *(undefined4 *)(param_2 + 0xc);
      iVar2 = func_0x01384abc(*puVar4,&uStack_2c);
      if ((iVar2 != 0) &&
         (iVar11 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar11 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if ((uint)piVar3[3] < 3) {
        func_0x01384bf4();
      }
      piVar3[6] = iVar2;
      iStack_30 = *(int *)(param_2 + 0x18);
      iVar2 = func_0x01384abc(*puVar4,&iStack_30);
      if ((iVar2 != 0) &&
         (iVar11 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar11 == 0)) {
        uVar13 = func_0x01384c10();
        func_0x01384aa0(uVar13,0);
      }
      if ((uint)piVar3[3] < 4) {
        func_0x01384bf4();
      }
      piVar3[7] = iVar2;
      puVar4 = *(undefined4 **)(_UNK_028f14d8 + 0x28f12bc);
    }
    uVar13 = func_0x046727d0(*puVar4,piVar3,0);
  }
  if (*(int *)(**(int **)(_UNK_028f14c0 + 0x28f12dc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar13,0);
  return 0;
}



// ===== FAT.FarmBoardActivity$$IsOrderType RVA 0x28e1504 =====

uint FUN_028f1504(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x5ce,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5ce,0);
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
  return (uint)((*(uint *)(param_1 + 0x54) & 0xfffffffe) == 2);
}



// ===== FAT.FarmBoardActivity$$TryAddToken RVA 0x28e1568 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028f1568(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  
  pcVar2 = (char *)(_UNK_028f16c0 + 0x28f1588);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f16c4 + 0x28f15a0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c5,0);
  if (iVar1 == 0) {
    iVar1 = param_3;
    if (0 < param_3) {
      iVar1 = param_2;
    }
    if ((((0 < iVar1) && (*(int *)(param_1 + 0x44) != 0)) &&
        (*(int *)(*(int *)(param_1 + 0x44) + 0x40) == param_2)) &&
       (iVar1 = func_0x028f16cc(param_1,1,param_3), iVar1 != 0)) {
      piVar3 = *(int **)(_UNK_028f16c8 + 0x28f1648);
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar3;
      }
      if (param_4 != *(int *)(*(int *)(iVar1 + 0x5c) + 0x16c)) {
        iVar1 = FUN_028f1504(param_1);
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0xf8);
          uVar4 = *(undefined4 *)(param_1 + 0x58);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02af96e4(iVar1,uVar4,0);
        }
        func_0x019a4b9c(param_2,param_3,*(undefined4 *)(param_1 + 0x58),param_4,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.FarmBoardActivity$$ChangeItemToken RVA 0x28e16cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028f16cc(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_028f183c + 0x28f16ec);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f1840 + 0x28f1700));
    func_0x01384978(*(undefined4 *)(_UNK_028f1844 + 0x28f170c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c7,0);
  if (iVar1 == 0) {
    if ((param_3 < 1) || (param_2 == 0)) {
      if (param_2 != 0) {
        return 0;
      }
      iVar1 = FUN_028eb9f8(param_1,param_3,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = **(int **)(_UNK_028f184c + 0x28f1814);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - param_3;
      iVar1 = *(int *)(iVar1 + 0x74);
    }
    else {
      param_3 = *(int *)(param_1 + 0x58) + param_3;
      *(int *)(param_1 + 0x58) = param_3;
      if (*(int *)(param_1 + 0x5c) != 0) {
        func_0x02befcdc(*(int *)(param_1 + 0x5c),param_3,0);
      }
      iVar1 = *(int *)(**(int **)(_UNK_028f1848 + 0x28f17a0) + 0x74);
    }
    if (iVar1 == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_028f1850 + 0x28f17bc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar1,0);
    uVar2 = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0x5c7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0218ebd4(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.FarmBoardActivity$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x28e1854 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028f1854(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_028f1b88 + 0x28f1874);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f1b8c + 0x28f188c));
    func_0x01384978(*(undefined4 *)(_UNK_028f1b90 + 0x28f1898));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5cbd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5cbd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  iVar1 = FUN_028f1504(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_028f1b94 + 0x28f1924)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x268);
        goto LAB_028f196c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_028f1b94 + 0x28f1924),0x35);
LAB_028f196c:
  iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = func_0x02b449f8(param_1,0);
  iVar1 = func_0x01e4b758(param_2,uVar2,0);
  piVar8 = *(int **)(_UNK_028f1b98 + 0x28f19b0);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar8;
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01e4b23c(iVar4,param_2,0);
  if (iVar4 == 0) {
LAB_028f1a48:
    iVar4 = *(int *)(param_1 + 0xf8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02afa744(iVar4,param_2,param_4,0,0);
    uVar2 = 1;
  }
  else {
    iVar4 = *piVar8;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar8;
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar4 = func_0x01e4b2b0(iVar4,param_2,0);
    iVar5 = func_0x02b449f8(param_1,0);
    if (iVar4 != iVar5) goto LAB_028f1a48;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x01e4b23c(0,param_2,0);
    if (iVar4 != 0) {
      func_0x01384bf0();
      goto LAB_028f1abc;
    }
  }
  else {
    iVar4 = func_0x01e4b23c(iVar1,param_2,0);
    if (iVar4 != 0) {
LAB_028f1abc:
      uVar6 = 0;
      iVar4 = func_0x01e4b2b0(iVar1,param_2,0);
      iVar5 = func_0x02b449f8(param_1,0);
      if (iVar4 == iVar5) goto LAB_028f1b6c;
    }
  }
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar8;
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4b3b8(&uStack_2c,iVar4,param_2,0);
  uVar6 = func_0x02b449f8(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4ba84(iVar1,param_2,uVar6,uStack_28,uStack_2c,0);
  uVar6 = 1;
LAB_028f1b6c:
  iVar1 = func_0x01f2a218(0);
  if (iVar1 != 0) {
    uVar2 = uVar6;
  }
  return uVar2;
}



// ===== FAT.FarmBoardActivity$$GetCurDropConf RVA 0x28e1b9c =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028f1b9c(undefined4 param_1)

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
  
  iVar2 = func_0x0229f06c(0x5cc0,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5cc0,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02236970 + 0x2236890);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02236974 + 0x22368a4),param_1,0);
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
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02236978 + 0x2236960));
    return uVar9;
  }
  uVar9 = func_0x028f1c30(param_1);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x0229f06c(0x5cc2,0,0);
  if (iVar7 == 0) {
    pcVar8 = (char *)(_UNK_017e6e88 + 0x17e6e2c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017e6e8c + 0x17e6e40),0);
      func_0x01384978(*(undefined4 *)(_UNK_017e6e90 + 0x17e6e4c));
      *pcVar8 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017e6e94 + 0x17e6e60) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017e6e98 + 0x17e6e7c);
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
  iVar7 = func_0x0229f13c(0x5cc2,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_02236868 + 0x2236774);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0223686c + 0x2236788),iVar2,uVar9,0);
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
  uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02236870 + 0x2236858));
  return uVar9;
}



// ===== FAT.FarmBoardActivity$$_GetCurDropConfId RVA 0x28e1c30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028f1c30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_028f1cf0 + 0x28f1c48);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f1cf4 + 0x28f1c5c));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5cc1,0);
  if (iVar1 == 0) {
    iVar1 = FUN_028e3bdc(param_1);
    uVar2 = 0;
    if (iVar1 != 0) {
      func_0x03005740(*(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(param_1 + 0x4c),&uStack_14,
                      **(undefined4 **)(_UNK_028f1cf8 + 0x28f1cd4));
      uVar2 = uStack_14;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5cc1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217493c(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.FarmBoardActivity$$JumpTask RVA 0x28e1cfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028f1cfc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
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
  
  pcVar5 = (char *)(_UNK_028f1ee0 + 0x28f1d1c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f1ee4 + 0x28f1d30));
    func_0x01384978(*(undefined4 *)(_UNK_028f1ee8 + 0x28f1d3c));
    func_0x01384978(*(undefined4 *)(_UNK_028f1eec + 0x28f1d48));
    func_0x01384978(*(undefined4 *)(_UNK_028f1ef0 + 0x28f1d54));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5cc3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_028f1ef4 + 0x28f1db8));
    func_0x028f2088(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_028f1ef8 + 0x28f1de0);
    *(int *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    iVar3 = func_0x034aaa34(*puVar2);
    iVar6 = *(int *)(param_1 + 0x60);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar6 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01eea2b8(iVar3,uVar7,0);
    if (iVar3 == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x60);
      uVar9 = *(undefined4 *)(param_1 + 0x78);
      uVar10 = *(undefined4 *)(param_1 + 0x7c);
      uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_028f1efc + 0x28f1e94));
      func_0x0478dedc(uVar7,iVar1,**(undefined4 **)(_UNK_028f1f00 + 0x28f1eb8),0);
      uStack_24 = 0;
      uStack_28 = uVar7;
      func_0x02b57d14(param_1,uVar9,uVar10,uVar4);
    }
    else {
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x9c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01c74c1c(iVar3,0);
      if ((iVar3 == 0) && (iVar3 = *(int *)(param_1 + 0xac), iVar3 != 0)) {
        uVar7 = *(undefined4 *)(iVar1 + 0xc);
        pcVar5 = (char *)(_UNK_02bf8f24 + 0x2bf8d74);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02bf8f28 + 0x2bf8d88),uVar7,0);
          func_0x01384978(*(undefined4 *)(_UNK_02bf8f2c + 0x2bf8d94));
          func_0x01384978(*(undefined4 *)(_UNK_02bf8f30 + 0x2bf8da0));
          func_0x01384978(*(undefined4 *)(_UNK_02bf8f34 + 0x2bf8dac));
          *pcVar5 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x5cc6,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0x5cc6,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          uStack_28 = 0;
          func_0x0245494c(&uStack_50,0,uVar7,0);
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          uStack_28 = uStack_40;
          if (*(int *)(iVar1 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar3,0);
          func_0x01485238(&uStack_38,uVar7,0);
          iVar3 = *(int *)(iVar1 + 8);
          uVar7 = *(undefined4 *)(iVar1 + 0xc);
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 3;
          if (iVar1 == 0) {
            uVar4 = 2;
          }
          func_0x0245495c(iVar3,uVar7,&uStack_38,uVar4,0,0);
          return;
        }
        iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02bf8f38 + 0x2bf8e0c));
        piVar8 = *(int **)(_UNK_02bf8f3c + 0x2bf8e20);
        iVar6 = *piVar8;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x01384ab4();
          iVar6 = *piVar8;
        }
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xa04);
        piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bf8f40 + 0x2bf8e44),2);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar3 != 0) &&
           (iVar6 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar6 == 0)) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if (piVar8[3] == 0) {
          func_0x01384bf4();
        }
        piVar8[4] = iVar3;
        iVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02bf8f44 + 0x2bf8eb0),&stack0xffffffe4);
        if ((iVar3 != 0) &&
           (iVar6 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar6 == 0)) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if ((uint)piVar8[3] < 2) {
          func_0x01384bf4();
        }
        piVar8[5] = iVar3;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01ee858c(iVar1,uVar7,piVar8,0);
        return;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5cc3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02179a68(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.FarmBoardActivity$$<_CollectLegacyFarmland>b__135_0 RVA 0x28e1f04 =====

bool FUN_028f1f04(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(int *)(iVar1 + 8) == param_2;
}



// ===== FAT.FarmBoardActivity$$<>iFixBaseProxy_get_Valid RVA 0x28e1f30 =====

void FUN_028f1f30(int param_1)

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



// ===== FAT.FarmBoardActivity$$<>iFixBaseProxy_SetupFresh RVA 0x28e1f38 =====

void FUN_028f1f38(undefined4 param_1)

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



// ===== FAT.FarmBoardActivity$$<>iFixBaseProxy_ResEnumerate RVA 0x28e1f40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_028f1f40(int *param_1)

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



// ===== FAT.FarmBoardActivity$$<>iFixBaseProxy_WhenReset RVA 0x28e1f48 =====

void FUN_028f1f48(undefined4 param_1)

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



// ===== FAT.FarmBoardActivity$$<>iFixBaseProxy_WhenEnd RVA 0x28e1f50 =====

void FUN_028f1f50(undefined4 param_1)

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



// ===== FAT.FarmBoardActivity$$<>iFixBaseProxy_get_Visual RVA 0x28e1f58 =====

undefined4 FUN_028f1f58(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.FarmBoardActivity.<>c$$.cctor RVA 0x28e1f60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028f1f60(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_028f1fb8 + 0x28f1f70);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f1fbc + 0x28f1f84));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_028f1fc0 + 0x28f1f98);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x04874ed4(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.FarmBoardActivity.<>c$$.ctor RVA 0x28e1fc4 =====

void FUN_028f1fc4(void)

{
  return;
}



// ===== FAT.FarmBoardActivity.<>c$$<_TryPrepareNewFarmlandOutputItems>b__138_0 RVA 0x28e1fcc =====

undefined4 FUN_028f1fcc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}



// ===== FAT.FarmBoardActivity.<>c$$<_TryRandomNewAnimalOutputItem>b__170_0 RVA 0x28e1fd4 =====

undefined4 FUN_028f1fd4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}



// ===== FAT.FarmBoardActivity.<>c__DisplayClass124_0$$.ctor RVA 0x28e1fdc =====

void FUN_028f1fdc(void)

{
  return;
}



// ===== FAT.FarmBoardActivity.<>c__DisplayClass124_0$$<_CheckCanMoveBoard>b__0 RVA 0x28e1fe4 =====

void FUN_028f1fe4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  FUN_028e93dc(iVar2,uVar3,uVar4,uVar1,0);
  return;
}



// ===== FAT.FarmBoardActivity.<>c__DisplayClass129_0$$.ctor RVA 0x28e202c =====

void FUN_028f202c(void)

{
  return;
}



// ===== FAT.FarmBoardActivity.<>c__DisplayClass129_0$$<_ExecuteExtremeCase>b__0 RVA 0x28e2034 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028f2034(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [3];
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x02116ae0(param_2,0);
  if (iVar6 != 0) {
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_020df794 + 0x20df458);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_020df798 + 0x20df46c),param_2,1,0);
      func_0x01384978(*(undefined4 *)(_UNK_020df79c + 0x20df478));
      func_0x01384978(*(undefined4 *)(_UNK_020df7a0 + 0x20df484));
      func_0x01384978(*(undefined4 *)(_UNK_020df7a4 + 0x20df490));
      *pcVar9 = '\x01';
    }
    aiStack_24[0] = 0;
    iVar1 = func_0x0229f06c(0x5b73,0);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
        iVar1 = func_0x0210cd28(0,0);
        func_0x01384bf0();
      }
      else {
        iVar1 = func_0x0210cd28(param_2,0);
      }
      if (iVar1 == iVar6) {
        func_0x0210cd7c(&uStack_30,param_2,0);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_30,param_2,0);
        uVar2 = func_0x020db85c(iVar6,uStack_30,uStack_2c);
        iVar3 = func_0x03005894(*(undefined4 *)(iVar6 + 0x80),uVar2,aiStack_24,
                                **(undefined4 **)(_UNK_020df7a8 + 0x20df588));
        iVar1 = aiStack_24[0];
        if (iVar3 != 0) {
          if (aiStack_24[0] == 0) {
            func_0x01384bf0();
          }
          iVar3 = aiStack_24[0];
          if (*(int *)(iVar1 + 8) == param_2) {
            if (aiStack_24[0] == 0) {
              func_0x01384bf0();
            }
            *(undefined4 *)(iVar3 + 8) = 0;
            func_0x020df7b8(iVar6,1);
            if (param_2 == 0) {
              func_0x01384bf0();
              func_0x021177d0(0,0,0,0);
              func_0x01384bf0();
            }
            else {
              func_0x021177d0(param_2,0,0,0);
            }
            func_0x02117440(param_2,0,0,0);
            iVar1 = *(int *)(iVar6 + 100);
            if (iVar1 != 0) {
              (**(code **)(iVar1 + 0xc))
                        (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
            }
            iVar1 = *(int *)(iVar6 + 0x98);
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            uVar8 = 0;
            iVar3 = func_0x02116990(param_2,0);
            if ((iVar3 != 0) && (uVar8 = 0, *(char *)(iVar3 + 0x45) != '\0')) {
              uVar8 = 1;
            }
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x02144d84(iVar1,param_2,uVar8,0);
            iVar6 = func_0x020d83c8(iVar6);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x02148ef8(iVar6,param_2,0xe,0);
            return 1;
          }
        }
        if (param_2 == 0) {
          func_0x01384bf0();
        }
      }
      uStack_30 = func_0x0210e5f4(param_2,0);
      puVar7 = *(undefined4 **)(_UNK_020df7ac + 0x20df5dc);
      uVar4 = func_0x01384abc(*puVar7,&uStack_30);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      uStack_28 = func_0x0210e2d4(param_2,0);
      uVar5 = func_0x01384abc(*puVar7,&uStack_28);
      uVar4 = func_0x0244f690(**(undefined4 **)(_UNK_020df7b0 + 0x20df634),uVar4,uVar5,0);
      if (*(int *)(**(int **)(_UNK_020df7b4 + 0x20df648) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar4,0);
    }
    else {
      iVar1 = func_0x0229f13c(0x5b73,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0218d1f0(iVar1,iVar6,param_2,1,0);
    }
    return uVar2;
  }
  return 0;
}



// ===== FAT.FarmBoardActivity.<>c__DisplayClass191_0$$.ctor RVA 0x28e2088 =====

void FUN_028f2088(void)

{
  return;
}



// ===== FAT.FarmBoardActivity.<>c__DisplayClass191_0$$<JumpTask>b__0 RVA 0x28e2090 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028f2090(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int iVar6;
  undefined4 unaff_r5;
  int *piVar7;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar7 = *(int **)(param_1 + 8);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = (**(code **)(*piVar7 + 0x108))(piVar7,*(undefined4 *)(*piVar7 + 0x10c));
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01c74c1c(iVar1,0);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xac);
    if (iVar1 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      pcVar8 = (char *)(_UNK_02bf8f24 + 0x2bf8d74);
      uStack_18 = unaff_r4;
      uStack_14 = unaff_r5;
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02bf8f28 + 0x2bf8d88),uVar4,0);
        func_0x01384978(*(undefined4 *)(_UNK_02bf8f2c + 0x2bf8d94));
        func_0x01384978(*(undefined4 *)(_UNK_02bf8f30 + 0x2bf8da0));
        func_0x01384978(*(undefined4 *)(_UNK_02bf8f34 + 0x2bf8dac));
        *pcVar8 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x5cc6,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0x5cc6,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_1c = uStack_14;
        uStack_20 = uStack_18;
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,uVar4,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar2 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,uVar4,0);
        iVar6 = *(int *)(iVar2 + 8);
        uVar4 = *(undefined4 *)(iVar2 + 0xc);
        iVar1 = *(int *)(iVar2 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 3;
        if (iVar1 == 0) {
          uVar5 = 2;
        }
        func_0x0245495c(iVar6,uVar4,&uStack_38,uVar5,0,0);
        return;
      }
      iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_02bf8f38 + 0x2bf8e0c));
      piVar7 = *(int **)(_UNK_02bf8f3c + 0x2bf8e20);
      iVar6 = *piVar7;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x01384ab4();
        iVar6 = *piVar7;
      }
      uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xa04);
      piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bf8f40 + 0x2bf8e44),2);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar6 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar6 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if (piVar7[3] == 0) {
        func_0x01384bf4();
      }
      piVar7[4] = iVar1;
      uStack_1c = uVar4;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02bf8f44 + 0x2bf8eb0),&uStack_1c);
      if ((iVar1 != 0) &&
         (iVar6 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar6 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar7[3] < 2) {
        func_0x01384bf4();
      }
      piVar7[5] = iVar1;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar2,uVar5,piVar7,0);
      return;
    }
  }
  return;
}



// ===== FAT.FarmBoardActivity.<ResEnumerate>d__54$$.ctor RVA 0x28e2130 =====

void FUN_028f2130(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x04874ed4(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x048799ac(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.FarmBoardActivity.<ResEnumerate>d__54$$System.IDisposable.Dispose RVA 0x28e2158 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028f2158(int param_1)

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
    pcVar5 = &UNK_028f26f4 + _UNK_028f2794;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_028f2708 + _UNK_028f2798));
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
        if (piVar4[-1] == **(int **)(&UNK_028f2734 + _UNK_028f279c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x028f2780;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_028f2734 + _UNK_028f279c),0);
code_r0x028f2780:
                    /* WARNING: Could not recover jumptable at 0x028f2790. Too many branches */
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
  pcVar5 = &UNK_028f27b4 + _UNK_028f2854;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(&UNK_028f27c8 + _UNK_028f2858));
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
      if (piVar4[-1] == **(int **)(&UNK_028f27f4 + _UNK_028f285c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x028f2840;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_028f27f4 + _UNK_028f285c),0);
code_r0x028f2840:
                    /* WARNING: Could not recover jumptable at 0x028f2850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FarmBoardActivity.<ResEnumerate>d__54$$MoveNext RVA 0x28e219c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028f219c(int param_1)

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
  
  pcVar6 = (char *)(_UNK_028f26b8 + 0x28f21b4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f26bc + 0x28f21c8));
    func_0x01384978(*(undefined4 *)(_UNK_028f26c0 + 0x28f21d4));
    func_0x01384978(*(undefined4 *)(_UNK_028f26c4 + 0x28f21e0));
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
      iStack_28 = piVar7[0x24];
      uStack_30 = *(undefined8 *)(piVar7 + 0x22);
      piVar2 = (int *)func_0x02b64af8(&uStack_30,0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_028f26c8 + 0x28f2284)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_028f22ec;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_028f26c8 + 0x28f2284),0);
LAB_028f22ec:
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
        if (piVar5[-1] == **(int **)(_UNK_028f26d0 + 0x28f2328)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_028f2370;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_028f26d0 + 0x28f2328),0);
LAB_028f2370:
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
          if (piVar2[-1] == **(int **)(_UNK_028f26cc + 0x28f23a8)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
            goto LAB_028f2498;
          }
          uVar4 = uVar4 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_028f26cc + 0x28f23a8),0);
LAB_028f2498:
      (*(code *)*puVar3)(&uStack_38,piVar7,puVar3[1]);
      *(undefined4 *)(param_1 + 8) = 1;
      goto LAB_028f2604;
    }
    func_0x028f26e0(param_1);
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
        if (piVar2[-1] == **(int **)(_UNK_028f26d4 + 0x28f2450)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_028f24c8;
        }
        uVar4 = uVar4 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_028f26d4 + 0x28f2450),0);
LAB_028f24c8:
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
      if (piVar2[-1] == **(int **)(_UNK_028f26dc + 0x28f2504)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
        goto LAB_028f254c;
      }
      uVar4 = uVar4 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_028f26dc + 0x28f2504),0);
LAB_028f254c:
  iVar1 = (*(code *)*puVar3)(piVar7,puVar3[1]);
  if (iVar1 == 0) {
    func_0x028f27a0(param_1);
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
      if (piVar2[-1] == **(int **)(_UNK_028f26d8 + 0x28f2584)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
        goto LAB_028f25e0;
      }
      uVar4 = uVar4 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_028f26d8 + 0x28f2584),0);
LAB_028f25e0:
  (*(code *)*puVar3)(&uStack_38,piVar7,puVar3[1]);
  *(undefined4 *)(param_1 + 8) = 2;
LAB_028f2604:
  *(undefined4 *)(param_1 + 0xc) = uStack_38;
  *(undefined4 *)(param_1 + 0x10) = uStack_34;
  return 1;
}



// ===== FAT.FarmBoardActivity.<ResEnumerate>d__54$$<>m__Finally1 RVA 0x28e26e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028f26e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_028f2794 + 0x28f26f4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f2798 + 0x28f2708));
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
      if (piVar4[-1] == **(int **)(_UNK_028f279c + 0x28f2734)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_028f2780;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_028f279c + 0x28f2734),0);
LAB_028f2780:
                    /* WARNING: Could not recover jumptable at 0x028f2790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FarmBoardActivity.<ResEnumerate>d__54$$<>m__Finally2 RVA 0x28e27a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028f27a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_028f2854 + 0x28f27b4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f2858 + 0x28f27c8));
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
      if (piVar4[-1] == **(int **)(_UNK_028f285c + 0x28f27f4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_028f2840;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_028f285c + 0x28f27f4),0);
LAB_028f2840:
                    /* WARNING: Could not recover jumptable at 0x028f2850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.FarmBoardActivity.<ResEnumerate>d__54$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x28e2860 =====

void FUN_028f2860(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.FarmBoardActivity.<ResEnumerate>d__54$$System.Collections.IEnumerator.Reset RVA 0x28e2874 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028f2874(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r5;
  char *pcVar4;
  uint unaff_r8;
  int extraout_r12;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  func_0x01384988(*(undefined4 *)(iRam028f28b0 + 0x28f2884));
  uVar1 = func_0x01384be4();
  func_0x04827f0c(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam028f28b4 + 0x28f28a0));
  func_0x01384aa0(uVar1,uVar2);
  uVar7 = func_0x01384928();
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  bVar5 = false;
  bVar6 = (bool)in_CY;
  if ((bool)in_ZR) {
    bVar6 = 0xf400000 < unaff_r8 || unaff_r8 + 0xf0c00000 < (uint)(byte)in_CY;
    unaff_r5 = unaff_r8 - (!(bool)in_CY + 0xf400000);
    bVar5 = unaff_r5 == 0;
  }
  if (bVar5) {
    iVar3 = extraout_r12 - (!bVar6 + 0x2900);
  }
  pcVar4 = (char *)(_UNK_028f2914 + 0x28f28d0);
  uStack_18 = uVar1;
  iStack_14 = unaff_r5;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f2918 + 0x28f28e4),iVar3);
    *pcVar4 = '\x01';
  }
  uStack_20 = *(undefined4 *)((int)uVar7 + 0xc);
  uStack_1c = *(undefined4 *)((int)uVar7 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_028f291c + 0x28f2900),&uStack_20);
  return;
}



// ===== FAT.FarmBoardActivity.<ResEnumerate>d__54$$System.Collections.IEnumerator.get_Current RVA 0x28e28b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028f28b8(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_028f2914 + 0x28f28d0);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f2918 + 0x28f28e4));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_028f291c + 0x28f2900),&uStack_18);
  return;
}



// ===== FAT.FarmBoardActivity.<ResEnumerate>d__54$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x28e2920 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_028f2920(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_028f29c0 + 0x28f2934);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f29c4 + 0x28f2948));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x048799ac(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_028f29c8 + 0x28f298c));
    func_0x04874ed4(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x048799ac(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.FarmBoardActivity.<ResEnumerate>d__54$$System.Collections.IEnumerable.GetEnumerator RVA 0x28e29cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_028f2920(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_028f29c0 + 0x28f2934);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028f29c4 + 0x28f2948));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x048799ac(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_028f29c8 + 0x28f298c));
    func_0x04874ed4(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x048799ac(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}


