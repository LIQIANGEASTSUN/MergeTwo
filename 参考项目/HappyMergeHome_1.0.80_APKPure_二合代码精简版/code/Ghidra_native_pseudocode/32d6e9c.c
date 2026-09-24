
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032e6e9c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_032e7e9c + 0x32e6eb4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032e7ec0 + 0x32e6ec8));
    func_0x01438628(*(undefined4 *)(_UNK_032e7ec4 + 0x32e6ed4));
    func_0x01438628(*(undefined4 *)(_UNK_032e7ed8 + 0x32e6ee0));
    func_0x01438628(*(undefined4 *)(_UNK_032e7ee0 + 0x32e6eec));
    func_0x01438628(*(undefined4 *)(_UNK_032e7ee4 + 0x32e6ef8));
    func_0x01438628(*(undefined4 *)(_UNK_032e7ee8 + 0x32e6f04));
    func_0x01438628(*(undefined4 *)(_UNK_032e7eec + 0x32e6f10));
    func_0x01438628(*(undefined4 *)(_UNK_032e7ef0 + 0x32e6f1c));
    func_0x01438628(*(undefined4 *)(_UNK_032e7ef4 + 0x32e6f28));
    func_0x01438628(*(undefined4 *)(_UNK_032e7ef8 + 0x32e6f34));
    func_0x01438628(*(undefined4 *)(_UNK_032e7efc + 0x32e6f40));
    func_0x01438628(*(undefined4 *)(_UNK_032e7f00 + 0x32e6f4c));
    func_0x01438628(*(undefined4 *)(_UNK_032e7f04 + 0x32e6f58));
    func_0x01438628(*(undefined4 *)(_UNK_032e7f08 + 0x32e6f64));
    func_0x01438628(*(undefined4 *)(_UNK_032e7f0c + 0x32e6f70));
    func_0x01438628(*(undefined4 *)(_UNK_032e7f10 + 0x32e6f7c));
    func_0x01438628(*(undefined4 *)(_UNK_032e7f14 + 0x32e6f88));
    func_0x01438628(*(undefined4 *)(_UNK_032e7f18 + 0x32e6f94));
    func_0x01438628(*(undefined4 *)(_UNK_032e7f1c + 0x32e6fa0));
    func_0x01438628(*(undefined4 *)(_UNK_032e7f20 + 0x32e6fac));
    *pcVar3 = '\x01';
  }
  iVar9 = param_1[5];
  uStack_24 = 0;
  uStack_28 = 0;
  switch(*param_1) {
  case 0:
    *param_1 = 0xffffffff;
    uStack_24 = param_1[0xc];
    param_1[0xc] = 0;
LAB_032e7004:
    func_0x05055ca8(&uStack_24,0);
    if (*(int *)(**(int **)(_UNK_032e7f7c + 0x32e701c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032d3310();
    if (iVar1 != 0) {
      func_0x0330175c(iVar1,0);
    }
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_032d4694(iVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar1 + 0xc)) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032e7f80 + 0x32e707c));
      func_0x03bbd054(iVar1,**(undefined4 **)(_UNK_032e7f84 + 0x32e7090));
      iVar2 = param_1[0xb];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      FUN_032d9018(iVar9,uVar6,iVar1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_28 = func_0x03c87ba0(iVar1,**(undefined4 **)(_UNK_032e7f88 + 0x32e70f0));
      iVar1 = func_0x03bbc0cc(&uStack_28,**(undefined4 **)(_UNK_032e7f8c + 0x32e7104));
      if (iVar1 == 0) {
        *param_1 = 1;
        param_1[0xd] = uStack_28;
        func_0x014385cc(param_1 + 0xd,0);
        func_0x035a00ec(param_1 + 1,&uStack_28,param_1,**(undefined4 **)(_UNK_032e7f90 + 0x32e7140))
        ;
        return;
      }
      goto LAB_032e71a4;
    }
    break;
  case 1:
    *param_1 = 0xffffffff;
    uStack_28 = param_1[0xd];
    param_1[0xd] = 0;
LAB_032e71a4:
    func_0x03bbc140(&uStack_28,**(undefined4 **)(_UNK_032e7f94 + 0x32e71b0));
    break;
  case 2:
    *param_1 = 0xffffffff;
    uStack_24 = param_1[0xc];
    param_1[0xc] = 0;
    goto code_r0x032e7274;
  case 3:
    *param_1 = 0xffffffff;
    uStack_24 = param_1[0xc];
    param_1[0xc] = 0;
    goto code_r0x032e72f4;
  default:
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032e7f24 + 0x32e7434));
    func_0x051b0d14(iVar1,0);
    piVar5 = param_1 + 0xb;
    *piVar5 = iVar1;
    func_0x014385cc(piVar5,iVar1);
    iVar1 = param_1[0xb];
    uVar6 = param_1[5];
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar4 = (undefined4 *)(iVar1 + 8);
    *puVar4 = uVar6;
    func_0x014385cc(puVar4,uVar6);
    iVar1 = *piVar5;
    if (*(int *)(**(int **)(_UNK_032e7f28 + 0x32e7488) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032e7f2c + 0x32e74a8));
    uVar6 = param_1[6];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x029a6fa8(iVar2,uVar6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar4 = (undefined4 *)(iVar1 + 0xc);
    *puVar4 = uVar6;
    func_0x014385cc(puVar4,uVar6);
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      if (*(int *)(**(int **)(_UNK_032e7f30 + 0x32e795c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_032e7f34 + 0x32e7978));
      piVar5 = *(int **)(_UNK_032e7f38 + 0x32e798c);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar5;
      }
      iVar7 = **(int **)(_UNK_032e7f3c + 0x32e79ac);
      iVar2 = *(int *)(iVar7 + 0x1c);
      uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x31c);
      if (iVar2 == 0) {
        func_0x014909d8(iVar7);
        iVar2 = *(int *)(iVar7 + 0x1c);
      }
      iVar1 = *(int *)(iVar2 + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      uVar8 = **(undefined4 **)(iVar1 + 0x5c);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar9,uVar6,uVar8,0);
    }
    else {
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_032d4ea8(iVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (iVar1 == *(int *)(iVar2 + 0x14)) {
        iVar1 = *piVar5;
        uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_032e7f40 + 0x32e7570));
        func_0x05096384(uVar6,iVar1,**(undefined4 **)(_UNK_032e7f44 + 0x32e7584),0);
        if (*(int *)(**(int **)(_UNK_032e7f48 + 0x32e75a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x029a9e10(0x3f800000,uVar6,0);
      }
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_032d4ea8(iVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (iVar1 == *(int *)(iVar2 + 0xc)) {
        iVar1 = *piVar5;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x2c);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar2 = FUN_032d4694(iVar9);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0xc) < iVar1) {
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar1 = FUN_032d4694(iVar9);
          iVar2 = *piVar5;
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar6 = *(undefined4 *)(iVar2 + 0x2c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x026cec5c(iVar1,uVar6,0);
          iVar1 = *piVar5;
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (0x7fffffff < *(uint *)(iVar1 + 0x4c)) {
            if (*(int *)(**(int **)(_UNK_032e7f6c + 0x32e76f8) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x0202346c(0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x020257a4(iVar1,0x21f,0,0,0,0,0);
          }
          if (*(int *)(**(int **)(_UNK_032e7f70 + 0x32e7764) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x0202346c(0);
          iVar2 = *piVar5;
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar6 = func_0x0515c4b0(iVar2 + 8,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar1,0x2c0,uVar6,0,0,0,0);
          piVar5 = *(int **)(_UNK_032e7f74 + 0x32e7800);
          if (*(int *)(*piVar5 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = FUN_032d3310();
          if (iVar1 != 0) {
            func_0x033016f0(iVar1,0);
          }
          if (*(int *)(*piVar5 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = FUN_032d3310();
          if ((iVar1 == 0) ||
             (iVar1 = func_0x032ff78c(iVar1,param_1[6],param_1[8],param_1[9],param_1[10],0),
             iVar1 == 0)) {
            iVar1 = 0;
            func_0x014388e4();
          }
          uStack_24 = func_0x051ed6a0(iVar1,0);
          iVar1 = func_0x05055bbc(&uStack_24,0);
          if (iVar1 == 0) {
            *param_1 = 0;
            param_1[0xc] = uStack_24;
            func_0x014385cc(param_1 + 0xc,0);
            func_0x035ae39c(param_1 + 1,&uStack_24,param_1,
                            **(undefined4 **)(_UNK_032e7f78 + 0x32e78c0));
            return;
          }
          goto LAB_032e7004;
        }
        if (*(int *)(**(int **)(_UNK_032e7f5c + 0x32e7bf0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_032e7f60 + 0x32e7c0c));
        piVar5 = *(int **)(_UNK_032e7f64 + 0x32e7c20);
        iVar1 = *piVar5;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_032e7f68 + 0x32e7c40);
        iVar2 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x31c);
        if (iVar2 == 0) {
          func_0x014909d8(iVar7);
          iVar2 = *(int *)(iVar7 + 0x1c);
        }
        iVar1 = *(int *)(iVar2 + 8);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x0149097c();
        }
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar1 + 0x5c);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar9,uVar6,uVar8,0);
      }
      else {
        uVar6 = param_1[6];
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        FUN_032dc34c(iVar9,uVar6);
        if (param_1[7] == 10) {
          iVar1 = *piVar5;
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar1 + 0x48)) {
            iVar1 = *piVar5;
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar1 + 0x48);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            FUN_032dc4f8(iVar9,uVar6);
            iVar1 = *piVar5;
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = *(undefined4 *)(iVar1 + 0x48);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            FUN_032dc4f8(iVar9,uVar6);
          }
        }
        if (*(int *)(**(int **)(_UNK_032e7f4c + 0x32e7b0c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_032e7f50 + 0x32e7b28));
        piVar5 = *(int **)(_UNK_032e7f54 + 0x32e7b3c);
        iVar1 = *piVar5;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_032e7f58 + 0x32e7b5c);
        iVar2 = *(int *)(iVar7 + 0x1c);
        uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x31c);
        if (iVar2 == 0) {
          func_0x014909d8(iVar7);
          iVar2 = *(int *)(iVar7 + 0x1c);
        }
        iVar1 = *(int *)(iVar2 + 8);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x0149097c();
        }
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x0149097c();
        }
        uVar8 = **(undefined4 **)(iVar1 + 0x5c);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iVar9,uVar6,uVar8,0);
      }
    }
    goto LAB_032e73f8;
  }
  if (*(int *)(**(int **)(_UNK_032e7f98 + 0x32e71c4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_032d3310();
  if (iVar1 == 0) {
LAB_032e7248:
    iVar1 = 0;
    func_0x014388e4();
  }
  else {
    uVar6 = param_1[6];
    pcVar3 = (char *)(_UNK_032e7f9c + 0x32e71f4);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_032e7fa0 + 0x32e7208));
      *pcVar3 = '\x01';
    }
    puVar4 = *(undefined4 **)(**(int **)(_UNK_032e7fa4 + 0x32e721c) + 0x5c);
    iVar1 = func_0x032ffc60(iVar1,uVar6,*puVar4,puVar4[1],puVar4[2],0);
    if (iVar1 == 0) goto LAB_032e7248;
  }
  uStack_24 = func_0x051ed6a0(iVar1,0);
  iVar1 = func_0x05055bbc(&uStack_24,0);
  if (iVar1 == 0) {
    *param_1 = 2;
    param_1[0xc] = uStack_24;
    func_0x014385cc(param_1 + 0xc,0);
    func_0x035ae39c(param_1 + 1,&uStack_24,param_1,**(undefined4 **)(_UNK_032e7fa8 + 0x32e7938));
  }
  else {
code_r0x032e7274:
    func_0x05055ca8(&uStack_24,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    FUN_032dd55c(iVar9);
    iVar1 = param_1[0xb];
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_032dd5e0(iVar9,uVar6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_24 = func_0x051ed6a0(iVar1,0);
    iVar1 = func_0x05055bbc(&uStack_24,0);
    if (iVar1 == 0) {
      *param_1 = 3;
      param_1[0xc] = uStack_24;
      func_0x014385cc(param_1 + 0xc,0);
      func_0x035ae39c(param_1 + 1,&uStack_24,param_1,**(undefined4 **)(_UNK_032e7fac + 0x32e78fc));
    }
    else {
code_r0x032e72f4:
      func_0x05055ca8(&uStack_24,0);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      FUN_032dd408(iVar9,0);
      if (*(int *)(**(int **)(_UNK_032e7fb0 + 0x32e7324) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_032e7fb4 + 0x32e7340));
      piVar5 = *(int **)(_UNK_032e7fb8 + 0x32e7354);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar5;
      }
      iVar7 = **(int **)(_UNK_032e7fbc + 0x32e7374);
      iVar2 = *(int *)(iVar7 + 0x1c);
      uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x31c);
      if (iVar2 == 0) {
        func_0x014909d8(iVar7);
        iVar2 = *(int *)(iVar7 + 0x1c);
      }
      iVar1 = *(int *)(iVar2 + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      uVar8 = **(undefined4 **)(iVar1 + 0x5c);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar9,uVar6,uVar8,0);
LAB_032e73f8:
      *param_1 = 0xfffffffe;
      param_1[0xb] = 0;
      func_0x014385cc(param_1 + 0xb,0);
      func_0x0505659c(param_1 + 1,0);
    }
  }
  return;
}

