
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03004078(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  int iVar8;
  undefined4 unaff_r5;
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
  
  pcVar7 = (char *)(_UNK_030041d8 + 0x300408c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030041dc + 0x30040a0));
    func_0x01438628(*(undefined4 *)(_UNK_030041e0 + 0x30040ac));
    func_0x01438628(*(undefined4 *)(_UNK_030041e4 + 0x30040b8));
    *pcVar7 = '\x01';
  }
  iVar5 = func_0x02953fd4(0x2bf8,0);
  if (iVar5 != 0) {
    iVar5 = func_0x029540a4(0x2bf8,0);
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
    iVar8 = *(int *)(iVar5 + 8);
    uVar9 = *(undefined4 *)(iVar5 + 0xc);
    iVar5 = *(int *)(iVar5 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar5 == 0) {
      uVar6 = 1;
    }
    iVar5 = func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar6,0,0);
    return iVar5;
  }
  if (*(int *)(**(int **)(_UNK_030041e8 + 0x3004110) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_030041ec + 0x300412c));
  uVar9 = (**(code **)(*param_1 + 400))(param_1,*(undefined4 *)(*param_1 + 0x194));
  iVar10 = **(int **)(_UNK_030041f0 + 0x3004158);
  iVar8 = *(int *)(iVar10 + 0x1c);
  if (iVar8 == 0) {
    func_0x014909d8(iVar10);
    iVar8 = *(int *)(iVar10 + 0x1c);
  }
  iVar8 = *(int *)(iVar8 + 8);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x0149097c();
  }
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x0149097c();
  }
  iVar8 = **(int **)(iVar8 + 0x5c);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar10 = func_0x02953fd4(0x1d9,0,iVar8,0);
  if (iVar10 != 0) {
    iVar10 = func_0x029540a4(0x1d9,0);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iStack_20 = 0;
    iVar5 = func_0x0286ef30(iVar10,iVar5,uVar9,iVar8);
    return iVar5;
  }
  iStack_20 = uStack_14;
  uStack_24 = uStack_18;
  pcVar7 = (char *)(iRam02b0d1bc + 0x2b0c9ac);
  if (*pcVar7 == '\0') {
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
    *pcVar7 = '\x01';
  }
  iStack_28 = 0;
  iVar10 = func_0x02953fd4(0x185,0);
  if (iVar10 != 0) {
    iVar10 = func_0x029540a4(0x185,0);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x0286ef30(iVar10,iVar5,uVar9,iVar8,0);
    return iVar5;
  }
  iVar10 = *(int *)(iVar5 + 0x2c);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  iVar10 = func_0x04784bcc(iVar10,uVar9,**(undefined4 **)(_UNK_02b0d1f4 + 0x2b0cad4));
  if (iVar10 == 0) {
    uVar9 = func_0x024eee28(**(undefined4 **)(_UNK_02b0d1fc + 0x2b0cc70),uVar9,
                            **(undefined4 **)(_UNK_02b0d1f8 + 0x2b0cc64),0);
    iVar8 = **(int **)(_UNK_02b0d200 + 0x2b0cc84);
    iVar5 = *(int *)(iVar8 + 0x1c);
    if (iVar5 == 0) {
      func_0x014909d8(iVar8);
      iVar5 = *(int *)(iVar8 + 0x1c);
    }
    iVar5 = *(int *)(iVar5 + 8);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x0149097c();
    }
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
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
  iVar10 = *(int *)(iVar5 + 0x2c);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  uVar1 = func_0x0478480c(&iStack_38,iVar10,uVar9,**(undefined4 **)(_UNK_02b0d208 + 0x2b0cb08));
  iVar10 = *(int *)(iVar5 + 0x10);
  if (iStack_38 == 1) {
    uVar1 = (uint)*(byte *)(iVar5 + 0x20);
  }
  if (iStack_38 == 1 && uVar1 == 0) {
    *(undefined1 *)(iVar5 + 0x20) = 1;
  }
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  iVar10 = func_0x0475561c(iVar10,uVar9,&iStack_28,**(undefined4 **)(_UNK_02b0d20c + 0x2b0cb54));
  if (iVar10 == 0) {
    uStack_3c = uStack_2c;
    iStack_40 = iVar8;
    iVar8 = func_0x02b1cc10(0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x02b1da0c(iVar8,uVar9,iStack_38,3,uStack_30,0);
    iStack_28 = iVar8;
    if (*(int *)(**(int **)(_UNK_02b0d210 + 0x2b0cbb4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar10 = func_0x024ef144(iVar8,0,0);
    iVar8 = iStack_28;
    if (iVar10 == 0) {
      uVar9 = func_0x014e9568(**(undefined4 **)(_UNK_02b0d22c + 0x2b0cd2c),uVar9,0);
      iVar8 = **(int **)(_UNK_02b0d230 + 0x2b0cd40);
      iVar5 = *(int *)(iVar8 + 0x1c);
      if (iVar5 == 0) {
        func_0x014909d8(iVar8);
        iVar5 = *(int *)(iVar8 + 0x1c);
      }
      iVar5 = *(int *)(iVar5 + 8);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = func_0x0149097c();
      }
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
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
    iVar10 = *(int *)(iVar5 + 0x10);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    func_0x04753a0c(iVar10,uVar9,iVar8,**(undefined4 **)(_UNK_02b0d214 + 0x2b0cc08));
    iVar8 = iStack_28;
    if (iStack_28 == 0) {
      func_0x014388e4();
    }
    FUN_02b20500(iVar8,uVar9,0);
    uVar6 = uStack_3c;
    iVar8 = iStack_40;
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
        iVar10 = func_0x01438d6c(uVar9,*(undefined4 *)*puVar11);
        if (iVar10 == 0) {
          puVar4 = (undefined4 *)func_0x014e9578(4);
          iVar5 = _UNK_02b0d248;
          *puVar4 = *puVar11;
          uVar9 = func_0x014e9588(puVar4,iVar5 + 0x2b0d1a4,0);
          func_0x014e9558();
          goto LAB_02b0d1b0;
        }
        piVar3 = (int *)*puVar11;
        func_0x014e9558();
        if (piVar3 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar9 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
        iVar10 = func_0x01438638(*(undefined4 *)(_UNK_02b0d240 + 0x2b0d0f8));
        iVar2 = *(int *)(iVar10 + 0x1c);
        if (iVar2 == 0) {
          func_0x014909d8(iVar10);
          iVar2 = *(int *)(iVar10 + 0x1c);
        }
        iVar2 = *(int *)(iVar2 + 8);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x0149097c();
        }
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        uVar6 = **(undefined4 **)(iVar10 + 0x5c);
        iVar10 = func_0x01438638(*(undefined4 *)(_UNK_02b0d244 + 0x2b0d164));
        if (*(int *)(iVar10 + 0x74) == 0) {
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
    iVar10 = *(int *)(iVar5 + 0x10);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0475561c(iVar10,uVar9,&iStack_28,**(undefined4 **)(_UNK_02b0d218 + 0x2b0ce2c));
    iVar10 = iStack_28;
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar5 + 0x14);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar10 = func_0x03b67d0c(iVar2,iVar10,**(undefined4 **)(_UNK_02b0d21c + 0x2b0ce60));
      if (iVar10 == 0) {
        if (iStack_38 == 0) {
          iVar10 = *(int *)(iVar5 + 0x14);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar10 + 0xc)) {
            iVar10 = *(int *)(iVar5 + 0x14);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x03b680f4(iVar10,**(undefined4 **)(_UNK_02b0d220 + 0x2b0d00c));
            if (*(int *)(**(int **)(_UNK_02b0d224 + 0x2b0d024) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x024ef144(iVar10,0,0);
            if (iVar2 != 0) {
              if (iVar10 == 0) {
                func_0x014388e4();
              }
              FUN_02b212e4(iVar10,1,0,0);
            }
          }
        }
        iVar10 = iStack_28;
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x03b681a8(iVar2,iVar10,**(undefined4 **)(_UNK_02b0d228 + 0x2b0cf54));
      }
      else {
        iVar10 = *(int *)(iVar5 + 0x14);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar10 + 0xc)) {
          puVar11 = *(undefined4 **)(_UNK_02b0d238 + 0x2b0ce98);
          while( true ) {
            iVar10 = *(int *)(iVar5 + 0x14);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            piVar3 = (int *)func_0x03b680f4(iVar10,*puVar11);
            iVar10 = iStack_28;
            if (piVar3 == (int *)0x0) {
              func_0x014388e4();
            }
            iVar10 = (**(code **)(*piVar3 + 0xc0))(piVar3,iVar10,*(undefined4 *)(*piVar3 + 0xc4));
            if (iVar10 != 0) break;
            iVar10 = *(int *)(iVar5 + 0x14);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = func_0x03b680f4(iVar10,*puVar11);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            FUN_02b212e4(iVar10,1,0,0);
          }
        }
      }
    }
  }
LAB_02b0cf5c:
  iVar10 = iStack_28;
  if (iStack_28 == 0) {
    func_0x014388e4();
  }
  iVar10 = func_0x014e94d8(iVar10,0);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar10,1,0);
  func_0x02b0d808(iVar5,iStack_28);
  iVar5 = iStack_28;
  if (iStack_28 == 0) {
    func_0x014388e4();
  }
  FUN_02b20ab0(iVar5,iVar8,0);
  return iStack_28;
}

