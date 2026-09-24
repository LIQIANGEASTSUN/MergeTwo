/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.RewardMan$$BeginReward RVA 0x1cccbac =====

void FUN_01cdcbac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x8f,0);
  if (iVar1 == 0) {
    func_0x01ce4de4(&uStack_2c,param_1,param_2,param_3);
    uVar2 = func_0x01ce0048(param_1,uStack_2c,uStack_28,param_4,param_5,param_6,param_7,param_8,
                            param_9,param_10);
    func_0x01ce0290(param_1,uVar2);
  }
  else {
    iVar1 = func_0x0229f13c(0x8f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02176f64(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    param_10,0);
  }
  return;
}



// ===== FAT.RewardMan$$CalcDynamicReward RVA 0x1ccdaf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cddaf8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar5 = (char *)(_UNK_01cdddd0 + 0x1cddb20);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cdddd4 + 0x1cddb38));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x88,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x88,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021763fc(&uStack_40,iVar2,param_2,param_3,param_4,param_5,param_6,param_7,0);
    goto LAB_01cddce0;
  }
  switch(param_7) {
  default:
    uVar4 = **(undefined4 **)(_UNK_01cdddec + 0x1cddbf0);
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_01cdddb4;
  case 1:
    fVar6 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(param_6,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = fVar8 / _UNK_01cdddc8;
    fVar7 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = (fVar6 / _UNK_01cdddc8) * fVar7;
    goto code_r0x01cddc84;
  case 2:
    fVar6 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(param_6,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = fVar8 / _UNK_01cdddc8;
    fVar7 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = (fVar6 / _UNK_01cdddc8) * fVar7;
    goto code_r0x01cddccc;
  case 3:
    param_6 = param_5;
    break;
  case 4:
    param_6 = param_5;
    goto code_r0x01cddcb8;
  case 5:
    break;
  case 6:
code_r0x01cddcb8:
    fVar7 = (float)VectorSignedToFloat(param_6,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = fVar7 / _UNK_01cdddc8;
    fVar8 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
code_r0x01cddccc:
    func_0x01ce6dac(&uStack_40,param_2,fVar7 * fVar8);
LAB_01cddce0:
    *param_1 = uStack_40;
    param_1[1] = uStack_3c;
    return;
  case 7:
    fVar7 = (float)VectorSignedToFloat(param_6,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    uVar4 = func_0x01ce6a78(param_2,(fVar7 / _UNK_01cdddc8) * fVar8);
    fVar7 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    pcVar5 = &UNK_01cddd34 + _UNK_01cddddc;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01cddd48 + _UNK_01cddde0));
      *pcVar5 = '\x01';
    }
    if (*(int *)(**(int **)(&UNK_01cddd60 + _UNK_01cddde4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    fVar7 = (float)func_0x02450728(fVar7 * 0.5);
    bVar1 = fVar7 == _UNK_01cdddcc;
    param_4 = (int)fVar7;
    puVar3 = *(undefined4 **)(&UNK_01cddd9c + _UNK_01cddde8);
    *param_1 = 0;
    param_1[1] = 0;
    uVar4 = *puVar3;
    if (bVar1) {
      param_4 = -0x80000000;
    }
    goto LAB_01cdddb4;
  }
  fVar7 = (float)VectorSignedToFloat(param_6,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = fVar7 / _UNK_01cdddc8;
  fVar8 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
code_r0x01cddc84:
  param_4 = func_0x01ce6a78(param_2,fVar7 * fVar8);
  puVar3 = *(undefined4 **)(&UNK_01cddca8 + _UNK_01cdddd8);
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = *puVar3;
LAB_01cdddb4:
  func_0x038fd264(param_1,param_3,param_4,uVar4);
  return;
}



// ===== FAT.RewardMan$$ReportCommit RVA 0x1cce664 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cde664(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_01cdee70 + 0x1cde67c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cdee74 + 0x1cde690));
    func_0x01384978(*(undefined4 *)(_UNK_01cdee78 + 0x1cde69c));
    func_0x01384978(*(undefined4 *)(_UNK_01cdee7c + 0x1cde6a8));
    func_0x01384978(*(undefined4 *)(_UNK_01cdee80 + 0x1cde6b4));
    func_0x01384978(*(undefined4 *)(_UNK_01cdee84 + 0x1cde6c0));
    func_0x01384978(*(undefined4 *)(_UNK_01cdee88 + 0x1cde6cc));
    func_0x01384978(*(undefined4 *)(_UNK_01cdee8c + 0x1cde6d8));
    func_0x01384978(*(undefined4 *)(_UNK_01cdee90 + 0x1cde6e4));
    func_0x01384978(*(undefined4 *)(_UNK_01cdee94 + 0x1cde6f0));
    func_0x01384978(*(undefined4 *)(_UNK_01cdee98 + 0x1cde6fc));
    func_0x01384978(*(undefined4 *)(_UNK_01cdee9c + 0x1cde708));
    func_0x01384978(*(undefined4 *)(_UNK_01cdeea0 + 0x1cde714));
    func_0x01384978(*(undefined4 *)(_UNK_01cdeea4 + 0x1cde720));
    func_0x01384978(*(undefined4 *)(_UNK_01cdeea8 + 0x1cde72c));
    func_0x01384978(*(undefined4 *)(_UNK_01cdeeac + 0x1cde738));
    func_0x01384978(*(undefined4 *)(_UNK_01cdeeb0 + 0x1cde744));
    func_0x01384978(*(undefined4 *)(_UNK_01cdeeb4 + 0x1cde750));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x977f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x977f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01cdeeb8 + 0x1cde7b4));
  func_0x02451a74(iVar1,**(undefined4 **)(_UNK_01cdeebc + 0x1cde7cc),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x024502a4(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    if (piVar2 != (int *)0x0) {
      func_0x02450064(piVar2,**(undefined4 **)(_UNK_01cdeec0 + 0x1cdecc0),0);
      goto LAB_01cdecec;
    }
    func_0x01384bf0();
    func_0x02450064(0,**(undefined4 **)(_UNK_01cdeec4 + 0x1cdece0),0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_48,iVar1,**(undefined4 **)(_UNK_01cdeecc + 0x1cde830));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar8 = *(undefined4 **)(_UNK_01cdeed0 + 0x1cde850);
    while (iVar3 = func_0x0145b12c(&uStack_38,*puVar8), iVar1 = iStack_2c, iVar3 != 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(iVar1 + 8);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450024(piVar2,uVar6,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450034(iVar3,0x3a,0);
      uVar6 = *(undefined4 *)(iVar1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450024(iVar3,uVar6,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02450034(iVar3,0x20,0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450064(piVar2,**(undefined4 **)(_UNK_01cdeed4 + 0x1cde90c),0);
      uVar6 = *(undefined4 *)(iVar1 + 0x14);
      if (*(int *)(**(int **)(_UNK_01cdeed8 + 0x1cde928) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar6 = func_0x023ebadc(uVar6,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450064(iVar3,uVar6,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02450034(iVar3,0x20,0);
      if (*(int *)(iVar1 + 0x20) != 0) {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x02450064(piVar2,**(undefined4 **)(_UNK_01cdeedc + 0x1cde9ac),0);
        uStack_48 = *(undefined4 *)(iVar1 + 0x20);
        uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_01cdeee0 + 0x1cde9cc),&uStack_48);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x02451548(iVar3,uVar6,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x02450034(iVar3,0x20,0);
      }
      iVar3 = *(int *)(iVar1 + 0x18);
      if (iVar3 != 0) {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x02450064(piVar2,**(undefined4 **)(_UNK_01cdeee4 + 0x1cdea3c),0);
        iVar3 = func_0x02139cf4(iVar3,0);
        if (iVar3 == 0) {
          uVar6 = 0xffffffff;
        }
        else {
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar6 = *(undefined4 *)(iVar3 + 8);
        }
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x02450024(iVar4,uVar6,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x02450034(iVar3,0x20,0);
      }
      if (*(char *)(iVar1 + 0x30) != '\0') {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x02450064(piVar2,**(undefined4 **)(_UNK_01cdeee8 + 0x1cdeadc),0);
      }
      if (*(char *)(iVar1 + 0x24) != '\0') {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x02450064(piVar2,**(undefined4 **)(_UNK_01cdeeec + 0x1cdeb0c),0);
      }
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      func_0x024502a4(piVar2,0);
      iVar3 = *(int *)(iVar1 + 0x38);
      iVar4 = **(int **)(_UNK_01cdeef0 + 0x1cdeb3c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02451a84(iVar3,iVar4,0);
      iVar7 = *(int *)(iVar1 + 0x38);
      if (0 < iVar3) {
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 8);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar3 = iVar3 + iVar4 + 1;
        iVar7 = func_0x024512e4(iVar7,iVar3,*(int *)(iVar7 + 8) - iVar3,0);
      }
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450034(piVar2,0x3e,0);
      uVar6 = *(undefined4 *)(iVar1 + 0x3c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450064(iVar3,uVar6,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450034(iVar3,0x40,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450064(iVar3,iVar7,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02450034(iVar3,0x23,0);
      uVar6 = *(undefined4 *)(iVar1 + 0x34);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02450024(iVar3,uVar6,0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      func_0x024502a4(piVar2,0);
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01cdeef8 + 0x1cdec94));
    if (piVar2 != (int *)0x0) goto LAB_01cdecec;
  }
  func_0x01384bf0();
LAB_01cdecec:
  uVar6 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
  if (*(int *)(**(int **)(_UNK_01cdeec8 + 0x1cded10) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2874(uVar6,0);
  return;
}



// ===== FAT.RewardMan$$PushContext RVA 0x1ccef00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cdef00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)(_UNK_01cdefc4 + 0x1cdef20);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cdefc8 + 0x1cdef34));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x54d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x54d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218da74(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = **(int **)(_UNK_01cdefcc + 0x1cdefb4);
  iVar6 = *(int *)(iVar1 + 8);
  uVar3 = *(uint *)(iVar1 + 0xc);
  if (iVar6 == 0) {
    func_0x02457d50();
  }
  if (uVar3 < *(uint *)(iVar6 + 0xc)) {
    iVar6 = iVar6 + uVar3 * 8;
    *(undefined4 *)(iVar6 + 0x10) = param_2;
    *(undefined4 *)(iVar6 + 0x14) = param_3;
    *(uint *)(iVar1 + 0xc) = uVar3 + 1;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    return;
  }
  iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x30);
  piVar4 = (int *)(iVar1 + 8);
  iVar2 = *piVar4;
  if (iVar2 == 0) {
    func_0x02457d50();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 4;
  }
  else {
    iVar2 = *piVar4;
    if (iVar2 == 0) {
      func_0x02457d50();
    }
    iVar2 = *(int *)(iVar2 + 0xc) << 1;
  }
  func_0x02ec9768(piVar4,iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x34));
  iVar6 = *(int *)(iVar1 + 8);
  uVar3 = *(uint *)(iVar1 + 0xc);
  if (iVar6 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar6 + 0xc) <= uVar3) {
    func_0x02457d5c();
  }
  iVar6 = iVar6 + uVar3 * 8;
  *(undefined4 *)(iVar6 + 0x10) = param_2;
  *(undefined4 *)(iVar6 + 0x14) = param_3;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  return;
}



// ===== FAT.RewardMan$$PopContext RVA 0x1ccefd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cdefd0(int param_1)

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
  undefined1 auStack_18 [8];
  
  pcVar3 = (char *)(_UNK_01cdf07c + 0x1cdefe8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cdf080 + 0x1cdeffc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x54e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x54e,0);
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
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x036890ec(auStack_18,iVar1,**(undefined4 **)(_UNK_01cdf084 + 0x1cdf06c));
  return;
}



// ===== FAT.RewardMan$$CommitReward RVA 0x1ccf088 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cdf088(int param_1,int *param_2)

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
  
  pcVar4 = (char *)(_UNK_01cdf248 + 0x1cdf0a0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cdf24c + 0x1cdf0b4));
    func_0x01384978(*(undefined4 *)(_UNK_01cdf250 + 0x1cdf0c0));
    func_0x01384978(*(undefined4 *)(_UNK_01cdf254 + 0x1cdf0cc));
    func_0x01384978(*(undefined4 *)(_UNK_01cdf258 + 0x1cdf0d8));
    func_0x01384978(*(undefined4 *)(_UNK_01cdf25c + 0x1cdf0e4));
    func_0x01384978(*(undefined4 *)(_UNK_01cdf260 + 0x1cdf0f0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x335,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x335,0);
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
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar5 = (**(code **)(*param_2 + 0xd8))(param_2,*(undefined4 *)(*param_2 + 0xdc));
  uVar5 = func_0x0244fb1c(**(undefined4 **)(_UNK_01cdf264 + 0x1cdf174),uVar5,0);
  if (*(int *)(**(int **)(_UNK_01cdf268 + 0x1cdf188) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0199d1cc(uVar5,0);
  if ((char)param_2[0xc] != '\0') {
    func_0x01cdf27c(param_1,param_2,0xffffffff);
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03290900(iVar1,param_2,**(undefined4 **)(_UNK_01cdf26c + 0x1cdf1e0));
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  if (*(int *)(**(int **)(_UNK_01cdf270 + 0x1cdf1fc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01cdf274 + 0x1cdf218));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.RewardMan$$_CommitReward RVA 0x1ccf27c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cdf27c(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uStack_50;
  int iStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  
  pcVar7 = (char *)(_UNK_01cdff24 + 0x1cdf29c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cdff28 + 0x1cdf2b0));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff2c + 0x1cdf2bc));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff30 + 0x1cdf2c8));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff34 + 0x1cdf2d4));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff38 + 0x1cdf2e0));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff3c + 0x1cdf2ec));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff40 + 0x1cdf2f8));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff44 + 0x1cdf304));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff48 + 0x1cdf310));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff4c + 0x1cdf31c));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff50 + 0x1cdf328));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff54 + 0x1cdf334));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff58 + 0x1cdf340));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff5c + 0x1cdf34c));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff60 + 0x1cdf358));
    *pcVar7 = '\x01';
  }
  piStack_24 = (int *)0x0;
  piStack_28 = (int *)0x0;
  piStack_2c = (int *)0x0;
  piStack_30 = (int *)0x0;
  piStack_34 = (int *)0x0;
  piStack_38 = (int *)0x0;
  piStack_3c = (int *)0x0;
  piStack_40 = (int *)0x0;
  piStack_44 = (int *)0x0;
  piStack_48 = (int *)0x0;
  iVar1 = func_0x0229f06c(0x336,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x336,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(param_2 + 0x24) != '\0') {
    return;
  }
  iVar1 = *(int *)(param_2 + 8);
  iVar8 = *(int *)(param_2 + 0xc);
  if (0x7fffffff < param_3) {
    param_3 = *(uint *)(param_2 + 0x10);
  }
  if (iVar8 < 0x20001) {
    if (iVar8 < 0x1001) {
      if (iVar8 == 0x200) {
        iVar8 = FUN_01c24918(0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar8 + 0x44);
        iVar8 = FUN_01c24918(0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar8 + 0x44);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar4 = FUN_01c9e4e4(iVar8,iVar1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        FUN_01c9fcb8(iVar2,uVar4,param_3,0);
        return;
      }
      if (iVar8 == 0x1000) goto LAB_01cdf530;
    }
    else {
      if (iVar8 == 0x4000) {
LAB_01cdf530:
        iVar8 = FUN_01c24918(0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar8 + 0xe8);
        uVar4 = *(undefined4 *)(param_2 + 0x14);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x01cedf08(iVar8,iVar1,param_3,uVar4,0);
        return;
      }
      if (iVar8 == 0x8000) {
        return;
      }
      if (iVar8 == 0x20000) {
        iVar1 = FUN_01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x88);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7c0ec(iVar1,param_2,0);
        return;
      }
    }
  }
  else if (iVar8 < 0x400001) {
    if (iVar8 == 0x200000) {
      iVar8 = FUN_01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x38);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = FUN_01cd2b20(iVar8,iVar1);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x14);
      if (0x7b < iVar8) {
        if (0xab < iVar8) {
          if (iVar8 == 0xb3) {
            iVar1 = FUN_01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0xd8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x02b3c518(iVar1,0x84,&piStack_40,0);
            piVar6 = piStack_40;
            if (iVar1 == 0) {
              return;
            }
            if (piStack_40 == (int *)0x0) {
              func_0x01384bf0();
              piVar5 = (int *)0x0;
            }
            else {
              piVar5 = *(int **)(_UNK_01cdff90 + 0x1cdfb70);
              iVar1 = *piVar5;
              if (((uint)*(byte *)(*piStack_40 + 0xb8) < (uint)*(byte *)(iVar1 + 0xb8)) ||
                 (*(int *)(*(int *)(*piStack_40 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) !=
                  iVar1)) {
                func_0x01384bf0();
                iVar1 = *piVar5;
              }
              iVar8 = *piVar6;
              piVar5 = (int *)0x0;
              if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(iVar8 + 0xb8)) &&
                 (piVar5 = piVar6,
                 *(int *)(*(int *)(iVar8 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
              {
                piVar5 = (int *)0x0;
              }
            }
            func_0x0287cf44(piVar5,param_3,0);
            return;
          }
          if (iVar8 != 0xbe) {
            if (iVar8 != 0xc4) {
              return;
            }
            iVar8 = FUN_01c24918(0);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar8 = *(int *)(iVar8 + 0xd8);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar8 = func_0x02b3c518(iVar8,0x89,&piStack_48,0);
            piVar6 = piStack_48;
            if (iVar8 == 0) {
              return;
            }
            if (piStack_48 == (int *)0x0) {
              func_0x01384bf0();
              piVar5 = (int *)0x0;
            }
            else {
              piVar5 = *(int **)(_UNK_01cdff78 + 0x1cdf744);
              iVar8 = *piVar5;
              if (((uint)*(byte *)(*piStack_48 + 0xb8) < (uint)*(byte *)(iVar8 + 0xb8)) ||
                 (*(int *)(*(int *)(*piStack_48 + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4) !=
                  iVar8)) {
                func_0x01384bf0();
                iVar8 = *piVar5;
              }
              iVar2 = *piVar6;
              piVar5 = (int *)0x0;
              if (((uint)*(byte *)(iVar8 + 0xb8) <= (uint)*(byte *)(iVar2 + 0xb8)) &&
                 (piVar5 = piVar6,
                 *(int *)(*(int *)(iVar2 + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4) != iVar8))
              {
                piVar5 = (int *)0x0;
              }
            }
            func_0x029c0bd8(piVar5,iVar1,param_3,0);
            return;
          }
          iVar8 = FUN_01c24918(0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar8 + 0xd8);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = func_0x02b3c518(iVar8,0x86,&piStack_38,0);
          piVar6 = (int *)0x0;
          if (iVar8 != 0) {
            piVar6 = piStack_38;
          }
          if (iVar8 == 0 || piVar6 == (int *)0x0) {
            return;
          }
          uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff8c + 0x1cdfc2c) + 0xb8);
          if (*(byte *)(*piVar6 + 0xb8) < uVar3) {
            return;
          }
          if (*(int *)(*(int *)(*piVar6 + 100) + uVar3 * 4 + -4) !=
              **(int **)(_UNK_01cdff8c + 0x1cdfc2c)) {
            return;
          }
          func_0x02644a40(piVar6,iVar1,param_3,0);
          return;
        }
        if (iVar8 == 0x9e) {
          iVar8 = FUN_01c24918(0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar8 + 0xd8);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = func_0x02b3c518(iVar8,0x73,&piStack_30,0);
          piVar6 = (int *)0x0;
          if (iVar8 != 0) {
            piVar6 = piStack_30;
          }
          if (iVar8 == 0 || piVar6 == (int *)0x0) {
            return;
          }
          uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff84 + 0x1cdfe04) + 0xb8);
          if (*(byte *)(*piVar6 + 0xb8) < uVar3) {
            return;
          }
          if (*(int *)(*(int *)(*piVar6 + 100) + uVar3 * 4 + -4) !=
              **(int **)(_UNK_01cdff84 + 0x1cdfe04)) {
            return;
          }
          func_0x028b17e0(piVar6,iVar1,param_3,0);
          return;
        }
        if (iVar8 != 0xa4) {
          if (iVar8 != 0xab) {
            return;
          }
          iVar8 = FUN_01c24918(0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar8 + 0xd8);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = func_0x02b3c518(iVar8,0x7d,&piStack_3c,0);
          piVar6 = piStack_3c;
          if (iVar8 == 0) {
            return;
          }
          if (piStack_3c == (int *)0x0) {
            func_0x01384bf0();
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = *(int **)(_UNK_01cdff74 + 0x1cdf948);
            iVar8 = *piVar5;
            if (((uint)*(byte *)(*piStack_3c + 0xb8) < (uint)*(byte *)(iVar8 + 0xb8)) ||
               (*(int *)(*(int *)(*piStack_3c + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4) !=
                iVar8)) {
              func_0x01384bf0();
              iVar8 = *piVar5;
            }
            iVar2 = *piVar6;
            piVar5 = (int *)0x0;
            if (((uint)*(byte *)(iVar8 + 0xb8) <= (uint)*(byte *)(iVar2 + 0xb8)) &&
               (piVar5 = piVar6,
               *(int *)(*(int *)(iVar2 + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4) != iVar8)) {
              piVar5 = (int *)0x0;
            }
          }
          func_0x02a45b58(piVar5,iVar1,param_3,0);
          return;
        }
        iVar8 = FUN_01c24918(0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar8 + 0xd8);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x02b3c518(iVar8,0x77,&piStack_34,0);
        piVar6 = (int *)0x0;
        if (iVar8 != 0) {
          piVar6 = piStack_34;
        }
        if (iVar8 == 0 || piVar6 == (int *)0x0) {
          return;
        }
        uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff88 + 0x1cdfe98) + 0xb8);
        if (*(byte *)(*piVar6 + 0xb8) < uVar3) {
          return;
        }
        if (*(int *)(*(int *)(*piVar6 + 100) + uVar3 * 4 + -4) !=
            **(int **)(_UNK_01cdff88 + 0x1cdfe98)) {
          return;
        }
        func_0x02937c5c(piVar6,iVar1,param_3,0);
        return;
      }
      if (0x40 < iVar8) {
        if (iVar8 == 0x59) {
          iVar1 = FUN_01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xd8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02b3c518(iVar1,0x44,&piStack_28,0);
          piVar6 = (int *)0x0;
          if (iVar1 != 0) {
            piVar6 = piStack_28;
          }
          if (iVar1 == 0 || piVar6 == (int *)0x0) {
            return;
          }
          uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff80 + 0x1cdfcc0) + 0xb8);
          if (*(byte *)(*piVar6 + 0xb8) < uVar3) {
            return;
          }
          if (*(int *)(*(int *)(*piVar6 + 100) + uVar3 * 4 + -4) !=
              **(int **)(_UNK_01cdff80 + 0x1cdfcc0)) {
            return;
          }
          func_0x028913a4(piVar6,param_3,0);
          return;
        }
        if (iVar8 != 0x6b) {
          if (iVar8 != 0x7b) {
            return;
          }
          iVar1 = FUN_01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xd8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02b3c518(iVar1,0x5b,&piStack_2c,0);
          piVar6 = (int *)0x0;
          if (iVar1 != 0) {
            piVar6 = piStack_2c;
          }
          if (iVar1 == 0 || piVar6 == (int *)0x0) {
            return;
          }
          uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff70 + 0x1cdf89c) + 0xb8);
          if (*(byte *)(*piVar6 + 0xb8) < uVar3) {
            return;
          }
          if (*(int *)(*(int *)(*piVar6 + 100) + uVar3 * 4 + -4) !=
              **(int **)(_UNK_01cdff70 + 0x1cdf89c)) {
            return;
          }
          func_0x025bb17c(piVar6,param_3,0);
          return;
        }
        iVar8 = FUN_01c24918(0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        piVar6 = *(int **)(iVar8 + 0xd8);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x02b3c518(piVar6,0x54,&piStack_44,0);
        if (iVar8 != 0) {
          piVar6 = piStack_44;
        }
        if (iVar8 == 0 || piVar6 == (int *)0x0) {
          return;
        }
        uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff94 + 0x1cdfd50) + 0xb8);
        if (*(byte *)(*piVar6 + 0xb8) < uVar3) {
          return;
        }
        if (*(int *)(*(int *)(*piVar6 + 100) + uVar3 * 4 + -4) !=
            **(int **)(_UNK_01cdff94 + 0x1cdfd50)) {
          return;
        }
        uVar4 = *(undefined4 *)(param_2 + 0x14);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x027efeac(piVar6,iVar1,param_3,uVar4,0);
        return;
      }
      if (iVar8 != 0x1c) {
        if (iVar8 != 0x40) {
          return;
        }
        iVar1 = FUN_01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xd8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02b3c518(iVar1,0x2f,&piStack_24,0);
        if (iVar1 == 0) {
          return;
        }
        if (piStack_24 != (int *)0x0) {
          uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff64 + 0x1cdfa18) + 0xb8);
          if ((uVar3 <= *(byte *)(*piStack_24 + 0xb8)) &&
             (*(int *)(*(int *)(*piStack_24 + 100) + uVar3 * 4 + -4) ==
              **(int **)(_UNK_01cdff64 + 0x1cdfa18))) {
            func_0x0299f590(piStack_24,param_3,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_01cdff68 + 0x1cdfa58) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01cdff6c + 0x1cdfa74));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x028c3fd8(iVar1,0);
        return;
      }
      iVar8 = FUN_01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xb0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x14);
      if (iVar8 == 0) {
        return;
      }
      iVar8 = *(int *)(iVar8 + 0x3c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iStack_4c = 0;
      uStack_50 = 0;
      func_0x03507d38(&uStack_50,*(undefined4 *)(iVar8 + 0x58),
                      **(undefined4 **)(_UNK_01cdff7c + 0x1cdfae8));
      iVar8 = iStack_4c;
      if ((char)uStack_50 == '\0') {
        return;
      }
      goto LAB_01cdf634;
    }
    if (iVar8 == 0x400000) goto LAB_01cdf530;
  }
  else {
    if (iVar8 == 0x1000000 || iVar8 == 0x2000000) goto LAB_01cdf530;
    if (iVar8 == 0x4000000) {
      iVar1 = FUN_01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x88);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7bd04(iVar1,param_2,0);
      return;
    }
  }
  if (iVar1 == 0x1e) {
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dd4914(iVar1,param_3,1,0);
    return;
  }
  if (iVar1 == 0x1f) {
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x90);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc1620(iVar1,param_3,0);
    return;
  }
  iVar8 = FUN_01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xb0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar8 + 0x14) == 0) {
    return;
  }
  iVar8 = FUN_01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xb0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x14);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x3c);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x58);
LAB_01cdf634:
  if (iVar1 == iVar8) {
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xb0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02378018(iVar1,param_3,0);
  }
  return;
}



// ===== FAT.RewardMan$$CommitSplitReward RVA 0x1ccff98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cdff98(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uStack_50;
  int iStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x387,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x387,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x0217b868(iVar1,param_1,param_2,param_3);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(param_2 + 0x30) == '\0') {
    return;
  }
  if (*(int *)(param_2 + 0x10) <= (int)param_3) {
    return;
  }
  *(uint *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - param_3;
  pcVar7 = (char *)(_UNK_01cdff24 + 0x1cdf29c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cdff28 + 0x1cdf2b0));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff2c + 0x1cdf2bc));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff30 + 0x1cdf2c8));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff34 + 0x1cdf2d4));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff38 + 0x1cdf2e0));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff3c + 0x1cdf2ec));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff40 + 0x1cdf2f8));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff44 + 0x1cdf304));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff48 + 0x1cdf310));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff4c + 0x1cdf31c));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff50 + 0x1cdf328));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff54 + 0x1cdf334));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff58 + 0x1cdf340));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff5c + 0x1cdf34c));
    func_0x01384978(*(undefined4 *)(_UNK_01cdff60 + 0x1cdf358));
    *pcVar7 = '\x01';
  }
  piStack_24 = (int *)0x0;
  piStack_28 = (int *)0x0;
  piStack_2c = (int *)0x0;
  piStack_30 = (int *)0x0;
  piStack_34 = (int *)0x0;
  piStack_38 = (int *)0x0;
  piStack_3c = (int *)0x0;
  piStack_40 = (int *)0x0;
  piStack_44 = (int *)0x0;
  piStack_48 = (int *)0x0;
  iVar1 = func_0x0229f06c(0x336,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x336,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(param_2 + 0x24) != '\0') {
    return;
  }
  iVar1 = *(int *)(param_2 + 8);
  iVar8 = *(int *)(param_2 + 0xc);
  if (0x7fffffff < param_3) {
    param_3 = *(uint *)(param_2 + 0x10);
  }
  if (iVar8 < 0x20001) {
    if (iVar8 < 0x1001) {
      if (iVar8 == 0x200) {
        iVar8 = FUN_01c24918(0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar8 + 0x44);
        iVar8 = FUN_01c24918(0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar8 + 0x44);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar4 = FUN_01c9e4e4(iVar8,iVar1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        FUN_01c9fcb8(iVar2,uVar4,param_3,0);
        return;
      }
      if (iVar8 == 0x1000) goto LAB_01cdf530;
    }
    else {
      if (iVar8 == 0x4000) {
LAB_01cdf530:
        iVar8 = FUN_01c24918(0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar8 + 0xe8);
        uVar4 = *(undefined4 *)(param_2 + 0x14);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x01cedf08(iVar8,iVar1,param_3,uVar4,0);
        return;
      }
      if (iVar8 == 0x8000) {
        return;
      }
      if (iVar8 == 0x20000) {
        iVar1 = FUN_01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x88);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7c0ec(iVar1,param_2,0);
        return;
      }
    }
  }
  else if (iVar8 < 0x400001) {
    if (iVar8 == 0x200000) {
      iVar8 = FUN_01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x38);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = FUN_01cd2b20(iVar8,iVar1);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x14);
      if (0x7b < iVar8) {
        if (0xab < iVar8) {
          if (iVar8 == 0xb3) {
            iVar1 = FUN_01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0xd8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x02b3c518(iVar1,0x84,&piStack_40,0);
            piVar6 = piStack_40;
            if (iVar1 == 0) {
              return;
            }
            if (piStack_40 == (int *)0x0) {
              func_0x01384bf0();
              piVar5 = (int *)0x0;
            }
            else {
              piVar5 = *(int **)(_UNK_01cdff90 + 0x1cdfb70);
              iVar1 = *piVar5;
              if (((uint)*(byte *)(*piStack_40 + 0xb8) < (uint)*(byte *)(iVar1 + 0xb8)) ||
                 (*(int *)(*(int *)(*piStack_40 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) !=
                  iVar1)) {
                func_0x01384bf0();
                iVar1 = *piVar5;
              }
              iVar8 = *piVar6;
              piVar5 = (int *)0x0;
              if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(iVar8 + 0xb8)) &&
                 (piVar5 = piVar6,
                 *(int *)(*(int *)(iVar8 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
              {
                piVar5 = (int *)0x0;
              }
            }
            func_0x0287cf44(piVar5,param_3,0);
            return;
          }
          if (iVar8 != 0xbe) {
            if (iVar8 != 0xc4) {
              return;
            }
            iVar8 = FUN_01c24918(0);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar8 = *(int *)(iVar8 + 0xd8);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar8 = func_0x02b3c518(iVar8,0x89,&piStack_48,0);
            piVar6 = piStack_48;
            if (iVar8 == 0) {
              return;
            }
            if (piStack_48 == (int *)0x0) {
              func_0x01384bf0();
              piVar5 = (int *)0x0;
            }
            else {
              piVar5 = *(int **)(_UNK_01cdff78 + 0x1cdf744);
              iVar8 = *piVar5;
              if (((uint)*(byte *)(*piStack_48 + 0xb8) < (uint)*(byte *)(iVar8 + 0xb8)) ||
                 (*(int *)(*(int *)(*piStack_48 + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4) !=
                  iVar8)) {
                func_0x01384bf0();
                iVar8 = *piVar5;
              }
              iVar2 = *piVar6;
              piVar5 = (int *)0x0;
              if (((uint)*(byte *)(iVar8 + 0xb8) <= (uint)*(byte *)(iVar2 + 0xb8)) &&
                 (piVar5 = piVar6,
                 *(int *)(*(int *)(iVar2 + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4) != iVar8))
              {
                piVar5 = (int *)0x0;
              }
            }
            func_0x029c0bd8(piVar5,iVar1,param_3,0);
            return;
          }
          iVar8 = FUN_01c24918(0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar8 + 0xd8);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = func_0x02b3c518(iVar8,0x86,&piStack_38,0);
          piVar6 = (int *)0x0;
          if (iVar8 != 0) {
            piVar6 = piStack_38;
          }
          if (iVar8 == 0 || piVar6 == (int *)0x0) {
            return;
          }
          uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff8c + 0x1cdfc2c) + 0xb8);
          if (*(byte *)(*piVar6 + 0xb8) < uVar3) {
            return;
          }
          if (*(int *)(*(int *)(*piVar6 + 100) + uVar3 * 4 + -4) !=
              **(int **)(_UNK_01cdff8c + 0x1cdfc2c)) {
            return;
          }
          func_0x02644a40(piVar6,iVar1,param_3,0);
          return;
        }
        if (iVar8 == 0x9e) {
          iVar8 = FUN_01c24918(0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar8 + 0xd8);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = func_0x02b3c518(iVar8,0x73,&piStack_30,0);
          piVar6 = (int *)0x0;
          if (iVar8 != 0) {
            piVar6 = piStack_30;
          }
          if (iVar8 == 0 || piVar6 == (int *)0x0) {
            return;
          }
          uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff84 + 0x1cdfe04) + 0xb8);
          if (*(byte *)(*piVar6 + 0xb8) < uVar3) {
            return;
          }
          if (*(int *)(*(int *)(*piVar6 + 100) + uVar3 * 4 + -4) !=
              **(int **)(_UNK_01cdff84 + 0x1cdfe04)) {
            return;
          }
          func_0x028b17e0(piVar6,iVar1,param_3,0);
          return;
        }
        if (iVar8 != 0xa4) {
          if (iVar8 != 0xab) {
            return;
          }
          iVar8 = FUN_01c24918(0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar8 + 0xd8);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = func_0x02b3c518(iVar8,0x7d,&piStack_3c,0);
          piVar6 = piStack_3c;
          if (iVar8 == 0) {
            return;
          }
          if (piStack_3c == (int *)0x0) {
            func_0x01384bf0();
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = *(int **)(_UNK_01cdff74 + 0x1cdf948);
            iVar8 = *piVar5;
            if (((uint)*(byte *)(*piStack_3c + 0xb8) < (uint)*(byte *)(iVar8 + 0xb8)) ||
               (*(int *)(*(int *)(*piStack_3c + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4) !=
                iVar8)) {
              func_0x01384bf0();
              iVar8 = *piVar5;
            }
            iVar2 = *piVar6;
            piVar5 = (int *)0x0;
            if (((uint)*(byte *)(iVar8 + 0xb8) <= (uint)*(byte *)(iVar2 + 0xb8)) &&
               (piVar5 = piVar6,
               *(int *)(*(int *)(iVar2 + 100) + (uint)*(byte *)(iVar8 + 0xb8) * 4 + -4) != iVar8)) {
              piVar5 = (int *)0x0;
            }
          }
          func_0x02a45b58(piVar5,iVar1,param_3,0);
          return;
        }
        iVar8 = FUN_01c24918(0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar8 + 0xd8);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x02b3c518(iVar8,0x77,&piStack_34,0);
        piVar6 = (int *)0x0;
        if (iVar8 != 0) {
          piVar6 = piStack_34;
        }
        if (iVar8 == 0 || piVar6 == (int *)0x0) {
          return;
        }
        uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff88 + 0x1cdfe98) + 0xb8);
        if (*(byte *)(*piVar6 + 0xb8) < uVar3) {
          return;
        }
        if (*(int *)(*(int *)(*piVar6 + 100) + uVar3 * 4 + -4) !=
            **(int **)(_UNK_01cdff88 + 0x1cdfe98)) {
          return;
        }
        func_0x02937c5c(piVar6,iVar1,param_3,0);
        return;
      }
      if (0x40 < iVar8) {
        if (iVar8 == 0x59) {
          iVar1 = FUN_01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xd8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02b3c518(iVar1,0x44,&piStack_28,0);
          piVar6 = (int *)0x0;
          if (iVar1 != 0) {
            piVar6 = piStack_28;
          }
          if (iVar1 == 0 || piVar6 == (int *)0x0) {
            return;
          }
          uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff80 + 0x1cdfcc0) + 0xb8);
          if (*(byte *)(*piVar6 + 0xb8) < uVar3) {
            return;
          }
          if (*(int *)(*(int *)(*piVar6 + 100) + uVar3 * 4 + -4) !=
              **(int **)(_UNK_01cdff80 + 0x1cdfcc0)) {
            return;
          }
          func_0x028913a4(piVar6,param_3,0);
          return;
        }
        if (iVar8 == 0x6b) {
          iVar8 = FUN_01c24918(0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          piVar6 = *(int **)(iVar8 + 0xd8);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar8 = func_0x02b3c518(piVar6,0x54,&piStack_44,0);
          if (iVar8 != 0) {
            piVar6 = piStack_44;
          }
          if (iVar8 == 0 || piVar6 == (int *)0x0) {
            return;
          }
          uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff94 + 0x1cdfd50) + 0xb8);
          if (*(byte *)(*piVar6 + 0xb8) < uVar3) {
            return;
          }
          if (*(int *)(*(int *)(*piVar6 + 100) + uVar3 * 4 + -4) !=
              **(int **)(_UNK_01cdff94 + 0x1cdfd50)) {
            return;
          }
          uVar4 = *(undefined4 *)(param_2 + 0x14);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          func_0x027efeac(piVar6,iVar1,param_3,uVar4,0);
          return;
        }
        if (iVar8 != 0x7b) {
          return;
        }
        iVar1 = FUN_01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xd8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02b3c518(iVar1,0x5b,&piStack_2c,0);
        piVar6 = (int *)0x0;
        if (iVar1 != 0) {
          piVar6 = piStack_2c;
        }
        if (iVar1 == 0 || piVar6 == (int *)0x0) {
          return;
        }
        uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff70 + 0x1cdf89c) + 0xb8);
        if (*(byte *)(*piVar6 + 0xb8) < uVar3) {
          return;
        }
        if (*(int *)(*(int *)(*piVar6 + 100) + uVar3 * 4 + -4) !=
            **(int **)(_UNK_01cdff70 + 0x1cdf89c)) {
          return;
        }
        func_0x025bb17c(piVar6,param_3,0);
        return;
      }
      if (iVar8 != 0x1c) {
        if (iVar8 != 0x40) {
          return;
        }
        iVar1 = FUN_01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xd8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02b3c518(iVar1,0x2f,&piStack_24,0);
        if (iVar1 == 0) {
          return;
        }
        if (piStack_24 != (int *)0x0) {
          uVar3 = (uint)*(byte *)(**(int **)(_UNK_01cdff64 + 0x1cdfa18) + 0xb8);
          if ((uVar3 <= *(byte *)(*piStack_24 + 0xb8)) &&
             (*(int *)(*(int *)(*piStack_24 + 100) + uVar3 * 4 + -4) ==
              **(int **)(_UNK_01cdff64 + 0x1cdfa18))) {
            func_0x0299f590(piStack_24,param_3,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_01cdff68 + 0x1cdfa58) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01cdff6c + 0x1cdfa74));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x028c3fd8(iVar1,0);
        return;
      }
      iVar8 = FUN_01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0xb0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x14);
      if (iVar8 == 0) {
        return;
      }
      iVar8 = *(int *)(iVar8 + 0x3c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iStack_4c = 0;
      uStack_50 = 0;
      func_0x03507d38(&uStack_50,*(undefined4 *)(iVar8 + 0x58),
                      **(undefined4 **)(_UNK_01cdff7c + 0x1cdfae8));
      iVar8 = iStack_4c;
      if ((char)uStack_50 == '\0') {
        return;
      }
      goto LAB_01cdf634;
    }
    if (iVar8 == 0x400000) goto LAB_01cdf530;
  }
  else {
    if (iVar8 == 0x1000000 || iVar8 == 0x2000000) goto LAB_01cdf530;
    if (iVar8 == 0x4000000) {
      iVar1 = FUN_01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x88);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7bd04(iVar1,param_2,0);
      return;
    }
  }
  if (iVar1 == 0x1e) {
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dd4914(iVar1,param_3,1,0);
    return;
  }
  if (iVar1 == 0x1f) {
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x90);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc1620(iVar1,param_3,0);
    return;
  }
  iVar8 = FUN_01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xb0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar8 + 0x14) == 0) {
    return;
  }
  iVar8 = FUN_01c24918(0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0xb0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x14);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x3c);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x58);
LAB_01cdf634:
  if (iVar1 == iVar8) {
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xb0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02378018(iVar1,param_3,0);
  }
  return;
}



// ===== FAT.RewardMan$$_GenerateReward RVA 0x1cd0048 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ce0048(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01ce026c + 0x1ce0068);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce0270 + 0x1ce0080));
    func_0x01384978(*(undefined4 *)(_UNK_01ce0274 + 0x1ce008c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce0278 + 0x1ce0098));
    func_0x01384978(*(undefined4 *)(_UNK_01ce027c + 0x1ce00a4));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x9a,0);
  if (iVar1 == 0) {
    if (param_4 != (int *)0x0) {
      uVar5 = (**(code **)(*param_4 + 0xd8))(param_4,*(undefined4 *)(*param_4 + 0xdc));
    }
    iVar1 = func_0x01489db8(uVar5,0);
    if (iVar1 != 0) {
      puVar6 = *(undefined4 **)(_UNK_01ce0280 + 0x1ce0174);
      uStack_28 = param_2;
      uVar5 = func_0x01384abc(*puVar6,&uStack_28);
      uStack_2c = param_3;
      uVar2 = func_0x01384abc(*puVar6,&uStack_2c);
      uVar5 = func_0x0244f690(**(undefined4 **)(_UNK_01ce0284 + 0x1ce01a8),uVar5,uVar2,0);
      if (*(int *)(**(int **)(_UNK_01ce0288 + 0x1ce01bc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar5,0);
    }
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ce028c + 0x1ce01e4));
    func_0x01c34e84(iVar1,param_8,param_9,param_10,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    iVar3 = FUN_01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x38);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar5 = FUN_01cd24e4(iVar3,param_2);
    *(undefined4 *)(iVar1 + 0xc) = uVar5;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    *(int **)(iVar1 + 0x14) = param_4;
    *(undefined4 *)(iVar1 + 0x18) = param_6;
    *(undefined4 *)(iVar1 + 0x1c) = param_7;
    *(undefined4 *)(iVar1 + 0x20) = param_5;
  }
  else {
    iVar1 = func_0x0229f13c(0x9a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02176f64(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9,param_10,0);
  }
  return iVar1;
}



// ===== FAT.RewardMan$$_BeginReward RVA 0x1cd0290 =====

/* WARNING: Possible PIC construction at 0x01ce08ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01ce08b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ce0290(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  char cVar7;
  byte bVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint unaff_r9;
  int *piVar19;
  uint unaff_r11;
  undefined4 uVar20;
  bool bVar21;
  bool bVar22;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int *piStack_128;
  int *piStack_124;
  int *piStack_120;
  int *piStack_11c;
  int *piStack_118;
  int *piStack_114;
  int *piStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int iStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  int *piStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  int *piStack_c0;
  int *piStack_bc;
  int *piStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  int *piStack_98;
  int *piStack_94;
  int *piStack_90;
  int *piStack_8c;
  int *piStack_88;
  int *piStack_84;
  int *piStack_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  pcVar9 = (char *)(_UNK_01ce1270 + 0x1ce02ac);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce1274 + 0x1ce02c0));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1278 + 0x1ce02cc));
    func_0x01384978(*(undefined4 *)(_UNK_01ce127c + 0x1ce02d8));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1280 + 0x1ce02e4));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1284 + 0x1ce02f0));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1288 + 0x1ce02fc));
    func_0x01384978(*(undefined4 *)(_UNK_01ce128c + 0x1ce0308));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1290 + 0x1ce0314));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1294 + 0x1ce0320));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1298 + 0x1ce032c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce129c + 0x1ce0338));
    func_0x01384978(*(undefined4 *)(_UNK_01ce12a0 + 0x1ce0344));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1344 + 0x1ce0350));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1348 + 0x1ce035c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce134c + 0x1ce0368));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1350 + 0x1ce0374));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1354 + 0x1ce0380));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1358 + 0x1ce038c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce135c + 0x1ce0398));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1360 + 0x1ce03a4));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1364 + 0x1ce03b0));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1368 + 0x1ce03bc));
    func_0x01384978(*(undefined4 *)(_UNK_01ce136c + 0x1ce03c8));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1370 + 0x1ce03d4));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1374 + 0x1ce03e0));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1378 + 0x1ce03ec));
    func_0x01384978(*(undefined4 *)(_UNK_01ce137c + 0x1ce03f8));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1380 + 0x1ce0404));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1384 + 0x1ce0410));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1388 + 0x1ce041c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce138c + 0x1ce0428));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1390 + 0x1ce0434));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1394 + 0x1ce0440));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1398 + 0x1ce044c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce139c + 0x1ce0458));
    func_0x01384978(*(undefined4 *)(_UNK_01ce13a0 + 0x1ce0464));
    func_0x01384978(*(undefined4 *)(_UNK_01ce13a4 + 0x1ce0470));
    func_0x01384978(*(undefined4 *)(_UNK_01ce13a8 + 0x1ce047c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce13ac + 0x1ce0488));
    func_0x01384978(*(undefined4 *)(_UNK_01ce13b0 + 0x1ce0494));
    func_0x01384978(*(undefined4 *)(_UNK_01ce13b4 + 0x1ce04a0));
    func_0x01384978(*(undefined4 *)(_UNK_01ce13b8 + 0x1ce04ac));
    func_0x01384978(*(undefined4 *)(_UNK_01ce13bc + 0x1ce04b8));
    func_0x01384978(*(undefined4 *)(_UNK_01ce13c0 + 0x1ce04c4));
    func_0x01384978(*(undefined4 *)(_UNK_01ce13c4 + 0x1ce04d0));
    func_0x01384978(*(undefined4 *)(_UNK_01ce14d4 + 0x1ce04dc));
    func_0x01384978(*(undefined4 *)(_UNK_01ce14d8 + 0x1ce04e8));
    func_0x01384978(*(undefined4 *)(_UNK_01ce14dc + 0x1ce04f4));
    func_0x01384978(*(undefined4 *)(_UNK_01ce14e0 + 0x1ce0500));
    func_0x01384978(*(undefined4 *)(_UNK_01ce14e4 + 0x1ce050c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce14e8 + 0x1ce0518));
    func_0x01384978(*(undefined4 *)(_UNK_01ce14ec + 0x1ce0524));
    func_0x01384978(*(undefined4 *)(_UNK_01ce14f0 + 0x1ce0530));
    func_0x01384978(*(undefined4 *)(_UNK_01ce14f4 + 0x1ce053c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce14f8 + 0x1ce0548));
    func_0x01384978(*(undefined4 *)(_UNK_01ce14fc + 0x1ce0554));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1500 + 0x1ce0560));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1504 + 0x1ce056c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1508 + 0x1ce0578));
    func_0x01384978(*(undefined4 *)(_UNK_01ce150c + 0x1ce0584));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1510 + 0x1ce0590));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1514 + 0x1ce059c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1518 + 0x1ce05a8));
    func_0x01384978(*(undefined4 *)(_UNK_01ce151c + 0x1ce05b4));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1520 + 0x1ce05c0));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1524 + 0x1ce05cc));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1528 + 0x1ce05d8));
    func_0x01384978(*(undefined4 *)(_UNK_01ce152c + 0x1ce05e4));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1530 + 0x1ce05f0));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1534 + 0x1ce05fc));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1538 + 0x1ce0608));
    func_0x01384978(*(undefined4 *)(_UNK_01ce153c + 0x1ce0614));
    func_0x01384978(*(undefined4 *)(_UNK_01ce1540 + 0x1ce0620));
    *pcVar9 = '\x01';
  }
  piStack_28 = (int *)0x0;
  piStack_2c = (int *)0x0;
  piStack_30 = (int *)0x0;
  piStack_34 = (int *)0x0;
  piStack_38 = (int *)0x0;
  piStack_3c = (int *)0x0;
  piStack_40 = (int *)0x0;
  piStack_44 = (int *)0x0;
  piStack_48 = (int *)0x0;
  piStack_4c = (int *)0x0;
  piStack_50 = (int *)0x0;
  piStack_54 = (int *)0x0;
  piStack_58 = (int *)0x0;
  piStack_5c = (int *)0x0;
  piStack_60 = (int *)0x0;
  piStack_64 = (int *)0x0;
  piStack_68 = (int *)0x0;
  piStack_6c = (int *)0x0;
  piStack_70 = (int *)0x0;
  piStack_74 = (int *)0x0;
  piStack_78 = (int *)0x0;
  piStack_7c = (int *)0x0;
  piStack_80 = (int *)0x0;
  piStack_84 = (int *)0x0;
  piStack_88 = (int *)0x0;
  piStack_8c = (int *)0x0;
  piStack_90 = (int *)0x0;
  piStack_94 = (int *)0x0;
  piStack_98 = (int *)0x0;
  piStack_9c = (int *)0x0;
  piStack_a0 = (int *)0x0;
  piStack_a4 = (int *)0x0;
  piStack_a8 = (int *)0x0;
  piStack_ac = (int *)0x0;
  piStack_b0 = (int *)0x0;
  piStack_b4 = (int *)0x0;
  piStack_b8 = (int *)0x0;
  piStack_bc = (int *)0x0;
  piStack_c0 = (int *)0x0;
  piStack_c4 = (int *)0x0;
  piStack_c8 = (int *)0x0;
  piStack_cc = (int *)0x0;
  piStack_d0 = (int *)0x0;
  piStack_d4 = (int *)0x0;
  piStack_d8 = (int *)0x0;
  iStack_dc = 0;
  iVar2 = func_0x0229f06c(0x9c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0218d3f0(iVar2,param_1,param_2,0);
    return iVar2;
  }
  piVar3 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01ce1708 + 0x1ce0738));
  func_0x01ce76f8(piVar3,0);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_1 + 8);
  piVar19 = piVar3 + 2;
  *piVar19 = param_2;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar2 + 0xc)) {
    iVar2 = *(int *)(param_1 + 8);
    iVar11 = *piVar19;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x036890a0(&iStack_e8,iVar2,**(undefined4 **)(_UNK_01ce170c + 0x1ce079c));
    iVar2 = iStack_e8;
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar11 + 0x18) = iVar2;
    *(undefined4 *)(iVar11 + 0x1c) = uStack_e4;
  }
  iVar2 = *piVar19;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar2 + 0x24) != '\0') goto LAB_01ce07dc;
  if (*(int *)(**(int **)(_UNK_01ce1710 + 0x1ce07f4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01ce1808 + 0x1ce0810));
  piVar12 = (int *)*piVar19;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iStack_f4 = param_1;
  func_0x0349eb38(iVar2,piVar12,**(undefined4 **)(_UNK_01ce180c + 0x1ce083c));
  iVar2 = *piVar19;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar18 = *(int **)(iVar2 + 8);
  iVar2 = FUN_01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)FUN_01c24918(0);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = piVar4[0x1b];
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar11 = func_0x027935cc(iVar2,0);
  if (iVar11 != 0) {
    iVar11 = *piVar19;
    uVar20 = 0x1ce08b0;
    goto SUB_01ce4db4;
  }
  uVar20 = func_0x01384be4(**(undefined4 **)(_UNK_01ce1860 + 0x1ce08c0));
  func_0x024500b4(uVar20,piVar3,**(undefined4 **)(_UNK_01ce1864 + 0x1ce08dc),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02796490(iVar2,uVar20,0);
  iVar11 = *piVar19;
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar11 + 0xc);
  if (iVar11 < 0x20001) {
    if (iVar11 < 0x1001) {
      if (iVar11 < 0x101) {
        if (iVar11 != 0x10 && iVar11 != 0x100) goto LAB_01ce0f4c;
      }
      else if (iVar11 == 0x200) {
        iVar2 = *piVar19;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        *(undefined1 *)(iVar2 + 0x30) = 1;
        iVar2 = FUN_01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x44);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar18 = (int *)FUN_01c9e4e4(iVar2,piVar18,0);
        piVar4 = (int *)FUN_01c24918(0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *piVar19;
        iVar2 = piVar4[0x11];
        iVar11 = iVar14;
        if (iVar14 == 0) {
          func_0x01384bf0();
          iVar11 = *piVar19;
          piVar3 = (int *)0x0;
          if (iVar11 == 0) goto LAB_01ce4d4c;
        }
        uVar15 = *(undefined4 *)(iVar11 + 0x14);
        uVar20 = *(undefined4 *)(iVar14 + 0x10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_104 = 0;
        uStack_108 = uVar15;
        FUN_01c9fa0c(iVar2,iVar14,piVar18,uVar20);
      }
      else {
        if (iVar11 == 0x1000) goto LAB_01ce0cac;
LAB_01ce0f4c:
        iVar11 = *piVar19;
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar11 + 8);
        if (iVar11 < 0x20) {
          if (iVar11 == 0x1e) {
            iVar11 = *piVar19;
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            *(undefined1 *)(iVar11 + 0x30) = 1;
            piVar4 = (int *)FUN_01c24918(0);
            if (piVar4 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar14 = *piVar19;
            piVar12 = (int *)piVar4[0x12];
            iVar11 = iVar14;
            if (iVar14 == 0) {
              func_0x01384bf0();
              iVar11 = *piVar19;
              piVar3 = (int *)0x0;
              if (iVar11 == 0) {
LAB_01ce4d4c:
                bVar22 = true;
                uVar20 = 0x1ce4d50;
                iVar11 = func_0x01384bf0();
                bVar21 = false;
                if (bVar22) {
                  piVar19 = (int *)(unaff_r11 | 0x400000);
                  bVar21 = piVar19 == (int *)0x0;
                }
                bVar22 = false;
                if (bVar21) {
                  piVar18 = (int *)(unaff_r11 | 0x2000);
                  bVar22 = piVar18 == (int *)0x0;
                }
                bVar21 = false;
                if (bVar22 && (unaff_r9 | 0x2a0) == 0) {
                  unaff_r9 = unaff_r11 | 0x3f00000;
                  bVar21 = unaff_r9 == 0;
                }
                bVar22 = false;
                if (bVar21) {
                  piVar3 = (int *)(unaff_r11 | 0x40);
                  bVar22 = piVar3 == (int *)0x0;
                }
                bVar21 = false;
                if (bVar22) {
                  piVar18 = (int *)(unaff_r11 | 0x350);
                  bVar21 = piVar18 == (int *)0x0;
                }
                bVar22 = false;
                if (bVar21) {
                  piVar19 = (int *)(unaff_r11 | 0x4000000a);
                  bVar22 = piVar19 == (int *)0x0;
                }
                bVar21 = false;
                if (bVar22) {
                  unaff_r9 = unaff_r11 | 0xf0000003;
                  bVar21 = unaff_r9 == 0;
                }
                bVar22 = false;
                if (bVar21) {
                  piVar19 = (int *)(unaff_r11 | 0xe8000000);
                  bVar22 = piVar19 == (int *)0x0;
                }
                bVar21 = false;
                if (bVar22) {
                  unaff_r9 = unaff_r11 | 0x9000;
                  bVar21 = unaff_r9 == 0;
                }
                bVar22 = false;
                if (bVar21 && (unaff_r9 | 0xc8000) == 0) {
                  piVar19 = (int *)(unaff_r11 | 1);
                  bVar22 = piVar19 == (int *)0x0;
                }
                bVar21 = false;
                if ((bVar22 && (unaff_r11 | 0x64000000) == 0) && (unaff_r9 | 0x3d00) == 0) {
                  piVar19 = (int *)(unaff_r11 | 0x4c00000);
                  bVar21 = piVar19 == (int *)0x0;
                }
                bVar22 = false;
                if (bVar21 && (unaff_r9 | 0x340000) == 0) {
                  piVar19 = (int *)(unaff_r11 | 0x9c);
                  bVar22 = piVar19 == (int *)0x0;
                }
                bVar21 = false;
                if (bVar22 && (unaff_r9 | 0xa80000) == 0) {
                  piVar19 = (int *)(unaff_r11 | 5);
                  bVar21 = piVar19 == (int *)0x0;
                }
                bVar22 = false;
                if (bVar21) {
                  unaff_r9 = unaff_r11 | 0x3d000000;
                  bVar22 = unaff_r9 == 0;
                }
                bVar21 = false;
                if (bVar22) {
                  piVar12 = (int *)(unaff_r11 | 0xe000);
                  bVar21 = piVar12 == (int *)0x0;
                }
                bVar22 = false;
                if (bVar21) {
                  piVar18 = (int *)(unaff_r11 | 0x50);
                  bVar22 = piVar18 == (int *)0x0;
                }
                bVar21 = false;
                if (bVar22) {
                  piVar18 = (int *)(unaff_r11 | 0x1400);
                  bVar21 = piVar18 == (int *)0x0;
                }
                bVar22 = false;
                if (bVar21) {
                  unaff_r9 = unaff_r11 | 0x50000001;
                  bVar22 = unaff_r9 == 0;
                }
                if (bVar22) {
                  piVar18 = (int *)(unaff_r11 | 0x400000);
                }
SUB_01ce4db4:
                piStack_110 = piVar4;
                uStack_10c = uVar20;
                if (iVar11 == 0) {
                  func_0x01384bf0();
                }
                iVar14 = *(int *)(iVar11 + 0x10);
                uVar20 = *(undefined4 *)(iVar11 + 0x14);
                iVar11 = *(int *)(iVar11 + 8);
                piStack_120 = piStack_110;
                pcVar9 = (char *)(_UNK_019a3d78 + 0x19a3c6c);
                piStack_11c = piVar12;
                piStack_118 = piVar3;
                piStack_114 = (int *)iVar2;
                piStack_110 = piVar18;
                if (*pcVar9 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_019a3d7c + 0x19a3c80),iVar14,uVar20,0);
                  func_0x01384978(*(undefined4 *)(_UNK_019a3d80 + 0x19a3c8c));
                  func_0x01384978(*(undefined4 *)(_UNK_019a3d84 + 0x19a3c98));
                  *pcVar9 = '\x01';
                }
                iVar2 = func_0x0229f06c(0xa0,0);
                if (iVar2 != 0) {
                  iVar2 = func_0x0229f13c(0xa0,0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  piStack_128 = (int *)0x0;
                  iVar2 = func_0x02177130(iVar2,iVar11,iVar14,uVar20);
                  return iVar2;
                }
                if (*(int *)(**(int **)(_UNK_019a3d88 + 0x19a3d00) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                piVar3 = (int *)func_0x02f74dec(**(undefined4 **)(_UNK_019a3d8c + 0x19a3d1c));
                if (piVar3 == (int *)0x0) {
                  func_0x01384bf0();
                }
                piVar12 = *(int **)(_UNK_019a3d90 + 0x19a3d3c);
                piVar3[0x13] = iVar14;
                piVar3[0x12] = iVar11;
                if (*(int *)(*piVar12 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                iVar2 = func_0x023ebadc(uVar20,0);
                piVar18 = piStack_110;
                piVar12 = piStack_114;
                piVar3[0x14] = iVar2;
                piStack_110 = piStack_118;
                piStack_114 = piStack_11c;
                piStack_118 = piStack_120;
                pcVar9 = (char *)(_UNK_01993228 + 0x19930f0);
                if (*pcVar9 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_0199322c + 0x1993104));
                  func_0x01384978(*(undefined4 *)(_UNK_01993230 + 0x1993110));
                  *pcVar9 = '\x01';
                }
                iVar2 = func_0x0229f06c(0x27,0);
                if (iVar2 == 0) {
                  if (piVar3 == (int *)0x0) {
                    return 0;
                  }
                  iVar2 = *piVar3;
                  uVar17 = (uint)*(byte *)(**(int **)(_UNK_01993234 + 0x1993174) + 0xb8);
                  if ((uVar17 <= *(byte *)(iVar2 + 0xb8)) &&
                     (*(int *)(*(int *)(iVar2 + 100) + uVar17 * 4 + -4) ==
                      **(int **)(_UNK_01993234 + 0x1993174))) {
                    (**(code **)(iVar2 + 0xe0))(piVar3,*(undefined4 *)(iVar2 + 0xe4));
                  }
                  piVar4 = (int *)func_0x02450044(piVar3,0);
                  if (piVar4 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  piVar4 = (int *)(**(code **)(*piVar4 + 0x100))
                                            (piVar4,*(undefined4 *)(*piVar4 + 0x104));
                  uVar20 = func_0x02450054(piVar3,0);
                  if (*(int *)(**(int **)(_UNK_01993238 + 0x1993204) + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  pcVar9 = (char *)(_UNK_01998f20 + 0x1998e0c);
                  if (*pcVar9 == '\0') {
                    func_0x01384978(*(undefined4 *)(_UNK_01998f24 + 0x1998e20));
                    func_0x01384978(*(undefined4 *)(_UNK_01998f28 + 0x1998e2c));
                    func_0x01384978(*(undefined4 *)(_UNK_01998f2c + 0x1998e38));
                    *pcVar9 = '\x01';
                  }
                  iVar2 = func_0x0229f06c(0x2a,0);
                  if (iVar2 == 0) {
                    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01998f30 + 0x1998e94));
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    if (*(char *)(iVar2 + 9) != '\0') {
                      piVar3 = *(int **)(_UNK_01998f34 + 0x1998ec0);
                      iVar2 = *piVar3;
                      if (*(int *)(iVar2 + 0x74) == 0) {
                        func_0x01384ab4();
                        iVar2 = *piVar3;
                      }
                      if (*(char *)(*(int *)(iVar2 + 0x5c) + 0xc) != '\0') {
                        iVar2 = **(int **)(**(int **)(_UNK_01998f38 + 0x1998ef0) + 0x5c);
                        if (iVar2 == 0) {
                          func_0x01384bf0();
                        }
                        piStack_120 = piStack_118;
                        piStack_118 = piStack_110;
                        piStack_11c = piStack_114;
                        piStack_114 = piVar12;
                        piStack_110 = piVar18;
                        iVar11 = func_0x0229f06c(0x2b,0,uVar20,0);
                        if (iVar11 == 0) {
                          iVar11 = func_0x020a3acc(iVar2,0,piVar4,uVar20);
                          if (iVar11 == 0) {
                            piVar3 = *(int **)(iVar2 + 0x24);
                            if (piVar3 == (int *)0x0) {
                              func_0x01384bf0();
                            }
                    /* WARNING: Could not recover jumptable at 0x020a3d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            iVar2 = (**(code **)(*piVar3 + 0x1e8))
                                              (piVar3,piVar4,uVar20,*(undefined4 *)(*piVar3 + 0x1ec)
                                              );
                            return iVar2;
                          }
                        }
                        else {
                          iVar11 = func_0x0229f13c(0x2b,0);
                          if (iVar11 == 0) {
                            func_0x01384bf0();
                          }
                          piStack_128 = (int *)0x0;
                          iVar11 = func_0x02174858(iVar11,iVar2,piVar4,uVar20);
                        }
                        return iVar11;
                      }
                    }
                    return 0;
                  }
                  iVar2 = func_0x0229f13c(0x2a,0);
                  piStack_128 = piStack_118;
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                    piStack_128 = piStack_118;
                  }
                }
                else {
                  iVar2 = func_0x0229f13c(0x27,0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  uVar20 = 0;
                  piVar4 = piVar3;
                  piStack_128 = piStack_118;
                }
                piStack_118 = piVar18;
                piStack_11c = piVar12;
                uStack_13c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_138 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_134 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uStack_140 = 0;
                uStack_130 = 0;
                piStack_124 = piStack_114;
                piStack_120 = piStack_110;
                piStack_114 = (int *)unaff_r9;
                piStack_110 = piVar19;
                func_0x0245494c(&uStack_158,0,uVar20,0);
                uStack_140 = uStack_158;
                uStack_13c = uStack_154;
                uStack_138 = uStack_150;
                uStack_134 = uStack_14c;
                uStack_130 = uStack_148;
                if (*(int *)(iVar2 + 0x10) != 0) {
                  func_0x01485278(&uStack_140,*(int *)(iVar2 + 0x10),0);
                }
                func_0x01485278(&uStack_140,piVar4,0);
                func_0x01485278(&uStack_140,uVar20,0);
                iVar11 = *(int *)(iVar2 + 8);
                uVar20 = *(undefined4 *)(iVar2 + 0xc);
                iVar2 = *(int *)(iVar2 + 0x10);
                if (iVar11 == 0) {
                  func_0x01384bf0();
                }
                uVar15 = 3;
                if (iVar2 == 0) {
                  uVar15 = 2;
                }
                iVar2 = func_0x0245495c(iVar11,uVar20,&uStack_140,uVar15,0,0);
                return iVar2;
              }
            }
            uVar20 = *(undefined4 *)(iVar11 + 0x14);
            uVar15 = *(undefined4 *)(iVar14 + 0x10);
            if (piVar12 == (int *)0x0) {
              func_0x01384bf0();
            }
            func_0x01dd4738(piVar12,uVar15,uVar20,0);
          }
          else {
            if (iVar11 != 0x1f) goto LAB_01ce1008;
            iVar11 = *piVar19;
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            *(undefined1 *)(iVar11 + 0x30) = 1;
            piVar4 = (int *)FUN_01c24918(0);
            if (piVar4 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar14 = *piVar19;
            piVar12 = (int *)piVar4[0x24];
            iVar11 = iVar14;
            if (iVar14 == 0) {
              func_0x01384bf0();
              iVar11 = *piVar19;
              piVar3 = (int *)0x0;
              if (iVar11 == 0) goto LAB_01ce4d4c;
            }
            uVar20 = *(undefined4 *)(iVar11 + 0x14);
            uVar15 = *(undefined4 *)(iVar14 + 0x10);
            if (piVar12 == (int *)0x0) {
              func_0x01384bf0();
            }
            func_0x01dc1520(piVar12,uVar15,uVar20,0);
          }
        }
        else if (iVar11 != 0x28 && iVar11 != 0x2b) {
LAB_01ce1008:
          piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ce1f14 + 0x1ce1018),1);
          iVar2 = *piVar19;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iStack_e8 = *(int *)(iVar2 + 0xc);
          iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01ce2028 + 0x1ce1040),&iStack_e8);
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar2 != 0) &&
             (iVar11 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar11 == 0)) {
            uVar20 = func_0x01384c10();
            func_0x01384aa0(uVar20,0);
          }
          if (piVar3[3] == 0) {
            func_0x01384bf4();
          }
          piVar3[4] = iVar2;
          if (*(int *)(**(int **)(_UNK_01ce202c + 0x1ce10a8) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c23bc(**(undefined4 **)(_UNK_01ce2030 + 0x1ce10cc),piVar3,0);
        }
      }
    }
    else if (iVar11 < 0x4001) {
      if (iVar11 == 0x2000) {
        iVar2 = FUN_01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x38);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_01cccae0(iVar2,piVar18);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 0x1c) == 0) {
          iVar11 = *piVar19;
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar11 + 0x18) == 0) goto LAB_01ce12f4;
          iVar11 = *piVar19;
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0x18);
          if (iVar11 == 0) goto LAB_01ce12f4;
        }
        else {
LAB_01ce12f4:
          iVar11 = FUN_01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0x4c);
          uVar20 = *(undefined4 *)(iVar2 + 0x1c);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x01dbd65c(iVar11,uVar20,0,0);
          if (iVar11 == 0) goto LAB_01ce26f4;
        }
        iVar14 = *piVar19;
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar14 + 0x18) = iVar11;
        iVar14 = FUN_01c24918(0);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(iVar14 + 0x50);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        iVar14 = func_0x01db5714(iVar14,piVar18,0);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        if ((*(int *)(iVar14 + 0x2c) == 0) || (*(int *)(*(int *)(iVar14 + 0x2c) + 0x28) != 8)) {
          iVar14 = 0;
          while( true ) {
            iVar16 = *piVar19;
            if (iVar16 == 0) {
              func_0x01384bf0();
            }
            if (*(int *)(iVar16 + 0x10) <= iVar14) break;
            iVar16 = *piVar19;
            if (iVar16 == 0) {
              func_0x01384bf0();
            }
            cVar7 = '\x01';
            if ((*(byte *)(iVar16 + 0x20) & 3) == 0) {
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              cVar7 = *(char *)(iVar2 + 0x45);
            }
            func_0x02144c58(iVar11,piVar18,cVar7 != '\0',0);
            iVar14 = iVar14 + 1;
          }
        }
        else {
          iVar14 = *piVar19;
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          uVar6 = 1;
          if (((*(byte *)(iVar14 + 0x20) & 3) == 0) && (uVar6 = 0, *(char *)(iVar2 + 0x45) != '\0'))
          {
            uVar6 = 1;
          }
          iVar2 = func_0x02144c58(iVar11,piVar18,uVar6,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x02feb690(iVar2,&iStack_dc,0,**(undefined4 **)(_UNK_01ce2538 + 0x1ce1650));
          iVar2 = iStack_dc;
          if (iVar11 != 0) {
            iVar11 = *piVar19;
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            uVar20 = *(undefined4 *)(iVar11 + 0x10);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x02132ce0(iVar2,uVar20,0);
          }
        }
      }
      else {
        if (iVar11 != 0x4000) goto LAB_01ce0f4c;
        iVar2 = FUN_01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *piVar19;
        iVar2 = *(int *)(iVar2 + 0x38);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        uVar20 = *(undefined4 *)(iVar11 + 8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_01cd2d18(iVar2,uVar20);
        iVar11 = FUN_01c24918(0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar11 + 0x5c);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = func_0x01db7b78(iVar11,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        cVar7 = *(char *)(iVar2 + 0x28);
        if (cVar7 != '\0') {
          iVar14 = *piVar19;
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          *(undefined1 *)(iVar14 + 0x30) = 1;
        }
        iVar14 = 0;
        while( true ) {
          iVar16 = *piVar19;
          if (iVar16 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar16 + 0x10) <= iVar14) break;
          if (*(char *)(iVar2 + 0x2b) != '\0') {
            iVar16 = FUN_01c24918(0);
            if (iVar16 == 0) {
              func_0x01384bf0();
            }
            iVar16 = *(int *)(iVar16 + 0xac);
            uVar20 = *(undefined4 *)(iVar2 + 0xc);
            if (iVar16 == 0) {
              func_0x01384bf0();
            }
            FUN_01baa1b8(iVar16,uVar20,0);
          }
          if (cVar7 == '\0') {
            iVar16 = *piVar19;
            if (iVar16 == 0) {
              func_0x01384bf0();
            }
            *(int *)(iVar16 + 0x18) = iVar11;
            bVar8 = 1;
            if (*(char *)(iVar2 + 0x2c) == '\0') {
              iVar16 = *piVar19;
              if (iVar16 == 0) {
                func_0x01384bf0();
              }
              bVar1 = *(byte *)(iVar16 + 0x20);
              bVar8 = bVar1 & 3;
              if ((bVar1 & 3) != 0) {
                bVar8 = 1;
              }
            }
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            func_0x02144c58(iVar11,piVar18,bVar8,0);
          }
          else {
            iVar16 = FUN_01c24918(0);
            if (iVar16 == 0) {
              func_0x01384bf0();
            }
            iVar13 = *piVar19;
            iVar16 = *(int *)(iVar16 + 0xe8);
            if (iVar13 == 0) {
              func_0x01384bf0();
            }
            uVar20 = *(undefined4 *)(iVar13 + 0x14);
            if (iVar16 == 0) {
              func_0x01384bf0();
            }
            uStack_108 = 0;
            func_0x01cedc30(iVar16,piVar18,1,uVar20);
          }
          iVar14 = iVar14 + 1;
        }
      }
    }
    else if (iVar11 == 0x8000) {
      iVar2 = FUN_01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar19;
      iVar2 = *(int *)(iVar2 + 0xac);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      uVar20 = *(undefined4 *)(iVar11 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01ba0be0(iVar2,piVar18,uVar20,0);
    }
    else {
      if (iVar11 != 0x20000) goto LAB_01ce0f4c;
      iVar2 = *piVar19;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      *(undefined1 *)(iVar2 + 0x30) = 1;
      iVar2 = FUN_01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar2 + 0x88);
      iVar2 = *piVar19;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7bae0(iVar11,iVar2,0);
    }
    goto LAB_01ce26f4;
  }
  if (0x200000 < iVar11) {
    if (iVar11 < 0x1000001) {
      if (iVar11 == 0x400000) goto LAB_01ce0cac;
      if (iVar11 != 0x1000000) goto LAB_01ce0f4c;
      iVar11 = *piVar19;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      *(undefined1 *)(iVar11 + 0x30) = 1;
      piVar4 = (int *)FUN_01c24918(0);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar14 = *piVar19;
      piVar3 = (int *)piVar4[0x3a];
      iVar11 = iVar14;
      if (iVar14 == 0) {
        func_0x01384bf0();
        iVar11 = *piVar19;
        piVar12 = (int *)0x0;
        if (iVar11 == 0) goto LAB_01ce4d4c;
      }
      uVar20 = *(undefined4 *)(iVar11 + 0x14);
      uVar15 = *(undefined4 *)(iVar14 + 0x10);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      uStack_108 = 0;
      func_0x01cedc30(piVar3,piVar18,uVar15,uVar20);
      iVar2 = FUN_01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar19;
      iVar2 = *(int *)(iVar2 + 0xf0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      uVar20 = *(undefined4 *)(iVar11 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01cbdf4c(iVar2,piVar18,uVar20,0);
    }
    else if (iVar11 == 0x2000000) {
LAB_01ce0cac:
      iVar11 = *piVar19;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      *(undefined1 *)(iVar11 + 0x30) = 1;
      piVar4 = (int *)FUN_01c24918(0);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar14 = *piVar19;
      piVar3 = (int *)piVar4[0x3a];
      iVar11 = iVar14;
      if (iVar14 == 0) {
        func_0x01384bf0();
        iVar11 = *piVar19;
        piVar12 = (int *)0x0;
        if (iVar11 == 0) goto LAB_01ce4d4c;
      }
      uVar20 = *(undefined4 *)(iVar11 + 0x14);
      uVar15 = *(undefined4 *)(iVar14 + 0x10);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      uStack_108 = 0;
      func_0x01cedc30(piVar3,piVar18,uVar15,uVar20);
    }
    else {
      if (iVar11 != 0x4000000) goto LAB_01ce0f4c;
      iVar2 = *piVar19;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      *(undefined1 *)(iVar2 + 0x30) = 1;
      iVar2 = FUN_01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar2 + 0x88);
      iVar2 = *piVar19;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7b588(iVar11,iVar2,0);
    }
    goto LAB_01ce26f4;
  }
  if (iVar11 < 0x80001) {
    if ((iVar11 != 0x40000) && (iVar11 != 0x80000)) goto LAB_01ce0f4c;
    goto LAB_01ce26f4;
  }
  if (iVar11 == 0x100000) goto LAB_01ce26f4;
  if (iVar11 != 0x200000) goto LAB_01ce0f4c;
  iVar11 = FUN_01c24918(0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar14 = *piVar19;
  iVar11 = *(int *)(iVar11 + 0x38);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  piVar12 = *(int **)(iVar14 + 8);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = FUN_01cd2b20(iVar11,piVar12);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar11 + 0x14);
  if (iVar11 < 0x54) {
    if (iVar11 < 0x34) {
      if (iVar11 < 0x1c) {
        if (iVar11 < 0x13) {
          if (iVar11 == 0xe) {
            piVar4 = (int *)FUN_01c24918(0);
            if (piVar4 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar14 = *piVar19;
            piVar12 = (int *)piVar4[0x2a];
            iVar11 = iVar14;
            if (iVar14 == 0) {
              func_0x01384bf0();
              iVar11 = *piVar19;
              piVar3 = (int *)0x0;
              if (iVar11 == 0) goto LAB_01ce4d4c;
            }
            uVar20 = *(undefined4 *)(iVar11 + 0x10);
            uVar15 = *(undefined4 *)(iVar14 + 8);
            if (piVar12 == (int *)0x0) {
              func_0x01384bf0();
            }
            func_0x0235552c(piVar12,uVar15,uVar20,0);
          }
          else {
            if (iVar11 != 0x12) goto LAB_01ce2698;
            iVar2 = FUN_01c24918(0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            piVar4 = *(int **)(iVar2 + 0xd8);
            if (piVar4 == (int *)0x0) {
              func_0x01384bf0();
            }
            func_0x02b3c518(piVar4,5,&piStack_48,0);
            piVar12 = piStack_48;
            if (piStack_48 != (int *)0x0) {
              iVar14 = *piVar19;
              iVar11 = iVar14;
              if (iVar14 == 0) {
                func_0x01384bf0();
                iVar11 = *piVar19;
                iVar2 = 0;
                if (iVar11 == 0) goto LAB_01ce4d4c;
              }
              piVar3 = *(int **)(_UNK_01ce32bc + 0x1ce23e0);
              uVar20 = *(undefined4 *)(iVar11 + 0x10);
              iVar2 = *piVar3;
              uVar15 = *(undefined4 *)(iVar14 + 8);
              uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
              if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
                 (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
                func_0x01384fb4(piVar12);
                func_0x01384bf0();
              }
              iVar2 = *piVar3;
              uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
              if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
                 (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
                func_0x01384fb4(piVar12);
                piVar12 = (int *)0x0;
              }
              func_0x024851e4(piVar12,uVar15,uVar20,0);
            }
          }
        }
        else if (iVar11 == 0x17) {
          iVar11 = *piVar19;
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          piVar12 = *(int **)(_UNK_01ce3b10 + 0x1ce2b74);
          iVar14 = *(int *)(iVar11 + 0x14);
          iVar11 = *piVar12;
          if (*(int *)(iVar11 + 0x74) == 0) {
            func_0x01384ab4();
            iVar11 = *piVar12;
          }
          if (iVar14 != *(int *)(*(int *)(iVar11 + 0x5c) + 0xc4)) {
            iVar11 = *piVar19;
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            if (0 < *(int *)(iVar11 + 0x10)) {
              iVar11 = FUN_01c24918(0);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar11 = *(int *)(iVar11 + 0xd8);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar11 = func_0x02b3c518(iVar11,0xc,&piStack_d0,0);
              if (iVar11 != 0) {
                piVar12 = piStack_d0;
              }
              if (iVar11 != 0 && piVar12 != (int *)0x0) {
                uVar17 = (uint)*(byte *)(**(int **)(_UNK_01ce3bcc + 0x1ce2c10) + 0xb8);
                if ((uVar17 <= *(byte *)(*piVar12 + 0xb8)) &&
                   (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) ==
                    **(int **)(_UNK_01ce3bcc + 0x1ce2c10))) {
                  iVar11 = *piVar19;
                  if (iVar11 == 0) {
                    func_0x01384bf0();
                    piVar3 = piRam00000008;
                    iVar11 = *piVar19;
                    iVar14 = iVar11;
                    if (iVar11 == 0) {
                      func_0x01384bf0();
                      iVar14 = *piVar19;
                      if (*piVar19 == 0) {
                        piVar4 = (int *)0x0;
                        goto LAB_01ce4d4c;
                      }
                    }
                  }
                  else {
                    piVar3 = *(int **)(iVar11 + 8);
                    iVar14 = iVar11;
                  }
                  uStack_108 = 0;
                  func_0x02ad8448(piVar12,piVar3,*(undefined4 *)(iVar11 + 0x10),
                                  *(undefined4 *)(iVar14 + 0x14));
                }
              }
            }
          }
        }
        else {
          if (iVar11 != 0x1b) goto LAB_01ce2698;
          iVar2 = FUN_01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          piVar4 = *(int **)(iVar2 + 0xd8);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          func_0x02b3c518(piVar4,0x10,&piStack_2c,0);
          piVar12 = piStack_2c;
          if (piStack_2c != (int *)0x0) {
            iVar14 = *piVar19;
            iVar11 = iVar14;
            if (iVar14 == 0) {
              func_0x01384bf0();
              iVar11 = *piVar19;
              iVar2 = 0;
              if (iVar11 == 0) goto LAB_01ce4d4c;
            }
            piVar3 = *(int **)(_UNK_01ce2a54 + 0x1ce1b0c);
            uVar20 = *(undefined4 *)(iVar11 + 0x10);
            iVar2 = *piVar3;
            uVar15 = *(undefined4 *)(iVar14 + 8);
            uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
            if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
               (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
              func_0x01384fb4(piVar12);
              func_0x01384bf0();
            }
            iVar2 = *piVar3;
            uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
            if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
               (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
              func_0x01384fb4(piVar12);
              piVar12 = (int *)0x0;
            }
            func_0x02ae6a38(piVar12,uVar15,uVar20,0);
          }
        }
      }
      else if (iVar11 < 0x22) {
        if (iVar11 == 0x1c) {
          iVar2 = *piVar19;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          *(undefined1 *)(iVar2 + 0x30) = 1;
          piVar4 = (int *)FUN_01c24918(0);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar19;
          piVar12 = (int *)piVar4[0x2c];
          if (iVar2 == 0) {
            func_0x01384bf0();
            piVar3 = piRam00000008;
            iVar2 = *piVar19;
            iVar11 = iVar2;
            if (iVar2 == 0) {
              func_0x01384bf0();
              iVar11 = *piVar19;
              if (*piVar19 == 0) {
                iVar2 = 0;
                goto LAB_01ce4d4c;
              }
            }
          }
          else {
            piVar3 = *(int **)(iVar2 + 8);
            iVar11 = iVar2;
          }
          uVar20 = *(undefined4 *)(iVar11 + 0x14);
          uVar15 = *(undefined4 *)(iVar2 + 0x10);
          if (piVar12 == (int *)0x0) {
            func_0x01384bf0();
          }
          uStack_108 = 0;
          func_0x023767e4(piVar12,piVar3,uVar15,uVar20);
        }
        else {
          if (iVar11 != 0x21) goto LAB_01ce2698;
          iVar2 = FUN_01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          piVar4 = *(int **)(iVar2 + 0xd8);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          func_0x02b3c518(piVar4,0x15,&piStack_50,0);
          piVar12 = piStack_50;
          if (piStack_50 != (int *)0x0) {
            iVar14 = *piVar19;
            iVar11 = iVar14;
            if (iVar14 == 0) {
              func_0x01384bf0();
              iVar11 = *piVar19;
              iVar2 = 0;
              if (iVar11 == 0) goto LAB_01ce4d4c;
            }
            piVar3 = *(int **)(_UNK_01ce2f50 + 0x1ce1f9c);
            uVar20 = *(undefined4 *)(iVar11 + 0x10);
            iVar2 = *piVar3;
            uVar15 = *(undefined4 *)(iVar14 + 8);
            uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
            if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
               (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
              func_0x01384fb4(piVar12);
              func_0x01384bf0();
            }
            iVar2 = *piVar3;
            uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
            if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
               (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
              func_0x01384fb4(piVar12);
              piVar12 = (int *)0x0;
            }
            func_0x02496960(piVar12,uVar15,uVar20,0);
          }
        }
      }
      else if (iVar11 == 0x29) {
        iVar2 = FUN_01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar4 = *(int **)(iVar2 + 0xd8);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x02b3c518(piVar4,0x1c,&piStack_30,0);
        piVar12 = piStack_30;
        if (piStack_30 != (int *)0x0) {
          iVar14 = *piVar19;
          iVar11 = iVar14;
          if (iVar14 == 0) {
            func_0x01384bf0();
            iVar11 = *piVar19;
            iVar2 = 0;
            if (iVar11 == 0) goto LAB_01ce4d4c;
          }
          piVar3 = *(int **)(_UNK_01ce385c + 0x1ce2868);
          uVar20 = *(undefined4 *)(iVar11 + 0x10);
          iVar2 = *piVar3;
          uVar15 = *(undefined4 *)(iVar14 + 8);
          uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
          if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
             (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
            func_0x01384fb4(piVar12);
            func_0x01384bf0();
          }
          iVar2 = *piVar3;
          uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
          if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
             (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
            func_0x01384fb4(piVar12);
            piVar12 = (int *)0x0;
          }
          func_0x023b0868(piVar12,uVar15,uVar20,0);
        }
      }
      else {
        if (iVar11 != 0x33) goto LAB_01ce2698;
        piVar4 = (int *)FUN_01c24918(0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar19;
        piVar12 = (int *)piVar4[0x33];
        if (iVar2 == 0) {
          func_0x01384bf0();
          piVar3 = piRam00000008;
          iVar2 = *piVar19;
          iVar11 = iVar2;
          if (iVar2 == 0) {
            func_0x01384bf0();
            iVar11 = *piVar19;
            if (*piVar19 == 0) {
              iVar2 = 0;
              goto LAB_01ce4d4c;
            }
          }
        }
        else {
          piVar3 = *(int **)(iVar2 + 8);
          iVar11 = iVar2;
        }
        uVar20 = *(undefined4 *)(iVar11 + 0x14);
        uVar15 = *(undefined4 *)(iVar2 + 0x10);
        if (piVar12 == (int *)0x0) {
          func_0x01384bf0();
        }
        uStack_108 = 0;
        func_0x02621528(piVar12,piVar3,uVar15,uVar20);
      }
      goto LAB_01ce26f4;
    }
    if (iVar11 < 0x46) {
      if (iVar11 < 0x41) {
        switch(iVar11) {
        case 0x39:
          iVar11 = FUN_01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0xd8);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x02b3c518(iVar11,0x28,&piStack_3c,0);
          piVar12 = piStack_3c;
          if (iVar11 != 0) {
            iVar14 = *piVar19;
            iVar11 = iVar14;
            if (iVar14 == 0) {
              func_0x01384bf0();
              iVar11 = *piVar19;
              piVar4 = (int *)0x0;
              if (iVar11 == 0) goto LAB_01ce4d4c;
            }
            uVar20 = *(undefined4 *)(iVar11 + 0x10);
            uVar15 = *(undefined4 *)(iVar14 + 8);
            if (piVar12 == (int *)0x0) {
              func_0x01384bf0();
code_r0x01ce41a4:
              piVar12 = (int *)0x0;
            }
            else {
              piVar3 = *(int **)(&UNK_01ce2208 + _UNK_01ce31f4);
              iVar2 = *piVar3;
              uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
              if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
                 (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
                func_0x01384fb4(piVar12);
                func_0x01384bf0();
              }
              iVar2 = *piVar3;
              uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
              if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
                 (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
                func_0x01384fb4(piVar12);
                goto code_r0x01ce41a4;
              }
            }
            func_0x0294debc(piVar12,uVar15,uVar20,0);
          }
          break;
        case 0x3a:
          iVar2 = FUN_01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          piVar4 = *(int **)(iVar2 + 0xd8);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          func_0x02b3c518(piVar4,0x29,&piStack_4c,0);
          piVar12 = piStack_4c;
          if (piStack_4c != (int *)0x0) {
            iVar14 = *piVar19;
            iVar11 = iVar14;
            if (iVar14 == 0) {
              func_0x01384bf0();
              iVar11 = *piVar19;
              iVar2 = 0;
              if (iVar11 == 0) goto LAB_01ce4d4c;
            }
            piVar3 = *(int **)(&UNK_01ce3024 + _UNK_01ce3f74);
            uVar20 = *(undefined4 *)(iVar11 + 0x10);
            iVar2 = *piVar3;
            uVar15 = *(undefined4 *)(iVar14 + 8);
            uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
            if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
               (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
              func_0x01384fb4(piVar12);
              func_0x01384bf0();
            }
            iVar2 = *piVar3;
            uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
            if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
               (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
              func_0x01384fb4(piVar12);
              piVar12 = (int *)0x0;
            }
            func_0x01e74464(piVar12,uVar15,uVar20,0);
          }
          break;
        default:
          goto LAB_01ce2698;
        case 0x3c:
          piVar4 = (int *)FUN_01c24918(0);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar19;
          piVar12 = (int *)piVar4[0x32];
          if (iVar2 == 0) {
            func_0x01384bf0();
            piVar3 = piRam00000008;
            iVar2 = *piVar19;
            iVar11 = iVar2;
            if (iVar2 == 0) {
              func_0x01384bf0();
              iVar11 = *piVar19;
              if (*piVar19 == 0) {
                iVar2 = 0;
                goto LAB_01ce4d4c;
              }
            }
          }
          else {
            piVar3 = *(int **)(iVar2 + 8);
            iVar11 = iVar2;
          }
          uVar20 = *(undefined4 *)(iVar11 + 0x14);
          uVar15 = *(undefined4 *)(iVar2 + 0x10);
          if (piVar12 == (int *)0x0) {
            func_0x01384bf0();
          }
          uStack_108 = 0;
          func_0x01a6bb94(piVar12,piVar3,uVar15,uVar20);
          break;
        case 0x40:
          iVar11 = FUN_01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0xd8);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x02b3c518(iVar11,0x2f,&piStack_70,0);
          if (iVar11 != 0) {
            iVar11 = *piVar19;
            if (iVar11 == 0) {
              func_0x01384bf0();
              iVar11 = *piVar19;
              uRam00000030 = 1;
              piVar4 = (int *)0x0;
              if (iVar11 == 0) goto LAB_01ce4d4c;
            }
            else {
              *(undefined1 *)(iVar11 + 0x30) = 1;
            }
            piVar12 = (int *)0x0;
            if ((*(int **)(iVar11 + 0x1c) != (int *)0x0) &&
               (**(int **)(iVar11 + 0x1c) == **(int **)(&UNK_01ce41f4 + iRam01ce4d68))) {
              piVar12 = (int *)func_0x01384ac0();
              piVar12 = (int *)*piVar12;
            }
            piVar3 = piStack_70;
            if (piStack_70 != (int *)0x0) {
              uVar17 = (uint)*(byte *)(**(int **)(&UNK_01ce4220 + iRam01ce4d6c) + 0xb8);
              if ((uVar17 <= *(byte *)(*piStack_70 + 0xb8)) &&
                 (*(int *)(*(int *)(*piStack_70 + 100) + uVar17 * 4 + -4) ==
                  **(int **)(&UNK_01ce4220 + iRam01ce4d6c))) {
                iVar14 = *piVar19;
                iVar11 = iVar14;
                if (iVar14 == 0) {
                  func_0x01384bf0();
                  iVar11 = *piVar19;
                  piVar4 = (int *)0x0;
                  if (iVar11 == 0) goto LAB_01ce4d4c;
                }
                uStack_108 = 0;
                func_0x029a4b88(piVar3,*(undefined4 *)(iVar14 + 8),*(undefined4 *)(iVar11 + 0x10),
                                piVar12);
              }
            }
          }
        }
      }
      else if (iVar11 == 0x42) {
        iVar2 = FUN_01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar4 = *(int **)(iVar2 + 0xd8);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x02b3c518(piVar4,0x31,&piStack_54,0);
        piVar12 = piStack_54;
        if (piStack_54 != (int *)0x0) {
          iVar14 = *piVar19;
          iVar11 = iVar14;
          if (iVar14 == 0) {
            func_0x01384bf0();
            iVar11 = *piVar19;
            iVar2 = 0;
            if (iVar11 == 0) goto LAB_01ce4d4c;
          }
          piVar3 = *(int **)(_UNK_01ce3938 + 0x1ce29c8);
          uVar20 = *(undefined4 *)(iVar11 + 0x10);
          iVar2 = *piVar3;
          uVar15 = *(undefined4 *)(iVar14 + 8);
          uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
          if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
             (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
            func_0x01384fb4(piVar12);
            func_0x01384bf0();
          }
          iVar2 = *piVar3;
          uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
          if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
             (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
            func_0x01384fb4(piVar12);
            piVar12 = (int *)0x0;
          }
          func_0x02917fdc(piVar12,uVar15,uVar20,0);
        }
      }
      else if (iVar11 != 0x45) goto LAB_01ce2698;
    }
    else if (iVar11 < 0x4b) {
      if (iVar11 == 0x48) {
        iVar11 = FUN_01c24918(0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar11 + 0xd8);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        func_0x02b3c518(iVar11,0x36,&piStack_58,0);
        piVar12 = piStack_58;
        if (piStack_58 != (int *)0x0) {
          iVar11 = *piVar19;
          if (iVar11 == 0) {
            func_0x01384bf0();
            piVar18 = piRam00000008;
            iVar11 = *piVar19;
            iVar14 = iVar11;
            if (iVar11 == 0) {
              func_0x01384bf0();
              iVar14 = *piVar19;
              if (*piVar19 == 0) {
                piVar4 = (int *)0x0;
                goto LAB_01ce4d4c;
              }
            }
          }
          else {
            piVar18 = *(int **)(iVar11 + 8);
            iVar14 = iVar11;
          }
          piVar3 = *(int **)(_UNK_01ce4c0c + 0x1ce3cac);
          uVar15 = *(undefined4 *)(iVar14 + 0x14);
          iVar2 = *piVar3;
          uVar20 = *(undefined4 *)(iVar11 + 0x10);
          uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
          if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
             (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
            func_0x01384fb4(piVar12);
            func_0x01384bf0();
          }
          iVar2 = *piVar3;
          uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
          if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
             (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
            func_0x01384fb4(piVar12);
            piVar12 = (int *)0x0;
          }
          uStack_108 = 0;
          func_0x028f1568(piVar12,piVar18,uVar20,uVar15);
        }
      }
      else {
        if (iVar11 != 0x4a) goto LAB_01ce2698;
        iVar2 = FUN_01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar4 = *(int **)(iVar2 + 0xd8);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x02b3c518(piVar4,0x38,&piStack_38,0);
        piVar12 = piStack_38;
        if (piStack_38 != (int *)0x0) {
          iVar14 = *piVar19;
          iVar11 = iVar14;
          if (iVar14 == 0) {
            func_0x01384bf0();
            iVar11 = *piVar19;
            iVar2 = 0;
            if (iVar11 == 0) goto LAB_01ce4d4c;
          }
          piVar3 = *(int **)(_UNK_01ce2d50 + 0x1ce1d60);
          uVar20 = *(undefined4 *)(iVar11 + 0x10);
          iVar2 = *piVar3;
          uVar15 = *(undefined4 *)(iVar14 + 8);
          uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
          if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
             (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
            func_0x01384fb4(piVar12);
            func_0x01384bf0();
          }
          iVar2 = *piVar3;
          uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
          if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
             (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
            func_0x01384fb4(piVar12);
            piVar12 = (int *)0x0;
          }
          func_0x02a22358(piVar12,uVar15,uVar20,0);
        }
      }
    }
    else if (iVar11 == 0x4e) {
      iVar11 = FUN_01c24918(0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0xd8);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x02b3c518(iVar11,0x3c,&piStack_6c,0);
      piVar12 = piStack_6c;
      if (piStack_6c != (int *)0x0) {
        iVar11 = *piVar19;
        if (iVar11 == 0) {
          func_0x01384bf0();
          piVar18 = piRam00000008;
          iVar11 = *piVar19;
          iVar14 = iVar11;
          if (iVar11 == 0) {
            func_0x01384bf0();
            iVar14 = *piVar19;
            if (*piVar19 == 0) {
              piVar4 = (int *)0x0;
              goto LAB_01ce4d4c;
            }
          }
        }
        else {
          piVar18 = *(int **)(iVar11 + 8);
          iVar14 = iVar11;
        }
        piVar3 = *(int **)(iRam01ce4d64 + 0x1ce3ee0);
        uVar15 = *(undefined4 *)(iVar14 + 0x14);
        iVar2 = *piVar3;
        uVar20 = *(undefined4 *)(iVar11 + 0x10);
        uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
           (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
          func_0x01384fb4(piVar12);
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
           (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
          func_0x01384fb4(piVar12);
          piVar12 = (int *)0x0;
        }
        uStack_108 = 0;
        func_0x02aaae6c(piVar12,piVar18,uVar20,uVar15);
      }
    }
    else if (iVar11 == 0x51) {
      iVar11 = FUN_01c24918(0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0xd8);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x02b3c518(iVar11,0x3e,&piStack_78,0);
      piVar12 = piStack_78;
      if (piStack_78 == (int *)0x0) goto LAB_01ce26f4;
      iVar11 = *piVar19;
      if (iVar11 == 0) {
        func_0x01384bf0();
        piVar18 = piRam00000008;
        iVar11 = *piVar19;
        if (iVar11 != 0) goto LAB_01ce3f8c;
        func_0x01384bf0();
        unaff_r11 = uRam00000010;
        iVar11 = *piVar19;
        iVar14 = iVar11;
        if (iVar11 == 0) {
          func_0x01384bf0();
          iVar14 = *piVar19;
          if (*piVar19 == 0) {
            piVar4 = (int *)0x0;
            goto LAB_01ce4d4c;
          }
        }
      }
      else {
        piVar18 = *(int **)(iVar11 + 8);
LAB_01ce3f8c:
        unaff_r11 = *(uint *)(iVar11 + 0x10);
        iVar14 = iVar11;
      }
      piVar3 = *(int **)(iRam01ce4d70 + 0x1ce3fa0);
      uVar15 = *(undefined4 *)(iVar14 + 0x18);
      uVar5 = *(undefined4 *)(iVar14 + 0x1c);
      iVar2 = *piVar3;
      uVar20 = *(undefined4 *)(iVar11 + 0x14);
      uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
      if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
         (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
        func_0x01384fb4(piVar12);
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
      if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
         (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
        func_0x01384fb4(piVar12);
        piVar12 = (int *)0x0;
      }
      uStack_100 = 0;
      uStack_108 = uVar15;
      uStack_104 = uVar5;
      func_0x0282e520(piVar12,piVar18,unaff_r11,uVar20);
    }
    else {
      if (iVar11 != 0x53) goto LAB_01ce2698;
      iVar2 = FUN_01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0xd8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02b3c518(iVar2,0x40,&piStack_40,0);
      piVar3 = piStack_40;
      if (iVar2 == 0) goto LAB_01ce26f4;
      iVar2 = *piVar19;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar20 = *(undefined4 *)(iVar2 + 0x10);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
LAB_01ce4040:
        piVar3 = (int *)0x0;
      }
      else {
        piVar12 = *(int **)(_UNK_01ce2358 + 0x1ce1468);
        iVar2 = *piVar12;
        uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((*(byte *)(*piVar3 + 0xb8) < uVar17) ||
           (*(int *)(*(int *)(*piVar3 + 100) + uVar17 * 4 + -4) != iVar2)) {
          func_0x01384fb4(piVar3);
          func_0x01384bf0();
        }
        iVar2 = *piVar12;
        uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((*(byte *)(*piVar3 + 0xb8) < uVar17) ||
           (*(int *)(*(int *)(*piVar3 + 100) + uVar17 * 4 + -4) != iVar2)) {
          func_0x01384fb4(piVar3);
          goto LAB_01ce4040;
        }
      }
      func_0x0286e744(piVar3,uVar20,0);
    }
    goto LAB_01ce26f4;
  }
  if (iVar11 < 0x7c) {
    if (iVar11 < 0x66) {
      if (iVar11 < 0x60) {
        if (iVar11 == 0x59) {
          iVar11 = FUN_01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0xd8);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x02b3c518(iVar11,0x44,&piStack_7c,0);
          if (iVar11 != 0) {
            iVar11 = *piVar19;
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            piVar12 = piStack_7c;
            piVar4 = *(int **)(_UNK_01ce3d40 + 0x1ce2db8);
            *(undefined1 *)(iVar11 + 0x30) = 1;
            if (piStack_7c != (int *)0x0) {
              uVar17 = (uint)*(byte *)(*piVar4 + 0xb8);
              if ((uVar17 <= *(byte *)(*piStack_7c + 0xb8)) &&
                 (*(int *)(*(int *)(*piStack_7c + 100) + uVar17 * 4 + -4) == *piVar4)) {
                iVar14 = *piVar19;
                iVar11 = iVar14;
                if (iVar14 == 0) {
                  func_0x01384bf0();
                  iVar11 = *piVar19;
                  piVar4 = (int *)0x0;
                  if (iVar11 == 0) goto LAB_01ce4d4c;
                }
                func_0x028912e8(piVar12,*(undefined4 *)(iVar14 + 8),*(undefined4 *)(iVar11 + 0x10),0
                               );
              }
            }
          }
        }
        else {
          if (iVar11 != 0x5f) goto LAB_01ce2698;
          iVar11 = FUN_01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0xd8);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x02b3c518(iVar11,0x4a,&piStack_74,0);
          if (iVar11 != 0) {
            iVar11 = *piVar19;
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            piVar12 = piStack_74;
            piVar4 = *(int **)(_UNK_01ce32b8 + 0x1ce22e8);
            *(undefined1 *)(iVar11 + 0x30) = 1;
            if (piStack_74 != (int *)0x0) {
              uVar17 = (uint)*(byte *)(*piVar4 + 0xb8);
              if ((uVar17 <= *(byte *)(*piStack_74 + 0xb8)) &&
                 (*(int *)(*(int *)(*piStack_74 + 100) + uVar17 * 4 + -4) == *piVar4)) {
                iVar14 = *piVar19;
                iVar11 = iVar14;
                if (iVar14 == 0) {
                  func_0x01384bf0();
                  iVar11 = *piVar19;
                  piVar4 = (int *)0x0;
                  if (iVar11 == 0) goto LAB_01ce4d4c;
                }
                func_0x02ac119c(piVar12,*(undefined4 *)(iVar14 + 8),*(undefined4 *)(iVar11 + 0x10),0
                               );
              }
            }
          }
        }
      }
      else if (iVar11 == 0x60) {
        iVar2 = FUN_01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar4 = *(int **)(iVar2 + 0xd8);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x02b3c518(piVar4,0x4c,&piStack_98,0);
        piVar12 = piStack_98;
        if (piStack_98 != (int *)0x0) {
          iVar14 = *piVar19;
          iVar11 = iVar14;
          if (iVar14 == 0) {
            func_0x01384bf0();
            iVar11 = *piVar19;
            iVar2 = 0;
            if (iVar11 == 0) goto LAB_01ce4d4c;
          }
          piVar3 = *(int **)(_UNK_01ce3a94 + 0x1ce2acc);
          uVar20 = *(undefined4 *)(iVar11 + 0x10);
          iVar2 = *piVar3;
          uVar15 = *(undefined4 *)(iVar14 + 8);
          uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
          if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
             (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
            func_0x01384fb4(piVar12);
            func_0x01384bf0();
          }
          iVar2 = *piVar3;
          uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
          if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
             (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
            func_0x01384fb4(piVar12);
            piVar12 = (int *)0x0;
          }
          func_0x01d253d4(piVar12,uVar15,uVar20,0);
        }
      }
      else {
        if (iVar11 != 0x65) goto LAB_01ce2698;
        iVar11 = FUN_01c24918(0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar11 + 0xd8);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        func_0x02b3c518(iVar11,0x51,&piStack_9c,0);
        piVar4 = piStack_9c;
        if (piStack_9c != (int *)0x0) {
          iVar14 = *piVar19;
          iVar11 = iVar14;
          if (iVar14 == 0) {
            func_0x01384bf0();
            iVar11 = *piVar19;
            piVar3 = (int *)0x0;
            if (iVar11 == 0) goto LAB_01ce4d4c;
          }
          piVar3 = *(int **)(_UNK_01ce2950 + 0x1ce1a00);
          uVar20 = *(undefined4 *)(iVar11 + 0x10);
          iVar2 = *piVar3;
          uVar15 = *(undefined4 *)(iVar14 + 8);
          if (((uint)*(byte *)(*piVar4 + 0xb8) < (uint)*(byte *)(iVar2 + 0xb8)) ||
             (*(int *)(*(int *)(*piVar4 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
          {
            func_0x01384bf0();
            iVar2 = *piVar3;
          }
          piVar3 = (int *)0x0;
          if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar4 + 0xb8)) &&
             (piVar3 = piVar4,
             *(int *)(*(int *)(*piVar4 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
            piVar3 = (int *)0x0;
          }
          func_0x027b0c0c(piVar3,uVar15,uVar20,0);
        }
      }
    }
    else if (iVar11 < 0x6c) {
      if (iVar11 == 0x69) {
        iVar11 = FUN_01c24918(0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar11 + 0xd8);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        func_0x02b3c518(iVar11,0x52,&piStack_a4,0);
        piVar12 = piStack_a4;
        if (piStack_a4 != (int *)0x0) {
          iVar11 = *piVar19;
          if (iVar11 == 0) {
            func_0x01384bf0();
            piVar18 = piRam00000008;
            iVar11 = *piVar19;
            iVar14 = iVar11;
            if (iVar11 == 0) {
              func_0x01384bf0();
              iVar14 = *piVar19;
              if (*piVar19 == 0) {
                piVar4 = (int *)0x0;
                goto LAB_01ce4d4c;
              }
            }
          }
          else {
            piVar18 = *(int **)(iVar11 + 8);
            iVar14 = iVar11;
          }
          piVar3 = *(int **)(iRam01ce4d50 + 0x1ce3d68);
          uVar15 = *(undefined4 *)(iVar14 + 0x14);
          iVar2 = *piVar3;
          uVar20 = *(undefined4 *)(iVar11 + 0x10);
          uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
          if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
             (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
            func_0x01384fb4(piVar12);
            func_0x01384bf0();
          }
          iVar2 = *piVar3;
          uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
          if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
             (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
            func_0x01384fb4(piVar12);
            piVar12 = (int *)0x0;
          }
          uStack_108 = 0;
          func_0x02756c68(piVar12,piVar18,uVar20,uVar15);
        }
      }
      else {
        if (iVar11 != 0x6b) goto LAB_01ce2698;
        iVar2 = FUN_01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0xd8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02b3c518(iVar2,0x54,&piStack_44,0);
        if (iVar2 != 0) {
          piVar12 = piStack_44;
        }
        if (iVar2 != 0 && piVar12 != (int *)0x0) {
          uVar17 = (uint)*(byte *)(**(int **)(_UNK_01ce2e28 + 0x1ce1e54) + 0xb8);
          if ((uVar17 <= *(byte *)(*piVar12 + 0xb8)) &&
             (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) ==
              **(int **)(_UNK_01ce2e28 + 0x1ce1e54))) {
            iVar2 = *piVar19;
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            piVar3 = *(int **)(_UNK_01ce2e2c + 0x1ce1e98);
            iVar14 = *(int *)(iVar2 + 0x14);
            iVar11 = *piVar3;
            if (*(int *)(iVar11 + 0x74) == 0) {
              func_0x01384ab4();
              iVar11 = *piVar3;
            }
            iVar2 = *piVar19;
            iVar11 = *(int *)(*(int *)(iVar11 + 0x5c) + 0x2dc);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            if (iVar14 == iVar11) {
              *(undefined1 *)(iVar2 + 0x30) = 1;
            }
            else {
              iVar14 = *piVar19;
              piVar4 = *(int **)(iVar2 + 8);
              iVar11 = iVar14;
              if (iVar14 == 0) {
                func_0x01384bf0();
                iVar11 = *piVar19;
                piVar3 = (int *)0x0;
                if (iVar11 == 0) goto LAB_01ce4d4c;
              }
              uStack_108 = 0;
              func_0x027efeac(piVar12,piVar4,*(undefined4 *)(iVar14 + 0x10),
                              *(undefined4 *)(iVar11 + 0x14));
            }
          }
        }
      }
    }
    else if (iVar11 == 0x76) {
      iVar11 = FUN_01c24918(0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0xd8);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x02b3c518(iVar11,0x59,&piStack_5c,0);
      piVar12 = piStack_5c;
      if (piStack_5c != (int *)0x0) {
        iVar11 = *piVar19;
        if (iVar11 == 0) {
          func_0x01384bf0();
          piVar18 = piRam00000008;
          iVar11 = *piVar19;
          iVar14 = iVar11;
          if (iVar11 == 0) {
            func_0x01384bf0();
            iVar14 = *piVar19;
            if (*piVar19 == 0) {
              piVar4 = (int *)0x0;
              goto LAB_01ce4d4c;
            }
          }
        }
        else {
          piVar18 = *(int **)(iVar11 + 8);
          iVar14 = iVar11;
        }
        piVar3 = *(int **)(_UNK_01ce4afc + 0x1ce3b38);
        uVar15 = *(undefined4 *)(iVar14 + 0x14);
        iVar2 = *piVar3;
        uVar20 = *(undefined4 *)(iVar11 + 0x10);
        uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
           (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
          func_0x01384fb4(piVar12);
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
           (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
          func_0x01384fb4(piVar12);
          piVar12 = (int *)0x0;
        }
        uStack_108 = 0;
        func_0x02bc98c4(piVar12,piVar18,uVar20,uVar15);
      }
    }
    else {
      if (iVar11 != 0x7b) goto LAB_01ce2698;
      iVar11 = FUN_01c24918(0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0xd8);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x02b3c518(iVar11,0x5b,&piStack_80,0);
      if (iVar11 != 0) {
        iVar11 = *piVar19;
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        piVar12 = piStack_80;
        piVar4 = *(int **)(_UNK_01ce2774 + 0x1ce1798);
        *(undefined1 *)(iVar11 + 0x30) = 1;
        if (piStack_80 != (int *)0x0) {
          uVar17 = (uint)*(byte *)(*piVar4 + 0xb8);
          if ((uVar17 <= *(byte *)(*piStack_80 + 0xb8)) &&
             (*(int *)(*(int *)(*piStack_80 + 100) + uVar17 * 4 + -4) == *piVar4)) {
            iVar14 = *piVar19;
            iVar11 = iVar14;
            if (iVar14 == 0) {
              func_0x01384bf0();
              iVar11 = *piVar19;
              piVar4 = (int *)0x0;
              if (iVar11 == 0) goto LAB_01ce4d4c;
            }
            func_0x025bb264(piVar12,*(undefined4 *)(iVar14 + 8),*(undefined4 *)(iVar11 + 0x10),0);
          }
        }
      }
    }
    goto LAB_01ce26f4;
  }
  if (iVar11 < 0x9c) {
    if (iVar11 < 0x97) {
      if (iVar11 < 0x8d) {
        if (iVar11 == 0x89) {
          iVar11 = FUN_01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0xd8);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          func_0x02b3c518(iVar11,0x67,&piStack_b4,0);
          piVar12 = piStack_b4;
          if (piStack_b4 != (int *)0x0) {
            iVar11 = *piVar19;
            if (iVar11 == 0) {
              func_0x01384bf0();
              piVar18 = piRam00000008;
              iVar11 = *piVar19;
              iVar14 = iVar11;
              if (iVar11 == 0) {
                func_0x01384bf0();
                iVar14 = *piVar19;
                if (*piVar19 == 0) {
                  piVar4 = (int *)0x0;
                  goto LAB_01ce4d4c;
                }
              }
            }
            else {
              piVar18 = *(int **)(iVar11 + 8);
              iVar14 = iVar11;
            }
            piVar3 = *(int **)(iRam01ce4d9c + 0x1ce407c);
            uVar15 = *(undefined4 *)(iVar14 + 0x14);
            iVar2 = *piVar3;
            uVar20 = *(undefined4 *)(iVar11 + 0x10);
            uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
            if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
               (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
              func_0x01384fb4(piVar12);
              func_0x01384bf0();
            }
            iVar2 = *piVar3;
            uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
            if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
               (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
              func_0x01384fb4(piVar12);
              piVar12 = (int *)0x0;
            }
            uStack_108 = 0;
            func_0x026bdc28(piVar12,piVar18,uVar20,uVar15);
          }
        }
        else {
          if (iVar11 != 0x8a) goto LAB_01ce2698;
          iVar2 = FUN_01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          piVar4 = *(int **)(iVar2 + 0xd8);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          func_0x02b3c518(piVar4,0x68,&piStack_34,0);
          piVar12 = piStack_34;
          if (piStack_34 != (int *)0x0) {
            iVar14 = *piVar19;
            iVar11 = iVar14;
            if (iVar14 == 0) {
              func_0x01384bf0();
              iVar11 = *piVar19;
              iVar2 = 0;
              if (iVar11 == 0) goto LAB_01ce4d4c;
            }
            piVar3 = *(int **)(_UNK_01ce30b0 + 0x1ce20c0);
            uVar20 = *(undefined4 *)(iVar11 + 0x10);
            iVar2 = *piVar3;
            uVar15 = *(undefined4 *)(iVar14 + 8);
            uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
            if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
               (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
              func_0x01384fb4(piVar12);
              func_0x01384bf0();
            }
            iVar2 = *piVar3;
            uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
            if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
               (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
              func_0x01384fb4(piVar12);
              piVar12 = (int *)0x0;
            }
            func_0x0241bbec(piVar12,uVar15,uVar20,0);
          }
        }
      }
      else if (iVar11 == 0x8d) {
        iVar11 = *piVar19;
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar11 + 0x10)) {
          iVar11 = FUN_01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0xd8);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x02b3c518(iVar11,0x69,&piStack_28,0);
          if (iVar11 != 0) {
            piVar12 = piStack_28;
          }
          if (iVar11 != 0 && piVar12 != (int *)0x0) {
            uVar17 = (uint)*(byte *)(**(int **)(_UNK_01ce419c + 0x1ce31b8) + 0xb8);
            if ((uVar17 <= *(byte *)(*piVar12 + 0xb8)) &&
               (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) ==
                **(int **)(_UNK_01ce419c + 0x1ce31b8))) {
              iVar11 = *piVar19;
              if (iVar11 == 0) {
                func_0x01384bf0();
                piVar3 = piRam00000008;
                iVar11 = *piVar19;
                iVar14 = iVar11;
                if (iVar11 == 0) {
                  func_0x01384bf0();
                  iVar14 = *piVar19;
                  if (*piVar19 == 0) {
                    piVar4 = (int *)0x0;
                    goto LAB_01ce4d4c;
                  }
                }
              }
              else {
                piVar3 = *(int **)(iVar11 + 8);
                iVar14 = iVar11;
              }
              uStack_108 = 0;
              func_0x02a35b80(piVar12,piVar3,*(undefined4 *)(iVar11 + 0x10),
                              *(undefined4 *)(iVar14 + 0x14));
            }
          }
        }
      }
      else {
        if (iVar11 != 0x96) goto LAB_01ce2698;
        iVar11 = FUN_01c24918(0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar11 + 0xd8);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        func_0x02b3c518(iVar11,0x6d,&piStack_a8,0);
        piVar12 = piStack_a8;
        if (piStack_a8 == (int *)0x0) {
          iVar2 = *piVar19;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iStack_e8 = *(int *)(iVar2 + 8);
          puVar10 = *(undefined4 **)(iRam01ce4d84 + 0x1ce3e1c);
          uVar20 = func_0x01384abc(*puVar10,&iStack_e8);
          iVar2 = *piVar19;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uStack_ec = *(undefined4 *)(iVar2 + 0x10);
          uVar15 = func_0x01384abc(*puVar10,&uStack_ec);
          iVar2 = *piVar19;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          puVar10 = *(undefined4 **)(&UNK_01ce3e70 + iRam01ce4d88);
          goto LAB_01ce442c;
        }
        uVar17 = (uint)*(byte *)(**(int **)(_UNK_01ce349c + 0x1ce24d0) + 0xb8);
        if ((*(byte *)(*piStack_a8 + 0xb8) < uVar17) ||
           (*(int *)(*(int *)(*piStack_a8 + 100) + uVar17 * 4 + -4) !=
            **(int **)(_UNK_01ce349c + 0x1ce24d0))) {
          piVar3 = (int *)func_0x02450044(piStack_a8,0);
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          uVar20 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
          puVar10 = *(undefined4 **)(&UNK_01ce2538 + _UNK_01ce3530);
          goto LAB_01ce39f4;
        }
        iVar11 = *piVar19;
        if (iVar11 == 0) {
          func_0x01384bf0();
          piVar3 = piRam00000008;
          iVar11 = *piVar19;
          iVar14 = iVar11;
          if (iVar11 == 0) {
            func_0x01384bf0();
            iVar14 = *piVar19;
            if (*piVar19 == 0) {
              piVar4 = (int *)0x0;
              goto LAB_01ce4d4c;
            }
          }
        }
        else {
          piVar3 = *(int **)(iVar11 + 8);
          iVar14 = iVar11;
        }
        uStack_108 = 0;
        func_0x019cb680(piVar12,piVar3,*(undefined4 *)(iVar11 + 0x10),*(undefined4 *)(iVar14 + 0x14)
                       );
      }
    }
    else if (iVar11 == 0x99) {
      iVar11 = FUN_01c24918(0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0xd8);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x02b3c518(iVar11,0x6e,&piStack_60,0);
      piVar12 = piStack_60;
      if (piStack_60 != (int *)0x0) {
        iVar11 = *piVar19;
        if (iVar11 == 0) {
          func_0x01384bf0();
          piVar18 = piRam00000008;
          iVar11 = *piVar19;
          iVar14 = iVar11;
          if (iVar11 == 0) {
            func_0x01384bf0();
            iVar14 = *piVar19;
            if (*piVar19 == 0) {
              piVar4 = (int *)0x0;
              goto LAB_01ce4d4c;
            }
          }
        }
        else {
          piVar18 = *(int **)(iVar11 + 8);
          iVar14 = iVar11;
        }
        piVar3 = *(int **)(_UNK_01ce4bbc + 0x1ce3bf4);
        uVar15 = *(undefined4 *)(iVar14 + 0x14);
        iVar2 = *piVar3;
        uVar20 = *(undefined4 *)(iVar11 + 0x10);
        uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
           (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
          func_0x01384fb4(piVar12);
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
           (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
          func_0x01384fb4(piVar12);
          piVar12 = (int *)0x0;
        }
        uStack_108 = 0;
        func_0x01a052a8(piVar12,piVar18,uVar20,uVar15);
      }
    }
    else {
      if (iVar11 != 0x9b) goto LAB_01ce2698;
      iVar2 = FUN_01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0xd8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02b3c518(iVar2,0x70,&piStack_a0,0);
      piVar3 = piStack_a0;
      if (piStack_a0 != (int *)0x0) {
        piVar12 = *(int **)(_UNK_01ce27f0 + 0x1ce18d4);
        iVar11 = *piVar19;
        iVar2 = *piVar12;
        uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((*(byte *)(*piStack_a0 + 0xb8) < uVar17) ||
           (*(int *)(*(int *)(*piStack_a0 + 100) + uVar17 * 4 + -4) != iVar2)) {
          func_0x01384fb4(piStack_a0);
          func_0x01384bf0();
        }
        iVar2 = *piVar12;
        uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((*(byte *)(*piVar3 + 0xb8) < uVar17) ||
           (*(int *)(*(int *)(*piVar3 + 100) + uVar17 * 4 + -4) != iVar2)) {
          func_0x01384fb4(piVar3);
          piVar3 = (int *)0x0;
        }
        func_0x02366d40(piVar3,iVar11,0);
      }
    }
    goto LAB_01ce26f4;
  }
  if (0xb3 < iVar11) {
    switch(iVar11) {
    case 0xbe:
      iVar11 = FUN_01c24918(0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0xd8);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x02b3c518(iVar11,0x86,&piStack_8c,0);
      if (iVar11 != 0) {
        iVar11 = *piVar19;
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        piVar12 = piStack_8c;
        piVar4 = *(int **)(&UNK_01ce0b38 + _UNK_01ce1a7c);
        *(undefined1 *)(iVar11 + 0x30) = 1;
        if (piStack_8c != (int *)0x0) {
          uVar17 = (uint)*(byte *)(*piVar4 + 0xb8);
          if ((uVar17 <= *(byte *)(*piStack_8c + 0xb8)) &&
             (*(int *)(*(int *)(*piStack_8c + 100) + uVar17 * 4 + -4) == *piVar4)) {
            iVar14 = *piVar19;
            iVar11 = iVar14;
            if (iVar14 == 0) {
              func_0x01384bf0();
              iVar11 = *piVar19;
              piVar4 = (int *)0x0;
              if (iVar11 == 0) goto LAB_01ce4d4c;
            }
            func_0x0264488c(piVar12,*(undefined4 *)(iVar14 + 8),*(undefined4 *)(iVar11 + 0x10),0);
          }
        }
      }
      break;
    case 0xbf:
    case 0xc0:
    case 0xc3:
      goto LAB_01ce2698;
    case 0xc1:
      iVar11 = FUN_01c24918(0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0xd8);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x02b3c518(iVar11,0x87,&piStack_c8,0);
      piVar12 = piStack_c8;
      if (piStack_c8 != (int *)0x0) {
        iVar11 = *piVar19;
        if (iVar11 == 0) {
          func_0x01384bf0();
          piVar18 = piRam00000008;
          iVar11 = *piVar19;
          iVar14 = iVar11;
          if (iVar11 == 0) {
            func_0x01384bf0();
            iVar14 = *piVar19;
            if (*piVar19 == 0) {
              piVar4 = (int *)0x0;
              goto LAB_01ce4d4c;
            }
          }
        }
        else {
          piVar18 = *(int **)(iVar11 + 8);
          iVar14 = iVar11;
        }
        piVar3 = *(int **)(&UNK_01ce42b0 + iRam01ce4dac);
        uVar15 = *(undefined4 *)(iVar14 + 0x14);
        iVar2 = *piVar3;
        uVar20 = *(undefined4 *)(iVar11 + 0x10);
        uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
           (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
          func_0x01384fb4(piVar12);
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
           (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
          func_0x01384fb4(piVar12);
          piVar12 = (int *)0x0;
        }
        uStack_108 = 0;
        func_0x01e9bbf8(piVar12,piVar18,uVar20,uVar15);
      }
      break;
    case 0xc2:
      iVar11 = *piVar19;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      piVar12 = *(int **)(&UNK_01ce32dc + _UNK_01ce4288);
      iVar14 = *(int *)(iVar11 + 0x14);
      iVar11 = *piVar12;
      if (*(int *)(iVar11 + 0x74) == 0) {
        func_0x01384ab4();
        iVar11 = *piVar12;
      }
      if (iVar14 != *(int *)(*(int *)(iVar11 + 0x5c) + 0x474)) {
        iVar11 = *piVar19;
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar11 + 0x10)) {
          iVar11 = FUN_01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0xd8);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = func_0x02b3c518(iVar11,0x88,&piStack_d8,0);
          if (iVar11 != 0) {
            piVar12 = piStack_d8;
          }
          if (iVar11 != 0 && piVar12 != (int *)0x0) {
            uVar17 = (uint)*(byte *)(**(int **)(&UNK_01ce3378 + _UNK_01ce4344) + 0xb8);
            if ((uVar17 <= *(byte *)(*piVar12 + 0xb8)) &&
               (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) ==
                **(int **)(&UNK_01ce3378 + _UNK_01ce4344))) {
              iVar11 = func_0x0289d780(piVar12,0);
              piVar3 = (int *)*piVar19;
              if (piVar3 == (int *)0x0) {
                func_0x01384bf0();
              }
              if (iVar11 == piVar3[2]) {
                iVar14 = *piVar19;
                iVar11 = iVar14;
                if (iVar14 == 0) {
                  func_0x01384bf0();
                  iVar11 = *piVar19;
                  piVar4 = (int *)0x0;
                  if (iVar11 == 0) goto LAB_01ce4d4c;
                }
                func_0x0289f1ec(piVar12,*(undefined4 *)(iVar14 + 0x10),
                                *(undefined4 *)(iVar11 + 0x14),0);
              }
            }
          }
        }
      }
      break;
    case 0xc4:
      iVar11 = FUN_01c24918(0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0xd8);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x02b3c518(iVar11,0x89,&piStack_cc,0);
      if (iVar11 != 0) {
        iVar11 = *piVar19;
        if (iVar11 == 0) {
          func_0x01384bf0();
          piVar4 = piStack_cc;
          iVar11 = *piVar19;
          uRam00000030 = 1;
          iVar14 = iVar11;
          if (iVar11 == 0) {
            func_0x01384bf0();
            piVar3 = (int *)0x0;
            piVar12 = (int *)0x0;
            iVar14 = *piVar19;
            if (*piVar19 == 0) goto LAB_01ce4d4c;
          }
        }
        else {
          *(undefined1 *)(iVar11 + 0x30) = 1;
          piVar4 = piStack_cc;
          iVar14 = iVar11;
        }
        uVar20 = *(undefined4 *)(iVar14 + 0x10);
        uVar15 = *(undefined4 *)(iVar11 + 8);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = *(int **)(&UNK_01ce48d0 + iRam01ce4db0);
          iVar2 = *piVar3;
          if (((uint)*(byte *)(*piVar4 + 0xb8) < (uint)*(byte *)(iVar2 + 0xb8)) ||
             (*(int *)(*(int *)(*piVar4 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
          {
            func_0x01384bf0();
            iVar2 = *piVar3;
          }
          piVar3 = (int *)0x0;
          if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar4 + 0xb8)) &&
             (piVar3 = piVar4,
             *(int *)(*(int *)(*piVar4 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
            piVar3 = (int *)0x0;
          }
        }
        func_0x029bfec0(piVar3,uVar15,uVar20,0);
      }
      break;
    default:
      if (iVar11 == 0xcb) {
        iVar11 = FUN_01c24918(0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar11 + 0xd8);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        func_0x02b3c518(iVar11,0x8f,&piStack_68,0);
        piVar12 = piStack_68;
        if (piStack_68 != (int *)0x0) {
          uVar17 = (uint)*(byte *)(**(int **)(_UNK_01ce44e0 + 0x1ce34f4) + 0xb8);
          if ((uVar17 <= *(byte *)(*piStack_68 + 0xb8)) &&
             (*(int *)(*(int *)(*piStack_68 + 100) + uVar17 * 4 + -4) ==
              **(int **)(_UNK_01ce44e0 + 0x1ce34f4))) {
            iVar11 = *piVar19;
            if (iVar11 == 0) {
              func_0x01384bf0();
              piVar3 = piRam00000008;
              iVar11 = *piVar19;
              iVar14 = iVar11;
              if (iVar11 == 0) {
                func_0x01384bf0();
                iVar14 = *piVar19;
                if (*piVar19 == 0) {
                  piVar4 = (int *)0x0;
                  goto LAB_01ce4d4c;
                }
              }
            }
            else {
              piVar3 = *(int **)(iVar11 + 8);
              iVar14 = iVar11;
            }
            uStack_108 = 0;
            func_0x02c15aa8(piVar12,piVar3,*(undefined4 *)(iVar11 + 0x10),
                            *(undefined4 *)(iVar14 + 0x14));
          }
        }
      }
      else {
        if (iVar11 != 0xcd) goto LAB_01ce2698;
        iVar11 = *piVar19;
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        piVar12 = *(int **)(_UNK_01ce3534 + 0x1ce2568);
        iVar14 = *(int *)(iVar11 + 0x14);
        iVar11 = *piVar12;
        if (*(int *)(iVar11 + 0x74) == 0) {
          func_0x01384ab4();
          iVar11 = *piVar12;
        }
        if (iVar14 != *(int *)(*(int *)(iVar11 + 0x5c) + 200)) {
          iVar11 = *piVar19;
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar11 + 0x10)) {
            iVar11 = FUN_01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0xd8);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x02b3c518(iVar11,0x91,&piStack_d4,0);
            if (iVar11 != 0) {
              piVar12 = piStack_d4;
            }
            if ((iVar11 != 0 && piVar12 != (int *)0x0) &&
               (*piVar12 == **(int **)(iRam01ce4d54 + 0x1ce4880))) {
              iVar11 = *piVar19;
              if (iVar11 == 0) {
                func_0x01384bf0();
                piVar3 = piRam00000008;
                iVar11 = *piVar19;
                iVar14 = iVar11;
                if (iVar11 == 0) {
                  func_0x01384bf0();
                  piVar4 = (int *)0x0;
                  iVar14 = *piVar19;
                  if (*piVar19 == 0) goto LAB_01ce4d4c;
                }
              }
              else {
                piVar3 = *(int **)(iVar11 + 8);
                iVar14 = iVar11;
              }
              uStack_108 = 0;
              iVar2 = func_0x01d469f4(piVar12,piVar3,*(undefined4 *)(iVar11 + 0x10),
                                      *(undefined4 *)(iVar14 + 0x14));
              if (iVar2 != 0) break;
              iStack_e8 = func_0x02b449f8(piVar12,0);
              puVar10 = *(undefined4 **)(iRam01ce4d58 + 0x1ce4c68);
              uVar20 = func_0x01384abc(*puVar10,&iStack_e8);
              iVar2 = *piVar19;
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              uStack_ec = *(undefined4 *)(iVar2 + 8);
              uVar15 = func_0x01384abc(*puVar10,&uStack_ec);
              iVar2 = *piVar19;
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              uStack_f0 = *(undefined4 *)(iVar2 + 0x10);
              uVar5 = func_0x01384abc(*puVar10,&uStack_f0);
              uStack_108 = 0;
              uVar20 = func_0x02450228(**(undefined4 **)(iRam01ce4d5c + 0x1ce4cdc),uVar20,uVar15,
                                       uVar5);
            }
            else {
              iVar2 = *piVar19;
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iStack_e8 = *(int *)(iVar2 + 8);
              puVar10 = *(undefined4 **)(_UNK_01ce3594 + 0x1ce2618);
              uVar20 = func_0x01384abc(*puVar10,&iStack_e8);
              iVar2 = *piVar19;
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              uStack_ec = *(undefined4 *)(iVar2 + 0x10);
              uVar15 = func_0x01384abc(*puVar10,&uStack_ec);
              uVar20 = func_0x0244f690(**(undefined4 **)(_UNK_01ce3598 + 0x1ce2664),uVar20,uVar15,0)
              ;
            }
            if (*(int *)(**(int **)(_UNK_01ce3670 + 0x1ce2678) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2944(uVar20,0);
          }
        }
      }
    }
    goto LAB_01ce26f4;
  }
  switch(iVar11) {
  case 0x9e:
    iVar11 = FUN_01c24918(0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xd8);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = func_0x02b3c518(iVar11,0x73,&piStack_84,0);
    if (iVar11 != 0) {
      iVar11 = *piVar19;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      piVar12 = piStack_84;
      piVar4 = *(int **)(&UNK_01ce1c6c + _UNK_01ce2c4c);
      *(undefined1 *)(iVar11 + 0x30) = 1;
      if (piStack_84 != (int *)0x0) {
        uVar17 = (uint)*(byte *)(*piVar4 + 0xb8);
        if ((uVar17 <= *(byte *)(*piStack_84 + 0xb8)) &&
           (*(int *)(*(int *)(*piStack_84 + 100) + uVar17 * 4 + -4) == *piVar4)) {
          iVar14 = *piVar19;
          iVar11 = iVar14;
          if (iVar14 == 0) {
            func_0x01384bf0();
            iVar11 = *piVar19;
            piVar4 = (int *)0x0;
            if (iVar11 == 0) goto LAB_01ce4d4c;
          }
          func_0x028b15e4(piVar12,*(undefined4 *)(iVar14 + 8),*(undefined4 *)(iVar11 + 0x10),0);
        }
      }
    }
    break;
  default:
LAB_01ce2698:
    iStack_e8 = iVar11;
    uVar20 = func_0x01384abc(**(undefined4 **)(_UNK_01ce3674 + 0x1ce26a4),&iStack_e8);
    uVar20 = func_0x0244f6a0(**(undefined4 **)(_UNK_01ce3678 + 0x1ce26c4),uVar20,0);
    piVar3 = *(int **)(_UNK_01ce367c + 0x1ce26d8);
    goto LAB_01ce26d4;
  case 0xa0:
    iVar11 = FUN_01c24918(0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xd8);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x02b3c518(iVar11,0x75,&piStack_b8,0);
    piVar12 = piStack_b8;
    if (piStack_b8 != (int *)0x0) {
      iVar11 = *piVar19;
      if (iVar11 == 0) {
        func_0x01384bf0();
        piVar18 = piRam00000008;
        iVar11 = *piVar19;
        iVar14 = iVar11;
        if (iVar11 == 0) {
          func_0x01384bf0();
          iVar14 = *piVar19;
          if (*piVar19 == 0) {
            piVar4 = (int *)0x0;
            goto LAB_01ce4d4c;
          }
        }
      }
      else {
        piVar18 = *(int **)(iVar11 + 8);
        iVar14 = iVar11;
      }
      piVar3 = *(int **)(&UNK_01ce4558 + iRam01ce4da0);
      uVar15 = *(undefined4 *)(iVar14 + 0x14);
      iVar2 = *piVar3;
      uVar20 = *(undefined4 *)(iVar11 + 0x10);
      uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
      if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
         (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
        func_0x01384fb4(piVar12);
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
      if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
         (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
        func_0x01384fb4(piVar12);
        piVar12 = (int *)0x0;
      }
      uStack_108 = 0;
      func_0x01b0cb38(piVar12,piVar18,uVar20,uVar15);
    }
    break;
  case 0xa4:
    iVar11 = FUN_01c24918(0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xd8);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = func_0x02b3c518(iVar11,0x77,&piStack_88,0);
    if (iVar11 != 0) {
      iVar11 = *piVar19;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      piVar12 = piStack_88;
      piVar4 = *(int **)(&UNK_01ce3600 + _UNK_01ce45ec);
      *(undefined1 *)(iVar11 + 0x30) = 1;
      if (piStack_88 != (int *)0x0) {
        uVar17 = (uint)*(byte *)(*piVar4 + 0xb8);
        if ((uVar17 <= *(byte *)(*piStack_88 + 0xb8)) &&
           (*(int *)(*(int *)(*piStack_88 + 100) + uVar17 * 4 + -4) == *piVar4)) {
          iVar14 = *piVar19;
          iVar11 = iVar14;
          if (iVar14 == 0) {
            func_0x01384bf0();
            iVar11 = *piVar19;
            piVar4 = (int *)0x0;
            if (iVar11 == 0) goto LAB_01ce4d4c;
          }
          func_0x02937424(piVar12,*(undefined4 *)(iVar14 + 8),*(undefined4 *)(iVar11 + 0x10),0);
        }
      }
    }
    break;
  case 0xa5:
    iVar11 = FUN_01c24918(0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xd8);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x02b3c518(iVar11,0x78,&piStack_b0,0);
    piVar12 = piStack_b0;
    if (piStack_b0 == (int *)0x0) {
      iVar2 = *piVar19;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iStack_e8 = *(int *)(iVar2 + 8);
      puVar10 = *(undefined4 **)(&UNK_01ce4368 + iRam01ce4d94);
      uVar20 = func_0x01384abc(*puVar10,&iStack_e8);
      iVar2 = *piVar19;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_ec = *(undefined4 *)(iVar2 + 0x10);
      uVar15 = func_0x01384abc(*puVar10,&uStack_ec);
      iVar2 = *piVar19;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      puVar10 = *(undefined4 **)(&UNK_01ce43bc + iRam01ce4d98);
LAB_01ce442c:
      uStack_108 = 0;
      uVar20 = func_0x02450228(*puVar10,uVar20,uVar15,*(undefined4 *)(iVar2 + 0x14));
    }
    else {
      uVar17 = (uint)*(byte *)(**(int **)(&UNK_01ce36d4 + _UNK_01ce46bc) + 0xb8);
      if ((uVar17 <= *(byte *)(*piStack_b0 + 0xb8)) &&
         (*(int *)(*(int *)(*piStack_b0 + 100) + uVar17 * 4 + -4) ==
          **(int **)(&UNK_01ce36d4 + _UNK_01ce46bc))) {
        iVar11 = *piVar19;
        if (iVar11 == 0) {
          func_0x01384bf0();
          piVar3 = piRam00000008;
          iVar11 = *piVar19;
          iVar14 = iVar11;
          if (iVar11 == 0) {
            func_0x01384bf0();
            iVar14 = *piVar19;
            if (*piVar19 == 0) {
              piVar4 = (int *)0x0;
              goto LAB_01ce4d4c;
            }
          }
        }
        else {
          piVar3 = *(int **)(iVar11 + 8);
          iVar14 = iVar11;
        }
        uStack_108 = 0;
        func_0x0257b93c(piVar12,piVar3,*(undefined4 *)(iVar11 + 0x10),*(undefined4 *)(iVar14 + 0x14)
                       );
        break;
      }
      piVar3 = (int *)func_0x02450044(piStack_b0,0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      uVar20 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
      puVar10 = *(undefined4 **)(&UNK_01ce373c + _UNK_01ce46c0);
LAB_01ce39f4:
      uVar20 = func_0x0244fb1c(*puVar10,uVar20,0);
    }
    piVar3 = *(int **)(iRam01ce4d80 + 0x1ce4458);
LAB_01ce26d4:
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar20,0);
    break;
  case 0xa6:
    iVar2 = FUN_01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xd8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02b3c518(iVar2,0x79,&piStack_bc,0);
    piVar4 = piStack_bc;
    if (iVar2 != 0) {
      iVar2 = *piVar19;
      if (iVar2 == 0) {
        func_0x01384bf0();
        piVar18 = piRam00000008;
        iVar2 = *piVar19;
        iVar11 = iVar2;
        if (iVar2 == 0) {
          func_0x01384bf0();
          iVar11 = *piVar19;
          if (*piVar19 == 0) {
            iVar2 = 0;
            goto LAB_01ce4d4c;
          }
        }
      }
      else {
        piVar18 = *(int **)(iVar2 + 8);
        iVar11 = iVar2;
      }
      uVar20 = *(undefined4 *)(iVar11 + 0x14);
      uVar15 = *(undefined4 *)(iVar2 + 0x10);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = *(int **)(&UNK_01ce46f8 + iRam01ce4da4);
        iVar2 = *piVar3;
        if (((uint)*(byte *)(*piVar4 + 0xb8) < (uint)*(byte *)(iVar2 + 0xb8)) ||
           (*(int *)(*(int *)(*piVar4 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
          func_0x01384bf0();
          iVar2 = *piVar3;
        }
        piVar3 = (int *)0x0;
        if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar4 + 0xb8)) &&
           (piVar3 = piVar4,
           *(int *)(*(int *)(*piVar4 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
          piVar3 = (int *)0x0;
        }
      }
      uStack_108 = 0;
      func_0x0242806c(piVar3,piVar18,uVar15,uVar20);
    }
    break;
  case 0xab:
    iVar11 = FUN_01c24918(0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xd8);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = func_0x02b3c518(iVar11,0x7d,&piStack_c4,0);
    if (iVar11 != 0) {
      iVar11 = *piVar19;
      if (iVar11 == 0) {
        func_0x01384bf0();
        piVar4 = piStack_c4;
        iVar11 = *piVar19;
        uRam00000030 = 1;
        iVar14 = iVar11;
        if (iVar11 == 0) {
          func_0x01384bf0();
          piVar3 = (int *)0x0;
          piVar12 = (int *)0x0;
          iVar14 = *piVar19;
          if (*piVar19 == 0) goto LAB_01ce4d4c;
        }
      }
      else {
        *(undefined1 *)(iVar11 + 0x30) = 1;
        piVar4 = piStack_c4;
        iVar14 = iVar11;
      }
      uVar20 = *(undefined4 *)(iVar14 + 0x10);
      uVar15 = *(undefined4 *)(iVar11 + 8);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = *(int **)(&UNK_01ce4a24 + iRam01ce4da8);
        iVar2 = *piVar3;
        if (((uint)*(byte *)(*piVar4 + 0xb8) < (uint)*(byte *)(iVar2 + 0xb8)) ||
           (*(int *)(*(int *)(*piVar4 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
          func_0x01384bf0();
          iVar2 = *piVar3;
        }
        piVar3 = (int *)0x0;
        if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar4 + 0xb8)) &&
           (piVar3 = piVar4,
           *(int *)(*(int *)(*piVar4 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
          piVar3 = (int *)0x0;
        }
      }
      func_0x02a45ab8(piVar3,uVar15,uVar20,0);
    }
    break;
  case 0xac:
    iVar11 = FUN_01c24918(0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xd8);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x02b3c518(iVar11,0x7e,&piStack_64,0);
    piVar12 = piStack_64;
    if (piStack_64 != (int *)0x0) {
      iVar11 = *piVar19;
      if (iVar11 == 0) {
        func_0x01384bf0();
        piVar18 = piRam00000008;
        iVar11 = *piVar19;
        iVar14 = iVar11;
        if (iVar11 == 0) {
          func_0x01384bf0();
          iVar14 = *piVar19;
          if (*piVar19 == 0) {
            piVar4 = (int *)0x0;
            goto LAB_01ce4d4c;
          }
        }
      }
      else {
        piVar18 = *(int **)(iVar11 + 8);
        iVar14 = iVar11;
      }
      piVar3 = *(int **)(&UNK_01ce4614 + iRam01ce4d60);
      uVar15 = *(undefined4 *)(iVar14 + 0x14);
      iVar2 = *piVar3;
      uVar20 = *(undefined4 *)(iVar11 + 0x10);
      uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
      if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
         (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
        func_0x01384fb4(piVar12);
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
      if ((*(byte *)(*piVar12 + 0xb8) < uVar17) ||
         (*(int *)(*(int *)(*piVar12 + 100) + uVar17 * 4 + -4) != iVar2)) {
        func_0x01384fb4(piVar12);
        piVar12 = (int *)0x0;
      }
      uStack_108 = 0;
      func_0x01b35444(piVar12,piVar18,uVar20,uVar15);
    }
    break;
  case 0xae:
    iVar2 = FUN_01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xd8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02b3c518(iVar2,0x80,&piStack_c0,0);
    piVar3 = piStack_c0;
    if (piStack_c0 != (int *)0x0) {
      piVar12 = *(int **)(&UNK_01ce38b4 + _UNK_01ce48a0);
      iVar11 = *piVar19;
      iVar2 = *piVar12;
      uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
      if ((*(byte *)(*piStack_c0 + 0xb8) < uVar17) ||
         (*(int *)(*(int *)(*piStack_c0 + 100) + uVar17 * 4 + -4) != iVar2)) {
        func_0x01384fb4(piStack_c0);
        func_0x01384bf0();
      }
      iVar2 = *piVar12;
      uVar17 = (uint)*(byte *)(iVar2 + 0xb8);
      if ((*(byte *)(*piVar3 + 0xb8) < uVar17) ||
         (*(int *)(*(int *)(*piVar3 + 100) + uVar17 * 4 + -4) != iVar2)) {
        func_0x01384fb4(piVar3);
        piVar3 = (int *)0x0;
      }
      func_0x02b0a150(piVar3,iVar11,0);
    }
    break;
  case 0xb1:
    iVar11 = FUN_01c24918(0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xd8);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x02b3c518(iVar11,0x82,&piStack_ac,0);
    piVar12 = piStack_ac;
    if (piStack_ac == (int *)0x0) {
      iVar2 = *piVar19;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iStack_e8 = *(int *)(iVar2 + 8);
      puVar10 = *(undefined4 **)(&UNK_01ce43dc + iRam01ce4d8c);
      uVar20 = func_0x01384abc(*puVar10,&iStack_e8);
      iVar2 = *piVar19;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_ec = *(undefined4 *)(iVar2 + 0x10);
      uVar15 = func_0x01384abc(*puVar10,&uStack_ec);
      iVar2 = *piVar19;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      puVar10 = *(undefined4 **)(iRam01ce4d90 + 0x1ce4430);
      goto LAB_01ce442c;
    }
    uVar17 = (uint)*(byte *)(**(int **)(&UNK_01ce3990 + _UNK_01ce4978) + 0xb8);
    if ((*(byte *)(*piStack_ac + 0xb8) < uVar17) ||
       (*(int *)(*(int *)(*piStack_ac + 100) + uVar17 * 4 + -4) !=
        **(int **)(&UNK_01ce3990 + _UNK_01ce4978))) {
      piVar3 = (int *)func_0x02450044(piStack_ac,0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      uVar20 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
      puVar10 = *(undefined4 **)(_UNK_01ce49f0 + 0x1ce39f8);
      goto LAB_01ce39f4;
    }
    iVar11 = *piVar19;
    if (iVar11 == 0) {
      func_0x01384bf0();
      piVar3 = piRam00000008;
      iVar11 = *piVar19;
      iVar14 = iVar11;
      if (iVar11 == 0) {
        func_0x01384bf0();
        iVar14 = *piVar19;
        if (*piVar19 == 0) {
          piVar4 = (int *)0x0;
          goto LAB_01ce4d4c;
        }
      }
    }
    else {
      piVar3 = *(int **)(iVar11 + 8);
      iVar14 = iVar11;
    }
    uStack_108 = 0;
    func_0x026629e4(piVar12,piVar3,*(undefined4 *)(iVar11 + 0x10),*(undefined4 *)(iVar14 + 0x14));
    break;
  case 0xb2:
    iVar2 = FUN_01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xd8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02b3c518(iVar2,0x83,&piStack_90,0);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = piStack_90;
    }
    if (iVar2 != 0 && piVar3 != (int *)0x0) {
      uVar17 = (uint)*(byte *)(**(int **)(&UNK_01ce3a5c + _UNK_01ce49f4) + 0xb8);
      if ((uVar17 <= *(byte *)(*piVar3 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar3 + 100) + uVar17 * 4 + -4) ==
          **(int **)(&UNK_01ce3a5c + _UNK_01ce49f4))) {
        func_0x025a6ffc(piVar3,*piVar19,0);
      }
    }
    break;
  case 0xb3:
    iVar2 = FUN_01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xd8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02b3c518(iVar2,0x84,&piStack_94,0);
    piVar12 = (int *)*piVar19;
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar4 = piStack_94;
    if (iVar2 == 0) {
      iStack_e8 = piVar12[2];
      puVar10 = *(undefined4 **)(&UNK_01ce4148 + iRam01ce4d78);
      uVar20 = func_0x01384abc(*puVar10,&iStack_e8);
      iVar2 = *piVar19;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_ec = *(undefined4 *)(iVar2 + 0x10);
      uVar15 = func_0x01384abc(*puVar10,&uStack_ec);
      iVar2 = *piVar19;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      puVar10 = *(undefined4 **)(&UNK_01ce419c + iRam01ce4d7c);
      goto LAB_01ce442c;
    }
    iVar2 = *piVar19;
    *(undefined1 *)(piVar12 + 0xc) = 1;
    if (iVar2 == 0) {
      func_0x01384bf0();
      piVar18 = piRam00000008;
      iVar2 = *piVar19;
      iVar11 = iVar2;
      if (iVar2 == 0) {
        func_0x01384bf0();
        iVar11 = *piVar19;
        if (*piVar19 == 0) {
          iVar2 = 0;
          goto LAB_01ce4d4c;
        }
      }
    }
    else {
      piVar18 = *(int **)(iVar2 + 8);
      iVar11 = iVar2;
    }
    uVar20 = *(undefined4 *)(iVar11 + 0x14);
    uVar15 = *(undefined4 *)(iVar2 + 0x10);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(&UNK_01ce47b4 + iRam01ce4d74);
      iVar2 = *piVar3;
      if (((uint)*(byte *)(*piVar4 + 0xb8) < (uint)*(byte *)(iVar2 + 0xb8)) ||
         (*(int *)(*(int *)(*piVar4 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
        func_0x01384bf0();
        iVar2 = *piVar3;
      }
      piVar3 = (int *)0x0;
      if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar4 + 0xb8)) &&
         (piVar3 = piVar4,
         *(int *)(*(int *)(*piVar4 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
        piVar3 = (int *)0x0;
      }
    }
    uStack_108 = 0;
    func_0x0287cac0(piVar3,piVar18,uVar15,uVar20);
  }
LAB_01ce26f4:
  iVar2 = *piVar19;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar2 + 0x30) != '\0') {
    iVar11 = *piVar19;
    iVar2 = *(int *)(iStack_f4 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar16 = *(int *)(iVar2 + 8);
    uVar17 = *(uint *)(iVar2 + 0xc);
    piVar3 = *(int **)(_UNK_01ce373c + 0x1ce2748);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    iVar14 = *piVar3;
    if (iVar16 == 0) {
      func_0x01384bf0();
    }
    if (uVar17 < *(uint *)(iVar16 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar17 + 1;
      *(int *)(iVar16 + uVar17 * 4 + 0x10) = iVar11;
    }
    else {
      func_0x0328f170(iVar2,iVar11,*(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38))
      ;
    }
  }
LAB_01ce07dc:
  return *piVar19;
}



// ===== FAT.RewardMan$$<_BeginReward>g__TrackReward|13_0 RVA 0x1cd4db4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ce4db4(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
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
  undefined4 uStack_28;
  undefined4 uStack_20;
  
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 8);
  pcVar9 = (char *)(_UNK_019a3d78 + 0x19a3c6c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019a3d7c + 0x19a3c80),iVar6,uVar7,0);
    func_0x01384978(*(undefined4 *)(_UNK_019a3d80 + 0x19a3c8c));
    func_0x01384978(*(undefined4 *)(_UNK_019a3d84 + 0x19a3c98));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02177130(iVar1,iVar4,iVar6,uVar7);
    return;
  }
  if (*(int *)(**(int **)(_UNK_019a3d88 + 0x19a3d00) + 0x74) == 0) {
    func_0x01384ab4();
  }
  piVar2 = (int *)func_0x02f74dec(**(undefined4 **)(_UNK_019a3d8c + 0x19a3d1c));
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  piVar3 = *(int **)(_UNK_019a3d90 + 0x19a3d3c);
  piVar2[0x13] = iVar6;
  piVar2[0x12] = iVar4;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar4 = func_0x023ebadc(uVar7,0);
  piVar2[0x14] = iVar4;
  pcVar9 = (char *)(_UNK_01993228 + 0x19930f0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0199322c + 0x1993104));
    func_0x01384978(*(undefined4 *)(_UNK_01993230 + 0x1993110));
    *pcVar9 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x27,0);
  if (iVar4 == 0) {
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar4 = *piVar2;
    uVar5 = (uint)*(byte *)(**(int **)(_UNK_01993234 + 0x1993174) + 0xb8);
    if ((uVar5 <= *(byte *)(iVar4 + 0xb8)) &&
       (*(int *)(*(int *)(iVar4 + 100) + uVar5 * 4 + -4) == **(int **)(_UNK_01993234 + 0x1993174)))
    {
      (**(code **)(iVar4 + 0xe0))(piVar2,*(undefined4 *)(iVar4 + 0xe4));
    }
    piVar3 = (int *)func_0x02450044(piVar2,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)(**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
    uVar7 = func_0x02450054(piVar2,0);
    if (*(int *)(**(int **)(_UNK_01993238 + 0x1993204) + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar9 = (char *)(_UNK_01998f20 + 0x1998e0c);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01998f24 + 0x1998e20));
      func_0x01384978(*(undefined4 *)(_UNK_01998f28 + 0x1998e2c));
      func_0x01384978(*(undefined4 *)(_UNK_01998f2c + 0x1998e38));
      *pcVar9 = '\x01';
    }
    iVar4 = func_0x0229f06c(0x2a,0);
    if (iVar4 == 0) {
      iVar4 = func_0x03668dfc(**(undefined4 **)(_UNK_01998f30 + 0x1998e94));
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar4 + 9) != '\0') {
        piVar2 = *(int **)(_UNK_01998f34 + 0x1998ec0);
        iVar4 = *piVar2;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar2;
        }
        if (*(char *)(*(int *)(iVar4 + 0x5c) + 0xc) != '\0') {
          iVar4 = **(int **)(**(int **)(_UNK_01998f38 + 0x1998ef0) + 0x5c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar6 = func_0x0229f06c(0x2b,0,uVar7,0);
          if (iVar6 == 0) {
            iVar6 = func_0x020a3acc(iVar4,0,piVar3,uVar7);
            if (iVar6 == 0) {
              piVar2 = *(int **)(iVar4 + 0x24);
              if (piVar2 == (int *)0x0) {
                func_0x01384bf0();
              }
                    /* WARNING: Could not recover jumptable at 0x020a3d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*piVar2 + 0x1e8))(piVar2,piVar3,uVar7,*(undefined4 *)(*piVar2 + 0x1ec));
              return;
            }
          }
          else {
            iVar6 = func_0x0229f13c(0x2b,0);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            uStack_20 = 0;
            func_0x02174858(iVar6,iVar4,piVar3,uVar7);
          }
          return;
        }
      }
      return;
    }
    iVar4 = func_0x0229f13c(0x2a,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x27,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 0;
    piVar3 = piVar2;
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
  if (*(int *)(iVar4 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
  }
  func_0x01485278(&uStack_38,piVar3,0);
  func_0x01485278(&uStack_38,uVar7,0);
  iVar6 = *(int *)(iVar4 + 8);
  uVar7 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar4 == 0) {
    uVar8 = 2;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_38,uVar8,0,0);
  return;
}



// ===== FAT.RewardMan$$ResolveRplcReward RVA 0x1cd4de4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ce4de4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01ce4eec + 0x1ce4e04);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce4ef0 + 0x1ce4e1c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x90,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x38) == 0) {
      uVar2 = **(undefined4 **)(_UNK_01ce4ef4 + 0x1ce4ed0);
      *param_1 = 0;
      param_1[1] = 0;
      func_0x038fd264(param_1,param_3,param_4,uVar2);
      return;
    }
    FUN_01cd3734(&uStack_28,*(int *)(iVar1 + 0x38),param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x90,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02176d3c(&uStack_28,iVar1,param_2,param_3,param_4,0);
  }
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}



// ===== FAT.RewardMan$$GetRewardName RVA 0x1cd4ef8 =====

/* WARNING: Possible PIC construction at 0x028c1238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c123c) */
/* WARNING: Removing unreachable block (ram,0x028c124c) */
/* WARNING: Removing unreachable block (ram,0x028c1250) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ce4ef8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_r4;
  uint uVar4;
  undefined1 *unaff_r5;
  int iVar5;
  char *pcVar6;
  char *unaff_r6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int *unaff_r9;
  char *unaff_r10;
  uint unaff_r11;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int *piVar16;
  ulonglong uVar17;
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
  
  pcVar7 = (char *)(_UNK_01ce5010 + 0x1ce4f10);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce5014 + 0x1ce4f24));
    func_0x01384978(*(undefined4 *)(_UNK_01ce5018 + 0x1ce4f30));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3d70,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3d70,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_02198f18 + 0x2198e24);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02198f1c + 0x2198e38),param_1,param_2,0);
      *pcVar7 = '\x01';
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar8,&uStack_38,uVar3,0,0);
    uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02198f20 + 0x2198f08));
    return uVar8;
  }
  uVar8 = func_0x01ce5024(param_1,param_2);
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01cca5b0(iVar1,uVar8);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x24);
  }
  uVar4 = **(uint **)(_UNK_01ce5020 + 0x1ce4fec);
  if (uVar2 != 0) {
    uVar4 = uVar2;
  }
  if (*(int *)(**(int **)(_UNK_01ce501c + 0x1ce4fe0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar17 = (ulonglong)uVar4;
  puVar10 = (undefined1 *)register0x00000054;
SUB_028c1350:
  pcVar7 = (char *)uVar17;
  *(undefined4 *)(puVar10 + -4) = unaff_lr;
  *(uint *)(puVar10 + -8) = unaff_r11;
  *(undefined1 **)(puVar10 + -0xc) = unaff_r5;
  piVar16 = (int *)(puVar10 + -0x10);
  *piVar16 = unaff_r4;
  pcVar6 = (char *)(_UNK_028c13f0 + 0x28c1364);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c13f4 + 0x28c1378),(int)(uVar17 >> 0x20));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xbb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xbb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *piVar16;
    uVar8 = *(undefined4 *)(puVar10 + -0xc);
    *(undefined4 *)(puVar10 + -4) = *(undefined4 *)(puVar10 + -4);
    *(undefined4 **)(puVar10 + -8) = unaff_r8;
    *(undefined4 *)(puVar10 + -0xc) = unaff_r7;
    *piVar16 = (int)unaff_r6;
    *(undefined4 *)(puVar10 + -0x14) = uVar8;
    *(int *)(puVar10 + -0x18) = iVar5;
    pcVar6 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),pcVar7,0);
      *pcVar6 = '\x01';
    }
    *(undefined4 *)(puVar10 + -0x30) = 0;
    *(undefined4 *)(puVar10 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)(puVar10 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)(puVar10 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)(puVar10 + -0x20) = 0;
    func_0x0245494c(puVar10 + -0x48,0);
    iVar5 = *(int *)(iVar1 + 0x10);
    *(undefined4 *)(puVar10 + -0x30) = *(undefined4 *)(puVar10 + -0x48);
    *(undefined4 *)(puVar10 + -0x2c) = *(undefined4 *)(puVar10 + -0x44);
    *(undefined4 *)(puVar10 + -0x28) = *(undefined4 *)(puVar10 + -0x40);
    *(undefined4 *)(puVar10 + -0x24) = *(undefined4 *)(puVar10 + -0x3c);
    *(undefined4 *)(puVar10 + -0x20) = *(undefined4 *)(puVar10 + -0x38);
    if (iVar5 != 0) {
      func_0x01485278(puVar10 + -0x30,iVar5,0);
    }
    func_0x01485278(puVar10 + -0x30,pcVar7,0);
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
    *(undefined4 *)(puVar10 + -0x50) = 0;
    *(undefined4 *)(puVar10 + -0x4c) = 0;
    func_0x0245495c(iVar5,uVar8,puVar10 + -0x30,uVar3);
    uVar8 = func_0x02f5db90(puVar10 + -0x30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar8;
  }
  if (*(int *)(**(int **)(_UNK_028c13f8 + 0x28c13d0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  unaff_r4 = *piVar16;
  unaff_r11 = *(uint *)(puVar10 + -8);
  uVar8 = *(undefined4 *)(puVar10 + -4);
  iVar1 = *(int *)(puVar10 + -0xc);
  pcVar6 = unaff_r10;
  puVar9 = puVar10;
  do {
    unaff_r10 = pcVar7;
    *(undefined4 *)(puVar9 + -4) = uVar8;
    *(char **)(puVar9 + -8) = pcVar6;
    *(int **)(puVar9 + -0xc) = unaff_r9;
    *(undefined4 **)(puVar9 + -0x10) = unaff_r8;
    *(undefined4 *)(puVar9 + -0x14) = unaff_r7;
    *(char **)(puVar9 + -0x18) = unaff_r6;
    *(int *)(puVar9 + -0x1c) = iVar1;
    *(int *)(puVar9 + -0x20) = unaff_r4;
    unaff_r5 = (undefined1 *)0x1;
    unaff_r6 = (char *)(iRam028c1308 + 0x28c0e50);
    if (*unaff_r6 == '\0') {
      func_0x01384978(*(undefined4 *)(iRam028c130c + 0x28c0e64));
      func_0x01384978(*(undefined4 *)(iRam028c1310 + 0x28c0e70));
      func_0x01384978(*(undefined4 *)(iRam028c1314 + 0x28c0e7c));
      func_0x01384978(*(undefined4 *)(iRam028c1318 + 0x28c0e88));
      func_0x01384978(*(undefined4 *)(iRam028c131c + 0x28c0e94));
      func_0x01384978(*(undefined4 *)(iRam028c1320 + 0x28c0ea0));
      func_0x01384978(*(undefined4 *)(iRam028c1324 + 0x28c0eac));
      *unaff_r6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xc,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0xc,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x02173c38(iVar1,unaff_r10,1,0);
      return uVar8;
    }
    unaff_r8 = *(undefined4 **)(iRam028c1328 + 0x28c0f0c);
    *(undefined4 *)(puVar9 + -0x24) = *unaff_r8;
    iVar1 = func_0x0467229c(unaff_r10,0);
    if (iVar1 != 0) {
      return *unaff_r8;
    }
    unaff_r9 = *(int **)(iRam028c132c + 0x28c0f34);
    iVar1 = *unaff_r9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *unaff_r9;
    }
    iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
    if (iVar5 == 0) goto LAB_028c125c;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *(int *)(*(int *)(*unaff_r9 + 0x5c) + 8);
      bVar12 = iVar5 == 0;
      bVar11 = true;
      if (bVar12) break;
    }
    iVar1 = *(int *)(iVar5 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03e1fee8(iVar1,**(undefined4 **)(iRam028c1330 + 0x28c0f98));
    if (0 < iVar1) {
      iVar1 = *unaff_r9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *unaff_r9;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar9 + -0x24,
                              **(undefined4 **)(iRam028c1334 + 0x28c0ff8));
      if (iVar1 != 0) goto LAB_028c125c;
    }
    iVar1 = *unaff_r9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *unaff_r9;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x14) == 0) {
LAB_028c10a0:
      iVar1 = *unaff_r9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *unaff_r9;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0x10) != 0) {
        iVar1 = *unaff_r9;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *unaff_r9;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar9 + -0x24,
                                **(undefined4 **)(iRam028c133c + 0x28c1128));
        if (iVar1 != 0) goto LAB_028c1138;
      }
    }
    else {
      iVar1 = *unaff_r9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *unaff_r9;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03e220bc(iVar1,unaff_r10,puVar9 + -0x24,
                              **(undefined4 **)(iRam028c1338 + 0x28c1090));
      if (iVar1 == 0) goto LAB_028c10a0;
LAB_028c1138:
      iVar1 = func_0x0467229c(*(undefined4 *)(puVar9 + -0x24),0);
      if (iVar1 == 0) goto LAB_028c12f8;
    }
    if (unaff_r10 == (char *)0x0) {
      func_0x01384bf0();
      iVar1 = func_0x04677604(0,**(undefined4 **)(iRam028c1340 + 0x28c11a4),0);
      if (iVar1 < 0) {
LAB_028c125c:
        uVar8 = func_0x046604e4(**(undefined4 **)(iRam028c134c + 0x28c127c),unaff_r10,0);
        return uVar8;
      }
      func_0x01384bf0();
      iVar1 = func_0x04676d38(0,0x2c,0);
      if (iVar1 < 0) goto LAB_028c125c;
      func_0x01384bf0();
    }
    else {
      iVar1 = func_0x04677604(unaff_r10,**(undefined4 **)(iRam028c1344 + 0x28c1164),0);
      if ((iVar1 < 0) || (iVar1 = func_0x04676d38(unaff_r10,0x2c,0), iVar1 < 0)) goto LAB_028c125c;
    }
    unaff_r7 = 0;
    unaff_r4 = func_0x04674540(unaff_r10,0x2c,0,0);
    if (unaff_r4 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(unaff_r4 + 0xc) < 1) {
      uVar8 = func_0x04672b68(*unaff_r8,unaff_r4,0);
      iVar1 = *unaff_r9;
      *(undefined4 *)(puVar9 + -0x24) = uVar8;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *unaff_r9;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      uVar8 = *(undefined4 *)(puVar9 + -0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03e201a8(iVar1,unaff_r10,uVar8,**(undefined4 **)(iRam028c1348 + 0x28c12f0));
LAB_028c12f8:
      return *(undefined4 *)(puVar9 + -0x24);
    }
    if (*(int *)(unaff_r4 + 0xc) == 0) {
      func_0x01384bf4();
    }
    unaff_r6 = *(char **)(unaff_r4 + 0x10);
    if (*(int *)(*unaff_r9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar8 = 0x28c123c;
    pcVar7 = unaff_r6;
    iVar1 = unaff_r4;
    pcVar6 = unaff_r10;
    puVar9 = puVar9 + -0x28;
  } while( true );
  unaff_lr = 0x28c1308;
  uVar17 = func_0x01384bf0();
  bVar14 = bVar11;
  if (bVar12) {
    unaff_r10 = (char *)0x43fa;
    bVar14 = 0x28000000 < unaff_r11 || unaff_r11 + 0xd8000000 < (uint)bVar11;
  }
  bVar12 = bVar12 && unaff_r11 == !bVar11 + 0x28000000;
  bVar11 = bVar14;
  if (bVar12) {
    bVar11 = &__DT_REL[0x5d26].r_info < puVar9 + -0x28 ||
             puVar9 + -0x70028 < (undefined1 *)(uint)bVar14;
  }
  bVar12 = bVar12 && puVar9 + -0x28 == (undefined1 *)(!bVar14 + 0x70000);
  bVar14 = bVar11;
  if (bVar12) {
    bVar14 = 0xc000000 < unaff_r11 || unaff_r11 + 0xf4000000 < (uint)bVar11;
  }
  bVar13 = false;
  bVar15 = bVar14;
  if (bVar12 && unaff_r11 == !bVar11 + 0xc000000) {
    bVar15 = (undefined1 *)0x2b0 < puVar9 + -0x28 || puVar9 + -0x2d8 < (undefined1 *)(uint)bVar14;
    unaff_r5 = puVar9 + (-0x28 - (!bVar14 + 0x2b0));
    bVar13 = unaff_r5 == (undefined1 *)0x0;
  }
  bVar12 = false;
  bVar11 = bVar15;
  if (bVar13) {
    bVar11 = (undefined1 *)0x48000000 < puVar9 + -0x28 ||
             puVar9 + -0x48000028 < (undefined1 *)(uint)bVar15;
    unaff_r8 = (undefined4 *)(puVar9 + (-0x28 - (!bVar15 + 0x48000000)));
    bVar12 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar14 = bVar11;
  if (bVar12) {
    bVar14 = 0x428c1325 < bVar11;
  }
  bVar12 = bVar12 && !bVar11 == 0x428c1325;
  bVar11 = bVar14;
  if (bVar12) {
    bVar11 = 0x90000003 < unaff_r11 || unaff_r11 + 0x6ffffffd < (uint)bVar14;
  }
  bVar12 = bVar12 && unaff_r11 == !bVar14 + 0x90000003;
  bVar14 = bVar11;
  if (bVar12) {
    bVar14 = 0x10000002 < unaff_r11 || unaff_r11 + 0xeffffffe < (uint)bVar11;
  }
  bVar13 = false;
  bVar15 = bVar14;
  if (bVar12 && unaff_r11 == !bVar11 + 0x10000002) {
    bVar15 = puVar9 != (undefined1 *)0x28 || puVar9 + -0x28 < (undefined1 *)(uint)bVar14;
    unaff_r5 = puVar9 + (-0x28 - (uint)!bVar14);
    bVar13 = unaff_r5 == (undefined1 *)0x0;
  }
  bVar12 = bVar15;
  if (bVar13) {
    bVar12 = &UNK_03d00000 < puVar9 + -0x28 || puVar9 + -0x3d00028 < (undefined1 *)(uint)bVar15;
  }
  bVar11 = bVar12;
  if (bVar13 && puVar9 + -0x28 == &UNK_03d00000 + !bVar15) {
    bVar11 = 0x40000009 < unaff_r11 || unaff_r11 + 0xbffffff7 < (uint)bVar12;
  }
  bVar14 = (bVar13 && puVar9 + -0x28 == &UNK_03d00000 + !bVar15) &&
           unaff_r11 == !bVar12 + 0x40000009;
  bVar12 = bVar11;
  if (bVar14) {
    bVar12 = 0x3f < unaff_r11 || unaff_r11 - 0x3f < (uint)bVar11;
  }
  bVar14 = bVar14 && unaff_r11 == !bVar11 + 0x3f;
  bVar11 = bVar12;
  if (bVar14) {
    bVar11 = 0x19 < unaff_r11 || unaff_r11 - 0x19 < (uint)bVar12;
  }
  bVar13 = false;
  bVar15 = bVar11;
  if (bVar14 && unaff_r11 == !bVar12 + 0x19) {
    bVar15 = (undefined1 *)0xe < puVar9 + -0x28 || puVar9 + -0x36 < (undefined1 *)(uint)bVar11;
    unaff_r8 = (undefined4 *)(puVar9 + (-0x28 - (!bVar11 + 0xe)));
    bVar13 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar12 = false;
  bVar11 = bVar15;
  if (bVar13) {
    bVar11 = (undefined1 *)0x1e < puVar9 + -0x28 || puVar9 + -0x46 < (undefined1 *)(uint)bVar15;
    unaff_r8 = (undefined4 *)(puVar9 + (-0x28 - (!bVar15 + 0x1e)));
    bVar12 = unaff_r8 == (undefined4 *)0x0;
  }
  bVar14 = false;
  if (bVar12) {
    unaff_r11 = unaff_r11 - (!bVar11 + 0x260);
    bVar14 = unaff_r11 == 0;
  }
  puVar10 = puVar9 + -0x28;
  if (bVar14) {
    puVar10 = puVar9 + -0x28;
  }
  goto SUB_028c1350;
}



// ===== FAT.RewardMan$$ResolveRplcRewardId RVA 0x1cd5024 =====

undefined4 FUN_01ce5024(undefined4 param_1,undefined4 param_2)

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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x34b5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x34b5,0);
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
  FUN_01ce4de4(&uStack_18,param_1,param_2,1);
  return uStack_18;
}



// ===== FAT.RewardMan$$GetRewardFlySound RVA 0x1cd50a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ce50a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01ce5210 + 0x1ce50c0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce5214 + 0x1ce50d4));
    func_0x01384978(*(undefined4 *)(_UNK_01ce5218 + 0x1ce50e0));
    func_0x01384978(*(undefined4 *)(_UNK_01ce521c + 0x1ce50ec));
    func_0x01384978(*(undefined4 *)(_UNK_01ce5220 + 0x1ce50f8));
    func_0x01384978(*(undefined4 *)(_UNK_01ce5224 + 0x1ce5104));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x488,0);
  if (iVar1 == 0) {
    FUN_01ce4de4(&iStack_20,param_1,param_2,param_3);
    if (iStack_20 == 0x1e) {
      puVar3 = *(undefined4 **)(_UNK_01ce5238 + 0x1ce519c);
    }
    else if (iStack_20 == 0x1f) {
      puVar3 = *(undefined4 **)(_UNK_01ce5228 + 0x1ce5190);
    }
    else {
      iVar1 = FUN_01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_01c9e4e4(iVar1,iStack_20,0);
      if (iVar1 == 1) {
        puVar3 = *(undefined4 **)(_UNK_01ce5234 + 0x1ce51f8);
        if (0x20 < iStack_1c) {
          puVar3 = *(undefined4 **)(_UNK_01ce5230 + 0x1ce51f0);
        }
      }
      else {
        puVar3 = *(undefined4 **)(_UNK_01ce522c + 0x1ce5208);
      }
    }
    uVar2 = *puVar3;
  }
  else {
    iVar1 = func_0x0229f13c(0x488,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0218ad70(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.RewardMan$$GetRewardCountString RVA 0x1cd523c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ce523c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01ce5474 + 0x1ce525c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce5478 + 0x1ce5270));
    func_0x01384978(*(undefined4 *)(_UNK_01ce547c + 0x1ce527c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce5480 + 0x1ce5288));
    func_0x01384978(*(undefined4 *)(_UNK_01ce5484 + 0x1ce5294));
    func_0x01384978(*(undefined4 *)(_UNK_01ce5488 + 0x1ce52a0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3951,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3951,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0220e87c(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  FUN_01ce4de4(&uStack_20,param_1,param_2,param_3);
  iVar1 = func_0x01ce54a4(param_1,uStack_20);
  if (iVar1 == 0) {
    iVar1 = func_0x01ce5544(param_1,uStack_20);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01db5714(iVar1,uStack_20,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x2c);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x28) != 8)) {
      iStack_24 = iStack_1c;
      uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01ce549c + 0x1ce544c),&iStack_24);
      puVar3 = *(undefined4 **)(_UNK_01ce54a0 + 0x1ce5464);
      goto LAB_01ce5460;
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0364c9b8(iVar1,0,**(undefined4 **)(_UNK_01ce5490 + 0x1ce5400));
    if (*(int *)(**(int **)(_UNK_01ce5494 + 0x1ce541c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar2 = func_0x02559848(iVar1 * iStack_1c,0);
  }
  else {
    if (*(int *)(**(int **)(_UNK_01ce548c + 0x1ce5334) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar2 = func_0x0255938c(iStack_1c,2,0);
  }
  puVar3 = *(undefined4 **)(_UNK_01ce5498 + 0x1ce5364);
LAB_01ce5460:
  uVar2 = func_0x0244f6a0(*puVar3,uVar2,0);
  return uVar2;
}



// ===== FAT.RewardMan$$IsRewardTimed_Resolved RVA 0x1cd54a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ce54a4(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  uint auStack_1c [2];
  
  iVar1 = func_0x0229f06c(0x34b6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x34b6,0);
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
  if (param_2 == 0x28) {
    return 1;
  }
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_01cd24d8 + 0x1cd241c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01cd24dc + 0x1cd2430));
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x343,0);
  if (iVar4 == 0) {
    iVar1 = *(int *)(iVar1 + 0x48);
    auStack_1c[0] = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450590(iVar1,param_2,auStack_1c,**(undefined4 **)(_UNK_01cd24e0 + 0x1cd24b4));
    uVar2 = (uint)((auStack_1c[0] & 0x10000) == 0x10000);
  }
  else {
    iVar4 = func_0x0229f13c(0x343,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar2 = func_0x021855fc(iVar4,iVar1,param_2,0x10000);
  }
  return uVar2;
}



// ===== FAT.RewardMan$$IsRewardCountable_Resolved RVA 0x1cd5544 =====

uint FUN_01ce5544(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x34b8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x34b8,0);
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
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = FUN_01cd2234(iVar1,param_2,0x80000);
  return uVar2 ^ 1;
}



// ===== FAT.RewardMan$$GetRewardString RVA 0x1cd55d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ce55d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01ce56c8 + 0x1ce55f8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce56cc + 0x1ce560c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9780,0);
  if (iVar1 == 0) {
    uVar2 = FUN_01ce4ef8(param_1,param_2);
    uVar3 = FUN_01ce523c(param_1,param_2,param_3);
    iVar1 = func_0x01489db8(uVar3,0);
    if (iVar1 == 0) {
      uVar3 = (*(code *)&SUB_0467272c)(**(undefined4 **)(_UNK_01ce56d0 + 0x1ce56bc),uVar2,uVar3,0);
      return uVar3;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9780,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0220e87c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.RewardMan$$GetRewardDetail RVA 0x1cd56d4 =====

void FUN_01ce56d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x9781,0);
  if (iVar1 == 0) {
    FUN_01ce4de4(&uStack_20,param_1,param_2,param_3);
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01cd3e78(iVar1,uStack_20,uStack_1c);
  }
  else {
    iVar1 = func_0x0229f13c(0x9781,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220e87c(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.RewardMan$$GetShopRewardIcon RVA 0x1cd5794 =====

void FUN_01ce5794(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x9782,0);
  if (iVar1 == 0) {
    FUN_01ce4de4(&uStack_20,param_1,param_2,param_3);
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01cd23fc(iVar1,uStack_20,0x200);
    if (iVar1 == 0) {
      func_0x01ce5a10(param_1,uStack_20,uStack_1c);
    }
    else {
      func_0x01ce5880(param_1,uStack_20,uStack_1c);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9782,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02188f8c(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.RewardMan$$GetRewardImage RVA 0x1cd5880 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ce5880(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01ce59fc + 0x1ce58a0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce5a00 + 0x1ce58b4));
    func_0x01384978(*(undefined4 *)(_UNK_01ce5a04 + 0x1ce58c0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x829,0);
  if (iVar1 == 0) {
    FUN_01ce4de4(&uStack_20,param_1,param_2,param_3);
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01cca5b0(iVar1,uStack_20);
    if (iVar1 == 0) {
      piVar4 = *(int **)(_UNK_01ce5a08 + 0x1ce59a8);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x24);
    }
    else {
      iVar3 = func_0x01489db8(*(undefined4 *)(iVar1 + 0x20),0);
      if (iVar3 == 0) {
        uVar2 = *(undefined4 *)(iVar1 + 0x20);
        if (*(int *)(**(int **)(_UNK_01ce5a0c + 0x1ce59d4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar2 = func_0x025550ec(uVar2,0);
      }
      else {
        uVar2 = func_0x01ce5a10(param_1,uStack_20,uStack_1c);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x829,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02188f8c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.RewardMan$$GetRewardIcon RVA 0x1cd5a10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ce5a10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01ce5ccc + 0x1ce5a30);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce5cd0 + 0x1ce5a44));
    func_0x01384978(*(undefined4 *)(_UNK_01ce5cd4 + 0x1ce5a50));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x422,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x422,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02188f8c(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  FUN_01ce4de4(&iStack_20,param_1,param_2,param_3);
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01cca5b0(iVar1,iStack_20);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_01ce5cd8 + 0x1ce5bd0);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x24);
  }
  iVar3 = FUN_01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x38);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = FUN_01cd23fc(iVar3,iStack_20,0x200);
  if (iVar3 == 0) {
    if (iStack_20 == 0x2b) {
      iVar3 = FUN_01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x50);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x01dcf904(iVar3,0x2b,uStack_1c,0);
      iVar3 = FUN_01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x38);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = FUN_01cca5b0(iVar3,uVar2);
      if (iVar3 != 0) {
        uVar2 = *(undefined4 *)(iVar3 + 0x1c);
        iVar1 = **(int **)(_UNK_01ce5cdc + 0x1ce5c80);
        iVar3 = *(int *)(iVar1 + 0x74);
        goto joined_r0x01ce5c8c;
      }
    }
  }
  else {
    iVar3 = FUN_01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = FUN_01c9e630(iVar3,iStack_20,0);
    if (iVar3 != 0) {
      iVar1 = FUN_01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_01c9da24(iVar1,iStack_20,uStack_1c,0);
      return uVar2;
    }
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x1c);
  iVar1 = **(int **)(_UNK_01ce5ce0 + 0x1ce5ca4);
  iVar3 = *(int *)(iVar1 + 0x74);
joined_r0x01ce5c8c:
  if (iVar3 == 0) {
    func_0x01384ab4(iVar1);
  }
  uVar2 = func_0x025550ec(uVar2,0);
  return uVar2;
}



// ===== FAT.RewardMan$$IsRewardPossible RVA 0x1cd5ce4 =====

uint FUN_01ce5ce4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0x9783,0);
  if (iVar1 == 0) {
    if (0 < param_2) {
      uVar2 = func_0x01ce5d74(param_1,param_2,param_3);
      uVar2 = uVar2 ^ 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9783,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.RewardMan$$IsRewardAlreadyHave RVA 0x1cd5d74 =====

undefined4 FUN_01ce5d74(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_20 [2];
  
  iVar1 = func_0x0229f06c(0x9784,0);
  if (iVar1 == 0) {
    FUN_01ce4de4(auStack_20,param_1,param_2,param_3);
    iVar1 = FUN_01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01cd24e4(iVar1,auStack_20[0]);
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x9784,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.RewardMan$$IsRewardCountable RVA 0x1cd5e30 =====

uint FUN_01ce5e30(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x34b7,0);
  if (iVar1 == 0) {
    param_2 = FUN_01ce5024(param_1,param_2);
    iVar1 = func_0x0229f06c(0x34b8,0);
    if (iVar1 == 0) {
      iVar1 = FUN_01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x38);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_01cd2234(iVar1,param_2,0x80000);
      return uVar2 ^ 1;
    }
    iVar1 = func_0x0229f13c(0x34b8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x34b7,0);
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



// ===== FAT.RewardMan$$IsRewardTimed RVA 0x1cd5ea0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ce5ea0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  uint auStack_1c [2];
  
  iVar1 = func_0x0229f06c(0x34b4,0);
  if (iVar1 == 0) {
    param_2 = FUN_01ce5024(param_1,param_2);
    iVar1 = func_0x0229f06c(0x34b6,0);
    if (iVar1 == 0) {
      if (param_2 != 0x28) {
        iVar1 = FUN_01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x38);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        pcVar6 = (char *)(_UNK_01cd24d8 + 0x1cd241c);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01cd24dc + 0x1cd2430));
          *pcVar6 = '\x01';
        }
        iVar4 = func_0x0229f06c(0x343,0);
        if (iVar4 == 0) {
          iVar1 = *(int *)(iVar1 + 0x48);
          auStack_1c[0] = 0;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02450590(iVar1,param_2,auStack_1c,**(undefined4 **)(_UNK_01cd24e0 + 0x1cd24b4));
          uVar2 = (uint)((auStack_1c[0] & 0x10000) == 0x10000);
        }
        else {
          iVar4 = func_0x0229f13c(0x343,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uStack_20 = 0;
          uVar2 = func_0x021855fc(iVar4,iVar1,param_2,0x10000);
        }
        return uVar2;
      }
      return 1;
    }
    iVar1 = func_0x0229f13c(0x34b6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x34b4,0);
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



// ===== FAT.RewardMan$$FAT.IGameModule.Reset RVA 0x1cd5f10 =====

/* WARNING: Possible PIC construction at 0x01ce6010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ce6050: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ce5f10(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01ce609c + 0x1ce5f24);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce60a0 + 0x1ce5f38));
    func_0x01384978(*(undefined4 *)(_UNK_01ce60a4 + 0x1ce5f44));
    func_0x01384978(*(undefined4 *)(_UNK_01ce60a8 + 0x1ce5f50));
    func_0x01384978(*(undefined4 *)(_UNK_01ce60ac + 0x1ce5f5c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9785,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9785,0);
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
  func_0x01ce60b4(param_1);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03688c3c(iVar1,**(undefined4 **)(_UNK_01ce60b0 + 0x1ce5fcc));
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar4 < 1) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar4 < 1) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar4 < 1) {
        return;
      }
      uVar5 = *(undefined4 *)(iVar1 + 8);
    }
    else {
      uVar5 = *(undefined4 *)(iVar1 + 8);
    }
  }
  else {
    uVar5 = *(undefined4 *)(iVar1 + 8);
  }
  (*(code *)&SUB_0484e5ec)(uVar5,0,iVar4,0);
  return;
}



// ===== FAT.RewardMan$$_CheckNeedCommitDataList RVA 0x1cd60b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ce60b4(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01ce62bc + 0x1ce60cc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce62c0 + 0x1ce60e0));
    func_0x01384978(*(undefined4 *)(_UNK_01ce62c4 + 0x1ce60ec));
    func_0x01384978(*(undefined4 *)(_UNK_01ce62c8 + 0x1ce60f8));
    func_0x01384978(*(undefined4 *)(_UNK_01ce62cc + 0x1ce6104));
    func_0x01384978(*(undefined4 *)(_UNK_01ce62d0 + 0x1ce6110));
    func_0x01384978(*(undefined4 *)(_UNK_01ce62d4 + 0x1ce611c));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x9786,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      func_0x0328fe1c(&uStack_28,iVar1,**(undefined4 **)(_UNK_01ce62d8 + 0x1ce619c));
      puVar4 = *(undefined4 **)(_UNK_01ce62dc + 0x1ce61b4);
      while (iVar2 = func_0x0145b12c(&uStack_28,*puVar4), iVar1 = iStack_1c, iVar2 != 0) {
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        *(undefined1 *)(iVar1 + 0x30) = 0;
      }
      func_0x0145b14c(&uStack_28,**(undefined4 **)(_UNK_01ce62e0 + 0x1ce61e8));
      iVar1 = *(int *)(param_1 + 0x18);
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
  }
  else {
    iVar1 = func_0x0229f13c(0x9786,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.RewardMan$$FAT.IGameModule.LoadConfig RVA 0x1cd62ec =====

/* WARNING: Possible PIC construction at 0x01ce63d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01ce6434: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01ce63d8) */
/* WARNING: Removing unreachable block (ram,0x01ce63f0) */
/* WARNING: Removing unreachable block (ram,0x01ce63f4) */
/* WARNING: Removing unreachable block (ram,0x01ce6400) */
/* WARNING: Removing unreachable block (ram,0x01ce6404) */
/* WARNING: Removing unreachable block (ram,0x01ce641c) */
/* WARNING: Removing unreachable block (ram,0x01ce6420) */
/* WARNING: Removing unreachable block (ram,0x01ce6438) */
/* WARNING: Removing unreachable block (ram,0x01ce6450) */
/* WARNING: Removing unreachable block (ram,0x01ce6454) */
/* WARNING: Removing unreachable block (ram,0x01ce6460) */
/* WARNING: Removing unreachable block (ram,0x01ce6464) */
/* WARNING: Removing unreachable block (ram,0x01ce647c) */
/* WARNING: Removing unreachable block (ram,0x01ce6480) */
/* WARNING: Removing unreachable block (ram,0x032907dc) */
/* WARNING: Removing unreachable block (ram,0x032907ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ce62ec(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  int *piStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  
  pcVar11 = (char *)(_UNK_01ce649c + 0x1ce6300);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce64a0 + 0x1ce6314));
    func_0x01384978(*(undefined4 *)(_UNK_01ce64a4 + 0x1ce6320));
    func_0x01384978(*(undefined4 *)(_UNK_01ce64a8 + 0x1ce632c));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9787,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9787,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piStack_30 = (int *)0x0;
    func_0x0245494c(&piStack_48,0,0);
    piStack_30 = piStack_48;
    piStack_2c = (int *)uStack_44;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&piStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&piStack_30,param_1,0);
    iVar13 = *(int *)(iVar1 + 8);
    uVar14 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar1 == 0) {
      uVar9 = 1;
    }
    func_0x0245495c(iVar13,uVar14,&piStack_30,uVar9,0,0);
    return;
  }
  piVar12 = *(int **)(param_1 + 0xc);
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)FUN_01ca6bb4(iVar1,0);
  if (piVar12 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar7 = piVar12[3];
  iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_01ce64ac + 0x1ce63d0) + 0x10) + 0x60) + 0x48);
  pcVar11 = (char *)(_UNK_032908e8 + 0x3290348);
  iStack_34 = param_1;
  piStack_30 = piVar12;
  piStack_2c = piVar2;
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_032908ec + 0x3290360));
    func_0x01384978(*(undefined4 *)(_UNK_032908f0 + 0x329036c));
    *pcVar11 = '\x01';
  }
  if (piVar2 == (int *)0x0) {
    func_0x04839ccc(6,0);
  }
  if ((uint)piVar12[3] < uVar7) {
    func_0x0484c9cc(0);
  }
  iVar13 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
    iVar13 = func_0x014001f0(iVar13);
  }
  piVar3 = (int *)func_0x01384ab8(piVar2,iVar13);
  if (piVar3 == (int *)0x0) {
    if ((int)uVar7 < piVar12[3]) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
      if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
        iVar13 = func_0x014001f0(iVar13);
      }
      iVar4 = *piVar2;
      uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar8 != 0) {
        piVar3 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar3[-1] == iVar13) {
            puVar5 = (undefined4 *)(iVar4 + *piVar3 * 8 + 0xc0);
            goto LAB_03290618;
          }
          uVar8 = uVar8 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar2,iVar13,0);
LAB_03290618:
      piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
      piVar3 = *(int **)(_UNK_032908f4 + 0x3290638);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar13 = *piVar2;
        uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar13 + 0x58) + 4);
          do {
            if (piVar10[-1] == *piVar3) {
              puVar5 = (undefined4 *)(iVar13 + *piVar10 * 8 + 0xc0);
              goto LAB_03290690;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_03290690:
        iVar13 = (*(code *)*puVar5)(piVar2,puVar5[1]);
        if (iVar13 == 0) goto LAB_0329075c;
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
        if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
          iVar13 = func_0x014001f0(iVar13);
        }
        iVar4 = *piVar2;
        uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar13) {
              puVar5 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
              goto LAB_03290724;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar2,iVar13,0);
LAB_03290724:
        uVar14 = (*(code *)*puVar5)(piVar2,puVar5[1]);
        func_0x032900e0(piVar12,uVar7,uVar14,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
        uVar7 = uVar7 + 1;
      } while( true );
    }
    func_0x032910b0(piVar12,piVar2,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20));
  }
  else {
    iVar13 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
    if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
      iVar13 = func_0x014001f0(iVar13);
    }
    iVar4 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar8 != 0) {
      piVar2 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar2[-1] == iVar13) {
          puVar5 = (undefined4 *)(iVar4 + *piVar2 * 8 + 0xc0);
          goto LAB_032904c0;
        }
        uVar8 = uVar8 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar3,iVar13,0);
LAB_032904c0:
    iVar13 = (*(code *)*puVar5)(piVar3,puVar5[1]);
    if (0 < iVar13) {
      func_0x0328f754(piVar12,piVar12[3] + iVar13,
                      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
      if ((int)uVar7 < piVar12[3]) {
        uStack_40 = piVar12[3] - uVar7;
        uStack_3c = 0;
        func_0x0484e904(piVar12[2],uVar7,piVar12[2],iVar13 + uVar7);
      }
      if (piVar12 == piVar3) {
        uStack_3c = 0;
        uStack_40 = uVar7;
        func_0x0484e904(piVar12[2],0,piVar12[2],uVar7);
        uStack_40 = piVar12[3] - uVar7;
        uStack_3c = 0;
        func_0x0484e904(piVar12[2],iVar13 + uVar7,piVar12[2],uVar7 << 1);
      }
      else {
        iVar4 = piVar12[2];
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar6 = *piVar3;
        uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar8 != 0) {
          piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar2[-1] == iVar1) {
              puVar5 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xe8);
              goto LAB_032905e4;
            }
            uVar8 = uVar8 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar3,iVar1,5);
LAB_032905e4:
        (*(code *)*puVar5)(piVar3,iVar4,uVar7,puVar5[1]);
      }
      piVar12[3] = piVar12[3] + iVar13;
    }
  }
LAB_0329080c:
  piVar12[4] = piVar12[4] + 1;
  return;
LAB_0329075c:
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_032908f8 + 0x329077c)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_032907c4;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_032908f8 + 0x329077c),0);
LAB_032907c4:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  goto LAB_0329080c;
}



// ===== FAT.RewardMan$$FAT.IGameModule.Startup RVA 0x1cd64b8 =====

void FUN_01ce64b8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9788,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9788,0);
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



// ===== FAT.RewardMan$$CalcDailyEventTaskRequireCount RVA 0x1cd6504 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ce6504(undefined4 param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01ce65e4 + 0x1ce6520);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce65e8 + 0x1ce6534));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1991,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1991,0);
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
  if (param_2 != 0) {
    if (*(int *)(**(int **)(_UNK_01ce65ec + 0x1ce659c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02565a88(param_2,0);
    if (iVar1 != 0) {
      uVar5 = func_0x01ce65f0(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),0);
      return uVar5;
    }
  }
  return 0;
}



// ===== FAT.RewardMan$$CalcDailyEventTaskRequireCount RVA 0x1cd65f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ce65f0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01ce678c + 0x1ce6610);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce6790 + 0x1ce6628));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6794 + 0x1ce6634));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6798 + 0x1ce6640));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x83,0);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      iVar1 = FUN_01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x48);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      param_4 = func_0x01dd4dbc(iVar1,0);
    }
    if (param_3 == 3 || param_3 == 0) {
      FUN_01cddaf8(&uStack_28,param_1,0,param_2,param_4,0,param_3);
    }
    else {
      puVar5 = *(undefined4 **)(_UNK_01ce679c + 0x1ce671c);
      uStack_28 = param_2;
      uVar2 = func_0x01384abc(*puVar5,&uStack_28);
      iStack_2c = param_3;
      uVar3 = func_0x01384abc(*puVar5,&iStack_2c);
      uVar2 = func_0x0244f690(**(undefined4 **)(_UNK_01ce67a0 + 0x1ce6750),uVar2,uVar3,0);
      if (*(int *)(**(int **)(_UNK_01ce67a4 + 0x1ce6764) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar2,0);
      uStack_24 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x83,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = func_0x02176574(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uStack_24;
}



// ===== FAT.RewardMan$$CalcDynamicOrderLifeTime RVA 0x1cd67a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ce67a8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  float fStack_24;
  
  iVar1 = func_0x0229f06c(0x3c8f,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      if (param_2 == 7) {
        fVar7 = (float)VectorSignedToFloat(param_4 * param_3,(byte)(in_fpscr >> 0x16) & 3);
        fVar7 = fVar7 / _UNK_01ce6858;
        pcVar5 = (char *)(_UNK_01ce6a40 + 0x1ce687c);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01ce6a44 + 0x1ce6890));
          func_0x01384978(*(undefined4 *)(_UNK_01ce6a48 + 0x1ce689c));
          func_0x01384978(*(undefined4 *)(_UNK_01ce6a4c + 0x1ce68a8));
          func_0x01384978(*(undefined4 *)(_UNK_01ce6a50 + 0x1ce68b4));
          func_0x01384978(*(undefined4 *)(_UNK_01ce6a54 + 0x1ce68c0));
          func_0x01384978(*(undefined4 *)(_UNK_01ce6a58 + 0x1ce68cc));
          func_0x01384978(*(undefined4 *)(_UNK_01ce6a5c + 0x1ce68d8));
          *pcVar5 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x3c90,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x14);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar3 = *(undefined4 *)(iVar1 + 0xc);
          uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ce6a60 + 0x1ce6950));
          func_0x0245065c(uVar6,param_1,**(undefined4 **)(_UNK_01ce6a64 + 0x1ce6970),0);
          uVar2 = func_0x01ce7060(param_1,fVar7,uVar3,uVar6);
          if (0x7fffffff < uVar2) {
            fStack_24 = fVar7;
            uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_01ce6a68 + 0x1ce69a8),&fStack_24);
            uVar2 = 0;
            uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_01ce6a6c + 0x1ce69c8),uVar6,0);
            if (*(int *)(**(int **)(_UNK_01ce6a70 + 0x1ce69dc) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2944(uVar6,0);
          }
          iVar1 = *(int *)(param_1 + 0x14);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0328eea8(iVar1,uVar2,**(undefined4 **)(_UNK_01ce6a74 + 0x1ce6a18));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          return *(int *)(iVar1 + 0x18);
        }
        iVar1 = func_0x0229f13c(0x3c90,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        iStack_28 = 0;
        func_0x0245494c(&uStack_50,0,fVar7,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        iStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485258(&uStack_38,fVar7,0);
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
      param_3 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3c8f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    fStack_24 = 0.0;
    iStack_28 = param_4;
    param_3 = func_0x02176574(iVar1,param_1,param_2,param_3);
  }
  return param_3;
}



// ===== FAT.RewardMan$$_RoundLifeTime RVA 0x1cd685c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ce685c(int param_1,undefined4 param_2)

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
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01ce6a40 + 0x1ce687c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce6a44 + 0x1ce6890));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6a48 + 0x1ce689c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6a4c + 0x1ce68a8));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6a50 + 0x1ce68b4));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6a54 + 0x1ce68c0));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6a58 + 0x1ce68cc));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6a5c + 0x1ce68d8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3c90,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3c90,0);
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
    uVar6 = func_0x0245498c(&uStack_38,0,0);
    return uVar6;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ce6a60 + 0x1ce6950));
  func_0x0245065c(uVar6,param_1,**(undefined4 **)(_UNK_01ce6a64 + 0x1ce6970),0);
  uVar2 = func_0x01ce7060(param_1,param_2,uVar3,uVar6);
  if (0x7fffffff < uVar2) {
    uStack_24 = param_2;
    uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_01ce6a68 + 0x1ce69a8),&uStack_24);
    uVar2 = 0;
    uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_01ce6a6c + 0x1ce69c8),uVar6,0);
    if (*(int *)(**(int **)(_UNK_01ce6a70 + 0x1ce69dc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar6,0);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0328eea8(iVar1,uVar2,**(undefined4 **)(_UNK_01ce6a74 + 0x1ce6a18));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x18);
}



// ===== FAT.RewardMan$$_RoundCoin RVA 0x1cd6a78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ce6a78(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint in_fpscr;
  double dVar7;
  float fVar8;
  double dVar9;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01ce6d68 + 0x1ce6a98);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce6d6c + 0x1ce6aac));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6d70 + 0x1ce6ab8));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6d74 + 0x1ce6ac4));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6d78 + 0x1ce6ad0));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6d7c + 0x1ce6adc));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6d80 + 0x1ce6ae8));
    func_0x01384978(*(undefined4 *)(_UNK_01ce6d84 + 0x1ce6af4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x89,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x89,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    fStack_34 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    fStack_34 = fStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,param_2,0);
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
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ce6d88 + 0x1ce6b6c));
  func_0x0245065c(uVar6,param_1,**(undefined4 **)(_UNK_01ce6d8c + 0x1ce6b8c),0);
  iVar1 = func_0x01ce7060(param_1,param_2,uVar3,uVar6);
  if (iVar1 < 0) {
    fStack_34 = param_2;
    uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_01ce6d90 + 0x1ce6c8c),&fStack_34);
    uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_01ce6d94 + 0x1ce6ca8),uVar6,0);
    if (*(int *)(**(int **)(_UNK_01ce6d98 + 0x1ce6cbc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar6,0);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0328eea8(iVar4,iVar1,**(undefined4 **)(_UNK_01ce6d9c + 0x1ce6bd4));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  pcVar5 = (char *)(_UNK_01ce6da0 + 0x1ce6c00);
  fVar8 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce6da4 + 0x1ce6c18));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01ce6da8 + 0x1ce6c30) + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar7 = (double)(param_2 / fVar8);
  dVar9 = (double)func_0x0148e1a4(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),&uStack_30);
  if (0.0 <= param_2 / fVar8) {
    if (dVar9 != 0.5) {
      dVar7 = (double)func_0x02450740(SUB84(dVar7 + 0.5,0),(int)((ulonglong)(dVar7 + 0.5) >> 0x20));
      goto LAB_01ce6d30;
    }
    dVar7 = 1.0;
  }
  else {
    if (dVar9 != -0.5) {
      dVar7 = (double)func_0x0148df24(SUB84(dVar7 + -0.5,0),(int)((ulonglong)(dVar7 + -0.5) >> 0x20)
                                     );
      goto LAB_01ce6d30;
    }
    dVar7 = -1.0;
  }
  uVar2 = func_0x01457ce4(uStack_30,uStack_2c);
  dVar7 = (double)CONCAT44(uStack_2c,uStack_30) + dVar7;
  if ((uVar2 & 1) == 0) {
    dVar7 = (double)CONCAT44(uStack_2c,uStack_30);
  }
LAB_01ce6d30:
  iVar4 = (int)(longlong)dVar7;
  if (dVar7 == _UNK_01ce6d60) {
    iVar4 = -0x80000000;
  }
  iVar4 = iVar4 * iVar1;
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  return iVar4;
}



// ===== FAT.RewardMan$$_RoundTool RVA 0x1cd6dac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ce6dac(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01ce7018 + 0x1ce6dd0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce701c + 0x1ce6de4));
    func_0x01384978(*(undefined4 *)(_UNK_01ce7020 + 0x1ce6df0));
    func_0x01384978(*(undefined4 *)(_UNK_01ce7024 + 0x1ce6dfc));
    func_0x01384978(*(undefined4 *)(_UNK_01ce7028 + 0x1ce6e08));
    func_0x01384978(*(undefined4 *)(_UNK_01ce702c + 0x1ce6e14));
    func_0x01384978(*(undefined4 *)(_UNK_01ce7030 + 0x1ce6e20));
    func_0x01384978(*(undefined4 *)(_UNK_01ce7034 + 0x1ce6e2c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce7038 + 0x1ce6e38));
    func_0x01384978(*(undefined4 *)(_UNK_01ce703c + 0x1ce6e44));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01ce7040 + 0x1ce6ec8));
    func_0x0245065c(uVar2,param_2,**(undefined4 **)(_UNK_01ce7044 + 0x1ce6ee8),0);
    uVar3 = func_0x01ce7060(param_2,param_3,uVar6,uVar2);
    if (0x7fffffff < uVar3) {
      uStack_2c = param_3;
      uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01ce7048 + 0x1ce6f20),&uStack_2c);
      uVar3 = 0;
      uVar2 = func_0x0244f6a0(**(undefined4 **)(_UNK_01ce704c + 0x1ce6f40),uVar2,0);
      if (*(int *)(**(int **)(_UNK_01ce7050 + 0x1ce6f54) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar2,0);
    }
    iVar1 = *(int *)(param_2 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0328eea8(iVar1,uVar3,**(undefined4 **)(_UNK_01ce7054 + 0x1ce6f90));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x18);
    if (*(int *)(**(int **)(_UNK_01ce7058 + 0x1ce6fb4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02565a88(uVar2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    uVar4 = **(undefined4 **)(_UNK_01ce705c + 0x1ce6ff4);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x038fd264(param_1,uVar2,uVar6,uVar4);
  }
  else {
    iVar1 = func_0x0229f13c(0x8c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021762c8(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}



// ===== FAT.RewardMan$$_FindBoundIndex RVA 0x1cd7060 =====

int FUN_01ce7060(undefined4 param_1,float param_2,int param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  
  iVar3 = func_0x0229f06c(0x8b,0);
  if (iVar3 == 0) {
    param_3 = param_3 + -1;
    if (-1 < param_3) {
      iVar5 = 0;
      iVar3 = param_3;
      param_3 = param_3 / 2;
      do {
        while( true ) {
          if (param_4 == 0) {
            func_0x01384bf0();
          }
          uVar4 = (**(code **)(param_4 + 0xc))
                            (*(undefined4 *)(param_4 + 0x20),param_3,*(undefined4 *)(param_4 + 0x14)
                            );
          fVar6 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 < param_2) << 0x1f;
          if (!SUB41(in_fpscr >> 0x1f,0)) break;
          iVar5 = param_3 + 1;
LAB_01ce7178:
          param_3 = iVar5 + (iVar3 - iVar5) / 2;
          if (iVar3 < iVar5) {
            return iVar3;
          }
        }
        uVar4 = (**(code **)(param_4 + 0xc))
                          (*(undefined4 *)(param_4 + 0x20),param_3,*(undefined4 *)(param_4 + 0x14));
        fVar6 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < param_2) << 0x1f |
                (uint)(fVar6 == param_2) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar6) || NAN(param_2)) << 0x1c;
        bVar2 = (byte)(uVar1 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          iVar3 = param_3 + -1;
          goto LAB_01ce7178;
        }
        uVar4 = (**(code **)(param_4 + 0xc))
                          (*(undefined4 *)(param_4 + 0x20),param_3,*(undefined4 *)(param_4 + 0x14));
        fVar6 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar6 == param_2) << 0x1e;
      } while (!SUB41(in_fpscr >> 0x1e,0));
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x8b,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    param_3 = func_0x02175fd4(iVar3,param_1,param_2,param_3,param_4,0);
  }
  return param_3;
}



// ===== FAT.RewardMan$$_RoundLifeTimeVisitor RVA 0x1cd71a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ce71a0(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01ce725c + 0x1ce71b8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce7260 + 0x1ce71cc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3c91,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3c91,0);
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
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0328eea8(iVar1,param_2,**(undefined4 **)(_UNK_01ce7264 + 0x1ce723c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x14);
}



// ===== FAT.RewardMan$$_RoundCoinVisitor RVA 0x1cd7268 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ce7268(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01ce7324 + 0x1ce7280);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce7328 + 0x1ce7294));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8a,0);
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
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0328eea8(iVar1,param_2,**(undefined4 **)(_UNK_01ce732c + 0x1ce7304));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x14);
}



// ===== FAT.RewardMan$$_RoundToolVisitor RVA 0x1cd7330 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ce7330(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01ce73ec + 0x1ce7348);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce73f0 + 0x1ce735c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8d,0);
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
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0328eea8(iVar1,param_2,**(undefined4 **)(_UNK_01ce73f4 + 0x1ce73cc));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x14);
}



// ===== FAT.RewardMan$$.ctor RVA 0x1cd73f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ce73f8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01ce7580 + 0x1ce740c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ce7584 + 0x1ce7420));
    func_0x01384978(*(undefined4 *)(_UNK_01ce7588 + 0x1ce742c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce758c + 0x1ce7438));
    func_0x01384978(*(undefined4 *)(_UNK_01ce7590 + 0x1ce7444));
    func_0x01384978(*(undefined4 *)(_UNK_01ce7594 + 0x1ce7450));
    func_0x01384978(*(undefined4 *)(_UNK_01ce7598 + 0x1ce745c));
    func_0x01384978(*(undefined4 *)(_UNK_01ce759c + 0x1ce7468));
    func_0x01384978(*(undefined4 *)(_UNK_01ce75a0 + 0x1ce7474));
    func_0x01384978(*(undefined4 *)(_UNK_01ce75a4 + 0x1ce7480));
    func_0x01384978(*(undefined4 *)(_UNK_01ce75a8 + 0x1ce748c));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ce75ac + 0x1ce74a0));
  func_0x03688a50(uVar1,**(undefined4 **)(_UNK_01ce75b0 + 0x1ce74b4));
  puVar2 = *(undefined4 **)(_UNK_01ce75b4 + 0x1ce74c8);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01ce75b8 + 0x1ce74e0));
  puVar2 = *(undefined4 **)(_UNK_01ce75bc + 0x1ce74f4);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01ce75c0 + 0x1ce750c));
  puVar2 = *(undefined4 **)(_UNK_01ce75c4 + 0x1ce7520);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01ce75c8 + 0x1ce7538));
  puVar2 = *(undefined4 **)(_UNK_01ce75cc + 0x1ce754c);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01ce75d0 + 0x1ce7564));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.RewardMan.<>c__DisplayClass13_0$$.ctor RVA 0x1cd76f8 =====

void FUN_01ce76f8(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.RewardMan.<>c__DisplayClass13_0$$<_BeginReward>b__1 RVA 0x1cd7700 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ce7700(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
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
  undefined4 uStack_28;
  undefined4 uStack_20;
  
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0(0,0);
  }
  iVar6 = *(int *)(iVar4 + 0x10);
  uVar7 = *(undefined4 *)(iVar4 + 0x14);
  iVar4 = *(int *)(iVar4 + 8);
  pcVar9 = (char *)(_UNK_019a3d78 + 0x19a3c6c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019a3d7c + 0x19a3c80),iVar6,uVar7,0);
    func_0x01384978(*(undefined4 *)(_UNK_019a3d80 + 0x19a3c8c));
    func_0x01384978(*(undefined4 *)(_UNK_019a3d84 + 0x19a3c98));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02177130(iVar1,iVar4,iVar6,uVar7);
    return;
  }
  if (*(int *)(**(int **)(_UNK_019a3d88 + 0x19a3d00) + 0x74) == 0) {
    func_0x01384ab4();
  }
  piVar2 = (int *)func_0x02f74dec(**(undefined4 **)(_UNK_019a3d8c + 0x19a3d1c));
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  piVar3 = *(int **)(_UNK_019a3d90 + 0x19a3d3c);
  piVar2[0x13] = iVar6;
  piVar2[0x12] = iVar4;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar4 = func_0x023ebadc(uVar7,0);
  piVar2[0x14] = iVar4;
  pcVar9 = (char *)(_UNK_01993228 + 0x19930f0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0199322c + 0x1993104));
    func_0x01384978(*(undefined4 *)(_UNK_01993230 + 0x1993110));
    *pcVar9 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x27,0);
  if (iVar4 == 0) {
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar4 = *piVar2;
    uVar5 = (uint)*(byte *)(**(int **)(_UNK_01993234 + 0x1993174) + 0xb8);
    if ((uVar5 <= *(byte *)(iVar4 + 0xb8)) &&
       (*(int *)(*(int *)(iVar4 + 100) + uVar5 * 4 + -4) == **(int **)(_UNK_01993234 + 0x1993174)))
    {
      (**(code **)(iVar4 + 0xe0))(piVar2,*(undefined4 *)(iVar4 + 0xe4));
    }
    piVar3 = (int *)func_0x02450044(piVar2,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)(**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
    uVar7 = func_0x02450054(piVar2,0);
    if (*(int *)(**(int **)(_UNK_01993238 + 0x1993204) + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar9 = (char *)(_UNK_01998f20 + 0x1998e0c);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01998f24 + 0x1998e20));
      func_0x01384978(*(undefined4 *)(_UNK_01998f28 + 0x1998e2c));
      func_0x01384978(*(undefined4 *)(_UNK_01998f2c + 0x1998e38));
      *pcVar9 = '\x01';
    }
    iVar4 = func_0x0229f06c(0x2a,0);
    if (iVar4 == 0) {
      iVar4 = func_0x03668dfc(**(undefined4 **)(_UNK_01998f30 + 0x1998e94));
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar4 + 9) != '\0') {
        piVar2 = *(int **)(_UNK_01998f34 + 0x1998ec0);
        iVar4 = *piVar2;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar2;
        }
        if (*(char *)(*(int *)(iVar4 + 0x5c) + 0xc) != '\0') {
          iVar4 = **(int **)(**(int **)(_UNK_01998f38 + 0x1998ef0) + 0x5c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar6 = func_0x0229f06c(0x2b,0,uVar7,0);
          if (iVar6 == 0) {
            iVar6 = func_0x020a3acc(iVar4,0,piVar3,uVar7);
            if (iVar6 == 0) {
              piVar2 = *(int **)(iVar4 + 0x24);
              if (piVar2 == (int *)0x0) {
                func_0x01384bf0();
              }
                    /* WARNING: Could not recover jumptable at 0x020a3d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*piVar2 + 0x1e8))(piVar2,piVar3,uVar7,*(undefined4 *)(*piVar2 + 0x1ec));
              return;
            }
          }
          else {
            iVar6 = func_0x0229f13c(0x2b,0);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            uStack_20 = 0;
            func_0x02174858(iVar6,iVar4,piVar3,uVar7);
          }
          return;
        }
      }
      return;
    }
    iVar4 = func_0x0229f13c(0x2a,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x27,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 0;
    piVar3 = piVar2;
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
  if (*(int *)(iVar4 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
  }
  func_0x01485278(&uStack_38,piVar3,0);
  func_0x01485278(&uStack_38,uVar7,0);
  iVar6 = *(int *)(iVar4 + 8);
  uVar7 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar4 == 0) {
    uVar8 = 2;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_38,uVar8,0,0);
  return;
}


