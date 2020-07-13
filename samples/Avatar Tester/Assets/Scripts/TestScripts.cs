using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestScripts : ARCHIE.TestController
{

    [SerializeField] static string email = ARCHIE.Utils.Constants.FB_DEFAULT_EMAIL;
    [SerializeField] static string password = ARCHIE.Utils.Constants.FB_DEFAULT_PASSWORD;

    TestScripts() : base(email, password)
    {
        // empty
    }

    // Start is called before the first frame update
    void Start()
    {
        ARCHIE.Utils.ARCHIELogger.debug("AUT Script: Start");
    }

    // Update is called once per frame
    void Update()
    {
        ARCHIE.Utils.ARCHIELogger.debug("AUT Script: Update");
    }

}