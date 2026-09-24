
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03006600(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  char *pcVar6;
  int iVar7;
  undefined4 unaff_r5;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = func_0x02953fd4(0x7242,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x7242,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    iStack_20 = iStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    iVar3 = func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar5,0,0);
    return iVar3;
  }
  iVar3 = FUN_03003ef4(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  pcVar6 = (char *)(_UNK_03036580 + 0x303641c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03036584 + 0x3036430));
    func_0x01438628(*(undefined4 *)(_UNK_03036588 + 0x303643c));
    func_0x01438628(*(undefined4 *)(_UNK_0303658c + 0x3036448));
    func_0x01438628(*(undefined4 *)(_UNK_03036590 + 0x3036454));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x15b8,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x15b8,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar9 = 0;
    uStack_30 = 0;
    iStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    iStack_20 = iStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
      uVar9 = 0;
      if (*(int *)(iVar3 + 0x10) != 0) {
        uVar9 = 1;
      }
    }
    iVar7 = *(int *)(iVar3 + 8);
    uVar5 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024f56d0(iVar7,uVar5,&uStack_30,uVar9,0,0);
    return iVar3;
  }
  if (*(int *)(**(int **)(_UNK_03036594 + 0x30364a8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03036598 + 0x30364c4));
  piVar8 = *(int **)(_UNK_0303659c + 0x30364d8);
  iVar7 = *piVar8;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar8;
  }
  iVar10 = **(int **)(_UNK_030365a0 + 0x30364f8);
  iVar4 = *(int *)(iVar10 + 0x1c);
  uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x9e8);
  if (iVar4 == 0) {
    func_0x014909d8(iVar10);
    iVar4 = *(int *)(iVar10 + 0x1c);
  }
  iVar7 = *(int *)(iVar4 + 8);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x0149097c();
  }
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x0149097c();
  }
  iVar7 = **(int **)(iVar7 + 0x5c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar4 = func_0x02953fd4(0x1d9,0,iVar7,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x1d9,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iStack_20 = 0;
    iVar3 = func_0x0286ef30(iVar4,iVar3,uVar9,iVar7);
    return iVar3;
  }
  iStack_20 = uStack_14;
  uStack_24 = uStack_18;
  pcVar6 = (char *)(iRam02b0d1bc + 0x2b0c9ac);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1c0 + 0x2b0c9c0));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1c4 + 0x2b0c9cc));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1c8 + 0x2b0c9d8));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1cc + 0x2b0c9e4));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1d0 + 0x2b0c9f0));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1d4 + 0x2b0c9fc));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1d8 + 0x2b0ca08));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1dc + 0x2b0ca14));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1e0 + 0x2b0ca20));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1e4 + 0x2b0ca2c));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1e8 + 0x2b0ca38));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1ec + 0x2b0ca44));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1f0 + 0x2b0ca50));
    *pcVar6 = '\x01';
  }
  iStack_28 = 0;
  iVar4 = func_0x02953fd4(0x185,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x185,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x0286ef30(iVar4,iVar3,uVar9,iVar7,0);
    return iVar3;
  }
  iVar4 = *(int *)(iVar3 + 0x2c);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x04784bcc(iVar4,uVar9,**(undefined4 **)(_UNK_02b0d1f4 + 0x2b0cad4));
  if (iVar4 == 0) {
    uVar9 = func_0x024eee28(**(undefined4 **)(_UNK_02b0d1fc + 0x2b0cc70),uVar9,
                            **(undefined4 **)(_UNK_02b0d1f8 + 0x2b0cc64),0);
    iVar7 = **(int **)(_UNK_02b0d200 + 0x2b0cc84);
    iVar3 = *(int *)(iVar7 + 0x1c);
    if (iVar3 == 0) {
      func_0x014909d8(iVar7);
      iVar3 = *(int *)(iVar7 + 0x1c);
    }
    iVar3 = *(int *)(iVar3 + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    uVar5 = **(undefined4 **)(iVar3 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02b0d204 + 0x2b0cce4) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02b0d204 + 0x2b0cce4));
    }
    func_0x026795f8(uVar9,uVar5,0);
    return 0;
  }
  iVar4 = *(int *)(iVar3 + 0x2c);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar1 = func_0x0478480c(&iStack_38,iVar4,uVar9,**(undefined4 **)(_UNK_02b0d208 + 0x2b0cb08));
  iVar4 = *(int *)(iVar3 + 0x10);
  if (iStack_38 == 1) {
    uVar1 = (uint)*(byte *)(iVar3 + 0x20);
  }
  if (iStack_38 == 1 && uVar1 == 0) {
    *(undefined1 *)(iVar3 + 0x20) = 1;
  }
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x0475561c(iVar4,uVar9,&iStack_28,**(undefined4 **)(_UNK_02b0d20c + 0x2b0cb54));
  if (iVar4 == 0) {
    uStack_3c = uStack_2c;
    iStack_40 = iVar7;
    iVar7 = func_0x02b1cc10(0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x02b1da0c(iVar7,uVar9,iStack_38,3,uStack_30,0);
    iStack_28 = iVar7;
    if (*(int *)(**(int **)(_UNK_02b0d210 + 0x2b0cbb4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x024ef144(iVar7,0,0);
    iVar7 = iStack_28;
    if (iVar4 == 0) {
      uVar9 = func_0x014e9568(**(undefined4 **)(_UNK_02b0d22c + 0x2b0cd2c),uVar9,0);
      iVar7 = **(int **)(_UNK_02b0d230 + 0x2b0cd40);
      iVar3 = *(int *)(iVar7 + 0x1c);
      if (iVar3 == 0) {
        func_0x014909d8(iVar7);
        iVar3 = *(int *)(iVar7 + 0x1c);
      }
      iVar3 = *(int *)(iVar3 + 8);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x0149097c();
      }
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x0149097c();
      }
      uVar5 = **(undefined4 **)(iVar3 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02b0d234 + 0x2b0cda0) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02b0d234 + 0x2b0cda0));
      }
      func_0x026795f8(uVar9,uVar5,0);
      return iStack_28;
    }
    iVar4 = *(int *)(iVar3 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x04753a0c(iVar4,uVar9,iVar7,**(undefined4 **)(_UNK_02b0d214 + 0x2b0cc08));
    iVar7 = iStack_28;
    if (iStack_28 == 0) {
      func_0x014388e4();
    }
    FUN_02b20500(iVar7,uVar9,0);
    uVar5 = uStack_3c;
    iVar7 = iStack_40;
    if (iStack_28 == 0) {
      func_0x014388e4();
      iRam00000020 = iStack_38;
      if (iStack_28 == 0) {
        uVar12 = func_0x014388e4();
        uVar9 = (undefined4)uVar12;
        if ((int)((ulonglong)uVar12 >> 0x20) != 1) {
LAB_02b0d1b0:
          func_0x014e7cd4(uVar9);
          func_0x010acc44();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar11 = (undefined4 *)func_0x014e9498(uVar9);
        uVar9 = func_0x01438638(*(undefined4 *)(_UNK_02b0d23c + 0x2b0d0ac));
        iVar4 = func_0x01438d6c(uVar9,*(undefined4 *)*puVar11);
        if (iVar4 == 0) {
          puVar2 = (undefined4 *)func_0x014e9578(4);
          iVar3 = _UNK_02b0d248;
          *puVar2 = *puVar11;
          uVar9 = func_0x014e9588(puVar2,iVar3 + 0x2b0d1a4,0);
          func_0x014e9558();
          goto LAB_02b0d1b0;
        }
        piVar8 = (int *)*puVar11;
        func_0x014e9558();
        if (piVar8 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar9 = (**(code **)(*piVar8 + 0xe8))(piVar8,*(undefined4 *)(*piVar8 + 0xec));
        iVar4 = func_0x01438638(*(undefined4 *)(_UNK_02b0d240 + 0x2b0d0f8));
        iVar10 = *(int *)(iVar4 + 0x1c);
        if (iVar10 == 0) {
          func_0x014909d8(iVar4);
          iVar10 = *(int *)(iVar4 + 0x1c);
        }
        iVar10 = *(int *)(iVar10 + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
        if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = func_0x0149097c();
        }
        uVar5 = **(undefined4 **)(iVar4 + 0x5c);
        iVar4 = func_0x01438638(*(undefined4 *)(_UNK_02b0d244 + 0x2b0d164));
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x026795f8(uVar9,uVar5,0);
        goto LAB_02b0cf5c;
      }
    }
    else {
      *(int *)(iStack_28 + 0x20) = iStack_38;
    }
    *(undefined4 *)(iStack_28 + 0x24) = uStack_34;
    func_0x02b0d454(iVar3,iStack_28,iStack_38,uStack_34,uStack_30,uVar5);
  }
  if (iStack_38 != 2) {
    iVar4 = *(int *)(iVar3 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar10 = func_0x0475561c(iVar4,uVar9,&iStack_28,**(undefined4 **)(_UNK_02b0d218 + 0x2b0ce2c));
    iVar4 = iStack_28;
    if (iVar10 == 0) {
      iVar10 = *(int *)(iVar3 + 0x14);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x03b67d0c(iVar10,iVar4,**(undefined4 **)(_UNK_02b0d21c + 0x2b0ce60));
      if (iVar4 == 0) {
        if (iStack_38 == 0) {
          iVar4 = *(int *)(iVar3 + 0x14);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar4 + 0xc)) {
            iVar4 = *(int *)(iVar3 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = func_0x03b680f4(iVar4,**(undefined4 **)(_UNK_02b0d220 + 0x2b0d00c));
            if (*(int *)(**(int **)(_UNK_02b0d224 + 0x2b0d024) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar10 = func_0x024ef144(iVar4,0,0);
            if (iVar10 != 0) {
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              FUN_02b212e4(iVar4,1,0,0);
            }
          }
        }
        iVar4 = iStack_28;
        iVar10 = *(int *)(iVar3 + 0x14);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        func_0x03b681a8(iVar10,iVar4,**(undefined4 **)(_UNK_02b0d228 + 0x2b0cf54));
      }
      else {
        iVar4 = *(int *)(iVar3 + 0x14);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar4 + 0xc)) {
          puVar11 = *(undefined4 **)(_UNK_02b0d238 + 0x2b0ce98);
          while( true ) {
            iVar4 = *(int *)(iVar3 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            piVar8 = (int *)func_0x03b680f4(iVar4,*puVar11);
            iVar4 = iStack_28;
            if (piVar8 == (int *)0x0) {
              func_0x014388e4();
            }
            iVar4 = (**(code **)(*piVar8 + 0xc0))(piVar8,iVar4,*(undefined4 *)(*piVar8 + 0xc4));
            if (iVar4 != 0) break;
            iVar4 = *(int *)(iVar3 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = func_0x03b680f4(iVar4,*puVar11);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            FUN_02b212e4(iVar4,1,0,0);
          }
        }
      }
    }
  }
LAB_02b0cf5c:
  iVar4 = iStack_28;
  if (iStack_28 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x014e94d8(iVar4,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar4,1,0);
  func_0x02b0d808(iVar3,iStack_28);
  iVar3 = iStack_28;
  if (iStack_28 == 0) {
    func_0x014388e4();
  }
  FUN_02b20ab0(iVar3,iVar7,0);
  return iStack_28;
}

