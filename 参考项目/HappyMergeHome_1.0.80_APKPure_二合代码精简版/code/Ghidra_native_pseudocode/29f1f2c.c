
/* WARNING: Possible PIC construction at 0x02a0853c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02a08540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a01f2c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  undefined4 unaff_r5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int unaff_r6;
  int *piVar9;
  undefined4 unaff_r7;
  int iVar10;
  undefined4 unaff_r8;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 unaff_lr;
  int aiStack_28 [4];
  
  pcVar6 = (char *)(_UNK_02a021b8 + 0x2a01f40);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a021bc + 0x2a01f54));
    func_0x01438628(*(undefined4 *)(_UNK_02a021c0 + 0x2a01f60));
    func_0x01438628(*(undefined4 *)(_UNK_02a021c4 + 0x2a01f6c));
    func_0x01438628(*(undefined4 *)(_UNK_02a021c8 + 0x2a01f78));
    func_0x01438628(*(undefined4 *)(_UNK_02a021cc + 0x2a01f84));
    func_0x01438628(*(undefined4 *)(_UNK_02a021d0 + 0x2a01f90));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2511,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2511,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
SUB_02868e1c:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
    *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x48),0,0);
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
      func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
    }
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x024f56d0(iVar4,uVar8,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
    return;
  }
  iVar1 = FUN_02a01e48(param_1);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_02a021d4 + 0x2a01ff8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02a021d8 + 0x2a02014));
    piVar9 = *(int **)(_UNK_02a021dc + 0x2a02028);
    iVar4 = *piVar9;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x014387a4();
      iVar4 = *piVar9;
    }
    iVar10 = **(int **)(_UNK_02a021e0 + 0x2a02048);
    iVar2 = *(int *)(iVar10 + 0x1c);
    uVar8 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x4ac);
    if (iVar2 == 0) {
      func_0x014909d8(iVar10);
      iVar2 = *(int *)(iVar10 + 0x1c);
    }
    iVar4 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x0149097c();
    }
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x0149097c();
    }
    uVar5 = **(undefined4 **)(iVar4 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b0c90c(iVar1,uVar8,uVar5,0);
    iVar1 = FUN_029fcfe8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_0269eaec(iVar1,*(int *)(iVar1 + 0x34) + 1,0);
    iVar1 = FUN_029fcfe8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b75c84(iVar1,**(undefined4 **)(_UNK_02a021e4 + 0x2a0212c));
    iVar1 = FUN_029fcfe8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_0269ebb0(iVar1,0,0);
    iVar1 = FUN_029fcfe8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_0269ea30(iVar1,0,0);
    if (*(int *)(**(int **)(_UNK_02a021e8 + 0x2a02190) + 0x74) == 0) {
      func_0x014387a4();
    }
    param_1 = FUN_02a00b80();
    if (param_1 != 0) {
      iVar1 = func_0x02953fd4(0x2506,0);
      if (iVar1 == 0) {
        pcVar6 = (char *)(_UNK_02a08974 + 0x2a08468);
        if (*pcVar6 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02a08978 + 0x2a0847c));
          func_0x01438628(*(undefined4 *)(_UNK_02a0897c + 0x2a08488));
          func_0x01438628(*(undefined4 *)(_UNK_02a08980 + 0x2a08494));
          func_0x01438628(*(undefined4 *)(_UNK_02a08984 + 0x2a084a0));
          func_0x01438628(*(undefined4 *)(_UNK_02a08988 + 0x2a084ac));
          func_0x01438628(*(undefined4 *)(_UNK_02a0898c + 0x2a084b8));
          func_0x01438628(*(undefined4 *)(_UNK_02a08990 + 0x2a084c4));
          func_0x01438628(*(undefined4 *)(_UNK_02a08994 + 0x2a084d0));
          func_0x01438628(*(undefined4 *)(_UNK_02a08998 + 0x2a084dc));
          func_0x01438628(*(undefined4 *)(_UNK_02a0899c + 0x2a084e8));
          func_0x01438628(*(undefined4 *)(_UNK_02a089a0 + 0x2a084f4));
          *pcVar6 = '\x01';
        }
        unaff_r6 = 0;
        iVar1 = func_0x02953fd4(0x2507,0);
        if (iVar1 == 0) {
          puVar11 = *(undefined4 **)(_UNK_02a089a4 + 0x2a08550);
          piVar9 = *(int **)(_UNK_02a089a8 + 0x2a08558);
          puVar12 = *(undefined4 **)(_UNK_02a089ac + 0x2a08560);
          while( true ) {
            iVar4 = unaff_r6;
            iVar1 = *(int *)(param_1 + 0x34);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar1 + 0xc) <= iVar4) break;
            iVar1 = *(int *)(param_1 + 0x34);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x0152983c(iVar1,iVar4,*puVar11);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x014e94d8(iVar1,0);
            if (*(int *)(*piVar9 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = FUN_029fc490();
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            unaff_r6 = iVar4 + 1;
            uVar8 = FUN_02a001e4(iVar2,unaff_r6);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x014e94e8(iVar1,uVar8,0);
            iVar1 = *(int *)(param_1 + 0x54);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x0152983c(iVar1,iVar4,*puVar11);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x014e94d8(iVar1,0);
            iVar2 = FUN_029fc490();
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar3 = FUN_02a001e4(iVar2,unaff_r6);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x014e94e8(iVar1,uVar3 ^ 1,0);
            iVar1 = FUN_029fc490();
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = FUN_02a001e4(iVar1,unaff_r6);
            if (iVar1 == 0) {
              iVar1 = *(int *)(param_1 + 0x38);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x0152983c(iVar1,iVar4,**(undefined4 **)(_UNK_02a089b0 + 0x2a086dc));
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x024f1048(iVar1,*puVar12,0);
            }
          }
          iVar1 = *(int *)(param_1 + 0x74);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = FUN_029fc490();
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = FUN_029fcfe8(iVar4);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          aiStack_28[0] = *(int *)(iVar4 + 0x34) + 1;
          uVar8 = func_0x01524ffc(aiStack_28,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02032130(iVar1,uVar8,1,0);
          iVar1 = FUN_029fc490();
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = FUN_02a0151c(iVar1);
          iVar4 = *(int *)(param_1 + 0x6c);
          if (*(int *)(**(int **)(_UNK_02a089b4 + 0x2a087b4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02a089b8 + 0x2a087d4));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x02c488f4(iVar2,0);
          if (*(int *)(**(int **)(_UNK_02a089bc + 0x2a08804) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_02a089c0 + 0x2a08820));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar1 + 0x10);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x024f0530(iVar7,0,**(undefined4 **)(_UNK_02a089c4 + 0x2a08854));
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = FUN_029a6fa8(iVar10,uVar8,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar8 = *(undefined4 *)(iVar10 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar8 = func_0x024f0e8c(iVar2,uVar8,0);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x024ef348(iVar4,uVar8,0);
          iVar2 = *(int *)(param_1 + 0x70);
          iVar4 = FUN_029fc490();
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = FUN_029fcfe8(iVar4);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          aiStack_28[0] = *(int *)(iVar4 + 0x44);
          uVar8 = func_0x01524ffc(aiStack_28,0);
          aiStack_28[0] = *(int *)(iVar1 + 0xc);
          uVar5 = func_0x01524ffc(aiStack_28,0);
          uVar8 = func_0x024eee28(uVar8,**(undefined4 **)(_UNK_02a089c8 + 0x2a08940),uVar5,0);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x02032130(iVar2,uVar8,1,0);
          return;
        }
        iVar1 = func_0x029540a4(0x2507,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        unaff_lr = 0x2a08540;
        unaff_r4 = iVar1;
        register0x00000054 = (BADSPACEBASE *)aiStack_28;
      }
      else {
        iVar1 = func_0x029540a4(0x2506,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
      }
      goto SUB_02868e1c;
    }
  }
  return;
}

