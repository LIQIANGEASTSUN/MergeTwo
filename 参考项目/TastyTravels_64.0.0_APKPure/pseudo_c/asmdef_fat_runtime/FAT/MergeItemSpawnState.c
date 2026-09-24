/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MergeItemSpawnState$$.ctor RVA 0x1e12fa0 =====

void FUN_01e22fa0(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MergeItemSpawnState$$OnEnter RVA 0x1e12fa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e22fa8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01e23404 + 0x1e22fc4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e23408 + 0x1e22fd8));
    func_0x01384978(*(undefined4 *)(_UNK_01e2340c + 0x1e22fe4));
    func_0x01384978(*(undefined4 *)(_UNK_01e23410 + 0x1e22ff0));
    func_0x01384978(*(undefined4 *)(_UNK_01e23414 + 0x1e22ffc));
    func_0x01384978(*(undefined4 *)(_UNK_01e23418 + 0x1e23008));
    func_0x01384978(*(undefined4 *)(_UNK_01e2341c + 0x1e23014));
    func_0x01384978(*(undefined4 *)(_UNK_01e23420 + 0x1e23020));
    func_0x01384978(*(undefined4 *)(_UNK_01e23424 + 0x1e2302c));
    func_0x01384978(*(undefined4 *)(_UNK_01e23428 + 0x1e23038));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0f8,0);
  if (iVar1 == 0) {
    FUN_01e1c2e0(param_1,0);
    uVar8 = *(undefined4 *)(param_1 + 8);
    if (*(int *)(**(int **)(_UNK_01e2342c + 0x1e230a4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    FUN_01ddbbcc(&uStack_38,uVar8,0);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_38,iVar1,0);
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e23430 + 0x1e23110));
    iVar7 = *(int *)(param_1 + 8);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0244fc34(iVar7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)0x0;
    if ((piVar2 != (int *)0x0) &&
       (piVar6 = piVar2, *piVar2 != **(int **)(_UNK_01e23434 + 0x1e2315c))) {
      piVar6 = (int *)0x0;
    }
    uStack_40 = 0;
    FUN_01de3a84(iVar1,uStack_38,uStack_34,piVar6);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,1,0);
    iVar1 = *(int *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0xc) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244fc34(iVar1,0);
    if (fStack_30 <= 0.0) {
      pcVar5 = (char *)(_UNK_01e23450 + 0x1e232f0);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e23454 + 0x1e23304));
        *pcVar5 = '\x01';
      }
      piVar2 = *(int **)(_UNK_01e23458 + 0x1e23320);
      iVar7 = *(int *)(*piVar2 + 0x5c);
      uStack_3c = 0;
      uStack_40 = 0x3e99999a;
      uVar8 = func_0x02cf3bbc(iVar1,*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 0x10),
                              *(undefined4 *)(iVar7 + 0x14));
      pcVar5 = (char *)(_UNK_01e2345c + 0x1e23350);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e23460 + 0x1e23364));
        *pcVar5 = '\x01';
      }
      puVar3 = *(undefined4 **)(*piVar2 + 0x5c);
      uStack_3c = **(undefined4 **)(_UNK_01e23464 + 0x1e23380);
      uStack_40 = 1;
      uVar8 = func_0x0309e924(uVar8,*puVar3,puVar3[1],puVar3[2]);
    }
    else {
      pcVar5 = (char *)(_UNK_01e23438 + 0x1e23204);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e2343c + 0x1e23218));
        *pcVar5 = '\x01';
      }
      piVar2 = *(int **)(_UNK_01e23440 + 0x1e23230);
      puVar3 = *(undefined4 **)(*piVar2 + 0x5c);
      uVar8 = *puVar3;
      uVar4 = puVar3[1];
      uVar9 = puVar3[2];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_40 = 0;
      func_0x024503a4(iVar1,uVar8,uVar4,uVar9);
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x0244fc34(iVar1,0);
      pcVar5 = (char *)(_UNK_01e23444 + 0x1e2328c);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e23448 + 0x1e232a0));
        *pcVar5 = '\x01';
      }
      iVar1 = *(int *)(*piVar2 + 0x5c);
      uStack_40 = 0x3e99999a;
      uStack_3c = 0;
      uVar8 = func_0x02cf3bbc(uVar8,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
                              *(undefined4 *)(iVar1 + 0x14));
      uVar8 = func_0x0309ef60(uVar8,fStack_30,**(undefined4 **)(_UNK_01e2344c + 0x1e232dc));
    }
    uVar8 = func_0x0309f0f8(uVar8,0x1c,**(undefined4 **)(_UNK_01e23468 + 0x1e233a0));
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01e2346c + 0x1e233b8));
    func_0x02ce3d80(uVar4,param_1,**(undefined4 **)(_UNK_01e23470 + 0x1e233d4),0);
    uVar8 = func_0x0309ead4(uVar8,uVar4,**(undefined4 **)(_UNK_01e23474 + 0x1e233ec));
    *(undefined4 *)(param_1 + 0x10) = uVar8;
    return;
  }
  iVar1 = func_0x0229f13c(0xa0f8,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_30 = 0.0;
  func_0x0245494c(&fStack_48,0,0);
  fStack_30 = fStack_48;
  uStack_2c = uStack_44;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&fStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&fStack_30,param_1,0);
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
  func_0x0245495c(iVar7,uVar8,&fStack_30,uVar4,0,0);
  return;
}



// ===== FAT.MergeItemSpawnState$$OnLeave RVA 0x1e13478 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e23478(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  
  iVar2 = func_0x0229f06c(0xa0fa,0);
  if (iVar2 == 0) {
    FUN_01e1c32c(param_1,0);
    if (*(int *)(param_1 + 0x10) != 0) {
      func_0x02ce9e90(*(int *)(param_1 + 0x10),0,0);
    }
    iVar2 = *(int *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0244fc34(iVar2,0);
    pcVar5 = (char *)(_UNK_01e235e0 + 0x1e2352c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e235e4 + 0x1e23540));
      *pcVar5 = '\x01';
    }
    iVar4 = *(int *)(**(int **)(_UNK_01e235e8 + 0x1e23558) + 0x5c);
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    uVar3 = *(undefined4 *)(iVar4 + 0x10);
    uVar7 = *(undefined4 *)(iVar4 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x024503a4(iVar2,uVar6,uVar3,uVar7);
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(iVar2 + 0x14);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    if (iVar2 == 8) {
      iVar2 = func_0x0229f06c(0xa0fb,0);
      if (iVar2 == 0) {
        param_1 = *(int *)(param_1 + 0x20);
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0229f06c(0xa0ae,0);
        if (iVar2 == 0) goto LAB_01e19edc;
        iVar2 = func_0x0229f13c(0xa0ae,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0xa0fb);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar2 = func_0x0229f06c(0xa0e8,0);
      if (iVar2 == 0) {
        param_1 = *(int *)(param_1 + 0x20);
        if (param_1 == 0) {
          func_0x01384bf0();
        }
LAB_01e19edc:
        pcVar5 = (char *)(_UNK_01e1a070 + 0x1e19ef8);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e1a074 + 0x1e19f0c));
          func_0x01384978(*(undefined4 *)(_UNK_01e1a078 + 0x1e19f18));
          *pcVar5 = '\x01';
        }
        iVar2 = func_0x0229f06c(0xa0ac,0);
        if (iVar2 == 0) {
          if (*(int *)(**(int **)(_UNK_01e1a07c + 0x1e19f78) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar6 = FUN_01dda730(3,0);
          iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1a080 + 0x1e19fa4));
          uVar3 = *(undefined4 *)(param_1 + 0x10);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0243c430(iVar2,uVar6,uVar3,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x024504c0(iVar2,0);
          pcVar5 = (char *)(_UNK_01e1a084 + 0x1e19ffc);
          if (*pcVar5 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e1a088 + 0x1e1a010));
            *pcVar5 = '\x01';
          }
          puVar1 = *(undefined4 **)(**(int **)(_UNK_01e1a08c + 0x1e1a028) + 0x5c);
          uVar3 = *puVar1;
          uVar7 = puVar1[1];
          uVar8 = puVar1[2];
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uStack_28 = 0;
          func_0x0245068c(iVar4,uVar3,uVar7,uVar8);
          pcVar5 = (char *)(_UNK_01dda970 + 0x1dda89c);
          if (*pcVar5 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01dda974 + 0x1dda8b0),0x3f800000,uVar6,0);
            func_0x01384978(*(undefined4 *)(_UNK_01dda978 + 0x1dda8bc));
            *pcVar5 = '\x01';
          }
          iVar4 = func_0x0229f06c(0x5f34,0);
          if (iVar4 == 0) {
            uStack_24 = **(undefined4 **)(_UNK_01dda97c + 0x1dda924);
            uStack_20 = 0xffffffff;
            uStack_1c = uVar6;
            uVar6 = func_0x0244f5f4(&uStack_24,0);
            if (*(int *)(**(int **)(_UNK_01dda980 + 0x1dda948) + 0x74) == 0) {
              func_0x01384ab4();
            }
            FUN_01dda7a0(iVar2,0x3f800000,uVar6);
          }
          else {
            iVar4 = func_0x0229f13c(0x5f34,0);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uStack_28 = 0;
            func_0x02238c78(iVar4,iVar2,0x3f800000,uVar6);
          }
          return;
        }
        iVar2 = func_0x0229f13c(0xa0ac,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
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
      iVar2 = func_0x0229f13c(0xa0e8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa0fa,0);
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
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
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
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3);
  return;
}



// ===== FAT.MergeItemSpawnState$$Update RVA 0x1e135ec =====

undefined4 FUN_01e235ec(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa0fc,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      return 0xc;
    }
    iVar1 = func_0x0229f06c(0xa0b3,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f13c(0xa0b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0fc,0);
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
  uVar4 = func_0x0245498c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.MergeItemSpawnState$$_OnTweenFinished RVA 0x1e13664 =====

void FUN_01e23664(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa0f9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0f9,0);
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



// ===== FAT.MergeItemSpawnState$$<>iFixBaseProxy_OnEnter RVA 0x1e136bc =====

void FUN_01e236bc(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x168b,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x168b,0);
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



// ===== FAT.MergeItemSpawnState$$<>iFixBaseProxy_OnLeave RVA 0x1e136c4 =====

void FUN_01e236c4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1688,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1688,0);
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



// ===== FAT.MergeItemSpawnState$$<>iFixBaseProxy_Update RVA 0x1e136cc =====

undefined4 FUN_01e236cc(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa0b3,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0b3,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  return 0;
}


