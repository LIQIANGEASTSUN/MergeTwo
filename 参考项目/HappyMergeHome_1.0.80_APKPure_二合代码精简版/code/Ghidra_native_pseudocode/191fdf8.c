
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0192fdf8(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_01930248 + 0x192fe10);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0193024c + 0x192fe24));
    func_0x01438628(*(undefined4 *)(_UNK_01930250 + 0x192fe30));
    func_0x01438628(*(undefined4 *)(_UNK_01930254 + 0x192fe3c));
    func_0x01438628(*(undefined4 *)(_UNK_01930258 + 0x192fe48));
    func_0x01438628(*(undefined4 *)(_UNK_0193025c + 0x192fe54));
    func_0x01438628(*(undefined4 *)(_UNK_01930260 + 0x192fe60));
    func_0x01438628(*(undefined4 *)(_UNK_01930264 + 0x192fe6c));
    func_0x01438628(*(undefined4 *)(_UNK_01930268 + 0x192fe78));
    func_0x01438628(*(undefined4 *)(_UNK_0193026c + 0x192fe84));
    func_0x01438628(*(undefined4 *)(_UNK_01930270 + 0x192fe90));
    func_0x01438628(*(undefined4 *)(_UNK_01930274 + 0x192fe9c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9776,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01930278 + 0x192fef8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0193027c + 0x192ff14));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01930280 + 0x192ff34));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f110c(iVar1,0x5e,**(undefined4 **)(_UNK_01930284 + 0x192ff6c));
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_01930288 + 0x192ff8c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_0193028c + 0x192ffa8));
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar7 + 0x14);
      iVar7 = FUN_01926264(param_1);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x70);
      if (*(int *)(**(int **)(_UNK_01930290 + 0x192ffe4) + 0x74) == 0) {
        func_0x014387a4();
      }
      pcVar6 = (char *)(_UNK_01930294 + 0x1930008);
      if (*pcVar6 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_01930298 + 0x1930024));
        *pcVar6 = '\x01';
      }
      uVar9 = VectorSignedToFloat(iVar7 / 2,(byte)(in_fpscr >> 0x16) & 3);
      if (*(int *)(**(int **)(_UNK_0193029c + 0x193003c) + 0x74) == 0) {
        func_0x014387a4();
      }
      fVar2 = (float)func_0x024f12cc(uVar9,0,0);
      iVar7 = (int)fVar2;
      if (fVar2 == _UNK_01930244) {
        iVar7 = -0x80000000;
      }
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      puVar10 = *(undefined4 **)(_UNK_019302a0 + 0x1930098);
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
        iVar7 = func_0x024f0530(iVar8,iVar7,**(undefined4 **)(_UNK_019302a4 + 0x1930194));
        iVar8 = FUN_01926264(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(iVar8 + 0x70) * 6;
        if (iVar8 < iVar7 * 6) {
          puVar10 = *(undefined4 **)(_UNK_019302a8 + 0x19301e0);
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
  iVar1 = func_0x029540a4(0x9776,0);
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

