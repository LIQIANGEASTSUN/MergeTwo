
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0177b428(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_0177c340 + 0x177b440);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0177c344 + 0x177b454));
    func_0x01438628(*(undefined4 *)(_UNK_0177c348 + 0x177b460));
    func_0x01438628(*(undefined4 *)(_UNK_0177c34c + 0x177b46c));
    func_0x01438628(*(undefined4 *)(_UNK_0177c350 + 0x177b478));
    func_0x01438628(*(undefined4 *)(_UNK_0177c354 + 0x177b484));
    func_0x01438628(*(undefined4 *)(_UNK_0177c358 + 0x177b490));
    func_0x01438628(*(undefined4 *)(_UNK_0177c35c + 0x177b49c));
    func_0x01438628(*(undefined4 *)(_UNK_0177c360 + 0x177b4a8));
    func_0x01438628(*(undefined4 *)(_UNK_0177c364 + 0x177b4b4));
    func_0x01438628(*(undefined4 *)(_UNK_0177c368 + 0x177b4c0));
    func_0x01438628(*(undefined4 *)(_UNK_0177c36c + 0x177b4cc));
    func_0x01438628(*(undefined4 *)(_UNK_0177c370 + 0x177b4d8));
    func_0x01438628(*(undefined4 *)(_UNK_0177c374 + 0x177b4e4));
    func_0x01438628(*(undefined4 *)(_UNK_0177c378 + 0x177b4f0));
    func_0x01438628(*(undefined4 *)(_UNK_0177c37c + 0x177b4fc));
    func_0x01438628(*(undefined4 *)(_UNK_0177c380 + 0x177b508));
    func_0x01438628(*(undefined4 *)(_UNK_0177c384 + 0x177b514));
    func_0x01438628(*(undefined4 *)(_UNK_0177c388 + 0x177b520));
    func_0x01438628(*(undefined4 *)(_UNK_0177c38c + 0x177b52c));
    func_0x01438628(*(undefined4 *)(_UNK_0177c390 + 0x177b538));
    *pcVar3 = '\x01';
  }
  iVar2 = *param_1;
  iVar6 = param_1[5];
  iStack_24 = 0;
  iStack_28 = 0;
  if (iVar2 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[0xc];
    param_1[0xc] = 0;
LAB_0177b5b8:
    func_0x024f1028(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_0177c3ec + 0x177b5d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_0174c20c(0);
    if (iVar2 != 0) {
      FUN_0177b3bc();
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_0174e5a0(iVar6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0177c3f0 + 0x177b634));
      func_0x024f1124(iVar2,**(undefined4 **)(_UNK_0177c3f4 + 0x177b648));
      iVar1 = param_1[0xb];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      FUN_01752d00(iVar6,uVar7,iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x024f112c(iVar2,**(undefined4 **)(_UNK_0177c3f8 + 0x177b6ac));
      iVar2 = func_0x024f1130(&iStack_28,**(undefined4 **)(_UNK_0177c3fc + 0x177b6c0));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[0xd] = iStack_28;
        func_0x014385cc(param_1 + 0xd,0);
        func_0x035a1e58(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_0177c400 + 0x177c058))
        ;
        return;
      }
LAB_0177b6d4:
      func_0x014f5f38(&iStack_28,**(undefined4 **)(_UNK_0177c404 + 0x177b6e0));
    }
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    FUN_01756fd4(iVar6,0);
    iVar2 = param_1[0xb];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_01757058(iVar6,uVar7,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x024f1018(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[0xc] = iStack_24;
      func_0x014385cc(param_1 + 0xc,0);
      func_0x035b0108(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_0177c408 + 0x177bd7c));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[0xd];
      param_1[0xd] = 0;
      goto LAB_0177b6d4;
    }
    if (iVar2 != 2) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0177c394 + 0x177b8a8));
      func_0x024eeca8(iVar2,0);
      piVar4 = param_1 + 0xb;
      *piVar4 = iVar2;
      func_0x014385cc(piVar4,iVar2);
      iVar2 = param_1[0xb];
      iVar1 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      piVar5 = (int *)(iVar2 + 8);
      *piVar5 = iVar1;
      func_0x014385cc(piVar5,iVar1);
      iVar2 = *piVar4;
      if (*(int *)(**(int **)(_UNK_0177c398 + 0x177b8fc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0177c39c + 0x177b91c));
      iVar8 = param_1[6];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x029a6fa8(iVar1,iVar8,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar10 = (undefined4 *)(iVar2 + 0xc);
      *puVar10 = uVar7;
      func_0x014385cc(puVar10,uVar7);
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 0xc) == 0) {
        if (*(int *)(**(int **)(_UNK_0177c3a0 + 0x177bd9c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0177c3a4 + 0x177bdb8));
        piVar4 = *(int **)(_UNK_0177c3a8 + 0x177bdcc);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_0177c3ac + 0x177bdec);
        iVar1 = *(int *)(iVar8 + 0x1c);
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar8);
          iVar1 = *(int *)(iVar8 + 0x1c);
        }
        iVar6 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        uVar9 = **(undefined4 **)(iVar6 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar7,uVar9,0);
        goto LAB_0177b86c;
      }
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_0174edb4(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar4;
        uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_0177c3b0 + 0x177b9e8));
        func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_0177c3b4 + 0x177b9fc),0);
        if (*(int *)(**(int **)(_UNK_0177c3b8 + 0x177ba18) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x029a9e10(0x3f800000,uVar7,0);
      }
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_0174edb4(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[6];
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        FUN_01755dc4(iVar6,iVar2,0);
        if (param_1[7] == 10) {
          iVar2 = *piVar4;
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar2 + 0x48)) {
            iVar2 = *piVar4;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            FUN_01755f70(iVar6,uVar7,0);
            iVar2 = *piVar4;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            FUN_01755f70(iVar6,uVar7,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_0177c3bc + 0x177bf58) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0177c3c0 + 0x177bf74));
        piVar4 = *(int **)(_UNK_0177c3c4 + 0x177bf88);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_0177c3c8 + 0x177bfa8);
        iVar1 = *(int *)(iVar8 + 0x1c);
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar8);
          iVar1 = *(int *)(iVar8 + 0x1c);
        }
        iVar6 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        uVar9 = **(undefined4 **)(iVar6 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar7,uVar9,0);
        goto LAB_0177b86c;
      }
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x2c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_0174e5a0(iVar6,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0177c3cc + 0x177c07c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0177c3d0 + 0x177c098));
        piVar4 = *(int **)(_UNK_0177c3d4 + 0x177c0ac);
        iVar6 = *piVar4;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
          iVar6 = *piVar4;
        }
        iVar8 = **(int **)(_UNK_0177c3d8 + 0x177c0cc);
        iVar1 = *(int *)(iVar8 + 0x1c);
        uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar8);
          iVar1 = *(int *)(iVar8 + 0x1c);
        }
        iVar6 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        uVar9 = **(undefined4 **)(iVar6 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar7,uVar9,0);
        goto LAB_0177b86c;
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_0174e5a0(iVar6,0);
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar1 + 0x2c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x026cec5c(iVar2,uVar7,0);
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0x7fffffff < *(uint *)(iVar2 + 0x4c)) {
        if (*(int *)(**(int **)(_UNK_0177c3dc + 0x177bb7c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(_UNK_0177c3e0 + 0x177bbe8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x0202346c(0);
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x01524ffc(iVar1 + 8,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar2,0x323,uVar7,0,0,0,0);
      piVar4 = *(int **)(_UNK_0177c3e4 + 0x177bc84);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0174c20c(0);
      if (iVar2 != 0) {
        func_0x0177c424();
      }
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_0174c20c(0);
      if ((iVar2 == 0) ||
         (iVar2 = func_0x0177c490(iVar2,param_1[6],param_1[8],param_1[9],param_1[10]), iVar2 == 0))
      {
        iVar2 = 0;
        func_0x014388e4();
      }
      iStack_24 = func_0x024f1008(iVar2,0);
      iVar2 = func_0x024f1018(&iStack_24,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[0xc] = iStack_24;
        func_0x014385cc(param_1 + 0xc,0);
        func_0x035b0108(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_0177c3e8 + 0x177bd40))
        ;
        return;
      }
      goto LAB_0177b5b8;
    }
    *param_1 = -1;
    iStack_24 = param_1[0xc];
    param_1[0xc] = 0;
  }
  func_0x024f1028(&iStack_24,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  FUN_01756e80(iVar6,0,0);
  if (*(int *)(**(int **)(_UNK_0177c40c + 0x177b798) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0177c410 + 0x177b7b4));
  piVar4 = *(int **)(_UNK_0177c414 + 0x177b7c8);
  iVar6 = *piVar4;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar4;
  }
  iVar8 = **(int **)(_UNK_0177c418 + 0x177b7e8);
  iVar1 = *(int *)(iVar8 + 0x1c);
  uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x31c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar8);
    iVar1 = *(int *)(iVar8 + 0x1c);
  }
  iVar6 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x0149097c();
  }
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x0149097c();
  }
  uVar9 = **(undefined4 **)(iVar6 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar2,uVar7,uVar9,0);
LAB_0177b86c:
  *param_1 = -2;
  param_1[0xb] = 0;
  func_0x014385cc(param_1 + 0xb,0);
  func_0x014e94c8(param_1 + 1,0);
  return;
}

