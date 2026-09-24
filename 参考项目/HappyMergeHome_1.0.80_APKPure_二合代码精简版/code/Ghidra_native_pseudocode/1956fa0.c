
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01966fa0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_019677d8 + 0x1966fbc);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019677dc + 0x1966fd0));
    func_0x01438628(*(undefined4 *)(_UNK_019677e0 + 0x1966fdc));
    func_0x01438628(*(undefined4 *)(_UNK_019677e4 + 0x1966fe8));
    func_0x01438628(*(undefined4 *)(_UNK_019677e8 + 0x1966ff4));
    func_0x01438628(*(undefined4 *)(_UNK_019677ec + 0x1967000));
    func_0x01438628(*(undefined4 *)(_UNK_019677f0 + 0x196700c));
    func_0x01438628(*(undefined4 *)(_UNK_019677f4 + 0x1967018));
    func_0x01438628(*(undefined4 *)(_UNK_019677f8 + 0x1967024));
    func_0x01438628(*(undefined4 *)(_UNK_019677fc + 0x1967030));
    func_0x01438628(*(undefined4 *)(_UNK_01967800 + 0x196703c));
    func_0x01438628(*(undefined4 *)(_UNK_01967804 + 0x1967048));
    func_0x01438628(*(undefined4 *)(_UNK_01967808 + 0x1967054));
    func_0x01438628(*(undefined4 *)(_UNK_0196780c + 0x1967060));
    func_0x01438628(*(undefined4 *)(_UNK_01967810 + 0x196706c));
    func_0x01438628(*(undefined4 *)(_UNK_01967814 + 0x1967078));
    func_0x01438628(*(undefined4 *)(_UNK_01967818 + 0x1967084));
    func_0x01438628(*(undefined4 *)(_UNK_0196781c + 0x1967090));
    func_0x01438628(*(undefined4 *)(_UNK_01967820 + 0x196709c));
    func_0x01438628(*(undefined4 *)(_UNK_01967824 + 0x19670a8));
    func_0x01438628(*(undefined4 *)(_UNK_01967828 + 0x19670b4));
    func_0x01438628(*(undefined4 *)(_UNK_0196782c + 0x19670c0));
    func_0x01438628(*(undefined4 *)(_UNK_01967830 + 0x19670cc));
    func_0x01438628(*(undefined4 *)(_UNK_01967834 + 0x19670d8));
    func_0x01438628(*(undefined4 *)(_UNK_01967838 + 0x19670e4));
    func_0x01438628(*(undefined4 *)(_UNK_0196783c + 0x19670f0));
    func_0x01438628(*(undefined4 *)(_UNK_01967840 + 0x19670fc));
    func_0x01438628(*(undefined4 *)(_UNK_01967844 + 0x1967108));
    func_0x01438628(*(undefined4 *)(_UNK_01967848 + 0x1967114));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x992a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0196784c + 0x196717c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01967850 + 0x1967198));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01967854 + 0x19671b8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x39c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01967858 + 0x19671ec));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0196785c + 0x1967204));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_01967860 + 0x196721c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uVar9) {
      puVar12 = *(undefined4 **)(_UNK_01967864 + 0x1967248);
      do {
        if (*(int *)(**(int **)(_UNK_01967868 + 0x1967254) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0196786c + 0x1967270));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_01967870 + 0x1967290));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x39c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uVar9,**(undefined4 **)(_UNK_01967874 + 0x19672c8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_01967878 + 0x19672f4));
        if (*(int *)(**(int **)(_UNK_0196787c + 0x196730c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_019653ec(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01967880 + 0x196737c));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_01967884 + 0x19673b8));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_01967890 + 0x196742c) + 0x5c);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01967894 + 0x196743c));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01967898 + 0x1967490));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_0196789c + 0x19674a4));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_019678a0 + 0x19674c8));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_019678a4 + 0x19674f4));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar12), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_019678a8 + 0x1967528) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_019678ac + 0x1967548));
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = func_0x029a6fa8(iVar7,uVar2,0);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar7 + 0x1c) - 3U < 3) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_019678b0 + 0x19675a4)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar10 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_019678b4 + 0x19675e4);
                      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                      iVar11 = *piVar6;
                      if (iVar7 == 0) {
                        func_0x014388e4();
                      }
                      if (uVar10 < *(uint *)(iVar7 + 0xc)) {
                        *(uint *)(iVar5 + 0xc) = uVar10 + 1;
                        *(undefined4 *)(iVar7 + uVar10 * 4 + 0x10) = uVar2;
                      }
                      else {
                        func_0x024f0520(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_019678b8 + 0x1967638));
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (0 < *(int *)(iVar5 + 0xc)) {
                  iVar7 = 0;
                  while( true ) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar5 + 0xc) <= iVar7) break;
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = *(int *)(iVar3 + 0x14);
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_019678c4 + 0x1967690)
                                           );
                    if (iVar11 == 0) {
                      func_0x014388e4();
                    }
                    iVar11 = func_0x024f0540(iVar11,uVar2,
                                             **(undefined4 **)(_UNK_019678c8 + 0x19676bc));
                    if (iVar11 != 0) {
                      iVar11 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_019678cc + 0x19676dc));
                      if (iVar11 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar11,uVar2,**(undefined4 **)(_UNK_019678d0 + 0x1967708));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01967888 + 0x19673d8));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_0196788c + 0x1967414));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x992a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

