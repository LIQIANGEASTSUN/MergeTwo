
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_02be7604(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(iRam02be7f18 + 0x2be7624);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be7f1c + 0x2be763c));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f20 + 0x2be7648));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f24 + 0x2be7654));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f28 + 0x2be7660));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f2c + 0x2be766c));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f30 + 0x2be7678));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f34 + 0x2be7684));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f38 + 0x2be7690));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f3c + 0x2be769c));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f40 + 0x2be76a8));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f44 + 0x2be76b4));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f48 + 0x2be76c0));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f4c + 0x2be76cc));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f50 + 0x2be76d8));
    func_0x01438628(*(undefined4 *)(_UNK_02be7f54 + 0x2be76e4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d2b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d2b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028faffc(iVar1,param_1,param_2,param_3,param_4,param_5,0);
    return uVar2;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02be7f58 + 0x2be7750));
  iVar10 = 0;
  func_0x02c38bbc(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 8) = param_1;
  func_0x014385cc((undefined4 *)(iVar1 + 8),param_1);
  *(undefined4 *)(iVar1 + 0x10) = param_5;
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  func_0x014385cc((undefined4 *)(iVar1 + 0x10),param_5);
  uStack_28 = 0;
  do {
    iVar3 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar3 + 0xc) <= iVar10) {
      iVar10 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar10 = *(int *)(iVar10 + 0x1c);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar10 = *(int *)(iVar10 + 0xc);
      puVar12 = *(undefined4 **)(_UNK_02be7f98 + 0x2be7bb8);
      while( true ) {
        iVar10 = iVar10 + -1;
        iVar3 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (iVar10 < 0) break;
        iVar3 = *(int *)(iVar3 + 0x1c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b780b0(iVar3,iVar10,**(undefined4 **)(_UNK_02be7f9c + 0x2be7bfc));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 8);
        if (0 < iVar3) {
          if (param_3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x024f0f34(param_3,iVar3,**(undefined4 **)(_UNK_02be7fa0 + 0x2be7c3c));
          if (iVar3 != 0) {
            iVar3 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar8 = *(int *)(iVar3 + 0x1c);
            iVar3 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x1c);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar2 = func_0x03b780b0(iVar3,iVar10,**(undefined4 **)(_UNK_02be7fa4 + 0x2be7ca8));
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            func_0x03b77900(iVar8,uVar2,*puVar12);
            uStack_28 = 1;
            if (param_4 != 0) {
              if (*(int *)(**(int **)(_UNK_02be7fa8 + 0x2be7cf0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02be7fac + 0x2be7d0c));
              piVar5 = *(int **)(_UNK_02be7fb0 + 0x2be7d20);
              iVar8 = *piVar5;
              if (*(int *)(iVar8 + 0x74) == 0) {
                func_0x014387a4();
                iVar8 = *piVar5;
              }
              iVar11 = **(int **)(_UNK_02be7fb4 + 0x2be7d40);
              iVar4 = *(int *)(iVar11 + 0x1c);
              uVar2 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x10);
              if (iVar4 == 0) {
                func_0x014909d8(iVar11);
                iVar4 = *(int *)(iVar11 + 0x1c);
              }
              iVar8 = *(int *)(iVar4 + 8);
              if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
                iVar8 = func_0x0149097c();
              }
              if (*(int *)(iVar8 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar8 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
              if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
                iVar8 = func_0x0149097c();
              }
              uVar9 = **(undefined4 **)(iVar8 + 0x5c);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              func_0x02990414(iVar3,uVar2,uVar9,0);
            }
          }
        }
      }
      iVar10 = *(int *)(iVar3 + 0x14);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      uVar6 = *(int *)(iVar10 + 0xc) - 1;
      if ((int)uVar6 < 0) {
        return uStack_28;
      }
      do {
        iVar10 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar10 = *(int *)(iVar10 + 0x14);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar10 = func_0x03b780b0(iVar10,uVar6,**(undefined4 **)(_UNK_02be7fb8 + 0x2be7e24));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar10 = *(int *)(iVar10 + 8);
        if (0 < iVar10) {
          if (param_3 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x024f0f34(param_3,iVar10,**(undefined4 **)(_UNK_02be7fbc + 0x2be7e64));
          if (iVar10 != 0) {
            iVar10 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar10 + 0x14);
            iVar10 = FUN_02bad050(param_1,*(undefined4 *)(iVar1 + 0xc));
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            iVar10 = *(int *)(iVar10 + 0x14);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            uVar2 = func_0x03b780b0(iVar10,uVar6,**(undefined4 **)(_UNK_02be7fc0 + 0x2be7ed0));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x03b77900(iVar3,uVar2,*puVar12);
            uStack_28 = 1;
          }
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 < 0x80000000);
      return uStack_28;
    }
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02be7f5c + 0x2be77e4));
    func_0x02c38bc4(iVar3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    piVar5 = (int *)(iVar3 + 0xc);
    *piVar5 = iVar1;
    func_0x014385cc(piVar5,iVar1);
    iVar8 = *piVar5;
    *(int *)(iVar3 + 8) = iVar10;
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = FUN_02bad050(param_1,*(undefined4 *)(iVar8 + 0xc));
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x03b780b0(iVar8,iVar10,**(undefined4 **)(_UNK_02be7f60 + 0x2be7864));
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(iVar8 + 8);
    if (0 < iVar8) {
      if (param_3 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x024f0f34(param_3,iVar8,**(undefined4 **)(_UNK_02be7f64 + 0x2be78a4));
      if (iVar8 != 0) {
        uVar2 = **(undefined4 **)(**(int **)(_UNK_02be7f68 + 0x2be78c0) + 0x5c);
        if (*(int *)(**(int **)(_UNK_02be7f6c + 0x2be78cc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = func_0x024ef144(uVar2,0,0);
        if (iVar8 == 0) {
LAB_02be7a40:
          uVar2 = *(undefined4 *)(iVar3 + 8);
          iVar8 = *(int *)(iVar3 + 0xc);
          iVar3 = iVar8;
          if (iVar8 == 0) {
            func_0x014388e4();
            iVar3 = *piVar5;
            if (iVar3 == 0) {
              func_0x014388e4();
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          FUN_02bda8ac(param_1,uVar2,*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar3 + 0x10),1);
        }
        else {
          iVar8 = **(int **)(**(int **)(_UNK_02be7f70 + 0x2be7908) + 0x5c);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x02c3d868(iVar8,0);
          if (*(int *)(**(int **)(_UNK_02be7f74 + 0x2be7938) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar8 = func_0x024ef144(uVar2,0,0);
          if (iVar8 == 0) goto LAB_02be7a40;
          iVar8 = **(int **)(**(int **)(_UNK_02be7f78 + 0x2be796c) + 0x5c);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x02c3d868(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x02beba7c(iVar8,iVar10,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar8 + 0xc);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          func_0x02c1cd2c(iVar8,0);
          uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02be7f7c + 0x2be79e4));
          func_0x033341c0(uVar2,iVar3,**(undefined4 **)(_UNK_02be7f80 + 0x2be7a00),0);
          if (*(int *)(**(int **)(_UNK_02be7f84 + 0x2be7a14) + 0x74) == 0) {
            func_0x014387a4();
          }
          func_0x02af1b10(0x3e99999a,uVar2,1,0);
        }
        uStack_28 = 1;
        if (param_4 != 0) {
          if (*(int *)(**(int **)(_UNK_02be7f88 + 0x2be7a9c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02be7f8c + 0x2be7ab8));
          piVar5 = *(int **)(_UNK_02be7f90 + 0x2be7acc);
          iVar8 = *piVar5;
          if (*(int *)(iVar8 + 0x74) == 0) {
            func_0x014387a4();
            iVar8 = *piVar5;
          }
          iVar11 = **(int **)(_UNK_02be7f94 + 0x2be7aec);
          iVar4 = *(int *)(iVar11 + 0x1c);
          uVar2 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x10);
          if (iVar4 == 0) {
            func_0x014909d8(iVar11);
            iVar4 = *(int *)(iVar11 + 0x1c);
          }
          iVar8 = *(int *)(iVar4 + 8);
          if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
            iVar8 = func_0x0149097c();
          }
          if (*(int *)(iVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar8 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
          if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
            iVar8 = func_0x0149097c();
          }
          uVar9 = **(undefined4 **)(iVar8 + 0x5c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x02990414(iVar3,uVar2,uVar9,0);
        }
      }
    }
    iVar10 = iVar10 + 1;
  } while( true );
}

