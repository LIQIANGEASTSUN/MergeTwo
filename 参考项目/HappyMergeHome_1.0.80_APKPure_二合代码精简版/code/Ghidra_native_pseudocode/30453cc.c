
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030553cc(undefined4 *param_1)

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
  
  pcVar3 = (char *)(_UNK_03056388 + 0x30553e4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0305638c + 0x30553f8));
    func_0x01438628(*(undefined4 *)(_UNK_03056390 + 0x3055404));
    func_0x01438628(*(undefined4 *)(_UNK_03056404 + 0x3055410));
    func_0x01438628(*(undefined4 *)(_UNK_03056408 + 0x305541c));
    func_0x01438628(*(undefined4 *)(_UNK_0305640c + 0x3055428));
    func_0x01438628(*(undefined4 *)(_UNK_03056410 + 0x3055434));
    func_0x01438628(*(undefined4 *)(_UNK_03056434 + 0x3055440));
    func_0x01438628(*(undefined4 *)(_UNK_03056438 + 0x305544c));
    func_0x01438628(*(undefined4 *)(_UNK_03056450 + 0x3055458));
    func_0x01438628(*(undefined4 *)(_UNK_03056454 + 0x3055464));
    func_0x01438628(*(undefined4 *)(_UNK_03056458 + 0x3055470));
    func_0x01438628(*(undefined4 *)(_UNK_0305645c + 0x305547c));
    func_0x01438628(*(undefined4 *)(_UNK_03056460 + 0x3055488));
    func_0x01438628(*(undefined4 *)(_UNK_03056464 + 0x3055494));
    func_0x01438628(*(undefined4 *)(_UNK_03056468 + 0x30554a0));
    func_0x01438628(*(undefined4 *)(_UNK_0305646c + 0x30554ac));
    func_0x01438628(*(undefined4 *)(_UNK_03056470 + 0x30554b8));
    func_0x01438628(*(undefined4 *)(_UNK_03056474 + 0x30554c4));
    func_0x01438628(*(undefined4 *)(_UNK_03056478 + 0x30554d0));
    func_0x01438628(*(undefined4 *)(_UNK_0305647c + 0x30554dc));
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
LAB_03055534:
    func_0x024f1028(&uStack_24,0);
    if (*(int *)(**(int **)(_UNK_030564d8 + 0x305554c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03041d88(0);
    if (iVar1 != 0) {
      FUN_03055360();
    }
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0304411c(iVar9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (3 < *(int *)(iVar1 + 0xc)) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030564dc + 0x30555b0));
      func_0x03bbd054(iVar1,**(undefined4 **)(_UNK_030564e0 + 0x30555c4));
      iVar2 = param_1[0xb];
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      FUN_0304887c(iVar9,uVar6,iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_28 = func_0x03c87ba0(iVar1,**(undefined4 **)(_UNK_030564e4 + 0x3055628));
      iVar1 = func_0x03bbc0cc(&uStack_28,**(undefined4 **)(_UNK_030564e8 + 0x305563c));
      if (iVar1 == 0) {
        *param_1 = 1;
        param_1[0xd] = uStack_28;
        func_0x014385cc(param_1 + 0xd,0);
        func_0x035a0b9c(param_1 + 1,&uStack_28,param_1,**(undefined4 **)(_UNK_030564ec + 0x3055678))
        ;
        return;
      }
      goto LAB_030556dc;
    }
    break;
  case 1:
    *param_1 = 0xffffffff;
    uStack_28 = param_1[0xd];
    param_1[0xd] = 0;
LAB_030556dc:
    func_0x03bbc140(&uStack_28,**(undefined4 **)(_UNK_030564f0 + 0x30556e8));
    break;
  case 2:
    *param_1 = 0xffffffff;
    uStack_24 = param_1[0xc];
    param_1[0xc] = 0;
    goto code_r0x030557ac;
  case 3:
    *param_1 = 0xffffffff;
    uStack_24 = param_1[0xc];
    param_1[0xc] = 0;
    goto code_r0x03055834;
  default:
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03056480 + 0x3055978));
    func_0x024eeca8(iVar1,0);
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
    if (*(int *)(**(int **)(_UNK_03056484 + 0x30559cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03056488 + 0x30559ec));
    uVar6 = param_1[6];
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = FUN_029a6fa8(iVar2,uVar6,0);
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
      if (*(int *)(**(int **)(_UNK_0305648c + 0x3055eac) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_03056490 + 0x3055ec8));
      piVar5 = *(int **)(_UNK_03056494 + 0x3055edc);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar5;
      }
      iVar7 = **(int **)(_UNK_03056498 + 0x3055efc);
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
      iVar2 = FUN_03044930(iVar9,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (iVar1 == *(int *)(iVar2 + 0x14)) {
        iVar1 = *piVar5;
        uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_0305649c + 0x3055ab8));
        func_0x0152e3ec(uVar6,iVar1,**(undefined4 **)(_UNK_030564a0 + 0x3055acc),0);
        if (*(int *)(**(int **)(_UNK_030564a4 + 0x3055ae8) + 0x74) == 0) {
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
      iVar2 = FUN_03044930(iVar9,0);
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
        iVar2 = FUN_0304411c(iVar9,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0xc) < iVar1) {
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar1 = FUN_0304411c(iVar9,0);
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
          FUN_026cec5c(iVar1,uVar6,0);
          iVar1 = *piVar5;
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (0x7fffffff < *(uint *)(iVar1 + 0x4c)) {
            if (*(int *)(**(int **)(_UNK_030564c8 + 0x3055c4c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x0202346c(0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x020257a4(iVar1,0x21f,0,0,0,0,0);
          }
          if (*(int *)(**(int **)(_UNK_030564cc + 0x3055cb8) + 0x74) == 0) {
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
          uVar6 = func_0x01524ffc(iVar2 + 8,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar1,0x2e7,uVar6,0,0,0,0);
          piVar5 = *(int **)(_UNK_030564d0 + 0x3055d54);
          if (*(int *)(*piVar5 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = FUN_03041d88(0);
          if (iVar1 != 0) {
            func_0x03056524();
          }
          if (*(int *)(*piVar5 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = FUN_03041d88(0);
          if ((iVar1 == 0) ||
             (iVar1 = func_0x03056590(iVar1,param_1[6],param_1[8],param_1[9],param_1[10]),
             iVar1 == 0)) {
            iVar1 = 0;
            func_0x014388e4();
          }
          uStack_24 = func_0x024f1008(iVar1,0);
          iVar1 = func_0x05055bbc(&uStack_24,0);
          if (iVar1 == 0) {
            *param_1 = 0;
            param_1[0xc] = uStack_24;
            func_0x014385cc(param_1 + 0xc,0);
            func_0x035aee4c(param_1 + 1,&uStack_24,param_1,
                            **(undefined4 **)(_UNK_030564d4 + 0x3055e10));
            return;
          }
          goto LAB_03055534;
        }
        if (*(int *)(**(int **)(_UNK_030564b8 + 0x305614c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_030564bc + 0x3056168));
        piVar5 = *(int **)(_UNK_030564c0 + 0x305617c);
        iVar1 = *piVar5;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_030564c4 + 0x305619c);
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
        FUN_0304b944(iVar9,uVar6,0);
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
            FUN_0304baf0(iVar9,uVar6,0);
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
            FUN_0304baf0(iVar9,uVar6,0);
          }
        }
        if (*(int *)(**(int **)(_UNK_030564a8 + 0x3056068) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_030564ac + 0x3056084));
        piVar5 = *(int **)(_UNK_030564b0 + 0x3056098);
        iVar1 = *piVar5;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar5;
        }
        iVar7 = **(int **)(_UNK_030564b4 + 0x30560b8);
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
    goto LAB_0305593c;
  }
  if (*(int *)(**(int **)(_UNK_030564f4 + 0x30556fc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_03041d88(0);
  if (iVar1 == 0) {
LAB_03055780:
    iVar1 = 0;
    func_0x014388e4();
  }
  else {
    uVar6 = param_1[6];
    pcVar3 = (char *)(_UNK_030564f8 + 0x3055730);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_030564fc + 0x3055744));
      *pcVar3 = '\x01';
    }
    puVar4 = *(undefined4 **)(**(int **)(_UNK_03056500 + 0x3055758) + 0x5c);
    iVar1 = func_0x03056a5c(iVar1,uVar6,*puVar4,puVar4[1],puVar4[2]);
    if (iVar1 == 0) goto LAB_03055780;
  }
  uStack_24 = func_0x024f1008(iVar1,0);
  iVar1 = func_0x024f1018(&uStack_24,0);
  if (iVar1 == 0) {
    *param_1 = 2;
    param_1[0xc] = uStack_24;
    func_0x014385cc(param_1 + 0xc,0);
    func_0x035aee4c(param_1 + 1,&uStack_24,param_1,**(undefined4 **)(_UNK_03056504 + 0x3055e88));
  }
  else {
code_r0x030557ac:
    func_0x024f1028(&uStack_24,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    FUN_0304cb54(iVar9,0);
    iVar1 = param_1[0xb];
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0304cbd8(iVar9,uVar6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_24 = func_0x024f1008(iVar1,0);
    iVar1 = func_0x024f1018(&uStack_24,0);
    if (iVar1 == 0) {
      *param_1 = 3;
      param_1[0xc] = uStack_24;
      func_0x014385cc(param_1 + 0xc,0);
      func_0x035aee4c(param_1 + 1,&uStack_24,param_1,**(undefined4 **)(_UNK_03056508 + 0x3055e4c));
    }
    else {
code_r0x03055834:
      func_0x024f1028(&uStack_24,0);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      FUN_0304ca00(iVar9,0,0);
      if (*(int *)(**(int **)(_UNK_0305650c + 0x3055868) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_03056510 + 0x3055884));
      piVar5 = *(int **)(_UNK_03056514 + 0x3055898);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar5;
      }
      iVar7 = **(int **)(_UNK_03056518 + 0x30558b8);
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
LAB_0305593c:
      *param_1 = 0xfffffffe;
      param_1[0xb] = 0;
      func_0x014385cc(param_1 + 0xb,0);
      func_0x014e94c8(param_1 + 1,0);
    }
  }
  return;
}

