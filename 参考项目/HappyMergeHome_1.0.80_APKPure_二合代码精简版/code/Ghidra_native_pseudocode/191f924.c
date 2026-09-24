
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0192f924(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_0192fd98 + 0x192f944);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0192fd9c + 0x192f958));
    func_0x01438628(*(undefined4 *)(_UNK_0192fda0 + 0x192f964));
    func_0x01438628(*(undefined4 *)(_UNK_0192fda4 + 0x192f970));
    func_0x01438628(*(undefined4 *)(_UNK_0192fda8 + 0x192f97c));
    func_0x01438628(*(undefined4 *)(_UNK_0192fdac + 0x192f988));
    func_0x01438628(*(undefined4 *)(_UNK_0192fdb0 + 0x192f994));
    func_0x01438628(*(undefined4 *)(_UNK_0192fdb4 + 0x192f9a0));
    func_0x01438628(*(undefined4 *)(_UNK_0192fdb8 + 0x192f9ac));
    func_0x01438628(*(undefined4 *)(_UNK_0192fdbc + 0x192f9b8));
    func_0x01438628(*(undefined4 *)(_UNK_0192fdc0 + 0x192f9c4));
    func_0x01438628(*(undefined4 *)(_UNK_0192fdc4 + 0x192f9d0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9773,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0192fdc8 + 0x192fa34) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0192fdcc + 0x192fa50));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    iVar7 = 0;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      puVar11 = *(undefined4 **)(_UNK_0192fdd0 + 0x192fa94);
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
        iVar8 = FUN_01926264(param_1);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar7 = 0;
        if (*(int *)(iVar8 + 0x70) != 6) {
          iVar7 = 0;
          iVar8 = 0;
          puVar10 = *(undefined4 **)(_UNK_0192fddc + 0x192fb2c);
          puVar12 = *(undefined4 **)(_UNK_0192fde0 + 0x192fb34);
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
            if (*(int *)(**(int **)(_UNK_0192fde4 + 0x192fb78) + 0x74) == 0) {
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
          iVar2 = func_0x0192fdf8(uStack_3c);
          iVar7 = 0;
          if (iVar2 != 0) {
            iVar2 = FUN_01926264(uVar9);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar2 + 0x70) < iVar8) {
              iVar7 = FUN_01926264(uVar9);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar7 + 0x70);
              iVar1 = func_0x0152983c(iVar1,0,*puVar11);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = *(int *)(iVar1 + 0x2c);
              if (*(int *)(**(int **)(_UNK_0192fde8 + 0x192fcf8) + 0x74) == 0) {
                func_0x014387a4();
              }
              pcVar6 = (char *)(_UNK_0192fdec + 0x192fd20);
              if (*pcVar6 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_0192fdf0 + 0x192fd38));
                *pcVar6 = '\x01';
              }
              uVar9 = VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
              uVar5 = VectorSignedToFloat(iVar1 + iVar7,(byte)(in_fpscr >> 0x16) & 3);
              if (*(int *)(**(int **)(_UNK_0192fdf4 + 0x192fd54) + 0x74) == 0) {
                func_0x014387a4();
              }
              fVar4 = (float)func_0x024f12bc(uVar9,uVar5,0);
              iVar7 = (int)fVar4;
              if (fVar4 == _UNK_0192fd94) {
                iVar7 = -0x80000000;
              }
            }
          }
        }
      }
      else {
        if (*(int *)(**(int **)(_UNK_0192fdd4 + 0x192fc38) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = 0;
        func_0x024ef174(**(undefined4 **)(_UNK_0192fdd8 + 0x192fc5c),0);
      }
    }
    return iVar7;
  }
  iVar1 = func_0x029540a4(0x9773,0);
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

