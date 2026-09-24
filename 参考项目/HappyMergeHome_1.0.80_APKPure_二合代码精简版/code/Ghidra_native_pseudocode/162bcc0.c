
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0163bcc0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  undefined4 unaff_r5;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
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
  
  pcVar7 = (char *)(_UNK_0163be20 + 0x163bcd4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0163be24 + 0x163bce8));
    func_0x01438628(*(undefined4 *)(_UNK_0163be28 + 0x163bcf4));
    func_0x01438628(*(undefined4 *)(_UNK_0163be2c + 0x163bd00));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2cf0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2cf0,0);
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
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    iVar1 = func_0x024f56d0(iVar8,uVar10,&uStack_30,uVar6,0,0);
    return iVar1;
  }
  if (*(int *)(**(int **)(_UNK_0163be30 + 0x163bd58) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0163be34 + 0x163bd74));
  uVar10 = (**(code **)(*param_1 + 400))(param_1,*(undefined4 *)(*param_1 + 0x194));
  iVar9 = **(int **)(_UNK_0163be38 + 0x163bda0);
  iVar8 = *(int *)(iVar9 + 0x1c);
  if (iVar8 == 0) {
    func_0x014909d8(iVar9);
    iVar8 = *(int *)(iVar9 + 0x1c);
  }
  iVar8 = *(int *)(iVar8 + 8);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x0149097c();
  }
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x0149097c();
  }
  iVar8 = **(int **)(iVar8 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar9 = func_0x02953fd4(0x1d9,0,iVar8,0);
  if (iVar9 != 0) {
    iVar9 = func_0x029540a4(0x1d9,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iStack_20 = 0;
    iVar1 = func_0x0286ef30(iVar9,iVar1,uVar10,iVar8);
    return iVar1;
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
  iVar9 = func_0x02953fd4(0x185,0);
  if (iVar9 != 0) {
    iVar9 = func_0x029540a4(0x185,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0286ef30(iVar9,iVar1,uVar10,iVar8,0);
    return iVar1;
  }
  iVar9 = *(int *)(iVar1 + 0x2c);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = func_0x04784bcc(iVar9,uVar10,**(undefined4 **)(_UNK_02b0d1f4 + 0x2b0cad4));
  if (iVar9 == 0) {
    uVar10 = func_0x024eee28(**(undefined4 **)(_UNK_02b0d1fc + 0x2b0cc70),uVar10,
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
    uVar6 = **(undefined4 **)(iVar1 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02b0d204 + 0x2b0cce4) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02b0d204 + 0x2b0cce4));
    }
    func_0x026795f8(uVar10,uVar6,0);
    return 0;
  }
  iVar9 = *(int *)(iVar1 + 0x2c);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x0478480c(&iStack_38,iVar9,uVar10,**(undefined4 **)(_UNK_02b0d208 + 0x2b0cb08));
  iVar9 = *(int *)(iVar1 + 0x10);
  if (iStack_38 == 1) {
    uVar2 = (uint)*(byte *)(iVar1 + 0x20);
  }
  if (iStack_38 == 1 && uVar2 == 0) {
    *(undefined1 *)(iVar1 + 0x20) = 1;
  }
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = func_0x0475561c(iVar9,uVar10,&iStack_28,**(undefined4 **)(_UNK_02b0d20c + 0x2b0cb54));
  if (iVar9 == 0) {
    uStack_3c = uStack_2c;
    iStack_40 = iVar8;
    iVar8 = func_0x02b1cc10(0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x02b1da0c(iVar8,uVar10,iStack_38,3,uStack_30,0);
    iStack_28 = iVar8;
    if (*(int *)(**(int **)(_UNK_02b0d210 + 0x2b0cbb4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x024ef144(iVar8,0,0);
    iVar8 = iStack_28;
    if (iVar9 == 0) {
      uVar10 = func_0x014e9568(**(undefined4 **)(_UNK_02b0d22c + 0x2b0cd2c),uVar10,0);
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
      uVar6 = **(undefined4 **)(iVar1 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02b0d234 + 0x2b0cda0) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02b0d234 + 0x2b0cda0));
      }
      func_0x026795f8(uVar10,uVar6,0);
      return iStack_28;
    }
    iVar9 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    func_0x04753a0c(iVar9,uVar10,iVar8,**(undefined4 **)(_UNK_02b0d214 + 0x2b0cc08));
    iVar8 = iStack_28;
    if (iStack_28 == 0) {
      func_0x014388e4();
    }
    func_0x02b20500(iVar8,uVar10,0);
    uVar6 = uStack_3c;
    iVar8 = iStack_40;
    if (iStack_28 == 0) {
      func_0x014388e4();
      iRam00000020 = iStack_38;
      if (iStack_28 == 0) {
        uVar12 = func_0x014388e4();
        uVar10 = (undefined4)uVar12;
        if ((int)((ulonglong)uVar12 >> 0x20) != 1) {
LAB_02b0d1b0:
          func_0x014e7cd4(uVar10);
          func_0x010acc44();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar11 = (undefined4 *)func_0x014e9498(uVar10);
        uVar10 = func_0x01438638(*(undefined4 *)(_UNK_02b0d23c + 0x2b0d0ac));
        iVar9 = func_0x01438d6c(uVar10,*(undefined4 *)*puVar11);
        if (iVar9 == 0) {
          puVar5 = (undefined4 *)func_0x014e9578(4);
          iVar1 = _UNK_02b0d248;
          *puVar5 = *puVar11;
          uVar10 = func_0x014e9588(puVar5,iVar1 + 0x2b0d1a4,0);
          func_0x014e9558();
          goto LAB_02b0d1b0;
        }
        piVar4 = (int *)*puVar11;
        func_0x014e9558();
        if (piVar4 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar10 = (**(code **)(*piVar4 + 0xe8))(piVar4,*(undefined4 *)(*piVar4 + 0xec));
        iVar9 = func_0x01438638(*(undefined4 *)(_UNK_02b0d240 + 0x2b0d0f8));
        iVar3 = *(int *)(iVar9 + 0x1c);
        if (iVar3 == 0) {
          func_0x014909d8(iVar9);
          iVar3 = *(int *)(iVar9 + 0x1c);
        }
        iVar3 = *(int *)(iVar3 + 8);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x0149097c();
        }
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
        if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
          iVar9 = func_0x0149097c();
        }
        uVar6 = **(undefined4 **)(iVar9 + 0x5c);
        iVar9 = func_0x01438638(*(undefined4 *)(_UNK_02b0d244 + 0x2b0d164));
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x026795f8(uVar10,uVar6,0);
        goto LAB_02b0cf5c;
      }
    }
    else {
      *(int *)(iStack_28 + 0x20) = iStack_38;
    }
    *(undefined4 *)(iStack_28 + 0x24) = uStack_34;
    func_0x02b0d454(iVar1,iStack_28,iStack_38,uStack_34,uStack_30,uVar6);
  }
  if (iStack_38 != 2) {
    iVar9 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x0475561c(iVar9,uVar10,&iStack_28,**(undefined4 **)(_UNK_02b0d218 + 0x2b0ce2c));
    iVar9 = iStack_28;
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar1 + 0x14);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x03b67d0c(iVar3,iVar9,**(undefined4 **)(_UNK_02b0d21c + 0x2b0ce60));
      if (iVar9 == 0) {
        if (iStack_38 == 0) {
          iVar9 = *(int *)(iVar1 + 0x14);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar9 + 0xc)) {
            iVar9 = *(int *)(iVar1 + 0x14);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            iVar9 = func_0x03b680f4(iVar9,**(undefined4 **)(_UNK_02b0d220 + 0x2b0d00c));
            if (*(int *)(**(int **)(_UNK_02b0d224 + 0x2b0d024) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x024ef144(iVar9,0,0);
            if (iVar3 != 0) {
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              func_0x02b212e4(iVar9,1,0,0);
            }
          }
        }
        iVar9 = iStack_28;
        iVar3 = *(int *)(iVar1 + 0x14);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x03b681a8(iVar3,iVar9,**(undefined4 **)(_UNK_02b0d228 + 0x2b0cf54));
      }
      else {
        iVar9 = *(int *)(iVar1 + 0x14);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar9 + 0xc)) {
          puVar11 = *(undefined4 **)(_UNK_02b0d238 + 0x2b0ce98);
          while( true ) {
            iVar9 = *(int *)(iVar1 + 0x14);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            piVar4 = (int *)func_0x03b680f4(iVar9,*puVar11);
            iVar9 = iStack_28;
            if (piVar4 == (int *)0x0) {
              func_0x014388e4();
            }
            iVar9 = (**(code **)(*piVar4 + 0xc0))(piVar4,iVar9,*(undefined4 *)(*piVar4 + 0xc4));
            if (iVar9 != 0) break;
            iVar9 = *(int *)(iVar1 + 0x14);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            iVar9 = func_0x03b680f4(iVar9,*puVar11);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            func_0x02b212e4(iVar9,1,0,0);
          }
        }
      }
    }
  }
LAB_02b0cf5c:
  iVar9 = iStack_28;
  if (iStack_28 == 0) {
    func_0x014388e4();
  }
  iVar9 = func_0x014e94d8(iVar9,0);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar9,1,0);
  func_0x02b0d808(iVar1,iStack_28);
  iVar1 = iStack_28;
  if (iStack_28 == 0) {
    func_0x014388e4();
  }
  func_0x02b20ab0(iVar1,iVar8,0);
  return iStack_28;
}

