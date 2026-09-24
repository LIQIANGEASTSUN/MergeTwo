
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_018cd29c(undefined4 param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint in_fpscr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_018cd6ec + 0x18cd2b4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018cd6f0 + 0x18cd2c8));
    func_0x01438628(*(undefined4 *)(_UNK_018cd6f4 + 0x18cd2d4));
    func_0x01438628(*(undefined4 *)(_UNK_018cd6f8 + 0x18cd2e0));
    func_0x01438628(*(undefined4 *)(_UNK_018cd6fc + 0x18cd2ec));
    func_0x01438628(*(undefined4 *)(_UNK_018cd700 + 0x18cd2f8));
    func_0x01438628(*(undefined4 *)(_UNK_018cd704 + 0x18cd304));
    func_0x01438628(*(undefined4 *)(_UNK_018cd708 + 0x18cd310));
    func_0x01438628(*(undefined4 *)(_UNK_018cd70c + 0x18cd31c));
    func_0x01438628(*(undefined4 *)(_UNK_018cd710 + 0x18cd328));
    func_0x01438628(*(undefined4 *)(_UNK_018cd714 + 0x18cd334));
    func_0x01438628(*(undefined4 *)(_UNK_018cd718 + 0x18cd340));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x950d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_018cd71c + 0x18cd39c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018cd720 + 0x18cd3b8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_018cd724 + 0x18cd3d8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f110c(iVar1,0x31,**(undefined4 **)(_UNK_018cd728 + 0x18cd410));
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_018cd72c + 0x18cd430) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_018cd730 + 0x18cd44c));
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar7 + 0x14);
      iVar7 = FUN_018c3704(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x70);
      if (*(int *)(**(int **)(_UNK_018cd734 + 0x18cd488) + 0x74) == 0) {
        func_0x014387a4();
      }
      pcVar6 = (char *)(_UNK_018cd738 + 0x18cd4ac);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_018cd73c + 0x18cd4c8));
        *pcVar6 = '\x01';
      }
      uVar9 = VectorSignedToFloat(iVar7 / 2,(byte)(in_fpscr >> 0x16) & 3);
      if (*(int *)(**(int **)(_UNK_018cd740 + 0x18cd4e0) + 0x74) == 0) {
        func_0x014387a4();
      }
      fVar2 = (float)func_0x024f12cc(uVar9,0,0);
      iVar7 = (int)fVar2;
      if (fVar2 == _UNK_018cd6e8) {
        iVar7 = -0x80000000;
      }
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      puVar10 = *(undefined4 **)(_UNK_018cd744 + 0x18cd53c);
      iVar3 = func_0x0152983c(iVar8,0,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x30);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar7) {
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x0152983c(iVar8,0,*puVar10);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x30);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0xc) + -1;
      }
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x0152983c(iVar8,0,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar4 = 1;
      if (*(int *)(iVar3 + 0x30) != 0) {
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = func_0x0152983c(iVar8,0,*puVar10);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(iVar8 + 0x30);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x024f0530(iVar8,iVar7,**(undefined4 **)(_UNK_018cd748 + 0x18cd638));
        iVar8 = FUN_018c3704(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(iVar8 + 0x70) * 6;
        if (iVar8 < iVar7 * 6) {
          puVar10 = *(undefined4 **)(_UNK_018cd74c + 0x18cd684);
          do {
            iVar3 = *(int *)(iVar1 + 0x10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x014e9698(iVar3,iVar8,*puVar10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar4 = (uint)(*(int *)(iVar3 + 0xc) == 1);
          } while ((iVar7 * 6 + -1 != iVar8) && (iVar8 = iVar8 + 1, *(int *)(iVar3 + 0xc) == 1));
        }
      }
    }
    return uVar4;
  }
  iVar1 = func_0x029540a4(0x950d,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar5,0,0);
  uVar4 = func_0x024f56e0(&uStack_30,0,0);
  return uVar4;
}

