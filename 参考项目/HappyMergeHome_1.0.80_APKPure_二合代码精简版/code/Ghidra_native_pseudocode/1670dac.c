
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01680dac(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [2];
  undefined4 uStack_20;
  
  pcVar10 = (char *)(_UNK_01680f80 + 0x1680dcc);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01680f84 + 0x1680de0));
    func_0x01438628(*(undefined4 *)(_UNK_01680f88 + 0x1680dec));
    func_0x01438628(*(undefined4 *)(_UNK_01680f8c + 0x1680df8));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8782,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8782,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    iVar1 = func_0x028691b4(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  if (*(int *)(**(int **)(_UNK_01680f90 + 0x1680e60) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01680f94 + 0x1680e7c));
  uVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,*(undefined4 *)(*param_1 + 0x1a4));
  piVar3 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01680f98 + 0x1680eac),2);
  if (piVar3 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((param_2 != 0) &&
     (iVar4 = func_0x014387a8(param_2,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
    uVar5 = func_0x01438904();
    func_0x01438790(uVar5,0);
  }
  if (piVar3[3] == 0) {
    func_0x014388e8();
  }
  piVar3[4] = param_2;
  func_0x014385cc(piVar3 + 4,param_2);
  if ((param_3 != 0) &&
     (iVar4 = func_0x014387a8(param_3,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
    uVar5 = func_0x01438904();
    func_0x01438790(uVar5,0);
  }
  if ((uint)piVar3[3] < 2) {
    func_0x014388e8();
  }
  piVar3[5] = param_3;
  func_0x014385cc(piVar3 + 5,param_3);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x02953fd4(0x1d9,0,piVar3,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x1d9,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    iVar1 = func_0x0286ef30(iVar4,iVar1,uVar2,piVar3);
    return iVar1;
  }
  pcVar10 = (char *)(iRam02b0d1bc + 0x2b0c9ac);
  if (*pcVar10 == '\0') {
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
    *pcVar10 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar4 = func_0x02953fd4(0x185,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x185,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0286ef30(iVar4,iVar1,uVar2,piVar3,0);
    return iVar1;
  }
  iVar4 = *(int *)(iVar1 + 0x2c);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x04784bcc(iVar4,uVar2,**(undefined4 **)(_UNK_02b0d1f4 + 0x2b0cad4));
  if (iVar4 == 0) {
    uVar2 = func_0x024eee28(**(undefined4 **)(_UNK_02b0d1fc + 0x2b0cc70),uVar2,
                            **(undefined4 **)(_UNK_02b0d1f8 + 0x2b0cc64),0);
    iVar4 = **(int **)(_UNK_02b0d200 + 0x2b0cc84);
    iVar1 = *(int *)(iVar4 + 0x1c);
    if (iVar1 == 0) {
      func_0x014909d8(iVar4);
      iVar1 = *(int *)(iVar4 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    uVar5 = **(undefined4 **)(iVar1 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02b0d204 + 0x2b0cce4) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02b0d204 + 0x2b0cce4));
    }
    func_0x026795f8(uVar2,uVar5,0);
    return 0;
  }
  iVar4 = *(int *)(iVar1 + 0x2c);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x0478480c(&iStack_38,iVar4,uVar2,**(undefined4 **)(_UNK_02b0d208 + 0x2b0cb08));
  iVar4 = *(int *)(iVar1 + 0x10);
  if (iStack_38 == 1) {
    uVar6 = (uint)*(byte *)(iVar1 + 0x20);
  }
  if (iStack_38 == 1 && uVar6 == 0) {
    *(undefined1 *)(iVar1 + 0x20) = 1;
  }
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x0475561c(iVar4,uVar2,aiStack_28,**(undefined4 **)(_UNK_02b0d20c + 0x2b0cb54));
  if (iVar4 == 0) {
    iVar4 = func_0x02b1cc10(0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x02b1da0c(iVar4,uVar2,iStack_38,3,uStack_30,0);
    aiStack_28[0] = iVar4;
    if (*(int *)(**(int **)(_UNK_02b0d210 + 0x2b0cbb4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = func_0x024ef144(iVar4,0,0);
    iVar4 = aiStack_28[0];
    if (iVar7 == 0) {
      uVar2 = func_0x014e9568(**(undefined4 **)(_UNK_02b0d22c + 0x2b0cd2c),uVar2,0);
      iVar4 = **(int **)(_UNK_02b0d230 + 0x2b0cd40);
      iVar1 = *(int *)(iVar4 + 0x1c);
      if (iVar1 == 0) {
        func_0x014909d8(iVar4);
        iVar1 = *(int *)(iVar4 + 0x1c);
      }
      iVar1 = *(int *)(iVar1 + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      uVar5 = **(undefined4 **)(iVar1 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02b0d234 + 0x2b0cda0) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02b0d234 + 0x2b0cda0));
      }
      func_0x026795f8(uVar2,uVar5,0);
      return aiStack_28[0];
    }
    iVar7 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x04753a0c(iVar7,uVar2,iVar4,**(undefined4 **)(_UNK_02b0d214 + 0x2b0cc08));
    iVar4 = aiStack_28[0];
    if (aiStack_28[0] == 0) {
      func_0x014388e4();
    }
    func_0x02b20500(iVar4,uVar2,0);
    if (aiStack_28[0] == 0) {
      func_0x014388e4();
      iRam00000020 = iStack_38;
      if (aiStack_28[0] == 0) {
        uVar12 = func_0x014388e4();
        uVar2 = (undefined4)uVar12;
        if ((int)((ulonglong)uVar12 >> 0x20) != 1) {
LAB_02b0d1b0:
          func_0x014e7cd4(uVar2);
          func_0x010acc44();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar11 = (undefined4 *)func_0x014e9498(uVar2);
        uVar2 = func_0x01438638(*(undefined4 *)(_UNK_02b0d23c + 0x2b0d0ac));
        iVar4 = func_0x01438d6c(uVar2,*(undefined4 *)*puVar11);
        if (iVar4 == 0) {
          puVar9 = (undefined4 *)func_0x014e9578(4);
          iVar1 = _UNK_02b0d248;
          *puVar9 = *puVar11;
          uVar2 = func_0x014e9588(puVar9,iVar1 + 0x2b0d1a4,0);
          func_0x014e9558();
          goto LAB_02b0d1b0;
        }
        piVar8 = (int *)*puVar11;
        func_0x014e9558();
        if (piVar8 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar2 = (**(code **)(*piVar8 + 0xe8))(piVar8,*(undefined4 *)(*piVar8 + 0xec));
        iVar4 = func_0x01438638(*(undefined4 *)(_UNK_02b0d240 + 0x2b0d0f8));
        iVar7 = *(int *)(iVar4 + 0x1c);
        if (iVar7 == 0) {
          func_0x014909d8(iVar4);
          iVar7 = *(int *)(iVar4 + 0x1c);
        }
        iVar7 = *(int *)(iVar7 + 8);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = func_0x0149097c();
        }
        if (*(int *)(iVar7 + 0x74) == 0) {
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
        func_0x026795f8(uVar2,uVar5,0);
        goto LAB_02b0cf5c;
      }
    }
    else {
      *(int *)(aiStack_28[0] + 0x20) = iStack_38;
    }
    *(undefined4 *)(aiStack_28[0] + 0x24) = uStack_34;
    func_0x02b0d454(iVar1,aiStack_28[0],iStack_38,uStack_34,uStack_30,uStack_2c);
  }
  if (iStack_38 != 2) {
    iVar4 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x0475561c(iVar4,uVar2,aiStack_28,**(undefined4 **)(_UNK_02b0d218 + 0x2b0ce2c));
    iVar4 = aiStack_28[0];
    if (iVar7 == 0) {
      iVar7 = *(int *)(iVar1 + 0x14);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x03b67d0c(iVar7,iVar4,**(undefined4 **)(_UNK_02b0d21c + 0x2b0ce60));
      if (iVar4 == 0) {
        if (iStack_38 == 0) {
          iVar4 = *(int *)(iVar1 + 0x14);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar4 + 0xc)) {
            iVar4 = *(int *)(iVar1 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = func_0x03b680f4(iVar4,**(undefined4 **)(_UNK_02b0d220 + 0x2b0d00c));
            if (*(int *)(**(int **)(_UNK_02b0d224 + 0x2b0d024) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar7 = func_0x024ef144(iVar4,0,0);
            if (iVar7 != 0) {
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              func_0x02b212e4(iVar4,1,0,0);
            }
          }
        }
        iVar4 = aiStack_28[0];
        iVar7 = *(int *)(iVar1 + 0x14);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        func_0x03b681a8(iVar7,iVar4,**(undefined4 **)(_UNK_02b0d228 + 0x2b0cf54));
      }
      else {
        iVar4 = *(int *)(iVar1 + 0x14);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar4 + 0xc)) {
          puVar11 = *(undefined4 **)(_UNK_02b0d238 + 0x2b0ce98);
          while( true ) {
            iVar4 = *(int *)(iVar1 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            piVar8 = (int *)func_0x03b680f4(iVar4,*puVar11);
            iVar4 = aiStack_28[0];
            if (piVar8 == (int *)0x0) {
              func_0x014388e4();
            }
            iVar4 = (**(code **)(*piVar8 + 0xc0))(piVar8,iVar4,*(undefined4 *)(*piVar8 + 0xc4));
            if (iVar4 != 0) break;
            iVar4 = *(int *)(iVar1 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = func_0x03b680f4(iVar4,*puVar11);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x02b212e4(iVar4,1,0,0);
          }
        }
      }
    }
  }
LAB_02b0cf5c:
  iVar4 = aiStack_28[0];
  if (aiStack_28[0] == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x014e94d8(iVar4,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar4,1,0);
  func_0x02b0d808(iVar1,aiStack_28[0]);
  iVar1 = aiStack_28[0];
  if (aiStack_28[0] == 0) {
    func_0x014388e4();
  }
  func_0x02b20ab0(iVar1,piVar3,0);
  return aiStack_28[0];
}

