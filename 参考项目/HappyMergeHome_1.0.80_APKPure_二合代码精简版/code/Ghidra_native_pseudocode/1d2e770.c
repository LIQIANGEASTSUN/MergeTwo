
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01d3e770(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
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
  
  pcVar6 = (char *)(_UNK_01d3eb2c + 0x1d3e784);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3eb30 + 0x1d3e798));
    func_0x01438628(*(undefined4 *)(_UNK_01d3eb34 + 0x1d3e7a4));
    func_0x01438628(*(undefined4 *)(_UNK_01d3eb38 + 0x1d3e7b0));
    func_0x01438628(*(undefined4 *)(_UNK_01d3eb3c + 0x1d3e7bc));
    func_0x01438628(*(undefined4 *)(_UNK_01d3eb40 + 0x1d3e7c8));
    func_0x01438628(*(undefined4 *)(_UNK_01d3eb44 + 0x1d3e7d4));
    func_0x01438628(*(undefined4 *)(_UNK_01d3eb48 + 0x1d3e7e0));
    func_0x01438628(*(undefined4 *)(_UNK_01d3eb4c + 0x1d3e7ec));
    func_0x01438628(*(undefined4 *)(_UNK_01d3eb50 + 0x1d3e7f8));
    func_0x01438628(*(undefined4 *)(_UNK_01d3eb54 + 0x1d3e804));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(46000,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(46000,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    iVar1 = func_0x024f56d0(iVar8,uVar11,&uStack_30,uVar5,0,0);
    return iVar1;
  }
  iVar1 = func_0x01d3eb7c(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar8 = FUN_01d3a9c0(param_1);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  iVar8 = *(int *)(iVar8 + 0x38);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  iVar12 = *(int *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar8 + 0xc);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar8 = *(int *)(iVar12 + 0xc);
  if (iVar1 < iVar8) {
    return iVar8;
  }
  iVar1 = FUN_01d3a9c0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0269f844(iVar1,*(int *)(iVar1 + 0x40) + 1,0);
  iVar1 = FUN_01d3a9c0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x30);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_01d3eb58 + 0x1d3e914);
  func_0x03b70d24(iVar1,*puVar9);
  iVar1 = FUN_01d3a9c0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x03b75c84(iVar1,**(undefined4 **)(_UNK_01d3eb5c + 0x1d3e94c));
  iVar1 = FUN_01d3a9c0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x03b70d24(iVar1,*puVar9);
  FUN_01d3ae34(param_1);
  if (*(int *)(**(int **)(_UNK_01d3eb60 + 0x1d3e99c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01d3eb64 + 0x1d3e9b8));
  piVar10 = *(int **)(_UNK_01d3eb68 + 0x1d3e9cc);
  iVar12 = *piVar10;
  iVar8 = *(int *)(iVar12 + 0x1c);
  if (iVar8 == 0) {
    func_0x014909d8(iVar12);
    iVar8 = *(int *)(iVar12 + 0x1c);
  }
  iVar8 = *(int *)(iVar8 + 8);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x0149097c();
  }
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = *(int *)(*(int *)(iVar12 + 0x1c) + 8);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x0149097c();
  }
  uVar11 = **(undefined4 **)(iVar8 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar1,**(undefined4 **)(_UNK_01d3eb6c + 0x1d3ea48),uVar11,0);
  if (*(int *)(**(int **)(_UNK_01d3eb70 + 0x1d3ea5c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01d3eb74 + 0x1d3ea78));
  piVar7 = *(int **)(_UNK_01d3eb78 + 0x1d3ea8c);
  iVar8 = *piVar7;
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x014387a4();
    iVar8 = *piVar7;
  }
  iVar12 = *piVar10;
  uVar11 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0xcb4);
  iVar8 = *(int *)(iVar12 + 0x1c);
  if (iVar8 == 0) {
    func_0x014909d8(iVar12);
    iVar8 = *(int *)(iVar12 + 0x1c);
  }
  iVar8 = *(int *)(iVar8 + 8);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x0149097c();
  }
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = *(int *)(*(int *)(iVar12 + 0x1c) + 8);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x0149097c();
  }
  iVar8 = **(int **)(iVar8 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar12 = func_0x02953fd4(0x1d9,0,iVar8,0);
  if (iVar12 != 0) {
    iVar12 = func_0x029540a4(0x1d9,0);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    iStack_20 = 0;
    iVar1 = func_0x0286ef30(iVar12,iVar1,uVar11,iVar8);
    return iVar1;
  }
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
  iVar12 = func_0x02953fd4(0x185,0);
  if (iVar12 != 0) {
    iVar12 = func_0x029540a4(0x185,0);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0286ef30(iVar12,iVar1,uVar11,iVar8,0);
    return iVar1;
  }
  iVar12 = *(int *)(iVar1 + 0x2c);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar12 = func_0x04784bcc(iVar12,uVar11,**(undefined4 **)(_UNK_02b0d1f4 + 0x2b0cad4));
  if (iVar12 == 0) {
    uVar11 = func_0x024eee28(**(undefined4 **)(_UNK_02b0d1fc + 0x2b0cc70),uVar11,
                             **(undefined4 **)(_UNK_02b0d1f8 + 0x2b0cc64),0);
    iVar8 = **(int **)(_UNK_02b0d200 + 0x2b0cc84);
    iVar1 = *(int *)(iVar8 + 0x1c);
    if (iVar1 == 0) {
      func_0x014909d8(iVar8);
      iVar1 = *(int *)(iVar8 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    uVar5 = **(undefined4 **)(iVar1 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02b0d204 + 0x2b0cce4) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02b0d204 + 0x2b0cce4));
    }
    func_0x026795f8(uVar11,uVar5,0);
    return 0;
  }
  iVar12 = *(int *)(iVar1 + 0x2c);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x0478480c(&iStack_38,iVar12,uVar11,**(undefined4 **)(_UNK_02b0d208 + 0x2b0cb08));
  iVar12 = *(int *)(iVar1 + 0x10);
  if (iStack_38 == 1) {
    uVar2 = (uint)*(byte *)(iVar1 + 0x20);
  }
  if (iStack_38 == 1 && uVar2 == 0) {
    *(undefined1 *)(iVar1 + 0x20) = 1;
  }
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar12 = func_0x0475561c(iVar12,uVar11,&iStack_28,**(undefined4 **)(_UNK_02b0d20c + 0x2b0cb54));
  if (iVar12 == 0) {
    uStack_3c = uStack_2c;
    iStack_40 = iVar8;
    iVar8 = func_0x02b1cc10(0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x02b1da0c(iVar8,uVar11,iStack_38,3,uStack_30,0);
    iStack_28 = iVar8;
    if (*(int *)(**(int **)(_UNK_02b0d210 + 0x2b0cbb4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar12 = func_0x024ef144(iVar8,0,0);
    iVar8 = iStack_28;
    if (iVar12 == 0) {
      uVar11 = func_0x014e9568(**(undefined4 **)(_UNK_02b0d22c + 0x2b0cd2c),uVar11,0);
      iVar8 = **(int **)(_UNK_02b0d230 + 0x2b0cd40);
      iVar1 = *(int *)(iVar8 + 0x1c);
      if (iVar1 == 0) {
        func_0x014909d8(iVar8);
        iVar1 = *(int *)(iVar8 + 0x1c);
      }
      iVar1 = *(int *)(iVar1 + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      uVar5 = **(undefined4 **)(iVar1 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02b0d234 + 0x2b0cda0) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02b0d234 + 0x2b0cda0));
      }
      func_0x026795f8(uVar11,uVar5,0);
      return iStack_28;
    }
    iVar12 = *(int *)(iVar1 + 0x10);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    func_0x04753a0c(iVar12,uVar11,iVar8,**(undefined4 **)(_UNK_02b0d214 + 0x2b0cc08));
    iVar8 = iStack_28;
    if (iStack_28 == 0) {
      func_0x014388e4();
    }
    func_0x02b20500(iVar8,uVar11,0);
    uVar5 = uStack_3c;
    iVar8 = iStack_40;
    if (iStack_28 == 0) {
      func_0x014388e4();
      iRam00000020 = iStack_38;
      if (iStack_28 == 0) {
        uVar13 = func_0x014388e4();
        uVar11 = (undefined4)uVar13;
        if ((int)((ulonglong)uVar13 >> 0x20) != 1) {
LAB_02b0d1b0:
          func_0x014e7cd4(uVar11);
          func_0x010acc44();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar9 = (undefined4 *)func_0x014e9498(uVar11);
        uVar11 = func_0x01438638(*(undefined4 *)(_UNK_02b0d23c + 0x2b0d0ac));
        iVar12 = func_0x01438d6c(uVar11,*(undefined4 *)*puVar9);
        if (iVar12 == 0) {
          puVar4 = (undefined4 *)func_0x014e9578(4);
          iVar1 = _UNK_02b0d248;
          *puVar4 = *puVar9;
          uVar11 = func_0x014e9588(puVar4,iVar1 + 0x2b0d1a4,0);
          func_0x014e9558();
          goto LAB_02b0d1b0;
        }
        piVar10 = (int *)*puVar9;
        func_0x014e9558();
        if (piVar10 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar11 = (**(code **)(*piVar10 + 0xe8))(piVar10,*(undefined4 *)(*piVar10 + 0xec));
        iVar12 = func_0x01438638(*(undefined4 *)(_UNK_02b0d240 + 0x2b0d0f8));
        iVar3 = *(int *)(iVar12 + 0x1c);
        if (iVar3 == 0) {
          func_0x014909d8(iVar12);
          iVar3 = *(int *)(iVar12 + 0x1c);
        }
        iVar3 = *(int *)(iVar3 + 8);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x0149097c();
        }
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar12 = *(int *)(*(int *)(iVar12 + 0x1c) + 8);
        if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
          iVar12 = func_0x0149097c();
        }
        uVar5 = **(undefined4 **)(iVar12 + 0x5c);
        iVar12 = func_0x01438638(*(undefined4 *)(_UNK_02b0d244 + 0x2b0d164));
        if (*(int *)(iVar12 + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x026795f8(uVar11,uVar5,0);
        goto LAB_02b0cf5c;
      }
    }
    else {
      *(int *)(iStack_28 + 0x20) = iStack_38;
    }
    *(undefined4 *)(iStack_28 + 0x24) = uStack_34;
    func_0x02b0d454(iVar1,iStack_28,iStack_38,uStack_34,uStack_30,uVar5);
  }
  if (iStack_38 != 2) {
    iVar12 = *(int *)(iVar1 + 0x10);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x0475561c(iVar12,uVar11,&iStack_28,**(undefined4 **)(_UNK_02b0d218 + 0x2b0ce2c));
    iVar12 = iStack_28;
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar1 + 0x14);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar12 = func_0x03b67d0c(iVar3,iVar12,**(undefined4 **)(_UNK_02b0d21c + 0x2b0ce60));
      if (iVar12 == 0) {
        if (iStack_38 == 0) {
          iVar12 = *(int *)(iVar1 + 0x14);
          if (iVar12 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar12 + 0xc)) {
            iVar12 = *(int *)(iVar1 + 0x14);
            if (iVar12 == 0) {
              func_0x014388e4();
            }
            iVar12 = func_0x03b680f4(iVar12,**(undefined4 **)(_UNK_02b0d220 + 0x2b0d00c));
            if (*(int *)(**(int **)(_UNK_02b0d224 + 0x2b0d024) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x024ef144(iVar12,0,0);
            if (iVar3 != 0) {
              if (iVar12 == 0) {
                func_0x014388e4();
              }
              func_0x02b212e4(iVar12,1,0,0);
            }
          }
        }
        iVar12 = iStack_28;
        iVar3 = *(int *)(iVar1 + 0x14);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x03b681a8(iVar3,iVar12,**(undefined4 **)(_UNK_02b0d228 + 0x2b0cf54));
      }
      else {
        iVar12 = *(int *)(iVar1 + 0x14);
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar12 + 0xc)) {
          puVar9 = *(undefined4 **)(_UNK_02b0d238 + 0x2b0ce98);
          while( true ) {
            iVar12 = *(int *)(iVar1 + 0x14);
            if (iVar12 == 0) {
              func_0x014388e4();
            }
            piVar10 = (int *)func_0x03b680f4(iVar12,*puVar9);
            iVar12 = iStack_28;
            if (piVar10 == (int *)0x0) {
              func_0x014388e4();
            }
            iVar12 = (**(code **)(*piVar10 + 0xc0))(piVar10,iVar12,*(undefined4 *)(*piVar10 + 0xc4))
            ;
            if (iVar12 != 0) break;
            iVar12 = *(int *)(iVar1 + 0x14);
            if (iVar12 == 0) {
              func_0x014388e4();
            }
            iVar12 = func_0x03b680f4(iVar12,*puVar9);
            if (iVar12 == 0) {
              func_0x014388e4();
            }
            func_0x02b212e4(iVar12,1,0,0);
          }
        }
      }
    }
  }
LAB_02b0cf5c:
  iVar12 = iStack_28;
  if (iStack_28 == 0) {
    func_0x014388e4();
  }
  iVar12 = func_0x014e94d8(iVar12,0);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar12,1,0);
  func_0x02b0d808(iVar1,iStack_28);
  iVar1 = iStack_28;
  if (iStack_28 == 0) {
    func_0x014388e4();
  }
  func_0x02b20ab0(iVar1,iVar8,0);
  return iStack_28;
}

