
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01937a6c(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_01938954 + 0x1937a84);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01938958 + 0x1937a98));
    func_0x01438628(*(undefined4 *)(_UNK_0193895c + 0x1937aa4));
    func_0x01438628(*(undefined4 *)(_UNK_01938960 + 0x1937ab0));
    func_0x01438628(*(undefined4 *)(_UNK_01938964 + 0x1937abc));
    func_0x01438628(*(undefined4 *)(_UNK_01938968 + 0x1937ac8));
    func_0x01438628(*(undefined4 *)(_UNK_0193896c + 0x1937ad4));
    func_0x01438628(*(undefined4 *)(_UNK_01938970 + 0x1937ae0));
    func_0x01438628(*(undefined4 *)(_UNK_01938974 + 0x1937aec));
    func_0x01438628(*(undefined4 *)(_UNK_01938978 + 0x1937af8));
    func_0x01438628(*(undefined4 *)(_UNK_0193897c + 0x1937b04));
    func_0x01438628(*(undefined4 *)(_UNK_01938980 + 0x1937b10));
    func_0x01438628(*(undefined4 *)(_UNK_01938984 + 0x1937b1c));
    func_0x01438628(*(undefined4 *)(_UNK_01938988 + 0x1937b28));
    func_0x01438628(*(undefined4 *)(_UNK_0193898c + 0x1937b34));
    func_0x01438628(*(undefined4 *)(_UNK_01938990 + 0x1937b40));
    func_0x01438628(*(undefined4 *)(_UNK_01938994 + 0x1937b4c));
    func_0x01438628(*(undefined4 *)(_UNK_01938998 + 0x1937b58));
    func_0x01438628(*(undefined4 *)(_UNK_0193899c + 0x1937b64));
    func_0x01438628(*(undefined4 *)(_UNK_019389a0 + 0x1937b70));
    func_0x01438628(*(undefined4 *)(_UNK_019389a4 + 0x1937b7c));
    *pcVar3 = '\x01';
  }
  iVar2 = *param_1;
  iVar10 = param_1[5];
  iStack_24 = 0;
  iStack_28 = 0;
  if (iVar2 == 0) {
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
LAB_01937bfc:
    func_0x024f1028(&iStack_24,0);
    if (*(int *)(**(int **)(_UNK_01938a00 + 0x1937c14) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_01924e6c(0);
    if (iVar2 != 0) {
      FUN_01937a00();
    }
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_01926264(iVar10,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar2 + 0xc)) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01938a04 + 0x1937c78));
      func_0x024f1124(iVar2,**(undefined4 **)(_UNK_01938a08 + 0x1937c8c));
      iVar1 = param_1[8];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      FUN_0192a8c0(iVar10,uVar6,iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iStack_28 = func_0x024f112c(iVar2,**(undefined4 **)(_UNK_01938a0c + 0x1937cf0));
      iVar2 = func_0x024f1130(&iStack_28,**(undefined4 **)(_UNK_01938a10 + 0x1937d04));
      if (iVar2 == 0) {
        *param_1 = 1;
        param_1[10] = iStack_28;
        func_0x014385cc(param_1 + 10,0);
        func_0x035a2e60(param_1 + 1,&iStack_28,param_1,**(undefined4 **)(_UNK_01938a14 + 0x1938670))
        ;
        return;
      }
LAB_01937d18:
      func_0x014f5f38(&iStack_28,**(undefined4 **)(_UNK_01938a18 + 0x1937d24));
    }
    iVar2 = param_1[8];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_0192ddbc(iVar10,uVar6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_24 = func_0x024f1008(iVar2,0);
    iVar2 = func_0x024f1018(&iStack_24,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      param_1[9] = iStack_24;
      func_0x014385cc(param_1 + 9,0);
      func_0x035b1110(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_01938a1c + 0x1938394));
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = -1;
      iStack_28 = param_1[10];
      param_1[10] = 0;
      goto LAB_01937d18;
    }
    if (iVar2 != 2) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_019389a8 + 0x1937eb8));
      func_0x024eeca8(iVar2,0);
      piVar5 = param_1 + 8;
      *piVar5 = iVar2;
      func_0x014385cc(piVar5,iVar2);
      iVar2 = param_1[8];
      iVar1 = param_1[5];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      piVar4 = (int *)(iVar2 + 8);
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      iVar2 = *piVar5;
      if (*(int *)(**(int **)(_UNK_019389ac + 0x1937f0c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019389b0 + 0x1937f2c));
      iVar7 = param_1[6];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x029a6fa8(iVar1,iVar7,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = (undefined4 *)(iVar2 + 0xc);
      *puVar9 = uVar6;
      func_0x014385cc(puVar9,uVar6);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 0xc) == 0) {
        if (*(int *)(**(int **)(_UNK_019389b4 + 0x19383b4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_019389b8 + 0x19383d0));
        piVar5 = *(int **)(_UNK_019389bc + 0x19383e4);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_019389c0 + 0x1938404);
        iVar1 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar7);
          iVar1 = *(int *)(iVar7 + 0x1c);
        }
        iVar10 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar10 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar6,uVar8,0);
        goto LAB_01937e7c;
      }
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_01926a78(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 == *(int *)(iVar1 + 0x14)) {
        iVar2 = *piVar5;
        uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_019389c4 + 0x1937ff8));
        func_0x0152e3ec(uVar6,iVar2,**(undefined4 **)(_UNK_019389c8 + 0x193800c),0);
        if (*(int *)(**(int **)(_UNK_019389cc + 0x1938028) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x029a9e10(0x3f800000,uVar6,0);
      }
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_01926a78(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 != *(int *)(iVar1 + 0xc)) {
        iVar2 = param_1[6];
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        FUN_0192d978(iVar10,iVar2,0);
        if (param_1[7] == 10) {
          iVar2 = *piVar5;
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar2 + 0x48)) {
            iVar2 = *piVar5;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            FUN_0192db24(iVar10,uVar6,0);
            iVar2 = *piVar5;
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0xc);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar2 + 0x48);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            FUN_0192db24(iVar10,uVar6,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_019389d0 + 0x1938570) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_019389d4 + 0x193858c));
        piVar5 = *(int **)(_UNK_019389d8 + 0x19385a0);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_019389dc + 0x19385c0);
        iVar1 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar7);
          iVar1 = *(int *)(iVar7 + 0x1c);
        }
        iVar10 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar10 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar6,uVar8,0);
        goto LAB_01937e7c;
      }
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      FUN_019302ac(iVar10,0);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x2c);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_01926264(iVar10,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar2 <= *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_019389e0 + 0x1938694) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_019389e4 + 0x19386b0));
        piVar5 = *(int **)(_UNK_019389e8 + 0x19386c4);
        iVar10 = *piVar5;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
          iVar10 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_019389ec + 0x19386e4);
        iVar1 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x31c);
        if (iVar1 == 0) {
          func_0x014909d8(iVar7);
          iVar1 = *(int *)(iVar7 + 0x1c);
        }
        iVar10 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar10 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar2,uVar6,uVar8,0);
        goto LAB_01937e7c;
      }
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_01926264(iVar10,0);
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0x2c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x026ef3dc(iVar2,uVar6,0);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (0x7fffffff < *(uint *)(iVar2 + 0x4c)) {
        if (*(int *)(**(int **)(_UNK_019389f0 + 0x19381a4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x0202346c(0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar2,0x21f,0,0,0,0,0);
      }
      if (*(int *)(**(int **)(_UNK_019389f4 + 0x1938210) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x0202346c(0);
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x01524ffc(iVar1 + 8,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar2,0x352,uVar6,0,0,0,0);
      piVar5 = *(int **)(_UNK_019389f8 + 0x19382ac);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_01924e6c(0);
      if (iVar2 != 0) {
        func_0x01938a38();
      }
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = FUN_01924e6c(0);
      if ((iVar2 == 0) || (iVar2 = func_0x01938aa4(), iVar2 == 0)) {
        iVar2 = 0;
        func_0x014388e4();
      }
      iStack_24 = func_0x024f1008(iVar2,0);
      iVar2 = func_0x024f1018(&iStack_24,0);
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[9] = iStack_24;
        func_0x014385cc(param_1 + 9,0);
        func_0x035b1110(param_1 + 1,&iStack_24,param_1,**(undefined4 **)(_UNK_019389fc + 0x1938358))
        ;
        return;
      }
      goto LAB_01937bfc;
    }
    *param_1 = -1;
    iStack_24 = param_1[9];
    param_1[9] = 0;
  }
  func_0x024f1028(&iStack_24,0);
  if (*(int *)(**(int **)(_UNK_01938a20 + 0x1937da8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01938a24 + 0x1937dc4));
  piVar5 = *(int **)(_UNK_01938a28 + 0x1937dd8);
  iVar10 = *piVar5;
  if (*(int *)(iVar10 + 0x74) == 0) {
    func_0x014387a4();
    iVar10 = *piVar5;
  }
  iVar7 = **(int **)(_UNK_01938a2c + 0x1937df8);
  iVar1 = *(int *)(iVar7 + 0x1c);
  uVar6 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x31c);
  if (iVar1 == 0) {
    func_0x014909d8(iVar7);
    iVar1 = *(int *)(iVar7 + 0x1c);
  }
  iVar10 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
    iVar10 = func_0x0149097c();
  }
  if (*(int *)(iVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar10 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
    iVar10 = func_0x0149097c();
  }
  uVar8 = **(undefined4 **)(iVar10 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar2,uVar6,uVar8,0);
LAB_01937e7c:
  *param_1 = -2;
  param_1[8] = 0;
  func_0x014385cc(param_1 + 8,0);
  func_0x014e94c8(param_1 + 1,0);
  return;
}

