
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f1cb98(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 unaff_r5;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar8 = (char *)(_UNK_02f1cd74 + 0x2f1cbac);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f1cd78 + 0x2f1cbc0));
    func_0x01438628(*(undefined4 *)(_UNK_02f1cd7c + 0x2f1cbcc));
    func_0x01438628(*(undefined4 *)(_UNK_02f1cd80 + 0x2f1cbd8));
    func_0x01438628(*(undefined4 *)(_UNK_02f1cd84 + 0x2f1cbe4));
    func_0x01438628(*(undefined4 *)(_UNK_02f1cd88 + 0x2f1cbf0));
    *pcVar8 = '\x01';
  }
  iVar5 = func_0x02953fd4(0x4305,0);
  if (iVar5 != 0) {
    iVar5 = func_0x029540a4(0x4305,0);
    if (iVar5 == 0) {
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
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar5 + 8);
    uVar9 = *(undefined4 *)(iVar5 + 0xc);
    iVar5 = *(int *)(iVar5 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar5 == 0) {
      uVar6 = 1;
    }
    iVar5 = func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar6,0,0);
    return iVar5;
  }
  if (*(int *)(**(int **)(_UNK_02f1cd8c + 0x2f1cc48) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = FUN_02f190cc();
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = FUN_02f196e8(iVar5);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  cVar1 = *(char *)(iVar5 + 0xc);
  if (*(int *)(**(int **)(_UNK_02f1cd90 + 0x2f1cc90) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f1cd94 + 0x2f1ccb0));
  piVar10 = *(int **)(_UNK_02f1cd98 + 0x2f1ccc4);
  iVar7 = *piVar10;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar10;
  }
  if (cVar1 == '\0') {
    uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x490);
  }
  else {
    uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x484);
  }
  iVar11 = **(int **)(_UNK_02f1cd9c + 0x2f1ccec);
  iVar7 = *(int *)(iVar11 + 0x1c);
  if (iVar7 == 0) {
    func_0x014909d8(iVar11);
    iVar7 = *(int *)(iVar11 + 0x1c);
  }
  iVar7 = *(int *)(iVar7 + 8);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x0149097c();
  }
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x0149097c();
  }
  iVar7 = **(int **)(iVar7 + 0x5c);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar11 = func_0x02953fd4(0x1d9,0,iVar7,0);
  if (iVar11 != 0) {
    iVar11 = func_0x029540a4(0x1d9,0);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iStack_20 = 0;
    iVar5 = func_0x0286ef30(iVar11,iVar5,uVar9,iVar7);
    return iVar5;
  }
  iStack_20 = uStack_14;
  uStack_24 = uStack_18;
  pcVar8 = (char *)(iRam02b0d1bc + 0x2b0c9ac);
  if (*pcVar8 == '\0') {
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
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar11 = func_0x02953fd4(0x185,0);
  if (iVar11 != 0) {
    iVar11 = func_0x029540a4(0x185,0);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x0286ef30(iVar11,iVar5,uVar9,iVar7,0);
    return iVar5;
  }
  iVar11 = *(int *)(iVar5 + 0x2c);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  iVar11 = func_0x04784bcc(iVar11,uVar9,**(undefined4 **)(_UNK_02b0d1f4 + 0x2b0cad4));
  if (iVar11 == 0) {
    uVar9 = func_0x024eee28(**(undefined4 **)(_UNK_02b0d1fc + 0x2b0cc70),uVar9,
                            **(undefined4 **)(_UNK_02b0d1f8 + 0x2b0cc64),0);
    iVar7 = **(int **)(_UNK_02b0d200 + 0x2b0cc84);
    iVar5 = *(int *)(iVar7 + 0x1c);
    if (iVar5 == 0) {
      func_0x014909d8(iVar7);
      iVar5 = *(int *)(iVar7 + 0x1c);
    }
    iVar5 = *(int *)(iVar5 + 8);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x0149097c();
    }
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x0149097c();
    }
    uVar6 = **(undefined4 **)(iVar5 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02b0d204 + 0x2b0cce4) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02b0d204 + 0x2b0cce4));
    }
    func_0x026795f8(uVar9,uVar6,0);
    return 0;
  }
  iVar11 = *(int *)(iVar5 + 0x2c);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x0478480c(&iStack_38,iVar11,uVar9,**(undefined4 **)(_UNK_02b0d208 + 0x2b0cb08));
  iVar11 = *(int *)(iVar5 + 0x10);
  if (iStack_38 == 1) {
    uVar2 = (uint)*(byte *)(iVar5 + 0x20);
  }
  if (iStack_38 == 1 && uVar2 == 0) {
    *(undefined1 *)(iVar5 + 0x20) = 1;
  }
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  iVar11 = func_0x0475561c(iVar11,uVar9,&iStack_28,**(undefined4 **)(_UNK_02b0d20c + 0x2b0cb54));
  if (iVar11 == 0) {
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
    iVar11 = func_0x024ef144(iVar7,0,0);
    iVar7 = iStack_28;
    if (iVar11 == 0) {
      uVar9 = func_0x014e9568(**(undefined4 **)(_UNK_02b0d22c + 0x2b0cd2c),uVar9,0);
      iVar7 = **(int **)(_UNK_02b0d230 + 0x2b0cd40);
      iVar5 = *(int *)(iVar7 + 0x1c);
      if (iVar5 == 0) {
        func_0x014909d8(iVar7);
        iVar5 = *(int *)(iVar7 + 0x1c);
      }
      iVar5 = *(int *)(iVar5 + 8);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = func_0x0149097c();
      }
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = func_0x0149097c();
      }
      uVar6 = **(undefined4 **)(iVar5 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02b0d234 + 0x2b0cda0) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02b0d234 + 0x2b0cda0));
      }
      func_0x026795f8(uVar9,uVar6,0);
      return iStack_28;
    }
    iVar11 = *(int *)(iVar5 + 0x10);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    func_0x04753a0c(iVar11,uVar9,iVar7,**(undefined4 **)(_UNK_02b0d214 + 0x2b0cc08));
    iVar7 = iStack_28;
    if (iStack_28 == 0) {
      func_0x014388e4();
    }
    FUN_02b20500(iVar7,uVar9,0);
    uVar6 = uStack_3c;
    iVar7 = iStack_40;
    if (iStack_28 == 0) {
      func_0x014388e4();
      iRam00000020 = iStack_38;
      if (iStack_28 == 0) {
        uVar13 = func_0x014388e4();
        uVar9 = (undefined4)uVar13;
        if ((int)((ulonglong)uVar13 >> 0x20) != 1) {
LAB_02b0d1b0:
          func_0x014e7cd4(uVar9);
          func_0x010acc44();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar12 = (undefined4 *)func_0x014e9498(uVar9);
        uVar9 = func_0x01438638(*(undefined4 *)(_UNK_02b0d23c + 0x2b0d0ac));
        iVar11 = func_0x01438d6c(uVar9,*(undefined4 *)*puVar12);
        if (iVar11 == 0) {
          puVar4 = (undefined4 *)func_0x014e9578(4);
          iVar5 = _UNK_02b0d248;
          *puVar4 = *puVar12;
          uVar9 = func_0x014e9588(puVar4,iVar5 + 0x2b0d1a4,0);
          func_0x014e9558();
          goto LAB_02b0d1b0;
        }
        piVar10 = (int *)*puVar12;
        func_0x014e9558();
        if (piVar10 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar9 = (**(code **)(*piVar10 + 0xe8))(piVar10,*(undefined4 *)(*piVar10 + 0xec));
        iVar11 = func_0x01438638(*(undefined4 *)(_UNK_02b0d240 + 0x2b0d0f8));
        iVar3 = *(int *)(iVar11 + 0x1c);
        if (iVar3 == 0) {
          func_0x014909d8(iVar11);
          iVar3 = *(int *)(iVar11 + 0x1c);
        }
        iVar3 = *(int *)(iVar3 + 8);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x0149097c();
        }
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar11 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x0149097c();
        }
        uVar6 = **(undefined4 **)(iVar11 + 0x5c);
        iVar11 = func_0x01438638(*(undefined4 *)(_UNK_02b0d244 + 0x2b0d164));
        if (*(int *)(iVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x026795f8(uVar9,uVar6,0);
        goto LAB_02b0cf5c;
      }
    }
    else {
      *(int *)(iStack_28 + 0x20) = iStack_38;
    }
    *(undefined4 *)(iStack_28 + 0x24) = uStack_34;
    func_0x02b0d454(iVar5,iStack_28,iStack_38,uStack_34,uStack_30,uVar6);
  }
  if (iStack_38 != 2) {
    iVar11 = *(int *)(iVar5 + 0x10);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x0475561c(iVar11,uVar9,&iStack_28,**(undefined4 **)(_UNK_02b0d218 + 0x2b0ce2c));
    iVar11 = iStack_28;
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar5 + 0x14);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar11 = func_0x03b67d0c(iVar3,iVar11,**(undefined4 **)(_UNK_02b0d21c + 0x2b0ce60));
      if (iVar11 == 0) {
        if (iStack_38 == 0) {
          iVar11 = *(int *)(iVar5 + 0x14);
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar11 + 0xc)) {
            iVar11 = *(int *)(iVar5 + 0x14);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = func_0x03b680f4(iVar11,**(undefined4 **)(_UNK_02b0d220 + 0x2b0d00c));
            if (*(int *)(**(int **)(_UNK_02b0d224 + 0x2b0d024) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x024ef144(iVar11,0,0);
            if (iVar3 != 0) {
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              FUN_02b212e4(iVar11,1,0,0);
            }
          }
        }
        iVar11 = iStack_28;
        iVar3 = *(int *)(iVar5 + 0x14);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x03b681a8(iVar3,iVar11,**(undefined4 **)(_UNK_02b0d228 + 0x2b0cf54));
      }
      else {
        iVar11 = *(int *)(iVar5 + 0x14);
        if (iVar11 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar11 + 0xc)) {
          puVar12 = *(undefined4 **)(_UNK_02b0d238 + 0x2b0ce98);
          while( true ) {
            iVar11 = *(int *)(iVar5 + 0x14);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            piVar10 = (int *)func_0x03b680f4(iVar11,*puVar12);
            iVar11 = iStack_28;
            if (piVar10 == (int *)0x0) {
              func_0x014388e4();
            }
            iVar11 = (**(code **)(*piVar10 + 0xc0))(piVar10,iVar11,*(undefined4 *)(*piVar10 + 0xc4))
            ;
            if (iVar11 != 0) break;
            iVar11 = *(int *)(iVar5 + 0x14);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            iVar11 = func_0x03b680f4(iVar11,*puVar12);
            if (iVar11 == 0) {
              func_0x014388e4();
            }
            FUN_02b212e4(iVar11,1,0,0);
          }
        }
      }
    }
  }
LAB_02b0cf5c:
  iVar11 = iStack_28;
  if (iStack_28 == 0) {
    func_0x014388e4();
  }
  iVar11 = func_0x014e94d8(iVar11,0);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar11,1,0);
  func_0x02b0d808(iVar5,iStack_28);
  iVar5 = iStack_28;
  if (iStack_28 == 0) {
    func_0x014388e4();
  }
  FUN_02b20ab0(iVar5,iVar7,0);
  return iStack_28;
}

