
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0171de14(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint in_fpscr;
  undefined1 auStack_48 [12];
  undefined4 uStack_3c;
  
  pcVar6 = (char *)(_UNK_0171e288 + 0x171de34);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0171e28c + 0x171de48));
    func_0x01438628(*(undefined4 *)(_UNK_0171e290 + 0x171de54));
    func_0x01438628(*(undefined4 *)(_UNK_0171e294 + 0x171de60));
    func_0x01438628(*(undefined4 *)(_UNK_0171e298 + 0x171de6c));
    func_0x01438628(*(undefined4 *)(_UNK_0171e29c + 0x171de78));
    func_0x01438628(*(undefined4 *)(_UNK_0171e2a0 + 0x171de84));
    func_0x01438628(*(undefined4 *)(_UNK_0171e2a4 + 0x171de90));
    func_0x01438628(*(undefined4 *)(_UNK_0171e2a8 + 0x171de9c));
    func_0x01438628(*(undefined4 *)(_UNK_0171e2ac + 0x171dea8));
    func_0x01438628(*(undefined4 *)(_UNK_0171e2b0 + 0x171deb4));
    func_0x01438628(*(undefined4 *)(_UNK_0171e2b4 + 0x171dec0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8b55,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0171e2b8 + 0x171df24) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0171e2bc + 0x171df40));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    iVar7 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      puVar11 = *(undefined4 **)(_UNK_0171e2c0 + 0x171df84);
      iVar7 = func_0x0152983c(iVar1,0,*puVar11);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x28);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar7 + 0xc);
      iVar7 = func_0x0152983c(iVar1,0,*puVar11);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar7 + 0x2c) * iVar8 == 6) {
        iVar8 = FUN_01714754(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar7 = 0;
        if (*(int *)(iVar8 + 0x70) != 6) {
          iVar7 = 0;
          iVar8 = 0;
          puVar10 = *(undefined4 **)(_UNK_0171e2cc + 0x171e01c);
          puVar12 = *(undefined4 **)(_UNK_0171e2d0 + 0x171e024);
          uStack_3c = param_1;
          while( true ) {
            iVar2 = func_0x0152983c(iVar1,0,*puVar11);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x28);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar9 = uStack_3c;
            if (*(int *)(iVar2 + 0xc) <= iVar7) break;
            if (*(int *)(**(int **)(_UNK_0171e2d4 + 0x171e068) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x014e9518(*puVar10);
            iVar3 = func_0x0152983c(iVar1,0,*puVar11);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x28);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar9 = func_0x024f0530(iVar3,iVar7,*puVar12);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x02be153c(iVar2,uVar9,0);
            if (iVar2 != 0) {
              iVar2 = func_0x0152983c(iVar1,0,*puVar11);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar8 = *(int *)(iVar2 + 0x2c) + iVar8;
            }
            iVar7 = iVar7 + 1;
          }
          iVar2 = func_0x0171e2e8(uStack_3c);
          iVar7 = 0;
          if (iVar2 != 0) {
            iVar2 = FUN_01714754(uVar9);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar2 + 0x70) < iVar8) {
              iVar7 = FUN_01714754(uVar9);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar7 + 0x70);
              iVar1 = func_0x0152983c(iVar1,0,*puVar11);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0x2c);
              if (*(int *)(**(int **)(_UNK_0171e2d8 + 0x171e1e8) + 0x74) == 0) {
                func_0x014387a4();
              }
              pcVar6 = (char *)(_UNK_0171e2dc + 0x171e210);
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_0171e2e0 + 0x171e228));
                *pcVar6 = '\x01';
              }
              uVar9 = VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
              uVar5 = VectorSignedToFloat(iVar1 + iVar7,(byte)(in_fpscr >> 0x16) & 3);
              if (*(int *)(**(int **)(_UNK_0171e2e4 + 0x171e244) + 0x74) == 0) {
                func_0x014387a4();
              }
              fVar4 = (float)func_0x024f12bc(uVar9,uVar5,0);
              iVar7 = (int)fVar4;
              if (fVar4 == _UNK_0171e284) {
                iVar7 = -0x80000000;
              }
            }
          }
        }
      }
      else {
        if (*(int *)(**(int **)(_UNK_0171e2c4 + 0x171e128) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = 0;
        func_0x024ef174(**(undefined4 **)(_UNK_0171e2c8 + 0x171e14c),0);
      }
    }
    return iVar7;
  }
  iVar1 = func_0x029540a4(0x8b55,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f56c0(auStack_48,0,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&stack0xffffffd0,param_1,0);
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
  func_0x024f56d0(iVar7,uVar9,&stack0xffffffd0,uVar5,0,0);
  iVar1 = func_0x024f56f0(&stack0xffffffd0,0,0);
  return iVar1;
}

