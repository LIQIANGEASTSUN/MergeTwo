
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ed6dcc(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int *piVar6;
  undefined4 unaff_r5;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar7 = (char *)(_UNK_01ed6eb0 + 0x1ed6de0);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ed6eb4 + 0x1ed6df4));
    func_0x01438628(*(undefined4 *)(_UNK_01ed6eb8 + 0x1ed6e00));
    *pcVar7 = '\x01';
  }
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  iVar8 = FUN_01da3ff8(iVar8,0);
  if (iVar8 == 0) {
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_01ed6ebc + 0x1ed6e38) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar1 = FUN_01da6358(0);
  if (*(int *)(**(int **)(_UNK_01ed6ec0 + 0x1ed6e60) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar2 = func_0x024efb9c(uVar1,0);
  if (((uint)*(byte *)(param_1 + 0xc) & (uVar2 ^ 1)) == 0) {
    return uVar2 ^ 1;
  }
  piVar6 = *(int **)(param_1 + 8);
  if (piVar6 == (int *)0x0) {
    func_0x014388e4();
  }
  pcVar7 = (char *)(_UNK_01da4340 + 0x1da41f4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da4344 + 0x1da4208),0);
    func_0x01438628(*(undefined4 *)(_UNK_01da4348 + 0x1da4214));
    func_0x01438628(*(undefined4 *)(_UNK_01da434c + 0x1da4220));
    *pcVar7 = '\x01';
  }
  iVar8 = func_0x02953fd4(0x28d1,0);
  if (iVar8 != 0) {
    iVar8 = func_0x029540a4(0x28d1,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    iStack_20 = iStack_38;
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,piVar6,0);
    iVar9 = *(int *)(iVar8 + 8);
    uVar1 = *(undefined4 *)(iVar8 + 0xc);
    iVar8 = *(int *)(iVar8 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar8 == 0) {
      uVar5 = 1;
    }
    uVar2 = func_0x024f56d0(iVar9,uVar1,&uStack_30,uVar5,0,0);
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_01da4350 + 0x1da4278) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar8 = func_0x014e9518(**(undefined4 **)(_UNK_01da4354 + 0x1da4294));
  uVar1 = (**(code **)(*piVar6 + 400))(piVar6,*(undefined4 *)(*piVar6 + 0x194));
  iVar10 = **(int **)(_UNK_01da4358 + 0x1da42c0);
  iVar9 = *(int *)(iVar10 + 0x1c);
  if (iVar9 == 0) {
    func_0x014909d8(iVar10);
    iVar9 = *(int *)(iVar10 + 0x1c);
  }
  iVar9 = *(int *)(iVar9 + 8);
  if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = func_0x0149097c();
  }
  if (*(int *)(iVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar9 = *(int *)(*(int *)(iVar10 + 0x1c) + 8);
  if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = func_0x0149097c();
  }
  uVar2 = **(uint **)(iVar9 + 0x5c);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar9 = func_0x02953fd4(0x1d9,0,uVar2,0);
  if (iVar9 != 0) {
    iVar9 = func_0x029540a4(0x1d9,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iStack_20 = 0;
    uVar2 = func_0x0286ef30(iVar9,iVar8,uVar1,uVar2);
    return uVar2;
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
  uStack_28 = 0;
  iVar9 = func_0x02953fd4(0x185,0);
  if (iVar9 != 0) {
    iVar9 = func_0x029540a4(0x185,0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x0286ef30(iVar9,iVar8,uVar1,uVar2,0);
    return uVar2;
  }
  iVar9 = *(int *)(iVar8 + 0x2c);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = func_0x04784bcc(iVar9,uVar1,**(undefined4 **)(_UNK_02b0d1f4 + 0x2b0cad4));
  if (iVar9 == 0) {
    uVar1 = func_0x024eee28(**(undefined4 **)(_UNK_02b0d1fc + 0x2b0cc70),uVar1,
                            **(undefined4 **)(_UNK_02b0d1f8 + 0x2b0cc64),0);
    iVar9 = **(int **)(_UNK_02b0d200 + 0x2b0cc84);
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
    uVar5 = **(undefined4 **)(iVar8 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02b0d204 + 0x2b0cce4) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02b0d204 + 0x2b0cce4));
    }
    func_0x026795f8(uVar1,uVar5,0);
    return 0;
  }
  iVar9 = *(int *)(iVar8 + 0x2c);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x0478480c(&iStack_38,iVar9,uVar1,**(undefined4 **)(_UNK_02b0d208 + 0x2b0cb08));
  iVar9 = *(int *)(iVar8 + 0x10);
  if (iStack_38 == 1) {
    uVar3 = (uint)*(byte *)(iVar8 + 0x20);
  }
  if (iStack_38 == 1 && uVar3 == 0) {
    *(undefined1 *)(iVar8 + 0x20) = 1;
  }
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  iVar9 = func_0x0475561c(iVar9,uVar1,&uStack_28,**(undefined4 **)(_UNK_02b0d20c + 0x2b0cb54));
  if (iVar9 == 0) {
    uStack_3c = uStack_2c;
    uStack_40 = uVar2;
    iVar9 = func_0x02b1cc10(0);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02b1da0c(iVar9,uVar1,iStack_38,3,uStack_30,0);
    uStack_28 = uVar2;
    if (*(int *)(**(int **)(_UNK_02b0d210 + 0x2b0cbb4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar9 = func_0x024ef144(uVar2,0,0);
    uVar2 = uStack_28;
    if (iVar9 == 0) {
      uVar1 = func_0x014e9568(**(undefined4 **)(_UNK_02b0d22c + 0x2b0cd2c),uVar1,0);
      iVar9 = **(int **)(_UNK_02b0d230 + 0x2b0cd40);
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
      uVar5 = **(undefined4 **)(iVar8 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02b0d234 + 0x2b0cda0) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02b0d234 + 0x2b0cda0));
      }
      func_0x026795f8(uVar1,uVar5,0);
      return uStack_28;
    }
    iVar9 = *(int *)(iVar8 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    func_0x04753a0c(iVar9,uVar1,uVar2,**(undefined4 **)(_UNK_02b0d214 + 0x2b0cc08));
    uVar2 = uStack_28;
    if (uStack_28 == 0) {
      func_0x014388e4();
    }
    func_0x02b20500(uVar2,uVar1,0);
    uVar5 = uStack_3c;
    uVar2 = uStack_40;
    if (uStack_28 == 0) {
      func_0x014388e4();
      iRam00000020 = iStack_38;
      if (uStack_28 == 0) {
        uVar12 = func_0x014388e4();
        uVar1 = (undefined4)uVar12;
        if ((int)((ulonglong)uVar12 >> 0x20) != 1) {
LAB_02b0d1b0:
          func_0x014e7cd4(uVar1);
          func_0x010acc44();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar11 = (undefined4 *)func_0x014e9498(uVar1);
        uVar1 = func_0x01438638(*(undefined4 *)(_UNK_02b0d23c + 0x2b0d0ac));
        iVar9 = func_0x01438d6c(uVar1,*(undefined4 *)*puVar11);
        if (iVar9 == 0) {
          puVar4 = (undefined4 *)func_0x014e9578(4);
          iVar8 = _UNK_02b0d248;
          *puVar4 = *puVar11;
          uVar1 = func_0x014e9588(puVar4,iVar8 + 0x2b0d1a4,0);
          func_0x014e9558();
          goto LAB_02b0d1b0;
        }
        piVar6 = (int *)*puVar11;
        func_0x014e9558();
        if (piVar6 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar1 = (**(code **)(*piVar6 + 0xe8))(piVar6,*(undefined4 *)(*piVar6 + 0xec));
        iVar9 = func_0x01438638(*(undefined4 *)(_UNK_02b0d240 + 0x2b0d0f8));
        iVar10 = *(int *)(iVar9 + 0x1c);
        if (iVar10 == 0) {
          func_0x014909d8(iVar9);
          iVar10 = *(int *)(iVar9 + 0x1c);
        }
        iVar10 = *(int *)(iVar10 + 8);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x0149097c();
        }
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
        if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
          iVar9 = func_0x0149097c();
        }
        uVar5 = **(undefined4 **)(iVar9 + 0x5c);
        iVar9 = func_0x01438638(*(undefined4 *)(_UNK_02b0d244 + 0x2b0d164));
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x026795f8(uVar1,uVar5,0);
        goto LAB_02b0cf5c;
      }
    }
    else {
      *(int *)(uStack_28 + 0x20) = iStack_38;
    }
    *(undefined4 *)(uStack_28 + 0x24) = uStack_34;
    func_0x02b0d454(iVar8,uStack_28,iStack_38,uStack_34,uStack_30,uVar5);
  }
  if (iStack_38 != 2) {
    iVar9 = *(int *)(iVar8 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x0475561c(iVar9,uVar1,&uStack_28,**(undefined4 **)(_UNK_02b0d218 + 0x2b0ce2c));
    uVar3 = uStack_28;
    if (iVar9 == 0) {
      iVar9 = *(int *)(iVar8 + 0x14);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x03b67d0c(iVar9,uVar3,**(undefined4 **)(_UNK_02b0d21c + 0x2b0ce60));
      if (iVar9 == 0) {
        if (iStack_38 == 0) {
          iVar9 = *(int *)(iVar8 + 0x14);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar9 + 0xc)) {
            iVar9 = *(int *)(iVar8 + 0x14);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            iVar9 = func_0x03b680f4(iVar9,**(undefined4 **)(_UNK_02b0d220 + 0x2b0d00c));
            if (*(int *)(**(int **)(_UNK_02b0d224 + 0x2b0d024) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar10 = func_0x024ef144(iVar9,0,0);
            if (iVar10 != 0) {
              if (iVar9 == 0) {
                func_0x014388e4();
              }
              func_0x02b212e4(iVar9,1,0,0);
            }
          }
        }
        uVar3 = uStack_28;
        iVar9 = *(int *)(iVar8 + 0x14);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x03b681a8(iVar9,uVar3,**(undefined4 **)(_UNK_02b0d228 + 0x2b0cf54));
      }
      else {
        iVar9 = *(int *)(iVar8 + 0x14);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar9 + 0xc)) {
          puVar11 = *(undefined4 **)(_UNK_02b0d238 + 0x2b0ce98);
          while( true ) {
            iVar9 = *(int *)(iVar8 + 0x14);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            piVar6 = (int *)func_0x03b680f4(iVar9,*puVar11);
            uVar3 = uStack_28;
            if (piVar6 == (int *)0x0) {
              func_0x014388e4();
            }
            iVar9 = (**(code **)(*piVar6 + 0xc0))(piVar6,uVar3,*(undefined4 *)(*piVar6 + 0xc4));
            if (iVar9 != 0) break;
            iVar9 = *(int *)(iVar8 + 0x14);
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
  uVar3 = uStack_28;
  if (uStack_28 == 0) {
    func_0x014388e4();
  }
  iVar9 = func_0x014e94d8(uVar3,0);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar9,1,0);
  func_0x02b0d808(iVar8,uStack_28);
  uVar3 = uStack_28;
  if (uStack_28 == 0) {
    func_0x014388e4();
  }
  func_0x02b20ab0(uVar3,uVar2,0);
  return uStack_28;
}

