/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemSourceComponentBase$$get_randomOutputNextIdx RVA 0x21135bc =====

undefined4 FUN_021235bc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb358,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x2c);
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x5c75,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0x10);
    }
    iVar1 = func_0x0229f13c(0x5c75,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb358,0);
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
  uVar4 = func_0x0245498c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.Merge.ItemSourceComponentBase$$get_randomOutputSeed RVA 0x2113628 =====

undefined4 FUN_02123628(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb359,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x2c);
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x5c76,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0x14);
    }
    iVar1 = func_0x0229f13c(0x5c76,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb359,0);
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
  uVar4 = func_0x0245498c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.Merge.ItemSourceComponentBase$$SetRandomOutputParam RVA 0x2113828 =====

void FUN_02123828(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x0229f06c(0xb35b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 != 0) {
      iVar2 = func_0x0229f06c(0x384f,0,param_3,0);
      if (iVar2 == 0) {
        if (-1 < param_3) {
          *(undefined4 *)(iVar1 + 0x14) = param_2;
          func_0x02152ab4(iVar1);
        }
        *(int *)(iVar1 + 0x10) = param_3;
      }
      else {
        iVar2 = func_0x0229f13c(0x384f,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02179a68(iVar2,iVar1,param_2,param_3,0);
      }
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb35b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase$$ApplyPendingActions RVA 0x211421c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212421c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_02124418 + 0x2124234);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212441c + 0x2124248));
    func_0x01384978(*(undefined4 *)(_UNK_02124420 + 0x2124254));
    func_0x01384978(*(undefined4 *)(_UNK_02124424 + 0x2124260));
    func_0x01384978(*(undefined4 *)(_UNK_02124428 + 0x212426c));
    func_0x01384978(*(undefined4 *)(_UNK_0212442c + 0x2124278));
    *pcVar3 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x9e05,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_20,iVar1,**(undefined4 **)(_UNK_02124430 + 0x21242f4));
    puVar4 = *(undefined4 **)(_UNK_02124434 + 0x2124308);
    while (iVar1 = func_0x03f5f428(&uStack_20,*puVar4), iVar1 != 0) {
      if (iStack_14 != 0) {
        (**(code **)(iStack_14 + 0xc))
                  (*(undefined4 *)(iStack_14 + 0x20),*(undefined4 *)(iStack_14 + 0x14));
      }
    }
    func_0x03f5f424(&uStack_20,**(undefined4 **)(_UNK_02124438 + 0x2124344));
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar2) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar2,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e05,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase$$ConsumeNextOutput RVA 0x2114444 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02124444(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  int extraout_r3;
  char *pcVar10;
  longlong lVar11;
  
  pcVar10 = (char *)(_UNK_02124b14 + 0x2124464);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02124b18 + 0x2124478));
    func_0x01384978(*(undefined4 *)(_UNK_02124b1c + 0x2124484));
    func_0x01384978(*(undefined4 *)(_UNK_02124b20 + 0x2124490));
    func_0x01384978(*(undefined4 *)(_UNK_02124b24 + 0x212449c));
    func_0x01384978(*(undefined4 *)(_UNK_02124b28 + 0x21244a8));
    func_0x01384978(*(undefined4 *)(_UNK_02124b2c + 0x21244b4));
    func_0x01384978(*(undefined4 *)(_UNK_02124b30 + 0x21244c0));
    func_0x01384978(*(undefined4 *)(_UNK_02124b34 + 0x21244cc));
    func_0x01384978(*(undefined4 *)(_UNK_02124b38 + 0x21244d8));
    func_0x01384978(*(undefined4 *)(_UNK_02124b3c + 0x21244e4));
    func_0x01384978(*(undefined4 *)(_UNK_02124b40 + 0x21244f0));
    func_0x01384978(*(undefined4 *)(_UNK_02124b44 + 0x21244fc));
    func_0x01384978(*(undefined4 *)(_UNK_02124b48 + 0x2124508));
    func_0x01384978(*(undefined4 *)(_UNK_02124b4c + 0x2124514));
    func_0x01384978(*(undefined4 *)(_UNK_02124b50 + 0x2124520));
    func_0x01384978(*(undefined4 *)(_UNK_02124b54 + 0x212452c));
    func_0x01384978(*(undefined4 *)(_UNK_02124b58 + 0x2124538));
    func_0x01384978(*(undefined4 *)(_UNK_02124b5c + 0x2124544));
    func_0x01384978(*(undefined4 *)(_UNK_02124b60 + 0x2124550));
    func_0x01384978(*(undefined4 *)(_UNK_02124b64 + 0x212455c));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9de3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9de3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02285c28(iVar1,param_1,param_2,param_3,0);
    return iVar1;
  }
  func_0x02126e84(param_1);
  iVar1 = *(int *)(param_1 + 0x1c);
  *param_2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02124b68 + 0x21245dc));
    func_0x0244f5a0(iVar2,0);
    iVar3 = FUN_02123568(param_1);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = FUN_02116f08(iVar3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar2 + 8) = iVar3;
    iVar4 = FUN_02123568(param_1);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = FUN_0210e2d4(iVar4,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x02145a9c(iVar3,uVar5,0);
    iVar3 = *(int *)(iVar1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if ((int)uVar6 < *(int *)(iVar3 + 0xc)) {
      iVar3 = FUN_02123568(param_1);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar5 = FUN_0210e2d4(iVar3,0);
      puVar9 = *(undefined4 **)(_UNK_02124b6c + 0x21246b8);
      *(undefined4 *)(iVar2 + 0xc) = uVar5;
      uVar5 = func_0x01384be4(*puVar9);
      func_0x024500b4(uVar5,iVar2,**(undefined4 **)(_UNK_02124b70 + 0x21246dc),0);
      func_0x02135a28(param_1,uVar5,param_3);
      uVar5 = 1;
      goto LAB_0212480c;
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02124b78 + 0x2124714));
    func_0x0244f5a0(iVar2,0);
    iVar3 = FUN_02123568(param_1);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = FUN_02116f08(iVar3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    *(int *)(iVar2 + 8) = iVar3;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x02145774(iVar3,uVar5,0);
    iVar3 = *(int *)(iVar1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if ((int)uVar6 < *(int *)(iVar3 + 0xc)) {
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
      iVar3 = FUN_02123568(param_1);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      FUN_0210e2d4(iVar3,0);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02124b7c + 0x21247d4));
      func_0x024500b4(uVar5,iVar2,**(undefined4 **)(_UNK_02124b80 + 0x21247f0),0);
      func_0x02135a28(param_1,uVar5,param_3);
      uVar5 = 2;
LAB_0212480c:
      iVar1 = *(int *)(iVar1 + 0x14);
      *param_2 = uVar5;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = **(undefined4 **)(_UNK_02124b74 + 0x2124830);
      if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(iVar1 + 0xc))) {
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar6) {
          func_0x02457d5c();
        }
        return *(int *)(iVar1 + uVar6 * 4 + 0x10);
      }
      func_0x02457d6c(*(undefined4 *)(iRam0364ca44 + 0x364ca10));
      uVar7 = func_0x02457d58();
      uVar8 = func_0x02457d6c(*(undefined4 *)(iRam0364ca48 + 0x364ca24));
      func_0x047901e8(uVar7,uVar8,0);
      func_0x02457d90(uVar7,uVar5);
      lVar11 = func_0x02457d94();
      uVar6 = (uint)((ulonglong)lVar11 >> 0x20);
      pcVar10 = (char *)(iRam0364cb28 + 0x364ca68);
      if (*pcVar10 == '\0') {
        func_0x02457d54(*(undefined4 *)(iRam0364cb2c + 0x364ca80));
        *pcVar10 = '\x01';
      }
      if ((-1 < lVar11) && ((int)uVar6 < *(int *)((int)lVar11 + 0xc))) {
        func_0x03031db0(extraout_r2,**(undefined4 **)(iRam0364cb30 + 0x364cab0),
                        *(undefined4 *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x80));
        iVar1 = *(int *)((int)lVar11 + 8);
        if (iVar1 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar6) {
          func_0x02457d5c();
        }
        iVar1 = iVar1 + uVar6 * 4;
        *(undefined4 *)(iVar1 + 0x10) = extraout_r2;
        return iVar1;
      }
      func_0x02457d6c(*(undefined4 *)(iRam0364cb34 + 0x364caf4));
      uVar5 = func_0x02457d58();
      uVar7 = func_0x02457d6c(*(undefined4 *)(iRam0364cb38 + 0x364cb08));
      func_0x047901e8(uVar5,uVar7,0);
      func_0x02457d90(uVar5,extraout_r3);
      func_0x02457d94();
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    if ((*(int *)(param_1 + 0x30) == 0) ||
       (iVar1 = func_0x0215345c(*(int *)(param_1 + 0x30),0), iVar1 == 0)) {
      if ((*(int *)(param_1 + 0x2c) == 0) ||
         (iVar1 = func_0x0215345c(*(int *)(param_1 + 0x2c),0), iVar1 == 0)) {
        iVar1 = *(int *)(param_1 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03d59a74(iVar1,**(undefined4 **)(_UNK_02124ba8 + 0x2124a5c));
        if (iVar1 < 1) {
          return 0;
        }
        iVar1 = *(int *)(param_1 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x03d59a84(iVar1,**(undefined4 **)(_UNK_02124bac + 0x2124a88));
        uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_02124bb0 + 0x2124aa0));
        func_0x03a07058(uVar7,param_1,**(undefined4 **)(_UNK_02124bb4 + 0x2124abc),0);
        iVar1 = func_0x02fbeea0(uVar5,uVar7,0,**(undefined4 **)(_UNK_02124bb8 + 0x2124ad8));
        puVar9 = *(undefined4 **)(_UNK_02124bbc + 0x2124af4);
        *param_2 = 6;
        uVar5 = func_0x01384be4(*puVar9);
        puVar9 = *(undefined4 **)(_UNK_02124bc0 + 0x2124b0c);
        goto LAB_0212496c;
      }
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02124b9c + 0x21249c4));
      func_0x0244f5a0(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      puVar9 = *(undefined4 **)(_UNK_02124ba0 + 0x21249f0);
      *param_2 = 5;
      uVar5 = *puVar9;
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x2c);
      *(int *)(iVar2 + 0xc) = param_1;
      uVar5 = func_0x01384be4(uVar5);
      puVar9 = *(undefined4 **)(_UNK_02124ba4 + 0x2124a14);
    }
    else {
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02124b90 + 0x21248b0));
      func_0x0244f5a0(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      puVar9 = *(undefined4 **)(_UNK_02124b94 + 0x21248dc);
      *param_2 = 4;
      uVar5 = *puVar9;
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x30);
      *(int *)(iVar2 + 0xc) = param_1;
      uVar5 = func_0x01384be4(uVar5);
      puVar9 = *(undefined4 **)(_UNK_02124b98 + 0x2124900);
    }
    func_0x024500b4(uVar5,iVar2,*puVar9,0);
    func_0x02135a28(param_1,uVar5,param_3);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
      func_0x01458344(uVar5,uRam0000000c);
      iVar1 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x18) = extraout_r1_00;
      uVar5 = extraout_r1_00;
      if (iVar1 == 0) {
        func_0x01384bf0();
        iVar1 = 0;
      }
    }
    else {
      func_0x01458344(uVar5,*(undefined4 *)(iVar1 + 0xc));
      *(undefined4 *)(param_1 + 0x18) = extraout_r1;
      uVar5 = extraout_r1;
    }
    iVar1 = func_0x03259410(iVar1,uVar5,**(undefined4 **)(_UNK_02124b84 + 0x212493c));
    puVar9 = *(undefined4 **)(_UNK_02124b88 + 0x2124958);
    *param_2 = 3;
    uVar5 = func_0x01384be4(*puVar9);
    puVar9 = *(undefined4 **)(_UNK_02124b8c + 0x2124970);
LAB_0212496c:
    func_0x024500b4(uVar5,param_1,*puVar9,0);
    func_0x02135a28(param_1,uVar5,param_3);
  }
  return iVar1;
}



// ===== FAT.Merge.ItemSourceComponentBase$$OnPostAttach RVA 0x21162e0 =====

/* WARNING: Possible PIC construction at 0x02135cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02135cf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021262e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_r4;
  int unaff_r5;
  char *pcVar8;
  undefined4 unaff_r6;
  undefined4 uVar9;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [4];
  
  pcVar8 = (char *)(_UNK_02126554 + 0x21262f4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02126558 + 0x2126308));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb362,0);
  if (iVar1 == 0) {
    func_0x02127894(param_1);
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = FUN_0210e2d4(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    piVar10 = *(int **)(_UNK_0212655c + 0x21263ac);
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x128);
          goto LAB_021263f4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0xd);
LAB_021263f4:
    iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
    param_1[7] = iVar1;
    param_1[8] = 0;
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = FUN_0210e2d4(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x118);
          goto LAB_021264a4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0xb);
LAB_021264a4:
    iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
    if (iVar1 != 0) {
      piVar2 = (int *)func_0x021566f4(0);
      uVar9 = *(undefined4 *)(iVar1 + 0x10);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x120);
            goto LAB_02126530;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0xc);
LAB_02126530:
      iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
      param_1[8] = iVar1;
    }
    pcVar8 = (char *)(_UNK_02136170 + 0x2135bfc);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02136174 + 0x2135c10));
      func_0x01384978(*(undefined4 *)(_UNK_02136178 + 0x2135c1c));
      func_0x01384978(*(undefined4 *)(_UNK_0213617c + 0x2135c28));
      func_0x01384978(*(undefined4 *)(_UNK_02136180 + 0x2135c34));
      func_0x01384978(*(undefined4 *)(_UNK_02136184 + 0x2135c40));
      func_0x01384978(*(undefined4 *)(_UNK_02136188 + 0x2135c4c));
      func_0x01384978(*(undefined4 *)(_UNK_0213618c + 0x2135c58));
      func_0x01384978(*(undefined4 *)(_UNK_02136190 + 0x2135c64));
      func_0x01384978(*(undefined4 *)(_UNK_02136194 + 0x2135c70));
      func_0x01384978(*(undefined4 *)(_UNK_02136198 + 0x2135c7c));
      func_0x01384978(*(undefined4 *)(_UNK_0213619c + 0x2135c88));
      func_0x01384978(*(undefined4 *)(_UNK_021361a0 + 0x2135c94));
      *pcVar8 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    aiStack_28[0] = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    iVar1 = func_0x0229f06c(0xb363,0);
    if (iVar1 == 0) {
      iVar1 = param_1[4];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_021361a4 + 0x2135d18));
      (**(code **)(*param_1 + 0x140))(param_1,param_1[4],*(undefined4 *)(*param_1 + 0x144));
      uVar9 = func_0x02450044(param_1,0);
      uVar7 = **(undefined4 **)(_UNK_021361ac + 0x2135d60);
      if (*(int *)(**(int **)(_UNK_021361a8 + 0x2135d54) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar7 = func_0x0244ff60(uVar7,0);
      iVar1 = func_0x02450a48(uVar9,uVar7,0);
      if (iVar1 != 0) {
        iVar1 = FUN_02123568(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_02116f08(iVar1,0);
        iVar4 = FUN_02123568(param_1);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar9 = FUN_0210e2d4(iVar4,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02142c70(iVar1,uVar9,2,0);
        param_1[0xc] = iVar1;
      }
      piVar2 = *(int **)(_UNK_021361b0 + 0x2135e14);
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar2;
      }
      iVar1 = **(int **)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_50,iVar1,aiStack_28,**(undefined4 **)(_UNK_021361b4 + 0x2135e54));
      uStack_2c = uStack_4c;
      uStack_30 = uStack_50;
      (**(code **)(*param_1 + 0x160))(param_1,aiStack_28[0],*(undefined4 *)(*param_1 + 0x164));
      iVar1 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_021361b8 + 0x2135ea8));
        func_0x02143214(iVar4,**(undefined4 **)(_UNK_021361bc + 0x2135ebc),0);
        iVar1 = aiStack_28[0];
        param_1[0xb] = iVar4;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02143384(iVar4,iVar1,0);
      }
      func_0x028c98a0(&uStack_30,0);
      (**(code **)(*param_1 + 0x148))(param_1,param_1[5],*(undefined4 *)(*param_1 + 0x14c));
      iVar1 = param_1[10];
      param_1[6] = 0;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar11 = *(undefined4 **)(_UNK_021361c0 + 0x2135f3c);
      func_0x0328fe1c(&uStack_50,iVar1,*puVar11);
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      iStack_34 = iStack_44;
      puVar3 = *(undefined4 **)(_UNK_021361c4 + 0x2135f58);
      while (iVar4 = func_0x03f5f428(&uStack_40,*puVar3), iVar1 = iStack_34, iVar4 != 0) {
        if (iStack_34 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      func_0x03f5f424(&uStack_40,**(undefined4 **)(_UNK_021361c8 + 0x2135f8c));
      iVar1 = param_1[10];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_50,iVar1,*puVar11);
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      iStack_34 = iStack_44;
      while (iVar1 = func_0x03f5f428(&uStack_40,*puVar3), iVar1 != 0) {
        func_0x021361e0(param_1,iStack_34);
      }
      func_0x03f5f424(&uStack_40,**(undefined4 **)(_UNK_021361d4 + 0x2135fec));
      return;
    }
    iVar1 = func_0x0229f13c(0xb363,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2135cf8;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_50;
  }
  else {
    iVar1 = func_0x0229f13c(0xb362,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int **)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar4 = *(int *)(iVar1 + 0x10);
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
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase$$ClearPendingActions RVA 0x2116e84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02126e84(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02126f40 + 0x2126e98);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02126f44 + 0x2126eac));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9de4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9de4,0);
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
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    (*(code *)&SUB_0484e5ec)(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    return;
  }
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase$$.ctor RVA 0x211710c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212710c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02127260 + 0x2127120);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02127264 + 0x2127134));
    func_0x01384978(*(undefined4 *)(_UNK_02127268 + 0x2127140));
    func_0x01384978(*(undefined4 *)(_UNK_0212726c + 0x212714c));
    func_0x01384978(*(undefined4 *)(_UNK_02127270 + 0x2127158));
    func_0x01384978(*(undefined4 *)(_UNK_02127274 + 0x2127164));
    func_0x01384978(*(undefined4 *)(_UNK_02127278 + 0x2127170));
    func_0x01384978(*(undefined4 *)(_UNK_0212727c + 0x212717c));
    func_0x01384978(*(undefined4 *)(_UNK_02127280 + 0x2127188));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02127284 + 0x212719c));
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_02127288 + 0x21271b0));
  puVar2 = *(undefined4 **)(_UNK_0212728c + 0x21271c4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_02127290 + 0x21271dc));
  puVar2 = *(undefined4 **)(_UNK_02127294 + 0x21271f0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_02127298 + 0x2127208));
  puVar2 = *(undefined4 **)(_UNK_0212729c + 0x212721c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_021272a0 + 0x2127234));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase$$OnInitRandomList RVA 0x21172b0 =====

void FUN_021272b0(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb364,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb364,0);
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



// ===== FAT.Merge.ItemSourceComponentBase$$ResetOutputs RVA 0x2121294 =====

/* WARNING: Removing unreachable block (ram,0x021315b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02131294(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
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
  
  pcVar8 = (char *)(_UNK_0213168c + 0x21312b0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02131690 + 0x21312c4));
    func_0x01384978(*(undefined4 *)(_UNK_02131694 + 0x21312d0));
    func_0x01384978(*(undefined4 *)(_UNK_02131698 + 0x21312dc));
    func_0x01384978(*(undefined4 *)(_UNK_0213169c + 0x21312e8));
    func_0x01384978(*(undefined4 *)(_UNK_021316a0 + 0x21312f4));
    func_0x01384978(*(undefined4 *)(_UNK_021316a4 + 0x2131300));
    func_0x01384978(*(undefined4 *)(_UNK_021316a8 + 0x213130c));
    func_0x01384978(*(undefined4 *)(_UNK_021316ac + 0x2131318));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9df7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9df7,0);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_021316b0 + 0x2131388));
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_021316b4 + 0x21313ac)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_021313f4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_021316b4 + 0x21313ac),0);
LAB_021313f4:
  piVar5 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
  piVar11 = *(int **)(_UNK_021316b8 + 0x2131418);
  puVar2 = *(undefined4 **)(_UNK_021316bc + 0x2131420);
  do {
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02131478;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar5,*piVar11,0);
LAB_02131478:
    iVar1 = (*(code *)*puVar3)(piVar5,puVar3[1]);
    if (iVar1 == 0) break;
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_021316c0 + 0x21314ac)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_021314f4;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_021316c0 + 0x21314ac),0);
LAB_021314f4:
    (*(code *)*puVar3)(&uStack_30,piVar5,puVar3[1]);
    uVar7 = uStack_2c;
    uVar10 = uStack_30;
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d7c(iVar1,uVar10,uVar7,*puVar2);
  } while( true );
  if (piVar5 != (int *)0x0) {
    iVar1 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_021316c4 + 0x2131554)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
          goto LAB_0213159c;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_021316c4 + 0x2131554),0);
LAB_0213159c:
    (*(code *)*puVar2)(piVar5,puVar2[1]);
  }
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase$$get_orderedOutputNextIdx RVA 0x2125230 =====

undefined4 FUN_02135230(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb3f9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3f9,0);
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
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.Merge.ItemSourceComponentBase$$FillPossibleOutput RVA 0x2125284 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02135284(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_021359a4 + 0x21352a0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021359a8 + 0x21352b4));
    func_0x01384978(*(undefined4 *)(_UNK_021359ac + 0x21352c0));
    func_0x01384978(*(undefined4 *)(_UNK_021359b0 + 0x21352cc));
    func_0x01384978(*(undefined4 *)(_UNK_021359b4 + 0x21352d8));
    func_0x01384978(*(undefined4 *)(_UNK_021359b8 + 0x21352e4));
    func_0x01384978(*(undefined4 *)(_UNK_021359bc + 0x21352f0));
    func_0x01384978(*(undefined4 *)(_UNK_021359c0 + 0x21352fc));
    func_0x01384978(*(undefined4 *)(_UNK_021359c4 + 0x2135308));
    func_0x01384978(*(undefined4 *)(_UNK_021359c8 + 0x2135314));
    func_0x01384978(*(undefined4 *)(_UNK_021359cc + 0x2135320));
    func_0x01384978(*(undefined4 *)(_UNK_021359d0 + 0x213532c));
    func_0x01384978(*(undefined4 *)(_UNK_021359d4 + 0x2135338));
    func_0x01384978(*(undefined4 *)(_UNK_021359d8 + 0x2135344));
    func_0x01384978(*(undefined4 *)(_UNK_021359dc + 0x2135350));
    func_0x01384978(*(undefined4 *)(_UNK_021359e0 + 0x213535c));
    *pcVar6 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  iVar1 = func_0x0229f06c(0x149f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x149f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0217bafc(iVar1,param_1,param_2,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
LAB_02135464:
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      iVar2 = FUN_02123568(param_1);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_02116f08(iVar2,0);
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02145774(iVar2,uVar4,0);
      iVar3 = *(int *)(iVar1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (iVar2 < *(int *)(iVar3 + 0xc)) goto LAB_021354d8;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) < 1) {
      if (*(int *)(param_1 + 0x30) != 0) {
        iVar1 = func_0x02151f5c(*(int *)(param_1 + 0x30),param_2,0);
        return iVar1;
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = func_0x02151f5c(*(int *)(param_1 + 0x2c),param_2,0);
      }
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_58,iVar2,**(undefined4 **)(_UNK_021359f0 + 0x2135658));
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      iStack_2c = iStack_4c;
      puVar9 = *(undefined4 **)(_UNK_021359f4 + 0x2135674);
      puVar8 = *(undefined4 **)(_UNK_021359f8 + 0x213567c);
      while (iVar3 = func_0x03f5f428(&uStack_38,*puVar9), iVar2 = iStack_2c, iVar3 != 0) {
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        uVar4 = *(undefined4 *)(iVar2 + 8);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x03259a6c(param_2,uVar4,*puVar8);
        if ((iVar3 != 0) && (iVar1 = iVar1 + 1, param_2 != 0)) {
          iVar3 = *(int *)(param_2 + 8);
          uVar4 = *(undefined4 *)(iVar2 + 8);
          iVar2 = **(int **)(_UNK_021359fc + 0x21356dc);
          uVar7 = *(uint *)(param_2 + 0xc);
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (uVar7 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar7 + 1;
            *(undefined4 *)(iVar3 + uVar7 * 4 + 0x10) = uVar4;
          }
          else {
            func_0x0325970c(param_2,uVar4,
                            *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02135a00 + 0x213575c));
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03d59a84(iVar2,**(undefined4 **)(_UNK_02135a08 + 0x2135780));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02454904(&uStack_58,iVar2,**(undefined4 **)(_UNK_02135a0c + 0x21357ac));
      uStack_48 = uStack_58;
      uStack_44 = uStack_54;
      uStack_40 = uStack_50;
      iStack_3c = iStack_4c;
      puVar9 = *(undefined4 **)(_UNK_02135a10 + 0x21357cc);
      while (iVar3 = func_0x03f99cf0(&uStack_48,*puVar9), iVar2 = iStack_3c, iVar3 != 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x03259a6c(param_2,iVar2,*puVar8);
        if ((iVar3 != 0) && (iVar1 = iVar1 + 1, param_2 != 0)) {
          iVar3 = *(int *)(param_2 + 8);
          uVar7 = *(uint *)(param_2 + 0xc);
          piVar5 = *(int **)(_UNK_02135a18 + 0x2135830);
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          iVar10 = *piVar5;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (uVar7 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar7 + 1;
            *(int *)(iVar3 + uVar7 * 4 + 0x10) = iVar2;
          }
          else {
            func_0x0325970c(param_2,iVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x03f99cec(&uStack_48,**(undefined4 **)(_UNK_02135a1c + 0x2135884));
      return iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01458344(uVar4,*(undefined4 *)(iVar1 + 0xc));
    *(undefined4 *)(param_1 + 0x18) = extraout_r1;
    if (param_2 == 0) {
      return 1;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x03259410(iVar1,extraout_r1,**(undefined4 **)(_UNK_021359ec + 0x2135580));
  }
  else {
    iVar2 = FUN_02123568(param_1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_02116f08(iVar2,0);
    iVar3 = FUN_02123568(param_1);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = FUN_0210e2d4(iVar3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02145a9c(iVar2,uVar4,0);
    iVar3 = *(int *)(iVar1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar3 + 0xc) <= iVar2) goto LAB_02135464;
LAB_021354d8:
    if (param_2 == 0) {
      return 1;
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0364c9b8(iVar1,iVar2,**(undefined4 **)(_UNK_021359e4 + 0x2135504));
  }
  iVar1 = *(int *)(param_2 + 8);
  uVar7 = *(uint *)(param_2 + 0xc);
  piVar5 = *(int **)(_UNK_021359e8 + 0x21355ac);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  iVar2 = *piVar5;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (uVar7 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(param_2 + 0xc) = uVar7 + 1;
    *(undefined4 *)(iVar1 + uVar7 * 4 + 0x10) = uVar4;
  }
  else {
    func_0x0325970c(param_2,uVar4,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
  }
  return 1;
}



// ===== FAT.Merge.ItemSourceComponentBase$$ExecuteOrDefer RVA 0x2125a28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02135a28(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  
  pcVar4 = (char *)(_UNK_02135b5c + 0x2135a48);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02135b60 + 0x2135a5c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9de8,0);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02135b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_2 + 0xc))
                  (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x14));
        return;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar1 + 8);
      uVar5 = *(uint *)(iVar1 + 0xc);
      piVar2 = *(int **)(_UNK_02135b64 + 0x2135af0);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar6 = *piVar2;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar5) {
        uVar5 = *(uint *)(iVar1 + 0xc);
        func_0x0328f754(iVar1,uVar5 + 1,
                        *(undefined4 *)
                         (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38)
                                           + 0x10) + 0x60) + 0x3c));
        iVar3 = *(int *)(iVar1 + 8);
        *(uint *)(iVar1 + 0xc) = uVar5 + 1;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar5) {
          func_0x01384bf4();
        }
        *(int *)(iVar3 + uVar5 * 4 + 0x10) = param_2;
        return;
      }
      *(uint *)(iVar1 + 0xc) = uVar5 + 1;
      *(int *)(iVar3 + uVar5 * 4 + 0x10) = param_2;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9de8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175630(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase.<>c__DisplayClass24_0$$.ctor RVA 0x2125b68 =====

void FUN_02135b68(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase.<>c__DisplayClass24_1$$.ctor RVA 0x2125b70 =====

void FUN_02135b70(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase.<>c__DisplayClass24_2$$.ctor RVA 0x2125b78 =====

void FUN_02135b78(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase.<>c__DisplayClass24_3$$.ctor RVA 0x2125b80 =====

void FUN_02135b80(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase$$SetOrderedOutputParam RVA 0x2125b88 =====

void FUN_02135b88(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb383,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb383,0);
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
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase$$_InitOutput RVA 0x2125be4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02135be4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_02136170 + 0x2135bfc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02136174 + 0x2135c10));
    func_0x01384978(*(undefined4 *)(_UNK_02136178 + 0x2135c1c));
    func_0x01384978(*(undefined4 *)(_UNK_0213617c + 0x2135c28));
    func_0x01384978(*(undefined4 *)(_UNK_02136180 + 0x2135c34));
    func_0x01384978(*(undefined4 *)(_UNK_02136184 + 0x2135c40));
    func_0x01384978(*(undefined4 *)(_UNK_02136188 + 0x2135c4c));
    func_0x01384978(*(undefined4 *)(_UNK_0213618c + 0x2135c58));
    func_0x01384978(*(undefined4 *)(_UNK_02136190 + 0x2135c64));
    func_0x01384978(*(undefined4 *)(_UNK_02136194 + 0x2135c70));
    func_0x01384978(*(undefined4 *)(_UNK_02136198 + 0x2135c7c));
    func_0x01384978(*(undefined4 *)(_UNK_0213619c + 0x2135c88));
    func_0x01384978(*(undefined4 *)(_UNK_021361a0 + 0x2135c94));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  iVar1 = func_0x0229f06c(0xb363,0);
  if (iVar1 == 0) {
    iVar1 = param_1[4];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_021361a4 + 0x2135d18));
    (**(code **)(*param_1 + 0x140))(param_1,param_1[4],*(undefined4 *)(*param_1 + 0x144));
    uVar2 = func_0x02450044(param_1,0);
    uVar6 = **(undefined4 **)(_UNK_021361ac + 0x2135d60);
    if (*(int *)(**(int **)(_UNK_021361a8 + 0x2135d54) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar6 = func_0x0244ff60(uVar6,0);
    iVar1 = func_0x02450a48(uVar2,uVar6,0);
    if (iVar1 != 0) {
      iVar1 = FUN_02123568(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02116f08(iVar1,0);
      iVar3 = FUN_02123568(param_1);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_0210e2d4(iVar3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02142c70(iVar1,uVar2,2,0);
      param_1[0xc] = iVar1;
    }
    piVar5 = *(int **)(_UNK_021361b0 + 0x2135e14);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_50,iVar1,&iStack_28,**(undefined4 **)(_UNK_021361b4 + 0x2135e54));
    uStack_2c = uStack_4c;
    uStack_30 = uStack_50;
    (**(code **)(*param_1 + 0x160))(param_1,iStack_28,*(undefined4 *)(*param_1 + 0x164));
    iVar1 = iStack_28;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_021361b8 + 0x2135ea8));
      func_0x02143214(iVar3,**(undefined4 **)(_UNK_021361bc + 0x2135ebc),0);
      iVar1 = iStack_28;
      param_1[0xb] = iVar3;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02143384(iVar3,iVar1,0);
    }
    func_0x028c98a0(&uStack_30,0);
    (**(code **)(*param_1 + 0x148))(param_1,param_1[5],*(undefined4 *)(*param_1 + 0x14c));
    iVar1 = param_1[10];
    param_1[6] = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar8 = *(undefined4 **)(_UNK_021361c0 + 0x2135f3c);
    func_0x0328fe1c(&uStack_50,iVar1,*puVar8);
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    iStack_34 = iStack_44;
    puVar7 = *(undefined4 **)(_UNK_021361c4 + 0x2135f58);
    while (iVar3 = func_0x03f5f428(&uStack_40,*puVar7), iVar1 = iStack_34, iVar3 != 0) {
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
    }
    func_0x03f5f424(&uStack_40,**(undefined4 **)(_UNK_021361c8 + 0x2135f8c));
    iVar1 = param_1[10];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_50,iVar1,*puVar8);
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    iStack_34 = iStack_44;
    while (iVar1 = func_0x03f5f428(&uStack_40,*puVar7), iVar1 != 0) {
      func_0x021361e0(param_1,iStack_34);
    }
    func_0x03f5f424(&uStack_40,**(undefined4 **)(_UNK_021361d4 + 0x2135fec));
  }
  else {
    iVar1 = func_0x0229f13c(0xb363,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase$$_RefreshRareItemNextOutputIdx RVA 0x21261e0 =====

/* WARNING: Removing unreachable block (ram,0x02136518) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021361e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_02136874 + 0x21361fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02136878 + 0x2136210));
    func_0x01384978(*(undefined4 *)(_UNK_0213687c + 0x213621c));
    func_0x01384978(*(undefined4 *)(_UNK_02136880 + 0x2136228));
    func_0x01384978(*(undefined4 *)(_UNK_02136884 + 0x2136234));
    func_0x01384978(*(undefined4 *)(_UNK_02136888 + 0x2136240));
    func_0x01384978(*(undefined4 *)(_UNK_0213688c + 0x213624c));
    func_0x01384978(*(undefined4 *)(_UNK_02136890 + 0x2136258));
    func_0x01384978(*(undefined4 *)(_UNK_02136894 + 0x2136264));
    func_0x01384978(*(undefined4 *)(_UNK_02136898 + 0x2136270));
    func_0x01384978(*(undefined4 *)(_UNK_0213689c + 0x213627c));
    func_0x01384978(*(undefined4 *)(_UNK_021368a0 + 0x2136288));
    func_0x01384978(*(undefined4 *)(_UNK_021368a4 + 0x2136294));
    func_0x01384978(*(undefined4 *)(_UNK_021368a8 + 0x21362a0));
    func_0x01384978(*(undefined4 *)(_UNK_021368ac + 0x21362ac));
    func_0x01384978(*(undefined4 *)(_UNK_021368b0 + 0x21362b8));
    func_0x01384978(*(undefined4 *)(_UNK_021368b4 + 0x21362c4));
    func_0x01384978(*(undefined4 *)(_UNK_021368b8 + 0x21362d0));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  iVar1 = func_0x0229f06c(0xb366,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_2 + 0xc) < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0x10);
      iVar2 = func_0x01457ae8(*(int *)(param_2 + 0xc),iVar1);
      iVar1 = (iVar2 + 1) * iVar1;
    }
    piVar6 = *(int **)(_UNK_021368bc + 0x213637c);
    iVar2 = *piVar6;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar6;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar2,&iStack_28,**(undefined4 **)(_UNK_021368c0 + 0x21363bc));
    if (0 < *(int *)(param_2 + 0x10)) {
      iVar2 = 0;
      piVar6 = *(int **)(_UNK_021368c4 + 0x21363e4);
      do {
        iVar3 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar3 + 8);
        uVar9 = *(uint *)(iVar3 + 0xc);
        iVar10 = *piVar6;
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (uVar9 < *(uint *)(iVar8 + 0xc)) {
          *(uint *)(iVar3 + 0xc) = uVar9 + 1;
          *(int *)(iVar8 + uVar9 * 4 + 0x10) = iVar1 + iVar2;
        }
        else {
          func_0x0325970c(iVar3,iVar1 + iVar2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_2 + 0x10));
    }
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_50,iVar1,**(undefined4 **)(_UNK_021368c8 + 0x213647c));
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    iStack_34 = iStack_44;
    puVar5 = *(undefined4 **)(_UNK_021368cc + 0x21364a8);
    puVar11 = *(undefined4 **)(_UNK_021368d0 + 0x21364b0);
    while (iVar3 = func_0x03f5f428(&uStack_40,*puVar5), iVar2 = iStack_28, iVar1 = iStack_34,
          iVar3 != 0) {
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0325aeb0(iVar2,uVar7,*puVar11);
    }
    func_0x03f5f424(&uStack_40,**(undefined4 **)(_UNK_021368d4 + 0x2136508));
    iVar1 = iStack_28;
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    iVar2 = iStack_28;
    if (*(int *)(iVar1 + 0xc) < 1) {
      piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_021368d8 + 0x2136610),2);
      iVar1 = FUN_02123568(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_50 = FUN_0210e5f4(iVar1,0);
      puVar5 = *(undefined4 **)(_UNK_021368dc + 0x213664c);
      iVar1 = func_0x01384abc(*puVar5,&uStack_50);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if (piVar6[3] == 0) {
        func_0x01384bf4();
      }
      piVar6[4] = iVar1;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_54 = *(undefined4 *)(param_2 + 8);
      iVar1 = func_0x01384abc(*puVar5,&uStack_54);
      if ((iVar1 != 0) &&
         (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if ((uint)piVar6[3] < 2) {
        func_0x01384bf4();
      }
      piVar6[5] = iVar1;
      if (*(int *)(**(int **)(_UNK_021368e0 + 0x213671c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(**(undefined4 **)(_UNK_021368e4 + 0x2136738),piVar6,0);
    }
    else {
      piVar6 = *(int **)(_UNK_021368ec + 0x2136548);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4(iVar1);
        iVar1 = *piVar6;
      }
      iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
      if (iVar3 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4(iVar1);
          iVar1 = *piVar6;
        }
        uVar7 = **(undefined4 **)(iVar1 + 0x5c);
        iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_021368f0 + 0x21365a0));
        func_0x03a07058(iVar3,uVar7,**(undefined4 **)(_UNK_021368f4 + 0x21365b4),0);
        *(int *)(*(int *)(*piVar6 + 0x5c) + 4) = iVar3;
      }
      uVar7 = func_0x02fbeea0(iVar2,iVar3,0,**(undefined4 **)(_UNK_021368f8 + 0x21365dc));
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_2 + 0xc) = uVar7;
    }
    func_0x028c98a0(&uStack_30,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xb366,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase$$OnInitOrderedOutput RVA 0x21268fc =====

void FUN_021368fc(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb365,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb365,0);
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



// ===== FAT.Merge.ItemSourceComponentBase$$OnInitDynamicWeight RVA 0x2126950 =====

void FUN_02136950(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb3fa,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb3fa,0);
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



// ===== FAT.Merge.ItemSourceComponentBase$$OnInitSafeRareItem RVA 0x21269a4 =====

void FUN_021369a4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb3fb,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb3fb,0);
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



// ===== FAT.Merge.ItemSourceComponentBase$$<ConsumeNextOutput>b__24_2 RVA 0x21269f8 =====

void FUN_021369f8(int param_1)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase$$<ConsumeNextOutput>b__24_5 RVA 0x2126a14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02136a14(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 auStack_1c [3];
  
  pcVar6 = (char *)(_UNK_02136a74 + 0x2136a2c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02136a78 + 0x2136a40));
    *pcVar6 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar3 = **(int **)(_UNK_02136a7c + 0x2136a68);
  uVar1 = func_0x03d5a510(iVar5,param_2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x84));
  if ((int)uVar1 < 0) {
    auStack_1c[0] = param_2;
    uVar2 = func_0x02457d60(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38),
                            auStack_1c);
    uVar4 = 0;
    func_0x0484cbf8(uVar2,0);
  }
  else {
    iVar5 = *(int *)(iVar5 + 0xc);
    if (iVar5 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar1) {
      func_0x02457d5c();
    }
    uVar4 = *(undefined4 *)(iVar5 + uVar1 * 0x10 + 0x1c);
  }
  return uVar4;
}



// ===== FAT.Merge.ItemSourceComponentBase$$<ConsumeNextOutput>b__24_6 RVA 0x2126a80 =====

void FUN_02136a80(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x02153600(*(int *)(param_1 + 0x2c),0);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x02153600(*(int *)(param_1 + 0x30),0);
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase$$<>iFixBaseProxy_OnPostAttach RVA 0x2126ac0 =====

void thunk_FUN_02127894(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x279,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x279,0);
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



// ===== FAT.Merge.ItemSourceComponentBase.OutputDynamicWeight$$.ctor RVA 0x2126ac4 =====

void FUN_02136ac4(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase.OutputSafeRareItem$$.ctor RVA 0x2126acc =====

void FUN_02136acc(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase.OutputRandomListItem$$.ctor RVA 0x2126ad4 =====

void FUN_02136ad4(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase.<>c$$.cctor RVA 0x2126adc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02136adc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_02136b34 + 0x2136aec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02136b38 + 0x2136b00));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_02136b3c + 0x2136b14);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase.<>c$$.ctor RVA 0x2126b40 =====

void FUN_02136b40(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase.<>c$$<_RefreshRareItemNextOutputIdx>b__28_0 RVA 0x2126b48 =====

undefined4 FUN_02136b48(void)

{
  return 1;
}



// ===== FAT.Merge.ItemSourceComponentBase.<>c__DisplayClass24_0$$<ConsumeNextOutput>b__0 RVA 0x2126b50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02136b50(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 unaff_r5;
  undefined4 uVar8;
  int iVar9;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar7 = *(int *)(param_1 + 8);
  uVar8 = *(undefined4 *)(param_1 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_02145da8 + 0x2145bfc);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02145dac + 0x2145c10),uVar8,0);
    func_0x01384978(*(undefined4 *)(_UNK_02145db0 + 0x2145c1c));
    func_0x01384978(*(undefined4 *)(_UNK_02145db4 + 0x2145c28));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9de7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9de7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar7,0);
    func_0x01485238(&uStack_38,uVar8,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar7 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar7 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar8,&uStack_38,uVar6,0,0);
    iVar7 = func_0x0245498c(&uStack_38,0,0);
    return iVar7;
  }
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02145db8 + 0x2145ca0)) {
        puVar3 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xe0);
        goto LAB_02145ce8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02145db8 + 0x2145ca0),4);
LAB_02145ce8:
  piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
  if (piVar2 == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = func_0x02f7c01c(piVar2,uVar8,0,**(undefined4 **)(_UNK_02145dbc + 0x2145d18));
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_02145dc0 + 0x2145d38)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
          goto LAB_02145d88;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02145dc0 + 0x2145d38),1);
LAB_02145d88:
    (*(code *)*puVar3)(piVar2,uVar8,iVar7 + 1,puVar3[1]);
  }
  return iVar7;
}



// ===== FAT.Merge.ItemSourceComponentBase.<>c__DisplayClass24_1$$<ConsumeNextOutput>b__1 RVA 0x2126b7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02136b7c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 unaff_r5;
  undefined4 uVar8;
  int iVar9;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar7 = *(int *)(param_1 + 8);
  uVar8 = *(undefined4 *)(param_1 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_02145a80 + 0x21458d4);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02145a84 + 0x21458e8),uVar8,0);
    func_0x01384978(*(undefined4 *)(_UNK_02145a88 + 0x21458f4));
    func_0x01384978(*(undefined4 *)(_UNK_02145a8c + 0x2145900));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9deb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9deb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar7,0);
    func_0x01485238(&uStack_38,uVar8,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar7 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar7 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar8,&uStack_38,uVar6,0,0);
    iVar7 = func_0x0245498c(&uStack_38,0,0);
    return iVar7;
  }
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02145a90 + 0x2145978)) {
        puVar3 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xe8);
        goto LAB_021459c0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02145a90 + 0x2145978),5);
LAB_021459c0:
  piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
  if (piVar2 == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = func_0x02f7c01c(piVar2,uVar8,0,**(undefined4 **)(_UNK_02145a94 + 0x21459f0));
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_02145a98 + 0x2145a10)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
          goto LAB_02145a60;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02145a98 + 0x2145a10),1);
LAB_02145a60:
    (*(code *)*puVar3)(piVar2,uVar8,iVar7 + 1,puVar3[1]);
  }
  return iVar7;
}



// ===== FAT.Merge.ItemSourceComponentBase.<>c__DisplayClass24_2$$<ConsumeNextOutput>b__3 RVA 0x2126ba8 =====

void FUN_02136ba8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0215359c(iVar1,0);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + 1;
  return;
}



// ===== FAT.Merge.ItemSourceComponentBase.<>c__DisplayClass24_3$$<ConsumeNextOutput>b__4 RVA 0x2126bec =====

void FUN_02136bec(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0215359c(iVar1,0);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x30);
  if (iVar1 != 0) {
    func_0x02153600(iVar1,0);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + 1;
  return;
}


