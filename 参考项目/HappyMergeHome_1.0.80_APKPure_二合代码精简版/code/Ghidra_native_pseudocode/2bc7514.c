
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd7514(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  pcVar5 = (char *)(_UNK_02bd7aac + 0x2bd7534);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd7ab0 + 0x2bd754c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7ab4 + 0x2bd7558));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7ab8 + 0x2bd7564));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7abc + 0x2bd7570));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7ac0 + 0x2bd757c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd7ac4 + 0x2bd7588));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd69,0);
  if (iVar1 == 0) {
    if ((-1 < param_2) && (param_3 != 0)) {
      iVar1 = FUN_02bad050(param_1,param_4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if ((param_2 < *(int *)(iVar1 + 0xc)) && (iVar1 = FUN_02bad050(param_1,param_4), iVar1 != 0))
      {
        iVar1 = FUN_02bad050(param_1,param_4);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        puVar7 = *(undefined4 **)(_UNK_02bd7ac8 + 0x2bd7684);
        iVar1 = func_0x03b780b0(iVar1,param_2,*puVar7);
        if (iVar1 != 0) {
          iVar1 = FUN_02bad050(param_1,param_4);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x03b780b0(iVar1,param_2,*puVar7);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          piVar6 = *(int **)(_UNK_02bd7acc + 0x2bd76e8);
          iVar1 = *(int *)(iVar1 + 0x18);
          if (*(int *)(*piVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd7ad0 + 0x2bd7708));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x02c4baac(iVar2,param_3,0);
          if ((iVar2 != 0) && (*(char *)(param_3 + 0x59) == '\0')) {
            iVar1 = FUN_02bad050(param_1,param_4);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x03b780b0(iVar1,param_2,*puVar7);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x48);
          }
          iVar2 = FUN_02bad050(param_1,param_4);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (param_2 < *(int *)(iVar2 + 0xc)) {
            if (*(int *)(*piVar6 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd7ad4 + 0x2bd77e8));
            iVar3 = FUN_02bad050(param_1,param_4);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar4 = func_0x03b780b0(iVar3,param_2,*puVar7);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x02c4ae48(iVar2,param_3,uVar4,1,0);
            puVar7 = *(undefined4 **)(_UNK_02bd7ad8 + 0x2bd786c);
            if (iVar2 == 0) {
              if (*(int *)(**(int **)(_UNK_02bd7adc + 0x2bd7874) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd7ae0 + 0x2bd7894));
              iVar3 = FUN_02bad050(param_1,param_4);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x10);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar4 = func_0x03b780b0(iVar3,param_2,*puVar7);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar2 = func_0x02c4b048(iVar2,param_3,uVar4,0);
              if (iVar2 == 0) {
                if (*(int *)(**(int **)(_UNK_02bd7ae4 + 0x2bd7910) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bd7ae8 + 0x2bd792c));
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                uVar8 = func_0x026ffbe0(iVar2,0);
                iVar2 = FUN_02bad050(param_1,param_4);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                iVar2 = *(int *)(iVar2 + 0x10);
                if (iVar2 == 0) {
                  func_0x014388e4();
                }
                iVar3 = func_0x014e6e04((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
                puVar7 = *(undefined4 **)(_UNK_02bd7aec + 0x2bd79a0);
                uVar4 = func_0x03b780b0(iVar2,param_2,*puVar7);
                iVar2 = func_0x02bd84dc(param_1,param_3,uVar4);
                if (iVar2 < (iVar3 - iVar1) + 1) {
                  iVar1 = FUN_02bad050(param_1,param_4);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = *(int *)(iVar1 + 0x10);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar1 = func_0x03b780b0(iVar1,param_2,*puVar7);
                  if (iVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar1 + 0x28);
                  iVar1 = func_0x02bd7af0(param_1,param_3);
                  if (iVar1 <= iVar2) {
                    iVar1 = FUN_02bad050(param_1,param_4);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = *(int *)(iVar1 + 0x10);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar1 = func_0x03b780b0(iVar1,param_2,*puVar7);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    FUN_026f6f10(iVar1,0,0);
                    func_0x02bd8f60(param_1,*(undefined4 *)(param_3 + 8),param_2,param_3,param_4);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xd69,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028931e8(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}

